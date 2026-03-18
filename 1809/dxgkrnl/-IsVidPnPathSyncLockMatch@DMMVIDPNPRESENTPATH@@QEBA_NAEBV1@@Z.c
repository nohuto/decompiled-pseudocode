/*
 * XREFs of ?IsVidPnPathSyncLockMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z @ 0x1C0286BDC
 * Callers:
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C00D1EA8 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 * Callees:
 *     ??9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z @ 0x1C0006310 (--9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

bool __fastcall DMMVIDPNPRESENTPATH::IsVidPnPathSyncLockMatch(
        DMMVIDPNPRESENTPATH *this,
        const struct DMMVIDPNPRESENTPATH *a2)
{
  __int64 v2; // r8
  bool v3; // bl
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // r14
  __int64 v25; // rax
  int v26; // edi
  int v27; // ebx

  v2 = *((_QWORD *)this + 12);
  v3 = 0;
  v6 = *(_QWORD *)(v2 + 104);
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 96));
    v7 = *(_QWORD *)(v2 + 104);
  }
  else
  {
    v7 = 0LL;
  }
  v8 = *(_QWORD *)(v7 + 144);
  if ( !v8 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *((_QWORD *)a2 + 12);
  v11 = *(_QWORD *)(v10 + 104);
  if ( v11 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 96));
    v12 = *(_QWORD *)(v10 + 104);
  }
  else
  {
    v12 = 0LL;
  }
  v13 = *(_QWORD *)(v12 + 144);
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !DMMVIDPNTARGETMODE::operator!=(v8, v13) )
  {
    v16 = *((_QWORD *)this + 11);
    v17 = *(_QWORD *)(v16 + 104);
    if ( v17 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 96));
      v18 = *(_QWORD *)(v16 + 104);
    }
    else
    {
      v18 = 0LL;
    }
    v19 = *(_QWORD *)(v18 + 144);
    if ( !v19 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v15);
      WdLogEvent5_WdAssertion(v20);
    }
    v21 = *((_QWORD *)a2 + 11);
    v22 = *(_QWORD *)(v21 + 104);
    if ( v22 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v22 + 96));
      v23 = *(_QWORD *)(v21 + 104);
    }
    else
    {
      v23 = 0LL;
    }
    v24 = *(_QWORD *)(v23 + 144);
    if ( !v24 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v15);
      WdLogEvent5_WdAssertion(v25);
    }
    v26 = *(_DWORD *)(v19 + 96);
    v27 = *(_DWORD *)(v24 + 96);
    ReferenceCounted::Release((ReferenceCounted *)(v23 + 88));
    ReferenceCounted::Release((ReferenceCounted *)(v18 + 88));
    v3 = v26 == v27;
  }
  ReferenceCounted::Release((ReferenceCounted *)(v12 + 88));
  ReferenceCounted::Release((ReferenceCounted *)(v7 + 88));
  return v3;
}
