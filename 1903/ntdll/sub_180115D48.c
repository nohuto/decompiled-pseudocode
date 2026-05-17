/*
 * XREFs of sub_180115D48 @ 0x180115D48
 * Callers:
 *     sub_180009204 @ 0x180009204 (sub_180009204.c)
 * Callees:
 *     RtlConvertSidToUnicodeString @ 0x180014670 (RtlConvertSidToUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x180015120 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x180026140 (RtlAppendUnicodeStringToString.c)
 *     RtlFreeUnicodeString @ 0x180029BA0 (RtlFreeUnicodeString.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     ZwQueryInformationToken @ 0x18009CB00 (ZwQueryInformationToken.c)
 *     sub_180115F88 @ 0x180115F88 (sub_180115F88.c)
 */

__int64 __fastcall sub_180115D48(unsigned int a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // rdi
  int v8; // r14d
  __int64 *Heap; // rsi
  int InformationToken; // ebx
  unsigned __int8 v11; // al
  __int16 v12; // bx
  __int64 v13; // rdi
  _QWORD v15[2]; // [rsp+40h] [rbp-21h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-11h] BYREF
  int v17; // [rsp+60h] [rbp-1h]
  __int64 v18; // [rsp+68h] [rbp+7h]
  _QWORD *v19; // [rsp+70h] [rbp+Fh]
  int v20; // [rsp+78h] [rbp+17h]
  __int128 v21; // [rsp+80h] [rbp+1Fh]

  v5 = 0LL;
  v8 = 0;
  Heap = (__int64 *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 84LL);
  if ( Heap )
  {
    InformationToken = ZwQueryInformationToken();
    if ( InformationToken < 0 )
      goto LABEL_25;
    v5 = *Heap;
  }
  else
  {
    InformationToken = -1073741801;
  }
  if ( InformationToken >= 0 )
  {
    v11 = *(_BYTE *)(v5 + 1);
    if ( v11 < 2u || v11 == 5 && *(_DWORD *)(v5 + 8) == 21 && *(_DWORD *)(v5 + 24) == 503 )
    {
      *a4 = 0;
      InformationToken = -1073741514;
      v8 = 1;
    }
    if ( InformationToken >= 0 )
    {
      InformationToken = RtlConvertSidToUnicodeString(&UnicodeString, (PSID)v5, 1u);
      if ( InformationToken >= 0 )
      {
        v12 = UnicodeString.Length + 62;
        v13 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, (unsigned __int16)(UnicodeString.Length + 62));
        if ( v13 )
        {
          v15[1] = v13;
          v15[0] = 0LL;
          WORD1(v15[0]) = v12;
          InformationToken = RtlAppendUnicodeToString((unsigned __int16 *)v15, L"\\Registry\\User\\");
          if ( InformationToken >= 0 )
          {
            InformationToken = RtlAppendUnicodeStringToString((unsigned __int16 *)v15, (__int16 *)&UnicodeString);
            if ( InformationToken >= 0 )
            {
              InformationToken = RtlAppendUnicodeToString((unsigned __int16 *)v15, L"\\International");
              if ( InformationToken >= 0 )
              {
                v18 = 0LL;
                v19 = v15;
                v17 = 48;
                v20 = 576;
                v21 = 0LL;
                if ( (int)ZwOpenKey() < 0 )
                {
                  v8 = 1;
                  *a4 = 1;
                }
                else
                {
                  ZwClose();
                  *a4 = 2;
                  InformationToken = ZwOpenKey();
                }
              }
            }
          }
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v13);
        }
        else
        {
          InformationToken = -1073741801;
        }
        RtlFreeUnicodeString(&UnicodeString);
      }
    }
    if ( v8 )
      InformationToken = sub_180115F88(a1, a3);
  }
LABEL_25:
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
  return (unsigned int)InformationToken;
}
