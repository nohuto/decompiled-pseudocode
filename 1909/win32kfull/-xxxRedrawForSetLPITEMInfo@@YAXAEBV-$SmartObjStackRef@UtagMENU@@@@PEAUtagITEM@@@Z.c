/*
 * XREFs of ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C012CEC0
 * Callers:
 *     xxxInsertMenuItem @ 0x1C00608B0 (xxxInsertMenuItem.c)
 *     xxxSetMenuItemInfo @ 0x1C012C204 (xxxSetMenuItemInfo.c)
 * Callees:
 *     DwmGetClassStyle @ 0x1C00103CC (DwmGetClassStyle.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     DwmAsyncChildStyleChange @ 0x1C0089A4C (DwmAsyncChildStyleChange.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00EFC04 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     MNGetpItemIndex @ 0x1C012A92C (MNGetpItemIndex.c)
 *     MNGetPopupFromMenu @ 0x1C012D050 (MNGetPopupFromMenu.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     xxxMNUpdateShownMenu @ 0x1C0246C60 (xxxMNUpdateShownMenu.c)
 */

_QWORD *__fastcall xxxRedrawForSetLPITEMInfo(__int64 **a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  int ClassStyle; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  void *v17; // rax
  _QWORD *v19; // [rsp+20h] [rbp-18h] BYREF
  __int64 v20; // [rsp+28h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  v20 = 0LL;
  v19 = (_QWORD *)gSmartObjNullRef;
  v20 = *(_QWORD *)(v4 + 1472);
  *(_QWORD *)(v4 + 1472) = &v20;
  v8 = a1[2];
  if ( !v8 )
    v8 = (__int64 *)**a1;
  v9 = MNGetPopupFromMenu(v8, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v19, v9);
  if ( !*v19 )
    goto LABEL_20;
  xxxMNUpdateShownMenu(&v19, a2, 1LL);
  v12 = (__int64)a1[2];
  if ( !v12 )
    v12 = **a1;
  if ( (unsigned int)MNGetpItemIndex(v12, a2) != -1 )
  {
LABEL_20:
    if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 0x100) != 0
      && *(_DWORD *)(*(_QWORD *)a2 + 8LL) == 61536
      && *(_QWORD *)(**a1 + 80)
      && (unsigned int)IsWindowDesktopComposed(*(_QWORD *)(**a1 + 80)) )
    {
      if ( *(_QWORD *)(**a1 + 80) )
        v3 = **(_QWORD **)(**a1 + 80);
      ClassStyle = DwmGetClassStyle(*(_QWORD *)(**a1 + 80));
      v17 = (void *)ReferenceDwmApiPort(v15, v14, v16);
      DwmAsyncChildStyleChange(v17, v3, -26, ClassStyle);
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v19, v10, v11);
}
