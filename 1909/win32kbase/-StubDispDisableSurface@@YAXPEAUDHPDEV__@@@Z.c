/*
 * XREFs of ?StubDispDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C00B78D0
 * Callers:
 *     <none>
 * Callees:
 *     bDeleteSurface @ 0x1C0015C30 (bDeleteSurface.c)
 */

void __fastcall StubDispDisableSurface(struct DHPDEV__ *a1, __int64 a2)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)a1 + 1);
  if ( v3 )
    bDeleteSurface(v3, a2);
  *((_QWORD *)a1 + 1) = 0LL;
}
