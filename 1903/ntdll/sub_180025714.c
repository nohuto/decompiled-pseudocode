/*
 * XREFs of sub_180025714 @ 0x180025714
 * Callers:
 *     sub_1800253F0 @ 0x1800253F0 (sub_1800253F0.c)
 *     sub_180068E90 @ 0x180068E90 (sub_180068E90.c)
 *     sub_180081070 @ 0x180081070 (sub_180081070.c)
 *     sub_1800D0FDC @ 0x1800D0FDC (sub_1800D0FDC.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     sub_180025788 @ 0x180025788 (sub_180025788.c)
 *     RtlGetNtSystemRoot @ 0x180029260 (RtlGetNtSystemRoot.c)
 */

__int64 __fastcall sub_180025714(_WORD *a1, __int64 a2)
{
  unsigned int v2; // ebx
  const WCHAR *NtSystemRoot; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  *a1 = 0;
  NtSystemRoot = RtlGetNtSystemRoot();
  RtlInitUnicodeString(&DestinationString, NtSystemRoot);
  sub_180025788(a1, &DestinationString, v6, v7);
  sub_180025788(a1, &stru_180118240, v8, v9);
  if ( a2 )
    return (unsigned int)sub_180025788(a1, a2, v10, v11);
  return v2;
}
