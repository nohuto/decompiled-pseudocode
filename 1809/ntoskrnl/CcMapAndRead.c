/*
 * XREFs of CcMapAndRead @ 0x1400B0040
 * Callers:
 *     CcPinFileData @ 0x1400AE210 (CcPinFileData.c)
 *     CcPrepareMdlWrite @ 0x1400E1AC0 (CcPrepareMdlWrite.c)
 *     CcMapData @ 0x140639A30 (CcMapData.c)
 * Callees:
 *     MmCheckCachedPageStates @ 0x1400B01F0 (MmCheckCachedPageStates.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 */

__int64 __fastcall CcMapAndRead(unsigned int a1, int a2, char a3, __int64 a4)
{
  unsigned __int8 v4; // bp
  int v5; // r11d
  struct _KTHREAD *CurrentThread; // rsi
  int v8; // edx
  NTSTATUS v9; // r10d
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rbx
  unsigned int v12; // edi
  unsigned int v13; // r8d
  int v14; // r15d
  int v16; // eax
  int v18; // [rsp+78h] [rbp+20h]

  v4 = 0;
  v5 = 1;
  CurrentThread = KeGetCurrentThread();
  v8 = 2;
  v9 = 0;
  if ( a3 )
    v8 = 0;
  v18 = v8;
  v10 = a4 & 0xFFFFFFFFFFFFF000uLL;
  v11 = ((a4 & 0xFFF) + (unsigned __int64)a1 + 4095) >> 12;
  v12 = BYTE4(CurrentThread[1].Queue) + 4 * LODWORD(CurrentThread[1].WaitListEntry.Flink);
  if ( (_DWORD)v11 )
  {
    while ( 1 )
    {
      BYTE4(CurrentThread[1].Queue) = 1;
      if ( (unsigned int)(v11 - 1) > LODWORD(CurrentThread[1].WaitListEntry.Flink) )
      {
        v16 = v11 - 1;
        if ( (unsigned int)(v11 - 1) > 0xF )
          v16 = 15;
        LODWORD(CurrentThread[1].WaitListEntry.Flink) = v16;
      }
      v13 = 0;
      if ( a2 )
      {
        v14 = 1;
        if ( v5 == 2 )
          v14 = v11 - 1;
      }
      else
      {
        v14 = v11;
      }
      LOBYTE(v13) = (v5 & a2) != 0;
      v9 = MmCheckCachedPageStates(v10, (unsigned int)(v14 << 12), v8 | v13);
      if ( v9 < 0 )
        break;
      v8 = v18;
      v10 += (unsigned int)(v14 << 12);
      LODWORD(v11) = v11 - v14;
      v5 = 4;
      if ( (_DWORD)v11 != 1 )
        v5 = 2;
      if ( !(_DWORD)v11 )
        goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    v4 = 1;
  }
  LODWORD(CurrentThread[1].WaitListEntry.Flink) = v12 >> 2;
  BYTE4(CurrentThread[1].Queue) = v12 & 3;
  if ( a3 && v9 < 0 )
    RtlRaiseStatus(v9);
  return v4;
}
