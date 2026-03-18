/*
 * XREFs of ?HitTest@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800D1BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMaskBrush::HitTest(
        CMaskBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  unsigned int v4; // ebx
  __int64 v7; // rcx
  signed int v10; // eax
  __int64 v11; // rcx
  signed int v12; // eax
  __int64 v13; // rcx

  v4 = 0;
  *a4 = 0;
  v7 = *((_QWORD *)this + 11);
  if ( v7 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 216LL))(v7);
    v4 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x9Bu, 0LL);
    }
    else if ( *((_QWORD *)this + 10) )
    {
      if ( *a4 )
      {
        *a4 = 0;
        v12 = (*(__int64 (__fastcall **)(_QWORD, const struct D2D_SIZE_F *, const struct D2D_POINT_2F *, bool *))(**((_QWORD **)this + 10) + 216LL))(
                *((_QWORD *)this + 10),
                a2,
                a3,
                a4);
        v4 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xA1u, 0LL);
      }
    }
  }
  return v4;
}
