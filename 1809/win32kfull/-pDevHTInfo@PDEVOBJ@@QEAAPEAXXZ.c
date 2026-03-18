/*
 * XREFs of ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C00133E4
 * Callers:
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00110F0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ @ 0x1C0012028 (-bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ.c)
 *     EngHTBlt @ 0x1C0012AA4 (EngHTBlt.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C011440C (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?bDisableHalftone@PDEVOBJ@@QEAAHXZ @ 0x1C0122404 (-bDisableHalftone@PDEVOBJ@@QEAAHXZ.c)
 *     GreCreateHalftonePalette @ 0x1C029B37C (GreCreateHalftonePalette.c)
 * Callees:
 *     HT_DestroyDeviceHalftoneInfo @ 0x1C01224F4 (HT_DestroyDeviceHalftoneInfo.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 */

void *__fastcall PDEVOBJ::pDevHTInfo(PDEVOBJ *this)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v4; // rbx
  _QWORD *v5; // rdi

  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)IsThreadCrossSessionAttached() )
    return *(void **)(*(_QWORD *)this + 1512LL);
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
  if ( !ThreadWin32Thread )
    return *(void **)(*(_QWORD *)this + 1512LL);
  v4 = *ThreadWin32Thread;
  if ( !*ThreadWin32Thread || !*(_DWORD *)(v4 + 104) && !*(_DWORD *)(v4 + 108) )
    return *(void **)(*(_QWORD *)this + 1512LL);
  if ( !PDEVOBJ::bAllowShareAccess(this) )
    return *(void **)(*(_QWORD *)this + 1512LL);
  if ( *(_DWORD *)(v4 + 296) != gcModeChanges )
  {
    v5 = *(_QWORD **)(v4 + 288);
    if ( v5 )
    {
      bDeletePalette(*v5, 0LL, 0LL);
      HT_DestroyDeviceHalftoneInfo(v5);
      *(_QWORD *)(v4 + 288) = 0LL;
    }
  }
  return *(void **)(v4 + 288);
}
