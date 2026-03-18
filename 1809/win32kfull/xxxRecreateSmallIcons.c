/*
 * XREFs of xxxRecreateSmallIcons @ 0x1C0227F50
 * Callers:
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00B3CA0 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 * Callees:
 *     DestroyWindowSmIcon @ 0x1C001D2E8 (DestroyWindowSmIcon.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00431A8 (IsToplevelWindowDesktopComposed.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxCreateClassSmIcon @ 0x1C00B6560 (xxxCreateClassSmIcon.c)
 *     SendDwmIconChange @ 0x1C00B7154 (SendDwmIconChange.c)
 *     xxxCreateWindowSmIcon @ 0x1C00B8310 (xxxCreateWindowSmIcon.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00FEB14 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     ClassLock @ 0x1C0104ADC (ClassLock.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C0109790 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     DestroyClassSmIcon @ 0x1C011587C (DestroyClassSmIcon.c)
 */

__int64 __fastcall xxxRecreateSmallIcons(ULONG_PTR a1)
{
  __int64 v2; // rdx
  bool v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rdx
  struct _CALLPROCDATA **v6; // rbx
  __int64 v7; // rdx
  __int64 ThreadWin32Thread; // rax
  char v9; // bl
  __int64 result; // rax
  __int64 *v11[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v13[5]; // [rsp+40h] [rbp-28h] BYREF

  SmartObjStackRefBase<tagCLS>::Init(v11, *(_QWORD *)(a1 + 112));
  v3 = (unsigned int)DestroyClassSmIcon(v11) && *(_QWORD *)(*(_QWORD *)(a1 + 112) + 80LL);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v11, v2);
  if ( v3 && (unsigned int)ClassLock(*(_QWORD *)(a1 + 112), v13) )
  {
    SmartObjStackRefBase<tagCLS>::Init(v12, *(_QWORD *)(a1 + 112));
    xxxCreateClassSmIcon(v12);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v12, v5);
    v6 = *(struct _CALLPROCDATA ***)(a1 + 112);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7);
    *(_QWORD *)(ThreadWin32Thread + 16) = v13[0];
    ClassUnlockWorker(v6);
  }
  v9 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 23LL) & 0x20;
  if ( (unsigned int)DestroyWindowSmIcon(a1, v4) && !v9 )
    xxxCreateWindowSmIcon(a1, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 272LL), 1);
  result = IsToplevelWindowDesktopComposed(a1);
  if ( (_DWORD)result )
    return SendDwmIconChange(a1);
  return result;
}
