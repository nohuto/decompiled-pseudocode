/*
 * XREFs of ?IsVidPnPathSyncLockMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z @ 0x1C02BF00C
 * Callers:
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C012B8B4 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008FF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z @ 0x1C000D92C (--9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z.c)
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
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rbp
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // r14
  __int64 v27; // rax
  int v28; // edi
  int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // r8

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
    v9 = WdLogNewEntry5_WdAssertion(this, a2);
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
    v14 = WdLogNewEntry5_WdAssertion(v10, a2);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !DMMVIDPNTARGETMODE::operator!=(v8, v13) )
  {
    v18 = *((_QWORD *)this + 11);
    v19 = *(_QWORD *)(v18 + 104);
    if ( v19 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 96));
      v20 = *(_QWORD *)(v18 + 104);
    }
    else
    {
      v20 = 0LL;
    }
    v21 = *(_QWORD *)(v20 + 144);
    if ( !v21 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v16, v15);
      WdLogEvent5_WdAssertion(v22);
    }
    v23 = *((_QWORD *)a2 + 11);
    v24 = *(_QWORD *)(v23 + 104);
    if ( v24 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v24 + 96));
      v25 = *(_QWORD *)(v23 + 104);
    }
    else
    {
      v25 = 0LL;
    }
    v26 = *(_QWORD *)(v25 + 144);
    if ( !v26 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v16, v15);
      WdLogEvent5_WdAssertion(v27);
    }
    v28 = *(_DWORD *)(v21 + 96);
    v29 = *(_DWORD *)(v26 + 96);
    ReferenceCounted::Release((ReferenceCounted *)(v25 + 88), v15, v17);
    ReferenceCounted::Release((ReferenceCounted *)(v20 + 88), v30, v31);
    v3 = v28 == v29;
  }
  ReferenceCounted::Release((ReferenceCounted *)(v12 + 88), v15, v17);
  ReferenceCounted::Release((ReferenceCounted *)(v7 + 88), v32, v33);
  return v3;
}
