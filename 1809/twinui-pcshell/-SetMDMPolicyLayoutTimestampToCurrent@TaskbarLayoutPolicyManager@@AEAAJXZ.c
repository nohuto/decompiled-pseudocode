/*
 * XREFs of ?SetMDMPolicyLayoutTimestampToCurrent@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x18013B748
 * Callers:
 *     ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18013AC88 (-PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@U.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z @ 0x18013C54C (-_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z.c)
 *     ?wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z @ 0x18013C7FC (-wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z.c)
 */

__int64 __fastcall TaskbarLayoutPolicyManager::SetMDMPolicyLayoutTimestampToCurrent(
        TaskbarLayoutPolicyManager *this,
        __int64 a2,
        __int64 a3,
        struct wil::WNF_CHANGE_STAMP_STRUCT *a4)
{
  signed int nothrow; // ebx
  __int64 v5; // rdx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  TaskbarLayoutPolicyManager *v9; // [rsp+40h] [rbp+8h] BYREF
  ULONG v10; // [rsp+48h] [rbp+10h] BYREF

  v9 = this;
  v10 = 0;
  nothrow = wil::wnf_query_nothrow(this, (const struct _WNF_STATE_NAME *)&v9, (bool *)&v10, a4);
  if ( nothrow < 0 )
  {
    v5 = 618LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)nothrow);
    return (unsigned int)nothrow;
  }
  if ( !(_BYTE)v9 )
  {
    nothrow = -2147418113;
    v5 = 621LL;
    goto LABEL_3;
  }
  LODWORD(v9) = v10;
  v7 = _RegSetKeyValue(
         HKEY_CURRENT_USER,
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
         L"MDMLayoutXMLLastModified",
         4u,
         &v9,
         4u);
  nothrow = v7;
  if ( v7 > 0 )
    nothrow = (unsigned __int16)v7 | 0x80070000;
  if ( nothrow < 0 )
  {
    v5 = 623LL;
    goto LABEL_3;
  }
  return 0LL;
}
