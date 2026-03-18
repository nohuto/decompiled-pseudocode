/*
 * XREFs of DestroyClass @ 0x1C0097F80
 * Callers:
 *     _UnregisterClass @ 0x1C00314FC (_UnregisterClass.c)
 *     DereferenceClass @ 0x1C0097690 (DereferenceClass.c)
 *     DestroyClass @ 0x1C0097F80 (DestroyClass.c)
 *     FinalUserInit @ 0x1C00E0598 (FinalUserInit.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C01119A0 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     DestroyProcessesClasses @ 0x1C011F4E0 (DestroyProcessesClasses.c)
 *     _WOWCleanup @ 0x1C0214550 (_WOWCleanup.c)
 *     _WOWModuleUnload @ 0x1C0214680 (_WOWModuleUnload.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?DestroyClassBrush@@YAXAEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x1C0093E1C (-DestroyClassBrush@@YAXAEBV-$SmartObjStackRef@UtagCLS@@@@@Z.c)
 *     DestroyClassSmIcon @ 0x1C0094408 (DestroyClassSmIcon.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z @ 0x1C0094478 (-ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z @ 0x1C00944B8 (-ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z.c)
 *     ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1C0095D38 (-IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z.c)
 *     DestroyClass @ 0x1C0097F80 (DestroyClass.c)
 *     ?IsClassAtomPinned@@YA_NG@Z @ 0x1C0098140 (-IsClassAtomPinned@@YA_NG@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C0106C8C (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     ?UnlockAndFreeCPDs@@YAXPEAPEAU_CALLPROCDATA@@@Z @ 0x1C015E140 (-UnlockAndFreeCPDs@@YAXPEAPEAU_CALLPROCDATA@@@Z.c)
 */

__int64 __fastcall DestroyClass(struct tagPROCESSINFO *a1, struct _CALLPROCDATA ***a2)
{
  struct _CALLPROCDATA **v2; // rbx
  __int16 v4; // cx
  __int16 v5; // cx
  struct _CALLPROCDATA *v6; // rcx
  struct _CALLPROCDATA *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v16[3]; // [rsp+20h] [rbp-18h] BYREF
  struct tagDESKTOP *v17; // [rsp+48h] [rbp+10h] BYREF

  v2 = *a2;
  *a2 = (struct _CALLPROCDATA **)**a2;
  if ( v2 == (struct _CALLPROCDATA **)v2[7] )
  {
    while ( v2[8] )
      DestroyClass(a1);
    if ( !IsClassAtomPinned(*(_WORD *)v2[1]) && (unsigned __int16)v4 >= 0xC000u && !IsClassAtomRegistered(a1, v4) )
      UserDeleteAtom(*(unsigned __int16 *)v2[1]);
    if ( (!IsClassAtomPinned(*((_WORD *)v2[1] + 1)) || (unsigned __int16)v5 >= 0xC000u)
      && !IsClassAtomRegistered(a1, v5) )
    {
      UserDeleteAtom(*((unsigned __int16 *)v2[1] + 1));
    }
    v6 = v2[12];
    if ( ((unsigned __int64)v6 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      Win32FreePool(v6);
    v7 = v2[5];
    if ( v7 )
      DestroyCacheDC(0LL, *((_QWORD *)v7 + 1));
    SmartObjStackRefBase<tagCLS>::Init(v16, v2);
    DestroyClassBrush((__int64)v16, v8);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v16, v9, v10, v11);
  }
  SmartObjStackRefBase<tagCLS>::Init(v16, v2);
  DestroyClassSmIcon(v16);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v16, v12, v13, v14);
  HMAssignmentUnlock(v2 + 10);
  *((_QWORD *)v2[1] + 7) = 0LL;
  HMAssignmentUnlock(v2 + 14);
  HMAssignmentUnlock(v2 + 11);
  if ( v2[6] )
    UnlockAndFreeCPDs(v2 + 6);
  v17 = v2[4];
  v2[4] = 0LL;
  ClassFree((PVOID *)v17, (char *)v2[13]);
  ClassFree((PVOID *)v17, (PVOID *)v2);
  return UnlockObjectAssignment(&v17);
}
