/*
 * XREFs of _wcsicmp @ 0x18008E1D0
 * Callers:
 *     sub_1800129A4 @ 0x1800129A4 (sub_1800129A4.c)
 *     sub_180013124 @ 0x180013124 (sub_180013124.c)
 *     sub_1800157A4 @ 0x1800157A4 (sub_1800157A4.c)
 *     sub_180016A0C @ 0x180016A0C (sub_180016A0C.c)
 *     LdrRscIsTypeExist @ 0x180018130 (LdrRscIsTypeExist.c)
 *     sub_180018D8C @ 0x180018D8C (sub_180018D8C.c)
 *     sub_180056AC0 @ 0x180056AC0 (sub_180056AC0.c)
 *     sub_180059C34 @ 0x180059C34 (sub_180059C34.c)
 *     RtlGetFileMUIPath @ 0x180059D90 (RtlGetFileMUIPath.c)
 *     sub_18005B680 @ 0x18005B680 (sub_18005B680.c)
 *     sub_18006ABB8 @ 0x18006ABB8 (sub_18006ABB8.c)
 *     LdrRemoveLoadAsDataTable @ 0x180073440 (LdrRemoveLoadAsDataTable.c)
 *     sub_1800D9A8C @ 0x1800D9A8C (sub_1800D9A8C.c)
 *     sub_1800D9B68 @ 0x1800D9B68 (sub_1800D9B68.c)
 *     sub_1800D9E2C @ 0x1800D9E2C (sub_1800D9E2C.c)
 *     sub_1800DA2F8 @ 0x1800DA2F8 (sub_1800DA2F8.c)
 *     sub_1800DA834 @ 0x1800DA834 (sub_1800DA834.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC2E0 (RtlpCleanupRegistryKeys.c)
 *     sub_1800FD330 @ 0x1800FD330 (sub_1800FD330.c)
 *     sub_1800FD708 @ 0x1800FD708 (sub_1800FD708.c)
 *     sub_1800FE558 @ 0x1800FE558 (sub_1800FE558.c)
 *     sub_180112550 @ 0x180112550 (sub_180112550.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsicmp(const wchar_t *String1, const wchar_t *String2)
{
  const wchar_t *v2; // r10
  signed __int64 v3; // r9
  unsigned __int16 v4; // r8
  unsigned __int16 v5; // cx
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // r8

  v2 = String2;
  v3 = (char *)String1 - (char *)String2;
  do
  {
    v4 = *(const wchar_t *)((char *)v2 + v3);
    v5 = *v2++;
    v6 = v4 + 32;
    if ( (unsigned __int16)(v4 - 65) > 0x19u )
      v6 = v4;
    v7 = v5 + 32;
    if ( (unsigned __int16)(v5 - 65) > 0x19u )
      v7 = v5;
  }
  while ( v6 && v6 == v7 );
  return v6 - v7;
}
