/*
 * XREFs of ?vServer@UMPDOBJ@@QEAAXPEAX@Z @ 0x1C008E50C
 * Callers:
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C008E1B4 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?UMPDServer@@YAHPEAVSURFACE@@@Z @ 0x1C0134EB8 (-UMPDServer@@YAHPEAVSURFACE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall UMPDOBJ::vServer(UMPDOBJ *this, void *a2)
{
  struct SURFACE *v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rcx

  v2 = SURFOBJ_TO_SURFACE_NOT_NULL(a2);
  if ( !*((_WORD *)v2 + 50) && *((char *)v2 + 102) < 0 && !*((_DWORD *)v2 + 152) )
  {
    v3 = *((_QWORD *)v2 + 9);
    v4 = *((_QWORD *)v2 + 10);
    *((_QWORD *)v2 + 9) = *((_QWORD *)v2 + 74);
    *((_QWORD *)v2 + 10) = *((_QWORD *)v2 + 75);
    *((_DWORD *)v2 + 152) = 1;
    *((_QWORD *)v2 + 74) = v3;
    *((_QWORD *)v2 + 75) = v4;
  }
}
