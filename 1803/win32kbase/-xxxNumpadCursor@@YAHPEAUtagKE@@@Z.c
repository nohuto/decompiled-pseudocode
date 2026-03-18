/*
 * XREFs of ?xxxNumpadCursor@@YAHPEAUtagKE@@@Z @ 0x1C0065420
 * Callers:
 *     <none>
 * Callees:
 *     xxxKeyEvent @ 0x1C0055EB0 (xxxKeyEvent.c)
 *     ApiSetEditionIsSAS @ 0x1C00734D8 (ApiSetEditionIsSAS.c)
 */

__int64 __fastcall xxxNumpadCursor(struct tagKE *a1)
{
  unsigned __int16 *v2; // rdi
  __int64 v3; // rcx
  CAsyncKeyEventMonitor *v5; // rcx
  CAsyncKeyEventMonitor *v6; // rcx
  int v7; // r8d
  __int16 v8; // r9
  char v9; // cl
  int v10; // edx
  __int64 v11; // r8
  char v12; // [rsp+68h] [rbp+10h] BYREF

  if ( byte_1C01A2A04 )
  {
    if ( byte_1C01A2A04 == *((_BYTE *)a1 + 2) )
    {
      v6 = (CAsyncKeyEventMonitor *)*((unsigned __int16 *)a1 + 1);
      if ( (__int16)v6 < 0 )
      {
        xxxKeyEvent(
          v6,
          *(unsigned __int8 *)a1,
          *((_DWORD *)a1 + 1),
          0LL,
          *((_QWORD *)a1 + 1),
          (unsigned __int16 *)a1 + 8,
          0,
          0,
          0LL);
        *((_WORD *)a1 + 1) = word_1C01AA544;
        *(_BYTE *)a1 = byte_1C01AA546;
        byte_1C01A2A04 = 0;
      }
      return 1LL;
    }
    v2 = (unsigned __int16 *)((char *)a1 + 16);
    xxxKeyEvent(
      (CAsyncKeyEventMonitor *)(unsigned __int16)word_1C01AA544,
      (unsigned __int8)byte_1C01AA546 | 0x200,
      *((_DWORD *)a1 + 1),
      0LL,
      *((_QWORD *)a1 + 1),
      (unsigned __int16 *)a1 + 8,
      0,
      0,
      0LL);
    byte_1C01A2A04 = 0;
  }
  else
  {
    v2 = (unsigned __int16 *)((char *)a1 + 16);
  }
  v3 = 2048LL;
  if ( (*((_WORD *)a1 + 1) & 0x800) != 0 )
  {
    LOBYTE(v3) = *((_WORD *)a1 + 1);
    if ( !(unsigned int)ApiSetEditionIsSAS(v3, &v12)
      && ((byte_1C01A09E4 & 2) != 0 || gptiForeground && (*((_DWORD *)gptiForeground + 300) & 0x800000) != 0) )
    {
      if ( (byte_1C01A09C4 & 1) != 0 )
      {
        v7 = *((_DWORD *)a1 + 1);
        byte_1C01A2A04 = *((_BYTE *)a1 + 2);
        byte_1C01AA546 = (byte_1C01A09E8 & 4) != 0 ? 54 : 42;
        word_1C01AA544 = (byte_1C01A09E8 & 4) != 0 ? 417 : 160;
        LOWORD(v5) = word_1C01AA544 | 0x8000;
        xxxKeyEvent(v5, (unsigned __int8)byte_1C01AA546 | 0x200, v7, 0LL, *((_QWORD *)a1 + 1), v2, 0, 0, 0LL);
      }
      else
      {
        v8 = *((_WORD *)a1 + 1);
        if ( (v8 & 0x2000) == 0 )
        {
          v9 = ausNumPadCvt[0];
          v10 = 0;
          if ( ausNumPadCvt[0] )
          {
            v11 = 0LL;
            while ( v9 != (_BYTE)v8 )
            {
              ++v11;
              ++v10;
              v9 = ausNumPadCvt[v11];
              if ( !ausNumPadCvt[v11] )
                return 1LL;
            }
            *((_BYTE *)a1 + 2) = 0;
            *((_WORD *)a1 + 1) |= HIBYTE(ausNumPadCvt[v10]);
          }
        }
      }
    }
  }
  return 1LL;
}
