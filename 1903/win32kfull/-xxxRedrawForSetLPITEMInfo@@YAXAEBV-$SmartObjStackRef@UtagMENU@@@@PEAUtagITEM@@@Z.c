/*
 * XREFs of ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0020A88
 * Callers:
 *     xxxSetMenuItemInfo @ 0x1C001D574 (xxxSetMenuItemInfo.c)
 *     xxxInsertMenuItem @ 0x1C00BF1D0 (xxxInsertMenuItem.c)
 * Callees:
 *     MNGetPopupFromMenu @ 0x1C0020C18 (MNGetPopupFromMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNGetpItemIndex @ 0x1C0022308 (MNGetpItemIndex.c)
 *     DwmAsyncChildStyleChange @ 0x1C004507C (DwmAsyncChildStyleChange.c)
 *     DwmGetClassStyle @ 0x1C00D9C0C (DwmGetClassStyle.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C01154C4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     xxxMNUpdateShownMenu @ 0x1C02473A0 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxRedrawForSetLPITEMInfo(_QWORD **a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rsi
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  void *v15; // rax
  _QWORD *v17; // [rsp+20h] [rbp-18h] BYREF
  __int64 v18; // [rsp+28h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  v18 = 0LL;
  v17 = (_QWORD *)gSmartObjNullRef;
  v18 = *(_QWORD *)(v5 + 1472);
  *(_QWORD *)(v5 + 1472) = &v18;
  v9 = a1[2];
  if ( !v9 )
    v9 = (_QWORD *)**a1;
  v10 = MNGetPopupFromMenu(v9, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v17, v10);
  if ( !*v17 )
    goto LABEL_18;
  xxxMNUpdateShownMenu(&v17, a2, 1LL);
  v11 = a1[2];
  if ( !v11 )
    v11 = (_QWORD *)**a1;
  if ( (unsigned int)MNGetpItemIndex(v11, a2) != -1 )
  {
LABEL_18:
    if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 40LL) & 0x100) != 0
      && *(_DWORD *)(*(_QWORD *)a2 + 8LL) == 61536
      && *(_QWORD *)(**a1 + 80LL)
      && (unsigned int)IsWindowDesktopComposed(*(_QWORD *)(**a1 + 80LL)) )
    {
      DwmGetClassStyle(*(_QWORD *)(**a1 + 80LL));
      v15 = (void *)ReferenceDwmApiPort(v13, v12, v14);
      DwmAsyncChildStyleChange(v15);
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v17);
}
