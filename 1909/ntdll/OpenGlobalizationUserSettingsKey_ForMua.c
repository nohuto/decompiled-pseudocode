/*
 * XREFs of OpenGlobalizationUserSettingsKey_ForMua @ 0x180115E78
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x180009204 (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     RtlConvertSidToUnicodeString @ 0x180014670 (RtlConvertSidToUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x180015120 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x180026140 (RtlAppendUnicodeStringToString.c)
 *     RtlFreeAnsiString @ 0x180029BA0 (RtlFreeAnsiString.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtOpenKey @ 0x18009D0D0 (NtOpenKey.c)
 *     NtQueryInformationToken @ 0x18009D2B0 (NtQueryInformationToken.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1801160B8 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey_ForMua(unsigned int a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // rdi
  int v8; // r14d
  __int64 *Heap; // rsi
  int InformationToken; // ebx
  unsigned __int8 v11; // al
  __int16 v12; // bx
  __int64 v13; // rdi
  HANDLE Handle; // [rsp+38h] [rbp-29h]
  _QWORD v16[2]; // [rsp+40h] [rbp-21h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-11h] BYREF
  int v18; // [rsp+60h] [rbp-1h]
  __int64 v19; // [rsp+68h] [rbp+7h]
  _QWORD *v20; // [rsp+70h] [rbp+Fh]
  int v21; // [rsp+78h] [rbp+17h]
  __int128 v22; // [rsp+80h] [rbp+1Fh]

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
          v16[1] = v13;
          v16[0] = 0LL;
          WORD1(v16[0]) = v12;
          InformationToken = RtlAppendUnicodeToString((unsigned __int16 *)v16, L"\\Registry\\User\\");
          if ( InformationToken >= 0 )
          {
            InformationToken = RtlAppendUnicodeStringToString((unsigned __int16 *)v16, (__int16 *)&UnicodeString);
            if ( InformationToken >= 0 )
            {
              InformationToken = RtlAppendUnicodeToString((unsigned __int16 *)v16, L"\\International");
              if ( InformationToken >= 0 )
              {
                v19 = 0LL;
                v20 = v16;
                v18 = 48;
                v21 = 576;
                v22 = 0LL;
                if ( (int)ZwOpenKey() < 0 )
                {
                  v8 = 1;
                  *a4 = 1;
                }
                else
                {
                  ZwClose(Handle);
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
        RtlFreeAnsiString(&UnicodeString);
      }
    }
    if ( v8 )
      InformationToken = OpenGlobalizationUserSettingsKey_ForSingleUserModel(a1, a3);
  }
LABEL_25:
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
  return (unsigned int)InformationToken;
}
