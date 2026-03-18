/*
 * XREFs of ?GetResolution@CBitmapResource@@UEBAJPEAN0@Z @ 0x180212920
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapResource::GetResolution(CBitmapResource *this, double *a2, double *a3)
{
  __int64 v3; // rcx
  signed int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  v3 = *((_QWORD *)this + 9);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, double *, double *))(*(_QWORD *)v3 + 40LL))(v3, a2, a3);
    v6 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x77u, 0LL);
  }
  else
  {
    v6 = -2003292404;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, 0x88982F0C, 0x7Bu, 0LL);
  }
  return v6;
}
