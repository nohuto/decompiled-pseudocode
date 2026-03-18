/*
 * XREFs of xxxRecreateSmallIcons @ 0x1C023FDC0
 * Callers:
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C0056AEC (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C00291F8 (IsToplevelWindowDesktopComposed.c)
 *     DestroyClassSmIcon @ 0x1C0035138 (DestroyClassSmIcon.c)
 *     DestroyWindowSmIcon @ 0x1C0038000 (DestroyWindowSmIcon.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxCreateClassSmIcon @ 0x1C0056EB0 (xxxCreateClassSmIcon.c)
 *     SendDwmIconChange @ 0x1C008CDB8 (SendDwmIconChange.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00E108C (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     ClassLock @ 0x1C00E5AC0 (ClassLock.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C00EC850 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     xxxCreateWindowSmIcon @ 0x1C0109E88 (xxxCreateWindowSmIcon.c)
 */

__int64 __fastcall xxxRecreateSmallIcons(__int64 *BugCheckParameter2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  bool v4; // bl
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _CALLPROCDATA **v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 ThreadWin32Thread; // rax
  char v16; // bl
  __int64 result; // rax
  __int64 *v18[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v19[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v20[5]; // [rsp+40h] [rbp-28h] BYREF

  SmartObjStackRefBase<tagCLS>::Init(v18, BugCheckParameter2[17]);
  v4 = (unsigned int)DestroyClassSmIcon(v18) && *(_QWORD *)(BugCheckParameter2[17] + 80);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v18, v2, v3);
  if ( v4 )
  {
    v7 = BugCheckParameter2[17];
    memset(v20, 0, 24);
    if ( (unsigned int)ClassLock(v7, v20) )
    {
      SmartObjStackRefBase<tagCLS>::Init(v19, BugCheckParameter2[17]);
      xxxCreateClassSmIcon(v19, v8, v9);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v19, v10, v11);
      v12 = (struct _CALLPROCDATA **)BugCheckParameter2[17];
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14);
      *(_QWORD *)(ThreadWin32Thread + 16) = v20[0];
      ClassUnlockWorker(v12);
    }
  }
  v16 = *(_BYTE *)(BugCheckParameter2[5] + 23) & 0x20;
  if ( (unsigned int)DestroyWindowSmIcon((__int64)BugCheckParameter2, v5, v6) && !v16 )
    xxxCreateWindowSmIcon((__int64)BugCheckParameter2, *(_QWORD *)(BugCheckParameter2[5] + 272), 1);
  result = IsToplevelWindowDesktopComposed((__int64)BugCheckParameter2);
  if ( (_DWORD)result )
    return SendDwmIconChange(BugCheckParameter2);
  return result;
}
