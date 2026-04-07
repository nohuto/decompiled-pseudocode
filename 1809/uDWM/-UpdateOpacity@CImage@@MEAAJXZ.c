/*
 * XREFs of ?UpdateOpacity@CImage@@MEAAJXZ @ 0x18007CBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImage::UpdateOpacity(CImage *this)
{
  __int64 v1; // rdx
  unsigned int v2; // ebx
  int v3; // eax

  v1 = *((_QWORD *)this + 39);
  v2 = 0;
  if ( v1 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v1 + 16) + 304LL))(
           *(_QWORD *)(v1 + 16),
           *(unsigned int *)(v1 + 24));
    v2 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0xD1u);
  }
  return v2;
}
