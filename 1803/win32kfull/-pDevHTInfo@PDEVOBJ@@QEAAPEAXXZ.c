/*
 * XREFs of ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C00CF084
 * Callers:
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00ADDE0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00B16A4 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     EngHTBlt @ 0x1C00CD750 (EngHTBlt.c)
 *     ?bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ @ 0x1C00CEAE8 (-bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ.c)
 *     ?bDisableHalftone@PDEVOBJ@@QEAAHXZ @ 0x1C00CECB4 (-bDisableHalftone@PDEVOBJ@@QEAAHXZ.c)
 *     GreCreateHalftonePalette @ 0x1C0287704 (GreCreateHalftonePalette.c)
 * Callees:
 *     HT_DestroyDeviceHalftoneInfo @ 0x1C0105D44 (HT_DestroyDeviceHalftoneInfo.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

void *__fastcall PDEVOBJ::pDevHTInfo(PDEVOBJ *this, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rdi

  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)IsThreadCrossSessionAttached(this, a2) )
    return *(void **)(*(_QWORD *)this + 1504LL);
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
  if ( !ThreadWin32Thread )
    return *(void **)(*(_QWORD *)this + 1504LL);
  v5 = *ThreadWin32Thread;
  if ( !*ThreadWin32Thread || !*(_DWORD *)(v5 + 104) && !*(_DWORD *)(v5 + 108) )
    return *(void **)(*(_QWORD *)this + 1504LL);
  if ( !PDEVOBJ::bAllowShareAccess(this) )
    return *(void **)(*(_QWORD *)this + 1504LL);
  if ( *(_DWORD *)(v5 + 296) != gcModeChanges )
  {
    v6 = *(_QWORD **)(v5 + 288);
    if ( v6 )
    {
      bDeletePalette(*v6, 0LL, 0LL);
      HT_DestroyDeviceHalftoneInfo(v6);
      *(_QWORD *)(v5 + 288) = 0LL;
    }
  }
  return *(void **)(v5 + 288);
}
