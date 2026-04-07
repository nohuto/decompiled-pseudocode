/*
 * XREFs of ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x180011978
 * Callers:
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x1800113E4 (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 * Callees:
 *     ?NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z @ 0x1800098FC (-NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z.c)
 *     ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x18000C08C (-SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z.c)
 *     ?PopulateAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ @ 0x18003BE04 (-PopulateAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ.c)
 *     ?BindAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ @ 0x18003C044 (-BindAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationEngine::StartAnimations(CAnimationEngine *this)
{
  int v1; // edi
  __int64 v2; // r14
  __int64 v4; // rbx
  volatile signed __int32 *v5; // rsi
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int i; // ebx
  void *v15; // [rsp+28h] [rbp-30h]

  v1 = 0;
  v2 = 0LL;
  if ( !*((_DWORD *)this + 16) )
    return (unsigned int)v1;
  while ( 1 )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v2);
    v5 = (volatile signed __int32 *)(v4 + 8);
    if ( v4 )
      _InterlockedAdd(v5, 1u);
    if ( *(_BYTE *)(v4 + 48) || *(_BYTE *)(v4 + 49) )
      goto LABEL_5;
    v7 = CAnimationEngine::SetupStoryboard(this, (struct CAnimationEngine::CTransitionVisualSet *)v4);
    v1 = v7;
    if ( v7 < 0 )
      break;
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v4 + 32) + 96LL))(
           *(_QWORD *)(v4 + 32),
           v8,
           0LL);
    v1 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xDAu, v15);
      goto LABEL_23;
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 1) + 72LL))(
            *((_QWORD *)this + 1),
            v10,
            0LL);
    v1 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xDDu, v15);
      goto LABEL_23;
    }
    if ( *(_BYTE *)(v4 + 48) && !*(_BYTE *)(v4 + 49) )
    {
      v12 = CAnimationEngine::CTransitionVisualSet::PopulateAnimationCurves((CAnimationEngine::CTransitionVisualSet *)v4);
      v1 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xE3u, v15);
        goto LABEL_23;
      }
      v13 = CAnimationEngine::CTransitionVisualSet::BindAnimationCurves((CAnimationEngine::CTransitionVisualSet *)v4);
      v1 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xE4u, v15);
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
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xD7u, v15);
LABEL_23:
  if ( _InterlockedExchangeAdd(v5, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64, __int64))v4)(v4, 1LL);
LABEL_8:
  if ( v1 < 0 )
  {
    for ( i = *((_DWORD *)this + 16);
          (int)--i >= (int)v2;
          CAnimationEngine::NotifyAnimationCompleteAndCleanupByIndex(this, i) )
    {
      ;
    }
  }
  return (unsigned int)v1;
}
