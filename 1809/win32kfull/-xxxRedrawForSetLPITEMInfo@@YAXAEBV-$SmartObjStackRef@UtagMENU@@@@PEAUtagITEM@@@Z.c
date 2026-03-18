/*
 * XREFs of ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C006A6D4
 * Callers:
 *     xxxInsertMenuItem @ 0x1C0069348 (xxxInsertMenuItem.c)
 *     xxxSetMenuItemInfo @ 0x1C00A5F5C (xxxSetMenuItemInfo.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x1C000DBA0 (DwmAsyncChildStyleChange.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNGetPopupFromMenu @ 0x1C006A864 (MNGetPopupFromMenu.c)
 *     MNGetpItemIndex @ 0x1C006AA14 (MNGetpItemIndex.c)
 *     DwmGetClassStyle @ 0x1C00C818C (DwmGetClassStyle.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010CEAC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     xxxMNUpdateShownMenu @ 0x1C022EB74 (xxxMNUpdateShownMenu.c)
 */

_QWORD *__fastcall xxxRedrawForSetLPITEMInfo(_QWORD **a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  int ClassStyle; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  void *v15; // rax
  _QWORD *v17; // [rsp+20h] [rbp-18h] BYREF
  __int64 v18; // [rsp+28h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  v18 = 0LL;
  v17 = (_QWORD *)gSmartObjNullRef;
  v18 = *(_QWORD *)(v4 + 1448);
  *(_QWORD *)(v4 + 1448) = &v18;
  v8 = a1[2];
  if ( !v8 )
    v8 = (_QWORD *)**a1;
  v9 = MNGetPopupFromMenu(v8, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v17, v9);
  if ( !*v17 )
    goto LABEL_20;
  xxxMNUpdateShownMenu(&v17, a2, 1LL);
  v11 = a1[2];
  if ( !v11 )
    v11 = (_QWORD *)**a1;
  if ( (unsigned int)MNGetpItemIndex(v11, a2) != -1 )
  {
LABEL_20:
    if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 40LL) & 0x100) != 0
      && *(_DWORD *)(*(_QWORD *)a2 + 8LL) == 61536
      && *(_QWORD *)(**a1 + 80LL)
      && (unsigned int)IsWindowDesktopComposed(*(_QWORD *)(**a1 + 80LL)) )
    {
      if ( *(_QWORD *)(**a1 + 80LL) )
        v3 = **(_QWORD **)(**a1 + 80LL);
      ClassStyle = DwmGetClassStyle(*(_QWORD *)(**a1 + 80LL));
      v15 = (void *)ReferenceDwmApiPort(v14, v13);
      DwmAsyncChildStyleChange(v15, v3, -26, ClassStyle);
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v17, v10);
}
