/*
 * XREFs of ?_NotifyDXGIGammaRampChange@DXGMONITOR@@QEAAJXZ @ 0x1C02D0848
 * Callers:
 *     MonitorNotifyDXGIGammaRampChange @ 0x1C02C9918 (MonitorNotifyDXGIGammaRampChange.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C000D888 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?DmmUpdateGammaRampOnVidPnTarget@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C0128E18 (-DmmUpdateGammaRampOnVidPnTarget@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?_CombineDXGIGammaRamp@DXGMONITOR@@AEAAJPEAUDXGK_GAMMA_RAMP@@PEAPEAU2@@Z @ 0x1C0128F18 (-_CombineDXGIGammaRamp@DXGMONITOR@@AEAAJPEAUDXGK_GAMMA_RAMP@@PEAPEAU2@@Z.c)
 *     ?_GetMostCapableColorSpaceTransform@DXGMONITOR@@AEAAJAEAW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1C012939C (-_GetMostCapableColorSpaceTransform@DXGMONITOR@@AEAAJAEAW4_D3DDDI_GAMMARAMP_TYPE@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_NotifyDXGIGammaRampChange(DXGMONITOR *this, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  DXGK_GAMMA_RAMP *v8; // rdi
  int MostCapableColorSpaceTransform; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rax
  DXGK_GAMMA_RAMP *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  ReferenceCounted *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  enum _D3DDDI_GAMMARAMP_TYPE v38; // [rsp+40h] [rbp+8h] BYREF
  ReferenceCounted *v39; // [rsp+48h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 4);
  if ( !v2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v4);
    v2 = *((_QWORD *)this + 4);
  }
  v5 = *(_QWORD *)(v2 + 8);
  if ( !v5 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !*(_QWORD *)(v5 + 16) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v7);
  }
  v38 = D3DDDI_GAMMARAMP_UNINITIALIZED;
  v8 = 0LL;
  v39 = 0LL;
  MostCapableColorSpaceTransform = DXGMONITOR::_GetMostCapableColorSpaceTransform(this, &v38);
  v13 = MostCapableColorSpaceTransform;
  if ( MostCapableColorSpaceTransform < 0 )
  {
    v14 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v14 + 24) = v13;
    WdLogEvent5_WdWarning(v14);
    return (unsigned int)v13;
  }
  if ( !*((_QWORD *)this + 150) )
    goto LABEL_19;
  if ( this == (DXGMONITOR *)-1144LL )
  {
    v15 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v15);
  }
  KeAcquireGuardedMutex((PKGUARDED_MUTEX)((char *)this + 1144));
  v16 = (DXGK_GAMMA_RAMP *)operator new[](0x30uLL, 0x4B677844u, PagedPool);
  v8 = v16;
  if ( v16 )
  {
    *((_WORD *)v16 + 20) = 0;
    *((_QWORD *)v16 + 3) = 0LL;
    *((_QWORD *)v16 + 4) = 0LL;
    *(_QWORD *)v16 = &ReferenceCounted::`vftable';
    *(_QWORD *)v16 = &DXGK_GAMMA_RAMP::`vftable';
    *((_DWORD *)v16 + 2) = 1;
    *((_DWORD *)v16 + 4) = 1;
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    DXGK_GAMMA_RAMP::Initialize(v8, (const struct _D3DKMDT_GAMMA_RAMP *)(*((_QWORD *)this + 150) + 16LL), v19);
    if ( this == (DXGMONITOR *)-1144LL )
    {
      v23 = WdLogNewEntry5_WdAssertion(v22, v21);
      WdLogEvent5_WdAssertion(v23);
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)((char *)this + 1144));
LABEL_19:
    v24 = DXGMONITOR::_CombineDXGIGammaRamp(this, v8, &v39);
    v28 = v39;
    LODWORD(v13) = v24;
    if ( v24 >= 0 )
    {
      if ( !v39 )
      {
        v36 = WdLogNewEntry5_WdAssertion(v26, v25);
        WdLogEvent5_WdAssertion(v36);
      }
      LODWORD(v13) = DmmUpdateGammaRampOnVidPnTarget(
                       *(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL),
                       *((unsigned int *)this + 11),
                       v28);
    }
    else
    {
      v29 = WdLogNewEntry5_WdWarning(v26, v25, v27);
      WdLogEvent5_WdWarning(v29);
    }
    if ( v28 )
      ReferenceCounted::Release(v28, v30, v31);
    if ( v8 )
      ReferenceCounted::Release(v8, v30, v31);
    return (unsigned int)v13;
  }
  v32 = WdLogNewEntry5_WdLowResource(v18, v17, v19, v20);
  WdLogEvent5_WdLowResource(v32);
  LODWORD(v13) = -1073741801;
  if ( this == (DXGMONITOR *)-1144LL )
  {
    v35 = WdLogNewEntry5_WdAssertion(v34, v33);
    WdLogEvent5_WdAssertion(v35);
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)((char *)this + 1144));
  return (unsigned int)v13;
}
