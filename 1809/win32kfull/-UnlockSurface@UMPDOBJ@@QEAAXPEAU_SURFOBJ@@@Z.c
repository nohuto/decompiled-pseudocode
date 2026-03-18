/*
 * XREFs of ?UnlockSurface@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C01306C0
 * Callers:
 *     NtGdiEngUnlockSurface @ 0x1C0130640 (NtGdiEngUnlockSurface.c)
 * Callees:
 *     <none>
 */

void __fastcall UMPDOBJ::UnlockSurface(UMPDOBJ *this, struct _SURFOBJ *a2)
{
  LONG *pv; // [rsp+30h] [rbp+8h]

  if ( a2 )
  {
    pv = &a2[-1].lDelta;
    if ( a2[-1].lDelta == 1431130959 )
    {
      if ( *((_QWORD *)pv + 1) )
        EngFreeUserMem(pv);
    }
  }
}
