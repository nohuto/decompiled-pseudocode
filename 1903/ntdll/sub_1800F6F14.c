/*
 * XREFs of sub_1800F6F14 @ 0x1800F6F14
 * Callers:
 *     RtlLcidToLocaleName @ 0x180016AF0 (RtlLcidToLocaleName.c)
 *     sub_1800F71AC @ 0x1800F71AC (sub_1800F71AC.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x18009C9C0 (ZwQueryValueKey.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     sub_1800F6E70 @ 0x1800F6E70 (sub_1800F6E70.c)
 */

__int64 __fastcall sub_1800F6F14(PUNICODE_STRING DestinationString, __int64 a2)
{
  __int64 v3; // rdx
  _BYTE v5[32]; // [rsp+50h] [rbp+0h] BYREF

  if ( !sub_1800F6E70((__int64)DestinationString, a2) )
    return 3221225473LL;
  if ( (int)ZwQueryValueKey() < 0 )
    return 3221225473LL;
  if ( *(_DWORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0uLL) + 0x24) != 1 )
    return 3221225473LL;
  v3 = *(_QWORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
  if ( (v3 & 1) != 0
    || !(_DWORD)v3
    || *(_WORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2A + 2 * ((unsigned __int64)(unsigned int)v3 >> 1))
    || (unsigned int)v3 > DestinationString->MaximumLength )
  {
    return 3221225473LL;
  }
  memmove(
    DestinationString->Buffer,
    (const void *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0uLL) + 44),
    (unsigned int)v3);
  RtlInitUnicodeString(DestinationString, DestinationString->Buffer);
  return 0LL;
}
