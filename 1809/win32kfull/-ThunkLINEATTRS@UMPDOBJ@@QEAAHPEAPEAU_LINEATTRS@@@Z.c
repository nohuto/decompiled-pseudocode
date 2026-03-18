/*
 * XREFs of ?ThunkLINEATTRS@UMPDOBJ@@QEAAHPEAPEAU_LINEATTRS@@@Z @ 0x1C0277F38
 * Callers:
 *     ?UMPDDrvStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C028F700 (-UMPDDrvStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUS.c)
 *     ?UMPDDrvStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C028FA00 (-UMPDDrvStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@P.c)
 * Callees:
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C008B9C4 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C008E148 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 */

__int64 __fastcall UMPDOBJ::ThunkLINEATTRS(UMPDOBJ *this, struct _LINEATTRS **a2)
{
  char *v4; // rcx
  int v6; // esi
  unsigned int v7; // esi
  char *KernelPtr; // rax
  void *v9; // [rsp+38h] [rbp+10h] BYREF

  v4 = (char *)*a2;
  if ( !*a2 )
    return 1LL;
  v6 = *((_DWORD *)v4 + 5);
  v9 = (void *)*((_QWORD *)v4 + 3);
  v7 = 4 * v6;
  if ( (unsigned int)UMPDOBJ::ThunkMemBlock(this, (const void **)a2, 0x28u)
    && (unsigned int)UMPDOBJ::ThunkMemBlock(this, (const void **)&v9, v7) )
  {
    KernelPtr = UMPDOBJ::GetKernelPtr(this, (char *)*a2);
    *((_QWORD *)KernelPtr + 3) = v9;
    return 1LL;
  }
  return 0LL;
}
