/*
 * XREFs of DestroyClass @ 0x1C0038CB0
 * Callers:
 *     _UnregisterClass @ 0x1C0026ABC (_UnregisterClass.c)
 *     DereferenceClass @ 0x1C00383C0 (DereferenceClass.c)
 *     DestroyClass @ 0x1C0038CB0 (DestroyClass.c)
 *     FinalUserInit @ 0x1C00801F4 (FinalUserInit.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C00EC850 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     DestroyProcessesClasses @ 0x1C00FA1C0 (DestroyProcessesClasses.c)
 *     _WOWCleanup @ 0x1C0214010 (_WOWCleanup.c)
 *     _WOWModuleUnload @ 0x1C0214140 (_WOWModuleUnload.c)
 * Callees:
 *     ?DestroyClassBrush@@YAXAEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x1C0034B44 (-DestroyClassBrush@@YAXAEBV-$SmartObjStackRef@UtagCLS@@@@@Z.c)
 *     DestroyClassSmIcon @ 0x1C0035138 (DestroyClassSmIcon.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z @ 0x1C00351A8 (-ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z @ 0x1C00351E8 (-ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z.c)
 *     ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1C0036A70 (-IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z.c)
 *     DestroyClass @ 0x1C0038CB0 (DestroyClass.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?IsClassAtomPinned@@YA_NG@Z @ 0x1C0038F18 (-IsClassAtomPinned@@YA_NG@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00E108C (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     ?UnlockAndFreeCPDs@@YAXPEAPEAU_CALLPROCDATA@@@Z @ 0x1C015F0F0 (-UnlockAndFreeCPDs@@YAXPEAPEAU_CALLPROCDATA@@@Z.c)
 */

__int64 __fastcall DestroyClass(struct tagPROCESSINFO *a1, struct _CALLPROCDATA ***a2)
{
  struct _CALLPROCDATA **v2; // rbx
  __int16 v4; // cx
  __int16 v5; // cx
  struct _CALLPROCDATA *v6; // rcx
  struct _CALLPROCDATA *v7; // rdx
  __int64 v8; // rdx
  __int64 *v10[3]; // [rsp+20h] [rbp-18h] BYREF
  struct tagDESKTOP *v11; // [rsp+48h] [rbp+10h] BYREF

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
    SmartObjStackRefBase<tagCLS>::Init(v10, v2);
    DestroyClassBrush((__int64)v10, v8);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v10);
  }
  SmartObjStackRefBase<tagCLS>::Init(v10, v2);
  DestroyClassSmIcon(v10);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v10);
  HMAssignmentUnlock(v2 + 10);
  *((_QWORD *)v2[1] + 7) = 0LL;
  HMAssignmentUnlock(v2 + 14);
  HMAssignmentUnlock(v2 + 11);
  if ( v2[6] )
    UnlockAndFreeCPDs(v2 + 6);
  v11 = v2[4];
  v2[4] = 0LL;
  ClassFree((PVOID *)v11, (char *)v2[13]);
  ClassFree((PVOID *)v11, (PVOID *)v2);
  return UnlockObjectAssignment(&v11);
}
