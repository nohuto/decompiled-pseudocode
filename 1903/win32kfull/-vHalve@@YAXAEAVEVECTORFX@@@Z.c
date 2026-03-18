/*
 * XREFs of ?vHalve@@YAXAEAVEVECTORFX@@@Z @ 0x1C015AA7C
 * Callers:
 *     ?bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C011A274 (-bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 *     ?bThicken@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z @ 0x1C015A990 (-bThicken@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vHalve(struct EVECTORFX *a1)
{
  int v1; // eax
  int v2; // edx

  v1 = *(_DWORD *)a1;
  if ( *(int *)a1 >= 0 )
    ++v1;
  v2 = *((_DWORD *)a1 + 1);
  if ( v2 >= 0 )
    ++v2;
  *(_DWORD *)a1 = v1 >> 1;
  *((_DWORD *)a1 + 1) = v2 >> 1;
}
