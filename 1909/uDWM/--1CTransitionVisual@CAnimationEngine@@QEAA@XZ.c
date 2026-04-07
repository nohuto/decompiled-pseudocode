/*
 * XREFs of ??1CTransitionVisual@CAnimationEngine@@QEAA@XZ @ 0x1800060D0
 * Callers:
 *     ??_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z @ 0x18000609C (--_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnimationEngine::CTransitionVisual::~CTransitionVisual(CAnimationEngine::CTransitionVisual *this)
{
  _QWORD **v2; // rbx
  __int64 v3; // rsi
  _QWORD *v4; // rdi

  v2 = (_QWORD **)((char *)this + 8);
  v3 = 7LL;
  do
  {
    v4 = *v2;
    if ( *v2 )
    {
      if ( *v4 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 16LL))(*v4);
        *v4 = 0LL;
      }
      (*(void (__fastcall **)(WPF::HeapBase *, _QWORD *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v4);
    }
    ++v2;
    --v3;
  }
  while ( v3 );
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 272LL))(*(_QWORD *)this);
}
