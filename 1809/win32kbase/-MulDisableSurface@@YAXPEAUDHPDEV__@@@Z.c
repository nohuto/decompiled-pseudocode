/*
 * XREFs of ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C00FB800
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00FC080 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     EngUnlockSurface @ 0x1C0021A50 (EngUnlockSurface.c)
 *     bDeleteSurface @ 0x1C0044990 (bDeleteSurface.c)
 *     EngFreeMem @ 0x1C0060D80 (EngFreeMem.c)
 */

void __fastcall MulDisableSurface(struct DHPDEV__ *a1)
{
  __int64 v2; // rcx

  EngFreeMem(*((PVOID *)a1 + 7));
  EngUnlockSurface(*((SURFOBJ **)a1 + 6));
  v2 = *((_QWORD *)a1 + 3);
  if ( v2 )
    bDeleteSurface(v2);
}
