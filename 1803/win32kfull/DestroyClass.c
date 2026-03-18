/*
 * XREFs of DestroyClass @ 0x1C0030804
 * Callers:
 *     DestroyClass @ 0x1C0030804 (DestroyClass.c)
 *     _UnregisterClass @ 0x1C0030D3C (_UnregisterClass.c)
 *     DereferenceClass @ 0x1C0035F90 (DereferenceClass.c)
 *     FinalUserInit @ 0x1C00B4064 (FinalUserInit.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C00F6A00 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     DestroyProcessesClasses @ 0x1C00F9790 (DestroyProcessesClasses.c)
 *     _WOWCleanup @ 0x1C01D8200 (_WOWCleanup.c)
 *     _WOWModuleUnload @ 0x1C01D8320 (_WOWModuleUnload.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     DestroyClass @ 0x1C0030804 (DestroyClass.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C0030C48 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     ?IsClassAtomPinned@@YA_NG@Z @ 0x1C0030D18 (-IsClassAtomPinned@@YA_NG@Z.c)
 *     ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1C00DBD94 (-IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z.c)
 *     ?DestroyClassBrush@@YAXAEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x1C00E5FA4 (-DestroyClassBrush@@YAXAEBV-$SmartObjStackRef@UtagCLS@@@@@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z @ 0x1C00F10AC (-ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z.c)
 *     DestroyClassSmIcon @ 0x1C00F7850 (DestroyClassSmIcon.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z @ 0x1C00F8A60 (-ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z.c)
 *     ?UnlockAndFreeCPDs@@YAXPEAPEAU_CALLPROCDATA@@@Z @ 0x1C0136574 (-UnlockAndFreeCPDs@@YAXPEAPEAU_CALLPROCDATA@@@Z.c)
 */

__int64 __fastcall DestroyClass(struct tagPROCESSINFO *a1, struct _CALLPROCDATA ***a2)
{
  struct _CALLPROCDATA **v2; // rbx
  unsigned __int16 v4; // cx
  unsigned __int16 v5; // cx
  struct _CALLPROCDATA *v6; // rcx
  struct _CALLPROCDATA *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF
  struct tagDESKTOP *v12; // [rsp+48h] [rbp+10h] BYREF

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
    SmartObjStackRefBase<tagCLS>::Init(v11, v2);
    DestroyClassBrush(v11);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v11, v8);
  }
  SmartObjStackRefBase<tagCLS>::Init(v11, v2);
  DestroyClassSmIcon(v11);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v11, v9);
  HMAssignmentUnlock(v2 + 10);
  *((_QWORD *)v2[1] + 7) = 0LL;
  HMAssignmentUnlock(v2 + 14);
  HMAssignmentUnlock(v2 + 11);
  if ( v2[6] )
    UnlockAndFreeCPDs(v2 + 6);
  v12 = v2[4];
  v2[4] = 0LL;
  ClassFree(v12, (char *)v2[13]);
  ClassFree(v12, (struct tagCLS *)v2);
  return UnlockObjectAssignment(&v12);
}
