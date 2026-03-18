/*
 * XREFs of ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C0036D30
 * Callers:
 *     EngHTBlt @ 0x1C0036378 (EngHTBlt.c)
 *     ?bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ @ 0x1C003A8C0 (-bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C007A4F0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00F50C4 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?bDisableHalftone@PDEVOBJ@@QEAAHXZ @ 0x1C0129604 (-bDisableHalftone@PDEVOBJ@@QEAAHXZ.c)
 *     GreCreateHalftonePalette @ 0x1C02B021C (GreCreateHalftonePalette.c)
 * Callees:
 *     HT_DestroyDeviceHalftoneInfo @ 0x1C01296F4 (HT_DestroyDeviceHalftoneInfo.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

void *__fastcall PDEVOBJ::pDevHTInfo(PDEVOBJ *this, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rdi

  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)IsThreadCrossSessionAttached(this, a2, a3, a4) )
    return *(void **)(*(_QWORD *)this + 1512LL);
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
  if ( !ThreadWin32Thread )
    return *(void **)(*(_QWORD *)this + 1512LL);
  v7 = *ThreadWin32Thread;
  if ( !*ThreadWin32Thread || !*(_DWORD *)(v7 + 104) && !*(_DWORD *)(v7 + 108) )
    return *(void **)(*(_QWORD *)this + 1512LL);
  if ( !PDEVOBJ::bAllowShareAccess(this) )
    return *(void **)(*(_QWORD *)this + 1512LL);
  if ( *(_DWORD *)(v7 + 296) != gcModeChanges )
  {
    v8 = *(_QWORD **)(v7 + 288);
    if ( v8 )
    {
      bDeletePalette(*v8, 0LL, 0LL);
      HT_DestroyDeviceHalftoneInfo(v8);
      *(_QWORD *)(v7 + 288) = 0LL;
    }
  }
  return *(void **)(v7 + 288);
}
