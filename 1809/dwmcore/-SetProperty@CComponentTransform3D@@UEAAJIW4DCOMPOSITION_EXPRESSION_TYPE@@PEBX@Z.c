/*
 * XREFs of ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180057720
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CComponentTransform3D::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  gsl::details *i; // rcx
  _DWORD *v6; // rax
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  float v11; // xmm0_4
  float v12; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 == 16 && a3 == 18 )
  {
    v6 = &CComponentTransform3D::sc_RotationAngle;
    v11 = *a4 * 0.017453292;
    a4 = &v12;
    v12 = v11;
LABEL_9:
    v7 = (*((__int64 (__fastcall **)(__int64, _DWORD *, float *))v6 + 3))(a1 + (int)v6[8], v6, a4);
    v9 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x54u);
  }
  else
  {
    for ( i = (gsl::details *)&CComponentTransform3D::k_rgAnimDef;
          i != (gsl::details *)&CHWDrawListEntry::`vftable';
          i = (gsl::details *)((char *)i + 8) )
    {
      v6 = *(_DWORD **)i;
      if ( a2 == **(_DWORD **)i && (a3 == v6[1] || !a3) )
      {
        if ( v6 )
          goto LABEL_9;
        break;
      }
      if ( (__int64)&CComponentTransform3D::k_rgAnimDef > (__int64)i )
      {
        gsl::details::terminate(i);
        JUMPOUT(0x1800577B0LL);
      }
    }
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)i, 0LL, 0, -2147024809, 0x58u);
  }
  return v9;
}
