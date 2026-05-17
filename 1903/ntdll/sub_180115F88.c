/*
 * XREFs of sub_180115F88 @ 0x180115F88
 * Callers:
 *     sub_180009204 @ 0x180009204 (sub_180009204.c)
 *     sub_180115D48 @ 0x180115D48 (sub_180115D48.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1800150A0 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009C9C0 (ZwQueryValueKey.c)
 */

__int64 __fastcall sub_180115F88(__int64 a1, _QWORD *a2)
{
  int v3; // ebx
  _QWORD v5[2]; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING v6; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v7; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  int v9; // [rsp+98h] [rbp-68h]
  __int64 v10; // [rsp+A0h] [rbp-60h]
  UNICODE_STRING *p_DestinationString; // [rsp+A8h] [rbp-58h]
  int v12; // [rsp+B0h] [rbp-50h]
  __int128 v13; // [rsp+B8h] [rbp-48h]
  int v14; // [rsp+C8h] [rbp-38h]
  __int64 v15; // [rsp+D0h] [rbp-30h]
  UNICODE_STRING *v16; // [rsp+D8h] [rbp-28h]
  int v17; // [rsp+E0h] [rbp-20h]
  __int128 v18; // [rsp+E8h] [rbp-18h]

  if ( dword_18016A32C )
  {
    RtlInitUnicodeString(&DestinationString, &word_180166890);
    v10 = 0LL;
    p_DestinationString = &DestinationString;
    v9 = 48;
    v12 = 576;
    v13 = 0LL;
    return (unsigned int)ZwOpenKey();
  }
  else
  {
    RtlInitUnicodeString(&v6, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CommonGlobUserSettings\\");
    v15 = 0LL;
    v16 = &v6;
    v14 = 48;
    v17 = 576;
    v18 = 0LL;
    v3 = ZwOpenKey();
    if ( v3 >= 0 )
    {
      RtlInitUnicodeString(&v7, L"RedirectedKey");
      ZwQueryValueKey();
      v5[0] = 11141120LL;
      v5[1] = &word_180166890;
      if ( v6.Length <= 0xAAu )
      {
        RtlCopyUnicodeString((unsigned __int16 *)v5, &v6.Length);
        dword_18016A32C = 1;
      }
      v3 = 0;
      *a2 = 0LL;
    }
  }
  return (unsigned int)v3;
}
