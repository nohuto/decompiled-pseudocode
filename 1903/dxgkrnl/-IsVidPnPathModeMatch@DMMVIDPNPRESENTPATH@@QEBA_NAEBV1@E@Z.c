/*
 * XREFs of ?IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z @ 0x1C0128800
 * Callers:
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C01261FC (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 * Callees:
 *     ?IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C0003CB8 (-IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0003CE0 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0003D6C (-IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z @ 0x1C000D6F0 (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z.c)
 *     ??9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z @ 0x1C000D770 (--9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z.c)
 */

char __fastcall DMMVIDPNPRESENTPATH::IsVidPnPathModeMatch(
        DMMVIDPNPRESENTPATH *this,
        const struct DMMVIDPNPRESENTPATH *a2,
        char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // bl
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // r12
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rbp
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 v27; // r12
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax

  v8 = 0;
  if ( !DMMVIDPNPRESENTPATH::IsFunctional(this)
    || (v9 = (unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(*((_DWORD *)this + 29)),
        !DMMVIDPNPRESENTPATH::IsFunctionalContentRotationType(v9)) )
  {
    v39 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v39);
  }
  if ( !DMMVIDPNPRESENTPATH::IsFunctional(a2)
    || (v12 = (unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(*((_DWORD *)this + 29)),
        !DMMVIDPNPRESENTPATH::IsFunctionalContentRotationType(v12)) )
  {
    v40 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v40);
  }
  if ( !a3 && *((_DWORD *)this + 29) != *((_DWORD *)a2 + 29) || *((_DWORD *)this + 28) != *((_DWORD *)a2 + 28) )
    return 0;
  v13 = *((_QWORD *)this + 12);
  v14 = *(_QWORD *)(v13 + 104);
  if ( v14 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 96));
    v15 = *(_QWORD *)(v13 + 104);
  }
  else
  {
    v15 = 0LL;
  }
  v16 = *(_QWORD *)(v15 + 144);
  if ( !v16 )
  {
    v41 = WdLogNewEntry5_WdAssertion(v13, v10);
    WdLogEvent5_WdAssertion(v41);
  }
  v17 = *((_QWORD *)a2 + 12);
  v18 = *(_QWORD *)(v17 + 104);
  if ( v18 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 96));
    v19 = *(_QWORD *)(v17 + 104);
  }
  else
  {
    v19 = 0LL;
  }
  v20 = *(_QWORD *)(v19 + 144);
  if ( !v20 )
  {
    v42 = WdLogNewEntry5_WdAssertion(v17, v10);
    WdLogEvent5_WdAssertion(v42);
  }
  if ( !DMMVIDPNTARGETMODE::operator!=(v16, v20) )
  {
    v24 = *((_QWORD *)this + 11);
    v25 = *(_QWORD *)(v24 + 104);
    if ( v25 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v25 + 96));
      v26 = *(_QWORD *)(v24 + 104);
    }
    else
    {
      v26 = 0LL;
    }
    v27 = *(_QWORD *)(v26 + 144);
    if ( !v27 )
    {
      v43 = WdLogNewEntry5_WdAssertion(v22, v21);
      WdLogEvent5_WdAssertion(v43);
    }
    v28 = *((_QWORD *)a2 + 11);
    v29 = *(_QWORD *)(v28 + 104);
    if ( v29 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v29 + 96));
      v30 = *(_QWORD *)(v28 + 104);
    }
    else
    {
      v30 = 0LL;
    }
    v31 = *(_QWORD *)(v30 + 144);
    if ( !v31 )
    {
      v44 = WdLogNewEntry5_WdAssertion(v22, v21);
      WdLogEvent5_WdAssertion(v44);
    }
    v8 = DMMVIDPNSOURCEMODE::operator==(v27, v31);
    ReferenceCounted::Release((ReferenceCounted *)(v30 + 88), v32, v33);
    ReferenceCounted::Release((ReferenceCounted *)(v26 + 88), v34, v35);
  }
  ReferenceCounted::Release((ReferenceCounted *)(v19 + 88), v21, v23);
  ReferenceCounted::Release((ReferenceCounted *)(v15 + 88), v36, v37);
  return v8;
}
