/*
 * XREFs of CmpGetCmHiveFromVirtualPath @ 0x1407F3364
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x1407F3DDC (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x1407F3F7C (CmpVirtualPathPresent.c)
 * Callees:
 *     CmpGetMappingHiveForString @ 0x1407F3394 (CmpGetMappingHiveForString.c)
 *     CmpGetVirtualizationIDFromFullVirtualPath @ 0x1407F3660 (CmpGetVirtualizationIDFromFullVirtualPath.c)
 */

__int64 __fastcall CmpGetCmHiveFromVirtualPath(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  result = CmpGetVirtualizationIDFromFullVirtualPath(a1, v4);
  if ( (int)result >= 0 )
    return CmpGetMappingHiveForString(v4, a2);
  return result;
}
