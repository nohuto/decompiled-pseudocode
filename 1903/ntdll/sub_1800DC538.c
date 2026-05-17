/*
 * XREFs of sub_1800DC538 @ 0x1800DC538
 * Callers:
 *     sub_1800DC32C @ 0x1800DC32C (sub_1800DC32C.c)
 * Callees:
 *     EtwEventWriteNoRegistration @ 0x1800835F0 (EtwEventWriteNoRegistration.c)
 *     ZwQueryWnfStateNameInformation @ 0x18009F290 (ZwQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x18009FFD0 (ZwUpdateWnfStateData.c)
 */

__int64 sub_1800DC538()
{
  unsigned int v0; // ebx
  int v1; // edi
  __int128 v3; // [rsp+40h] [rbp-18h] BYREF
  int v4; // [rsp+60h] [rbp+8h]

  v0 = 0;
  v1 = 0;
  if ( (int)ZwQueryWnfStateNameInformation() >= 0 && v4 )
    v1 = (int)ZwUpdateWnfStateData() >= 0;
  v3 = 0uLL;
  if ( !(unsigned int)EtwEventWriteNoRegistration((__int64)&unk_18012F8D0, &v3, 0, 0LL) )
    ++v1;
  if ( !v1 )
    return (unsigned int)-1073741696;
  return v0;
}
