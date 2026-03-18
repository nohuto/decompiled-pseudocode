/*
 * XREFs of ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C02BE8CC
 * Callers:
 *     ?Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@Z @ 0x1C0054EF4 (-Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZ.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02B0EE8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C02B1A08 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02BEC74 (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00044DC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0005814 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C000EC40 (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C00549E0 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?GetNextTarget@DMMVIDPNTARGETSET@@QEBAPEAVDMMVIDPNTARGET@@QEBV2@@Z @ 0x1C00551B0 (-GetNextTarget@DMMVIDPNTARGETSET@@QEBAPEAVDMMVIDPNTARGET@@QEBV2@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00EDB7C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C012CC00 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0131D04 (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 */

__int64 __fastcall DMMVIDPN::Serialize(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v5; // rax
  __int64 v7; // rax
  _QWORD *v8; // r12
  unsigned __int8 v9; // bl
  __int64 v10; // r14
  _QWORD *v11; // r15
  _QWORD *v12; // rdi
  unsigned int *NextTarget; // rdi
  __int64 v14; // rdx
  int NumPathsFromSource; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int8 v20; // al
  SIZE_T v21; // r14
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdi
  _QWORD *v27; // rax
  unsigned __int8 v28; // r12
  unsigned __int8 v29; // cl
  _QWORD *v30; // rdi
  __int64 v31; // rbx
  struct DMMVIDPNTARGET *v32; // rdi
  DMMVIDPNTOPOLOGY *v33; // r14
  unsigned int v34; // r15d
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rax
  DMMVIDPNSOURCEMODE *v45; // rcx
  unsigned __int64 v46; // rsi
  char **v47; // r13
  _DWORD *v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // r14
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rcx
  unsigned __int64 v60; // [rsp+20h] [rbp-30h] BYREF
  DMMVIDPNTOPOLOGY *v61; // [rsp+28h] [rbp-28h]
  __int64 v62; // [rsp+30h] [rbp-20h] BYREF
  __int64 v63; // [rsp+38h] [rbp-18h] BYREF
  __int64 v64; // [rsp+40h] [rbp-10h]
  DMMVIDPNTARGETSET *v65; // [rsp+48h] [rbp-8h]
  unsigned int v67; // [rsp+A0h] [rbp+50h] BYREF
  unsigned __int64 v68; // [rsp+A8h] [rbp+58h] BYREF

  v3 = a2;
  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v7 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v7);
    }
    v8 = *(_QWORD **)(a1 + 304);
    v9 = 0;
    v61 = (DMMVIDPNTOPOLOGY *)(a1 + 96);
    v65 = (DMMVIDPNTARGETSET *)v8;
    v10 = 12LL;
    v11 = v8 + 3;
    v12 = (_QWORD *)v8[3];
    if ( v12 == v8 + 3 )
      goto LABEL_15;
    NextTarget = (unsigned int *)(v12 - 1);
    if ( !NextTarget )
      goto LABEL_15;
    do
    {
      v14 = NextTarget[6];
      v60 = 0LL;
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource((DMMVIDPNTOPOLOGY *)(a1 + 96), v14, &v60);
      if ( NumPathsFromSource != -1071774919 )
      {
        if ( NumPathsFromSource < 0 )
        {
          v18 = WdLogNewEntry5_WdAssertion(v17, v16);
          WdLogEvent5_WdAssertion(v18);
        }
        ++v9;
        v19 = 1LL;
        if ( v60 > 1 )
          v19 = v60;
        v10 += 432 * v19 + 48;
      }
      NextTarget = (unsigned int *)DMMVIDPNTARGETSET::GetNextTarget(
                                     (DMMVIDPNTARGETSET *)v8,
                                     (const struct DMMVIDPNTARGET *const)NextTarget);
    }
    while ( NextTarget );
    v3 = a2;
    v20 = v9;
    if ( v9 <= 1u )
LABEL_15:
      v20 = 1;
    v21 = v10 + 4LL * v20 - 4;
    v22 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(v3, v21, a3);
    v26 = v22;
    if ( v22 >= 0 )
    {
      v28 = 0;
      v29 = 1;
      **(_DWORD **)(v3 + 32) = v21;
      *(_BYTE *)(*(_QWORD *)(v3 + 32) + 4LL) = v9;
      v30 = (_QWORD *)*v11;
      if ( v9 > 1u )
        v29 = v9;
      v31 = 4LL * v29 + 8;
      if ( v30 != v11 )
      {
        v32 = (struct DMMVIDPNTARGET *)(v30 - 1);
        if ( v32 )
        {
          v33 = v61;
          do
          {
            v34 = *((_DWORD *)v32 + 6);
            v68 = 0LL;
            v35 = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v33, v34, &v68);
            if ( v35 != -1071774919 )
            {
              if ( v35 < 0 )
              {
                v39 = WdLogNewEntry5_WdAssertion(v37, v36);
                WdLogEvent5_WdAssertion(v39);
              }
              *(_DWORD *)(*(_QWORD *)(v3 + 32) + 4LL * v28 + 8) = v31;
              v40 = 1LL;
              if ( v68 > 1 )
                v40 = v68;
              v41 = 432 * v40 + 48 + v31;
              v42 = *(_QWORD *)(v3 + 32);
              v64 = v41;
              v43 = v42 + *(unsigned int *)(v42 + 4LL * v28 + 8);
              v44 = *((_QWORD *)v32 + 13);
              if ( v44 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v44 + 96));
                v44 = *((_QWORD *)v32 + 13);
              }
              v45 = *(DMMVIDPNSOURCEMODE **)(v44 + 144);
              v62 = v44;
              if ( v45 )
                DMMVIDPNSOURCEMODE::Serialize(v45, (struct _D3DKMDT_VIDPN_SOURCE_MODE *const)v43, v38);
              auto_rc<DMMVIDPNTARGETMODESET>::reset(&v62, 0LL);
              v46 = 0LL;
              *(_BYTE *)(v43 + 40) = v68;
              if ( v68 )
              {
                v47 = (char **)v61;
                v48 = (_DWORD *)(v43 + 472);
                do
                {
                  v67 = -1;
                  if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v47, v34, v46, &v67) < 0 )
                  {
                    v51 = WdLogNewEntry5_WdAssertion(v50, v49);
                    WdLogEvent5_WdAssertion(v51);
                  }
                  Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)v47, v34, v67);
                  if ( !Path )
                  {
                    v55 = WdLogNewEntry5_WdAssertion(v53, v52);
                    WdLogEvent5_WdAssertion(v55);
                  }
                  DMMVIDPNPRESENTPATH::Serialize(Path, (struct _D3DKMDT_VIDPN_PRESENT_PATH *const)(v48 - 106));
                  v56 = *((_QWORD *)Path + 12);
                  v57 = *(_QWORD *)(v56 + 104);
                  if ( v57 )
                  {
                    _InterlockedIncrement((volatile signed __int32 *)(v57 + 96));
                    v58 = *(_QWORD *)(v56 + 104);
                  }
                  else
                  {
                    v58 = 0LL;
                  }
                  v63 = v58;
                  v59 = *(_QWORD *)(v58 + 144);
                  if ( v59 )
                  {
                    *(v48 - 16) = *(_DWORD *)(v59 + 24);
                    *(_OWORD *)(v48 - 14) = *(_OWORD *)(v59 + 72);
                    *(_OWORD *)(v48 - 10) = *(_OWORD *)(v59 + 88);
                    *(_OWORD *)(v48 - 6) = *(_OWORD *)(v59 + 104);
                    *((_QWORD *)v48 - 1) = *(_QWORD *)(v59 + 120);
                    *v48 = *(_DWORD *)(v59 + 128);
                  }
                  auto_rc<DMMVIDPNTARGETMODESET>::reset(&v63, 0LL);
                  ++v46;
                  v48 += 108;
                }
                while ( v46 < v68 );
                v3 = a2;
                v33 = v61;
              }
              v31 = v64;
              ++v28;
            }
            v32 = DMMVIDPNTARGETSET::GetNextTarget(v65, v32);
          }
          while ( v32 );
        }
      }
      return 0LL;
    }
    else
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23, v25);
      v27[3] = v21;
      v27[4] = a1;
      v27[5] = v26;
      WdLogEvent5_WdError(v27);
      return (unsigned int)v26;
    }
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(a1, 0LL, a3);
    *(_QWORD *)(v5 + 24) = 0LL;
    WdLogEvent5_WdError(v5);
    return 3221225485LL;
  }
}
