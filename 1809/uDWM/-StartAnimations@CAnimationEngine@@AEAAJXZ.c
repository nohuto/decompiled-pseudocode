/*
 * XREFs of ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x18000C924
 * Callers:
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x18000C3A0 (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 * Callees:
 *     ?BindAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ @ 0x18000CA38 (-BindAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ.c)
 *     ?PopulateAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ @ 0x18000CAC0 (-PopulateAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ.c)
 *     ?NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z @ 0x18000CC48 (-NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z.c)
 *     ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x18000FB54 (-SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationEngine::StartAnimations(CAnimationEngine *this)
{
  int v1; // edi
  __int64 v2; // rbp
  __int64 v4; // rbx
  int v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int i; // ebx

  v1 = 0;
  v2 = 0LL;
  if ( !*((_DWORD *)this + 16) )
    return (unsigned int)v1;
  while ( 1 )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v2);
    if ( v4 )
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    if ( *(_BYTE *)(v4 + 48) || *(_BYTE *)(v4 + 49) )
      goto LABEL_5;
    v6 = CAnimationEngine::SetupStoryboard(this, (struct CAnimationEngine::CTransitionVisualSet *)v4);
    v1 = v6;
    if ( v6 < 0 )
      break;
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v4 + 32) + 96LL))(
           *(_QWORD *)(v4 + 32),
           v7,
           0LL);
    v1 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xDAu);
      goto LABEL_23;
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 1) + 72LL))(
            *((_QWORD *)this + 1),
            v9,
            0LL);
    v1 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xDDu);
      goto LABEL_23;
    }
    if ( *(_BYTE *)(v4 + 48) && !*(_BYTE *)(v4 + 49) )
    {
      v11 = CAnimationEngine::CTransitionVisualSet::PopulateAnimationCurves((CAnimationEngine::CTransitionVisualSet *)v4);
      v1 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xE3u);
        goto LABEL_23;
      }
      v12 = CAnimationEngine::CTransitionVisualSet::BindAnimationCurves((CAnimationEngine::CTransitionVisualSet *)v4);
      v1 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xE4u);
        goto LABEL_23;
      }
    }
LABEL_5:
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v4)(v4, 1LL);
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= *((_DWORD *)this + 16) )
      goto LABEL_8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xD7u);
LABEL_23:
  CBaseObject::Release((CBaseObject *)v4);
LABEL_8:
  if ( v1 < 0 )
  {
    for ( i = *((_DWORD *)this + 16); --i >= (int)v2; CAnimationEngine::NotifyAnimationCompleteAndCleanupByIndex(
                                                        this,
                                                        i) )
      ;
  }
  return (unsigned int)v1;
}
