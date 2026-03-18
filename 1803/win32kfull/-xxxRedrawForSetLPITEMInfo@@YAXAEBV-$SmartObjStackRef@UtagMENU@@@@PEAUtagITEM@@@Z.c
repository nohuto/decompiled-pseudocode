/*
 * XREFs of ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00217EC
 * Callers:
 *     xxxInsertMenuItem @ 0x1C0023244 (xxxInsertMenuItem.c)
 *     xxxSetMenuItemInfo @ 0x1C006B998 (xxxSetMenuItemInfo.c)
 * Callees:
 *     DwmGetClassStyle @ 0x1C0009C60 (DwmGetClassStyle.c)
 *     MNGetpItemIndex @ 0x1C00217A4 (MNGetpItemIndex.c)
 *     MNGetPopupFromMenu @ 0x1C002196C (MNGetPopupFromMenu.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0021B98 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     DwmAsyncChildStyleChange @ 0x1C00C3FCC (DwmAsyncChildStyleChange.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     xxxMNUpdateShownMenu @ 0x1C0205A4C (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxRedrawForSetLPITEMInfo(__int64 **a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  void *v13; // rax
  _QWORD *v15; // [rsp+20h] [rbp-18h] BYREF
  __int64 v16; // [rsp+28h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  v16 = 0LL;
  v15 = (_QWORD *)gSmartObjNullRef;
  v16 = *(_QWORD *)(v3 + 1456);
  *(_QWORD *)(v3 + 1456) = &v16;
  v7 = a1[2];
  if ( !v7 )
    v7 = (__int64 *)**a1;
  v8 = MNGetPopupFromMenu(v7, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v15, v8);
  if ( !*v15 )
    goto LABEL_18;
  xxxMNUpdateShownMenu(&v15, a2, 1LL);
  v9 = (__int64)a1[2];
  if ( !v9 )
    v9 = **a1;
  if ( (unsigned int)MNGetpItemIndex(v9, a2) != -1 )
  {
LABEL_18:
    if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 0x100) != 0
      && *(_DWORD *)(*(_QWORD *)a2 + 8LL) == 61536
      && *(_QWORD *)(**a1 + 80)
      && (unsigned int)IsWindowDesktopComposed(*(_QWORD *)(**a1 + 80)) )
    {
      DwmGetClassStyle(*(_QWORD *)(**a1 + 80));
      v13 = (void *)ReferenceDwmApiPort(v11, v10, v12);
      DwmAsyncChildStyleChange(v13);
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v15);
}
