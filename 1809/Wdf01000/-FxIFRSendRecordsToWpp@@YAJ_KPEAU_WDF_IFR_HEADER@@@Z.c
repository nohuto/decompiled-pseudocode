/*
 * XREFs of ?FxIFRSendRecordsToWpp@@YAJ_KPEAU_WDF_IFR_HEADER@@@Z @ 0x1C003F11C
 * Callers:
 *     ?FxIFRReplay@@YAX_K@Z @ 0x1C003EE34 (-FxIFRReplay@@YAX_K@Z.c)
 * Callees:
 *     memset @ 0x1C001C1C0 (memset.c)
 *     FxWmiTraceMessage @ 0x1C003BC00 (FxWmiTraceMessage.c)
 *     ?FxIFRValidateRecord@@YAJPEAU_WDF_IFR_RECORD@@_K1@Z @ 0x1C003F41C (-FxIFRValidateRecord@@YAJPEAU_WDF_IFR_RECORD@@_K1@Z.c)
 */

__int64 __fastcall FxIFRSendRecordsToWpp(unsigned __int64 LoggerHandle, _WDF_IFR_HEADER *HeaderCopy)
{
  unsigned __int64 Size; // kr00_8
  unsigned __int8 *Base; // rbp
  unsigned __int8 *v5; // rax
  unsigned __int64 v6; // rsi
  signed int v7; // ebx
  unsigned __int64 v8; // rdx
  __int64 Previous; // r15
  __int64 v10; // r14
  unsigned int v11; // r10d
  int v12; // r11d
  SIZE_T v13; // r12
  __int64 v14; // rdi
  char v15; // r13
  _WORD *PoolWithTag; // rax
  unsigned __int64 v17; // r10
  unsigned int v18; // r11d
  unsigned __int8 *v19; // rdx
  unsigned __int16 v20; // ax
  _WORD *P; // [rsp+40h] [rbp-58h]
  char v24; // [rsp+A8h] [rbp+10h]
  unsigned __int16 Current; // [rsp+B0h] [rbp+18h]
  unsigned __int64 IfrHeaderMaxValidPtr; // [rsp+B8h] [rbp+20h]

  v24 = 0;
  Size = HeaderCopy->Size;
  Base = HeaderCopy->Base;
  v5 = &Base[(unsigned int)(Size - 1)];
  v6 = -1LL;
  if ( v5 >= Base )
    v6 = (unsigned __int64)&Base[(unsigned int)(Size - 1)];
  v7 = v5 < Base ? 0xC0000095 : 0;
  if ( v5 >= Base )
  {
    v8 = v6 - 28;
    if ( v6 < 0x1C )
      v8 = -1LL;
    IfrHeaderMaxValidPtr = v8;
    v7 = v6 < 0x1C ? 0xC0000095 : 0;
    if ( v6 >= 0x1C )
    {
      Previous = HeaderCopy->Offset.u.s.Previous;
      v10 = -1LL;
      Current = HeaderCopy->Offset.u.s.Current;
      if ( &Base[Previous] >= Base )
        v10 = (__int64)&Base[Previous];
      v7 = &Base[Previous] < Base ? 0xC0000095 : 0;
      if ( &Base[Previous] >= Base )
      {
        v7 = FxIFRValidateRecord((_WDF_IFR_RECORD *)v10, v8, v6);
        if ( v7 >= 0 && *(_WORD *)v10 != (_WORD)v12 )
        {
          v13 = 2LL * v11;
          LODWORD(v14) = v12;
          v15 = v12;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, v13, 0x674C7846u);
          P = PoolWithTag;
          if ( PoolWithTag )
          {
            memset(PoolWithTag, 0, v13);
            if ( (unsigned int)(Size / 0x48) )
            {
              v17 = IfrHeaderMaxValidPtr;
              do
              {
                v7 = FxIFRValidateRecord((_WDF_IFR_RECORD *)v10, v17, v6);
                if ( v7 < 0 || *(_WORD *)v10 != 21068 )
                  break;
                P[(unsigned int)v14] = Previous;
                Previous = *(unsigned __int16 *)(v10 + 8);
                LODWORD(v14) = v14 + 1;
                if ( (unsigned __int8 *)v10 == Base )
                  v15 = 1;
                v10 = -1LL;
                if ( &Base[Previous] >= Base )
                  v10 = (__int64)&Base[Previous];
                v7 = &Base[Previous] < Base ? 0xC0000095 : 0;
                if ( &Base[Previous] < Base || v15 && !(_WORD)Previous )
                  break;
                if ( v24 && (unsigned __int16)Previous <= Current )
                  break;
                if ( v15 && (_WORD)Previous )
                {
                  v24 = 1;
                  v15 = 0;
                }
              }
              while ( (unsigned int)v14 < v18 );
              while ( (_DWORD)v14 )
              {
                v14 = (unsigned int)(v14 - 1);
                v19 = &Base[(unsigned __int16)P[v14]];
                v20 = *((_WORD *)v19 + 1);
                if ( v20 <= 0x1Cu )
                {
                  if ( v20 != 28 )
                    break;
                  FxWmiTraceMessage(LoggerHandle, 43LL, (_GUID *)(v19 + 12), *((_WORD *)v19 + 5), 0LL);
                }
                else
                {
                  FxWmiTraceMessage(
                    LoggerHandle,
                    43LL,
                    (_GUID *)(v19 + 12),
                    *((_WORD *)v19 + 5),
                    v19 + 28,
                    v20 - 28LL,
                    0LL);
                }
              }
            }
            ExFreePoolWithTag(P, 0x674C7846u);
          }
          else
          {
            return (unsigned int)-1073741670;
          }
        }
      }
    }
  }
  return (unsigned int)v7;
}
