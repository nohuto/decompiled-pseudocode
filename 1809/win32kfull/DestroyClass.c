/*
 * XREFs of DestroyClass @ 0x1C0022594
 * Callers:
 *     DereferenceClass @ 0x1C0021A20 (DereferenceClass.c)
 *     _UnregisterClass @ 0x1C0022334 (_UnregisterClass.c)
 *     DestroyClass @ 0x1C0022594 (DestroyClass.c)
 *     FinalUserInit @ 0x1C00EBC78 (FinalUserInit.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C0109790 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     DestroyProcessesClasses @ 0x1C0116A80 (DestroyProcessesClasses.c)
 *     _WOWCleanup @ 0x1C01FD010 (_WOWCleanup.c)
 *     _WOWModuleUnload @ 0x1C01FD140 (_WOWModuleUnload.c)
 * Callees:
 *     DestroyClass @ 0x1C0022594 (DestroyClass.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?IsClassAtomPinned@@YA_NG@Z @ 0x1C0022810 (-IsClassAtomPinned@@YA_NG@Z.c)
 *     ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1C00232D4 (-IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00FEB14 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     ?DestroyClassBrush@@YAXAEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x1C010134C (-DestroyClassBrush@@YAXAEBV-$SmartObjStackRef@UtagCLS@@@@@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z @ 0x1C010D500 (-ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z.c)
 *     DestroyClassSmIcon @ 0x1C011587C (DestroyClassSmIcon.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z @ 0x1C0116A3C (-ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z.c)
 *     ?UnlockAndFreeCPDs@@YAXPEAPEAU_CALLPROCDATA@@@Z @ 0x1C0157764 (-UnlockAndFreeCPDs@@YAXPEAPEAU_CALLPROCDATA@@@Z.c)
 */

__int64 __fastcall DestroyClass(struct tagPROCESSINFO *a1, struct _CALLPROCDATA ***a2)
{
  struct _CALLPROCDATA **v2; // rbx
  unsigned __int16 v4; // cx
  unsigned __int16 v5; // cx
  struct _CALLPROCDATA *v6; // rcx
  struct _CALLPROCDATA *v7; // rdx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF
  struct tagDESKTOP *v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = *a2;
  *a2 = (struct _CALLPROCDATA **)**a2;
  if ( v2 == (struct _CALLPROCDATA **)v2[7] )
  {
    while ( v2[8] )
      DestroyClass(a1);
    if ( !IsClassAtomPinned(*(_WORD *)v2[1]) && v4 >= 0xC000u && !IsClassAtomRegistered(a1, v4) )
      UserDeleteAtom(*(unsigned __int16 *)v2[1]);
    if ( (!IsClassAtomPinned(*((_WORD *)v2[1] + 1)) || v5 >= 0xC000u) && !IsClassAtomRegistered(a1, v5) )
      UserDeleteAtom(*((unsigned __int16 *)v2[1] + 1));
    v6 = v2[12];
    if ( ((unsigned __int64)v6 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      Win32FreePool(v6);
    v7 = v2[5];
    if ( v7 )
      DestroyCacheDC(0LL, *((_QWORD *)v7 + 1));
    SmartObjStackRefBase<tagCLS>::Init(v9, v2);
    DestroyClassBrush(v9);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v9);
  }
  SmartObjStackRefBase<tagCLS>::Init(v9, v2);
  DestroyClassSmIcon(v9);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v9);
  HMAssignmentUnlock(v2 + 10);
  *((_QWORD *)v2[1] + 7) = 0LL;
  HMAssignmentUnlock(v2 + 14);
  HMAssignmentUnlock(v2 + 11);
  if ( v2[6] )
    UnlockAndFreeCPDs(v2 + 6);
  v10 = v2[4];
  v2[4] = 0LL;
  ClassFree(v10, (char *)v2[13]);
  ClassFree(v10, (struct tagCLS *)v2);
  return UnlockObjectAssignment(&v10);
}
