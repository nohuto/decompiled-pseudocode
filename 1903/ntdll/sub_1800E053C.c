/*
 * XREFs of sub_1800E053C @ 0x1800E053C
 * Callers:
 *     sub_1800173F0 @ 0x1800173F0 (sub_1800173F0.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x180015120 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_180082DD0 @ 0x180082DD0 (sub_180082DD0.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     _ltow_s @ 0x180096B50 (_ltow_s.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800E0820 @ 0x1800E0820 (sub_1800E0820.c)
 */

__int64 __fastcall sub_1800E053C(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // rax
  int v8; // r14d
  __int64 v9; // rdi
  unsigned int v10; // esi
  wchar_t *v11; // rax
  __int64 v12; // rcx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B0h]
  _QWORD v16[5]; // [rsp+58h] [rbp-A8h]
  wchar_t Buffer[64]; // [rsp+80h] [rbp-80h] BYREF
  WCHAR SourceString[264]; // [rsp+100h] [rbp+0h] BYREF

  v4 = a1;
  v15 = a1;
  v16[0] = L"Type:";
  v16[1] = L" Name:";
  v16[2] = L" Language:";
  v16[3] = L" Item:";
  v8 = 0;
  v9 = 2147353476LL;
  if ( (a4 & 0xE) != 0 )
  {
    *(_DWORD *)&DestinationString.Length = 34078720;
    DestinationString.Buffer = SourceString;
    v10 = 0;
    RtlAppendUnicodeToString(&DestinationString.Length, L"SR - ");
    do
    {
      RtlAppendUnicodeToString(&DestinationString.Length, (_WORD *)v16[v10]);
      v11 = *(wchar_t **)(a2 + 8LL * v10);
      if ( (unsigned __int64)v11 < 0x10000 || v10 == 3 )
      {
        ltow_s((int)v11, Buffer, 0x40uLL, 10);
        v11 = Buffer;
      }
      RtlAppendUnicodeToString(&DestinationString.Length, v11);
      ++v10;
    }
    while ( v10 < a3 );
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v12 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
    else
      v12 = 2147353476LL;
    sub_1800E0820(&DestinationString, *(unsigned __int8 *)v12);
    memset(SourceString, 0, DestinationString.Length);
    v4 = v15;
  }
  if ( (a4 & 1) != 0 )
  {
    v8 = sub_180082DD0(v4, SourceString, 0x208u, 0LL, 0LL, 0LL, 0LL);
    if ( v8 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v9 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
      sub_1800E0820(&DestinationString, *(unsigned __int8 *)v9);
    }
  }
  return (unsigned int)v8;
}
