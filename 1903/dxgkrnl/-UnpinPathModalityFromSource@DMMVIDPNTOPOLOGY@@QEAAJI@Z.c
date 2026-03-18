/*
 * XREFs of ?UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C02BCFCC
 * Callers:
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C02B6DC8 (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00043DC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0005854 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C001FF10 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C0021D88 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0022EF8 (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E8854 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::UnpinPathModalityFromSource(char **this, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 i; // rdi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  volatile signed __int32 *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  DMMVIDPNTARGETMODESET *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  _QWORD *v22; // rax
  DMMVIDPNTARGETMODESET *v23; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v24; // [rsp+60h] [rbp+18h] BYREF
  volatile signed __int32 *v25; // [rsp+68h] [rbp+20h] BYREF

  v2 = a2;
  for ( i = 0LL; ; ++i )
  {
    v24 = -1;
    v5 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(this, (unsigned int)v2, i, &v24);
    v8 = v5;
    if ( v5 < 0 )
      break;
    if ( v24 == -1 )
      return 0LL;
    Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)this, v2, v24);
    if ( !Path )
    {
      v12 = WdLogNewEntry5_WdAssertion(v10, v9);
      WdLogEvent5_WdAssertion(v12);
    }
    v13 = *((_QWORD *)Path + 11);
    v14 = *(volatile signed __int32 **)(v13 + 104);
    if ( v14 )
    {
      _InterlockedIncrement(v14 + 24);
      v14 = *(volatile signed __int32 **)(v13 + 104);
    }
    v25 = v14;
    DMMVIDPNTARGETMODESET::UnpinMode((DMMVIDPNTARGETMODESET *)v14, v9);
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v25, 0LL);
    v16 = *((_QWORD *)Path + 12);
    v17 = *(_QWORD *)(v16 + 104);
    if ( v17 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 96));
      v18 = *(DMMVIDPNTARGETMODESET **)(v16 + 104);
    }
    else
    {
      v18 = 0LL;
    }
    v23 = v18;
    DMMVIDPNTARGETMODESET::UnpinMode(v18, v15);
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v23, 0LL);
    DMMVIDPNPRESENTPATH::UnpinContentScaling(Path, v19);
    DMMVIDPNPRESENTPATH::UnpinContentRotation(Path, v20);
  }
  v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
  v22[3] = i;
  v22[4] = v2;
  v22[5] = this;
  v22[6] = v8;
  return (unsigned int)v8;
}
