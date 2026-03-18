/*
 * XREFs of CmpGetCmHiveFromVirtualPath @ 0x1406F6BE0
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x1406F63B4 (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x14082CD8C (CmpVirtualPathPresent.c)
 * Callees:
 *     CmpGetMappingHiveForString @ 0x1406F6C1C (CmpGetMappingHiveForString.c)
 *     CmpGetVirtualizationIDFromFullVirtualPath @ 0x1406F6D34 (CmpGetVirtualizationIDFromFullVirtualPath.c)
 */

__int64 __fastcall CmpGetCmHiveFromVirtualPath(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = 0LL;
  v4[1] = 0LL;
  result = CmpGetVirtualizationIDFromFullVirtualPath(a1, v4);
  if ( (int)result >= 0 )
    return CmpGetMappingHiveForString(v4, a2);
  return result;
}
