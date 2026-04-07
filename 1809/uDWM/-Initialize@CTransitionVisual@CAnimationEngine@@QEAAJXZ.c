/*
 * XREFs of ?Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ @ 0x180030F60
 * Callers:
 *     ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x180030E20 (-Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ??_GCTransitionVariable@CAnimationEngine@@QEAAPEAXI@Z @ 0x18009D864 (--_GCTransitionVariable@CAnimationEngine@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CAnimationEngine::CTransitionVisual::Initialize(CAnimationEngine::CTransitionVisual *this)
{
  unsigned int v1; // r14d
  CAnimationEngine::CTransitionVariable **v2; // rbx
  unsigned int v3; // esi
  _QWORD *v4; // rdi
  __int64 v5; // rbp
  _QWORD *v6; // rax
  unsigned int v8; // edx

  v1 = 0;
  v2 = (CAnimationEngine::CTransitionVariable **)((char *)this + 8);
  v3 = 0;
  v4 = (_QWORD *)((char *)this + 8);
  v5 = 7LL;
  while ( 1 )
  {
    v6 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                     WPF::g_pProcessHeap,
                     24LL);
    if ( v6 )
    {
      *v6 = 0LL;
      v6[1] = 0LL;
    }
    *v4 = v6;
    if ( !v6 )
      break;
    ++v3;
    ++v4;
    if ( v3 >= 7 )
      return v1;
  }
  v1 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x5FBu);
  do
  {
    if ( *v2 )
    {
      CAnimationEngine::CTransitionVariable::`scalar deleting destructor'(*v2, v8);
      *v2 = 0LL;
    }
    ++v2;
    --v5;
  }
  while ( v5 );
  return v1;
}
