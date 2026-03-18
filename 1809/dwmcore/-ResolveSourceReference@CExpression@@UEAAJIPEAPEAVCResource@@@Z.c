/*
 * XREFs of ?ResolveSourceReference@CExpression@@UEAAJIPEAPEAVCResource@@@Z @ 0x18005AA70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CExpression::ResolveSourceReference(CExpression *this, unsigned int a2, struct CResource **a3)
{
  unsigned int v3; // ebx
  struct CResource *v4; // rcx

  v3 = 0;
  if ( a2 < *((_DWORD *)this + 94) && *(_QWORD *)(*((_QWORD *)this + 46) + 8LL * a2) )
  {
    _mm_lfence();
    v4 = *(struct CResource **)(*(_QWORD *)(*((_QWORD *)this + 46) + 8LL * a2) + 16LL);
  }
  else
  {
    v4 = 0LL;
  }
  *a3 = v4;
  if ( v4 )
  {
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  else
  {
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(0, &dword_18027646C, 1u, -2147467259, 0x163u);
  }
  return v3;
}
