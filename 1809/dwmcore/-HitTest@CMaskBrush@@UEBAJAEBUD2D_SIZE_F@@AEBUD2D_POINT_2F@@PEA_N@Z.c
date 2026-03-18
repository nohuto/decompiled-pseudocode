/*
 * XREFs of ?HitTest@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180073E30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMaskBrush::HitTest(
        CMaskBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  unsigned int v4; // ebx
  __int64 v7; // rcx
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx

  v4 = 0;
  *a4 = 0;
  v7 = *((_QWORD *)this + 10);
  if ( v7 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 176LL))(v7);
    v4 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x89u);
    }
    else if ( *((_QWORD *)this + 9) )
    {
      if ( *a4 )
      {
        *a4 = 0;
        v12 = (*(__int64 (__fastcall **)(_QWORD, const struct D2D_SIZE_F *, const struct D2D_POINT_2F *, bool *))(**((_QWORD **)this + 9) + 176LL))(
                *((_QWORD *)this + 9),
                a2,
                a3,
                a4);
        v4 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x8Fu);
      }
    }
  }
  return v4;
}
