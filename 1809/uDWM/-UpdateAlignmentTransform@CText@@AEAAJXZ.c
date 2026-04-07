/*
 * XREFs of ?UpdateAlignmentTransform@CText@@AEAAJXZ @ 0x18000EE68
 * Callers:
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x180010CD8 (-ValidateResources@CText@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CText::UpdateAlignmentTransform(CText *this)
{
  __int64 v1; // r9
  unsigned int v2; // ebx
  int v3; // eax
  int v4; // eax
  _OWORD v6[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+50h] [rbp-28h]
  double v8; // [rsp+58h] [rbp-20h]

  v1 = *((_QWORD *)this + 49);
  v2 = 0;
  if ( v1 )
  {
    v3 = *((_DWORD *)this + 31) - *((_DWORD *)this + 101);
    v6[0] = _xmm;
    v7 = 0LL;
    v6[1] = _xmm;
    v8 = (double)(v3 / 2);
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _OWORD *))(**(_QWORD **)(v1 + 16) + 1160LL))(
           *(_QWORD *)(v1 + 16),
           *(unsigned int *)(v1 + 24),
           v6);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x1ECu);
  }
  return v2;
}
