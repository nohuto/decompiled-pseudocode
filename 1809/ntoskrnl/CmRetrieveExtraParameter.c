/*
 * XREFs of CmRetrieveExtraParameter @ 0x1407EC588
 * Callers:
 *     VrpShouldOperateOnCall @ 0x14080825C (VrpShouldOperateOnCall.c)
 *     VrpPostOpenOrCreate @ 0x14080AE64 (VrpPostOpenOrCreate.c)
 * Callees:
 *     CmpFindExtraParameterInBlock @ 0x1407EC5C4 (CmpFindExtraParameterInBlock.c)
 */

__int64 __fastcall CmRetrieveExtraParameter(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v3; // r11
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  result = CmpFindExtraParameterInBlock(a1, &VRP_ORIGINAL_KEY_NAME_PARAMETER_GUID, &v4);
  if ( (int)result >= 0 )
  {
    *v3 = v4 + 48;
    return 0LL;
  }
  return result;
}
