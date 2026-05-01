/*
 * XREFs of ?wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z @ 0x18016780C
 * Callers:
 *     _lambda_402144f3e77278201ba8e2dd3da35b8c_::operator() @ 0x180163440 (_lambda_402144f3e77278201ba8e2dd3da35b8c_--operator().c)
 *     ?SetMDMPolicyLayoutTimestampToCurrent@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x18016665C (-SetMDMPolicyLayoutTimestampToCurrent@TaskbarLayoutPolicyManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008BBC0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18010871C (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 */

__int64 __fastcall wil::wnf_query_nothrow(
        wil *this,
        const struct _WNF_STATE_NAME *a2,
        bool *a3,
        struct wil::WNF_CHANGE_STAMP_STRUCT *a4)
{
  unsigned int v6; // edi
  const char *v7; // r9
  int v9; // ecx
  bool v10; // al
  const char *v11; // [rsp+30h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  wil *v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+48h] [rbp+10h] BYREF

  v13 = this;
  LOBYTE(a2->Data[0]) = 0;
  if ( a3 )
    *(_DWORD *)a3 = 0;
  LODWORD(v13) = 0;
  v6 = NtQueryWnfStateData(&WNF_SHEL_ENTERPRISE_START_LAYOUT_POLICY_VALUE_CHANGED, 0LL, 0LL, &v14, 0LL, &v13) | 0x10000000;
  if ( (int)(v6 + 0x80000000) < 0 || v6 == -805306333 )
  {
    if ( v14 && (_DWORD)v13 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(retaddr, 645LL, (__int64)"internal\\sdk\\inc\\wil\\Resource.h", v7);
      __debugbreak();
    }
    wil::details::in1diag3::Log_HrIfMsg(
      retaddr,
      (void *)0x286,
      (unsigned int)"internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)0x8000FFFFLL,
      0,
      (bool)"Inconsistent state data size in wnf_query",
      v11);
    v9 = v14;
    v10 = v14 && !(_DWORD)v13;
    LOBYTE(a2->Data[0]) = v10;
    if ( a3 )
      *(_DWORD *)a3 = v9;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x284,
      (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)v6);
    return v6;
  }
}
