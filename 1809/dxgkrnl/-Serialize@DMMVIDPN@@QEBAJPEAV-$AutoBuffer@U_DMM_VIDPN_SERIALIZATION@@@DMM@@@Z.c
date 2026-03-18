/*
 * XREFs of ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C028649C
 * Callers:
 *     ?Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@Z @ 0x1C004DC54 (-Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZ.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02786B8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C02791D4 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C0286844 (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 * Callees:
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00022A0 (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0003D7C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00040D0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000F554 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000F9D0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C004D744 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00D3E80 (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00D4444 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E5618 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DMMVIDPN::Serialize(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v4; // rax
  __int64 v6; // rax
  _QWORD *v7; // r12
  unsigned __int8 v8; // bl
  __int64 v9; // r14
  _QWORD *v10; // r15
  _QWORD *v11; // rdi
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rdi
  unsigned int v13; // edx
  int NumPathsFromSource; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int8 v18; // al
  SIZE_T v19; // r14
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rdi
  _QWORD *v23; // rax
  unsigned __int8 v24; // r12
  unsigned __int8 v25; // cl
  _QWORD *v26; // rdi
  __int64 v27; // rbx
  const struct DMMVIDEOPRESENTTARGET *v28; // rdi
  DMMVIDPNTOPOLOGY *v29; // r14
  unsigned int v30; // r15d
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rax
  DMMVIDPNSOURCEMODE *v39; // rcx
  unsigned __int64 v40; // rsi
  char **v41; // r13
  _DWORD *v42; // rbx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // r14
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rcx
  unsigned __int64 v52; // [rsp+20h] [rbp-30h] BYREF
  DMMVIDPNTOPOLOGY *v53; // [rsp+28h] [rbp-28h]
  __int64 v54; // [rsp+30h] [rbp-20h] BYREF
  __int64 v55; // [rsp+38h] [rbp-18h] BYREF
  __int64 v56; // [rsp+40h] [rbp-10h]
  DMMVIDEOPRESENTTARGETSET *v57; // [rsp+48h] [rbp-8h]
  unsigned int v59; // [rsp+A0h] [rbp+50h] BYREF
  unsigned __int64 v60; // [rsp+A8h] [rbp+58h] BYREF

  v2 = a2;
  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v6 = WdLogNewEntry5_WdAssertion(a1);
      WdLogEvent5_WdAssertion(v6);
    }
    v7 = *(_QWORD **)(a1 + 304);
    v8 = 0;
    v53 = (DMMVIDPNTOPOLOGY *)(a1 + 96);
    v57 = (DMMVIDEOPRESENTTARGETSET *)v7;
    v9 = 12LL;
    v10 = v7 + 3;
    v11 = (_QWORD *)v7[3];
    if ( v11 == v7 + 3 )
      goto LABEL_15;
    NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v11 - 1);
    if ( !NextTarget )
      goto LABEL_15;
    do
    {
      v13 = *((_DWORD *)NextTarget + 6);
      v52 = 0LL;
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource((DMMVIDPNTOPOLOGY *)(a1 + 96), v13, &v52);
      if ( NumPathsFromSource != -1071774919 )
      {
        if ( NumPathsFromSource < 0 )
        {
          v16 = WdLogNewEntry5_WdAssertion(v15);
          WdLogEvent5_WdAssertion(v16);
        }
        ++v8;
        v17 = 1LL;
        if ( v52 > 1 )
          v17 = v52;
        v9 += 432 * v17 + 48;
      }
      NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v7, NextTarget);
    }
    while ( NextTarget );
    v2 = a2;
    v18 = v8;
    if ( v8 <= 1u )
LABEL_15:
      v18 = 1;
    v19 = v9 + 4LL * v18 - 4;
    v20 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(v2, v19);
    v22 = v20;
    if ( v20 >= 0 )
    {
      v24 = 0;
      v25 = 1;
      **(_DWORD **)(v2 + 32) = v19;
      *(_BYTE *)(*(_QWORD *)(v2 + 32) + 4LL) = v8;
      v26 = (_QWORD *)*v10;
      if ( v8 > 1u )
        v25 = v8;
      v27 = 4LL * v25 + 8;
      if ( v26 != v10 )
      {
        v28 = (const struct DMMVIDEOPRESENTTARGET *)(v26 - 1);
        if ( v28 )
        {
          v29 = v53;
          do
          {
            v30 = *((_DWORD *)v28 + 6);
            v60 = 0LL;
            v31 = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v29, v30, &v60);
            if ( v31 != -1071774919 )
            {
              if ( v31 < 0 )
              {
                v33 = WdLogNewEntry5_WdAssertion(v32);
                WdLogEvent5_WdAssertion(v33);
              }
              *(_DWORD *)(*(_QWORD *)(v2 + 32) + 4LL * v24 + 8) = v27;
              v34 = 1LL;
              if ( v60 > 1 )
                v34 = v60;
              v35 = 432 * v34 + 48 + v27;
              v36 = *(_QWORD *)(v2 + 32);
              v56 = v35;
              v37 = v36 + *(unsigned int *)(v36 + 4LL * v24 + 8);
              v38 = *((_QWORD *)v28 + 13);
              if ( v38 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v38 + 96));
                v38 = *((_QWORD *)v28 + 13);
              }
              v39 = *(DMMVIDPNSOURCEMODE **)(v38 + 144);
              v54 = v38;
              if ( v39 )
                DMMVIDPNSOURCEMODE::Serialize(v39, (struct _D3DKMDT_VIDPN_SOURCE_MODE *const)v37);
              auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v54, 0LL);
              v40 = 0LL;
              *(_BYTE *)(v37 + 40) = v60;
              if ( v60 )
              {
                v41 = (char **)v53;
                v42 = (_DWORD *)(v37 + 472);
                do
                {
                  v59 = -1;
                  if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v41, v30, v40, &v59) < 0 )
                  {
                    v44 = WdLogNewEntry5_WdAssertion(v43);
                    WdLogEvent5_WdAssertion(v44);
                  }
                  Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)v41, v30, v59);
                  if ( !Path )
                  {
                    v47 = WdLogNewEntry5_WdAssertion(v45);
                    WdLogEvent5_WdAssertion(v47);
                  }
                  DMMVIDPNPRESENTPATH::Serialize(Path, (struct _D3DKMDT_VIDPN_PRESENT_PATH *const)(v42 - 106));
                  v48 = *((_QWORD *)Path + 12);
                  v49 = *(_QWORD *)(v48 + 104);
                  if ( v49 )
                  {
                    _InterlockedIncrement((volatile signed __int32 *)(v49 + 96));
                    v50 = *(_QWORD *)(v48 + 104);
                  }
                  else
                  {
                    v50 = 0LL;
                  }
                  v55 = v50;
                  v51 = *(_QWORD *)(v50 + 144);
                  if ( v51 )
                  {
                    *(v42 - 16) = *(_DWORD *)(v51 + 24);
                    *(_OWORD *)(v42 - 14) = *(_OWORD *)(v51 + 72);
                    *(_OWORD *)(v42 - 10) = *(_OWORD *)(v51 + 88);
                    *(_OWORD *)(v42 - 6) = *(_OWORD *)(v51 + 104);
                    *((_QWORD *)v42 - 1) = *(_QWORD *)(v51 + 120);
                    *v42 = *(_DWORD *)(v51 + 128);
                  }
                  auto_rc<DMMVIDPNTARGETMODESET>::reset(&v55, 0LL);
                  ++v40;
                  v42 += 108;
                }
                while ( v40 < v60 );
                v2 = a2;
                v29 = v53;
              }
              v27 = v56;
              ++v24;
            }
            v28 = DMMVIDEOPRESENTTARGETSET::GetNextTarget(v57, v28);
          }
          while ( v28 );
        }
      }
      return 0LL;
    }
    else
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdError(v21);
      v23[3] = v19;
      v23[4] = a1;
      v23[5] = v22;
      WdLogEvent5_WdError(v23);
      return (unsigned int)v22;
    }
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v4 + 24) = 0LL;
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
}
