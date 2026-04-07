/*
 * XREFs of ??$CreateProxyFromSharedHandle@VCAnimationTriggerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCAnimationTriggerProxy@@@Z @ 0x18003C078
 * Callers:
 *     ?_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180005D14 (-_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x18000920C (-_TriggerAnimation@CAnimationClock@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InitializeFromSharedHandle@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAX@Z @ 0x18003C134 (-InitializeFromSharedHandle@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositor::CreateProxyFromSharedHandle<CAnimationTriggerProxy>(
        __int64 a1,
        __int64 a2,
        volatile signed __int32 **a3)
{
  volatile signed __int32 *v6; // rax
  volatile signed __int32 *v7; // rbx
  int v8; // eax
  int v9; // edi
  void *v11; // [rsp+28h] [rbp-10h]

  *a3 = 0LL;
  v6 = (volatile signed __int32 *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 16LL))(
                                    WPF::g_pProcessHeap,
                                    24LL);
  v7 = v6;
  if ( v6 )
  {
    *((_QWORD *)v6 + 1) = 1LL;
    *((_QWORD *)v6 + 2) = 0LL;
    *(_QWORD *)v6 = &CTransform3dGroupProxy::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    _InterlockedAdd(v7 + 2, 1u);
    v8 = CResourceProxy::InitializeFromSharedHandle(v7, 1LL, *(_QWORD *)(a1 + 16), a2);
    v9 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x22u, v11);
    else
      v9 = 0;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x8Bu, v11);
    }
    else
    {
      *a3 = v7;
      v9 = 0;
    }
    CBaseObject::Release((CBaseObject *)v7);
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x89u, v11);
  }
  return (unsigned int)v9;
}
