/*
 * XREFs of ?MulDeleteDeviceOrRedirectionBitmap@@YAXPEAUDHSURF__@@@Z @ 0x1C0272A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MulDeleteDeviceOrRedirectionBitmap(__int64 ***pv)
{
  __int64 **i; // rbx
  __int64 v3; // rdx
  __int64 **v4; // rax
  SURFOBJ *v5; // rsi
  HSURF hsurf; // rbp

  for ( i = (__int64 **)**pv; i; i = (__int64 **)*i )
  {
    v3 = *((unsigned int *)i + 4);
    v4 = pv[1];
    v5 = (SURFOBJ *)v4[v3];
    if ( v5 )
    {
      *(_QWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v4[v3]) + 144) = 0LL;
      hsurf = v5->hsurf;
      EngUnlockSurface(v5);
      if ( !(unsigned int)HmgQueryAltLock(hsurf) )
      {
        GreMarkDeletableBitmap(hsurf);
        EngDeleteSurface(hsurf);
      }
    }
  }
  EngFreeMem(pv);
}
