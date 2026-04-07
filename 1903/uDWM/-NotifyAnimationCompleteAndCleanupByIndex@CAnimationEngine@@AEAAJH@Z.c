/*
 * XREFs of ?NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z @ 0x18000B02C
 * Callers:
 *     ?OnStoryboardStatusChanged@CAnimationEngine@@UEAAJPEAUIUIAnimationStoryboard2@@W4__MIDL___MIDL_itf_UIAnimation_0000_0002_0001@@1@Z @ 0x18000AF30 (-OnStoryboardStatusChanged@CAnimationEngine@@UEAAJPEAUIUIAnimationStoryboard2@@W4__MIDL___MIDL_i.c)
 *     ?StopAnimations@CAnimationEngine@@AEAAJXZ @ 0x180011608 (-StopAnimations@CAnimationEngine@@AEAAJXZ.c)
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x18001168C (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 * Callees:
 *     ?StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ @ 0x18000B108 (-StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qdq @ 0x1800A2AF0 (McTemplateU0qdq.c)
 */

__int64 __fastcall CAnimationEngine::NotifyAnimationCompleteAndCleanupByIndex(CAnimationEngine *this, unsigned int a2)
{
  __int64 v3; // r14
  int v4; // ecx
  CAnimationEngine::CTransitionVisualSet *v5; // rsi
  unsigned int v6; // edi
  unsigned int i; // ebp
  void (__fastcall ***v8)(_QWORD, _QWORD); // rcx
  __int64 v9; // rax
  CBaseObject *v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // rcx
  void *v14; // [rsp+28h] [rbp-20h]
  void *v15; // [rsp+28h] [rbp-20h]
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+50h] [rbp+8h] BYREF

  v3 = a2;
  v16 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = *(CAnimationEngine::CTransitionVisualSet **)(*((_QWORD *)this + 5) + 8 * v3);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qdq(
      v4,
      (unsigned int)&UdwmAnimationEngine_Animation_End,
      *((_DWORD *)v5 + 4),
      *((_DWORD *)v5 + 7),
      *((_DWORD *)v5 + 6));
  v6 = 0;
  for ( i = 0; i < *((_DWORD *)this + 24); ++i )
  {
    v8 = *(void (__fastcall ****)(_QWORD, _QWORD))(*((_QWORD *)this + 9) + 8LL * i);
    if ( v8 )
      (**v8)(v8, *((unsigned int *)v5 + 4));
  }
  CAnimationEngine::CTransitionVisualSet::StopStoryboard(v5);
  v9 = *((_QWORD *)this + 5);
  *((_BYTE *)this + 112) = 1;
  v10 = *(CBaseObject **)(v9 + 8 * v3);
  if ( v10 )
    CBaseObject::Release(v10);
  v11 = *((_DWORD *)this + 16);
  if ( (unsigned int)v3 >= v11 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x218u, v14);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x590u, v15);
  }
  else
  {
    v12 = v11 - 1;
    if ( (unsigned int)v3 < (unsigned int)v12 )
    {
      *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v3) = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v12);
      v11 = *((_DWORD *)this + 16);
    }
    *((_DWORD *)this + 16) = v11 - 1;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
  return v6;
}
