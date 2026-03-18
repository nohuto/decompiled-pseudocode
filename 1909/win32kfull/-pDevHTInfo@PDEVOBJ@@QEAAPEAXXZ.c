/*
 * XREFs of ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C00C144C
 * Callers:
 *     EngHTBlt @ 0x1C00C0A94 (EngHTBlt.c)
 *     ?bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ @ 0x1C00C4FDC (-bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00C6D50 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00D51B4 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?bDisableHalftone@PDEVOBJ@@QEAAHXZ @ 0x1C0104864 (-bDisableHalftone@PDEVOBJ@@QEAAHXZ.c)
 *     GreCreateHalftonePalette @ 0x1C02AFD6C (GreCreateHalftonePalette.c)
 * Callees:
 *     HT_DestroyDeviceHalftoneInfo @ 0x1C0104954 (HT_DestroyDeviceHalftoneInfo.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

void *__fastcall PDEVOBJ::pDevHTInfo(PDEVOBJ *this, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // rbx
  _QWORD *v7; // rdi

  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)IsThreadCrossSessionAttached(this, a2, a3) )
    return *(void **)(*(_QWORD *)this + 1512LL);
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
  if ( !ThreadWin32Thread )
    return *(void **)(*(_QWORD *)this + 1512LL);
  v6 = *ThreadWin32Thread;
  if ( !*ThreadWin32Thread || !*(_DWORD *)(v6 + 104) && !*(_DWORD *)(v6 + 108) )
    return *(void **)(*(_QWORD *)this + 1512LL);
  if ( !PDEVOBJ::bAllowShareAccess(this) )
    return *(void **)(*(_QWORD *)this + 1512LL);
  if ( *(_DWORD *)(v6 + 296) != gcModeChanges )
  {
    v7 = *(_QWORD **)(v6 + 288);
    if ( v7 )
    {
      bDeletePalette(*v7, 0LL, 0LL);
      HT_DestroyDeviceHalftoneInfo(v7);
      *(_QWORD *)(v6 + 288) = 0LL;
    }
  }
  return *(void **)(v6 + 288);
}
