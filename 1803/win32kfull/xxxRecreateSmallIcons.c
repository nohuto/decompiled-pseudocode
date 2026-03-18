/*
 * XREFs of xxxRecreateSmallIcons @ 0x1C01FF6A4
 * Callers:
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C006C084 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C002DEDC (IsToplevelWindowDesktopComposed.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C0030C48 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     xxxCreateWindowSmIcon @ 0x1C006ADA8 (xxxCreateWindowSmIcon.c)
 *     DestroyWindowSmIcon @ 0x1C006AE84 (DestroyWindowSmIcon.c)
 *     xxxCreateClassSmIcon @ 0x1C006BF64 (xxxCreateClassSmIcon.c)
 *     SendDwmIconChange @ 0x1C00C4848 (SendDwmIconChange.c)
 *     ClassLock @ 0x1C00ECB2C (ClassLock.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C00F6A00 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     DestroyClassSmIcon @ 0x1C00F7850 (DestroyClassSmIcon.c)
 */

__int64 __fastcall xxxRecreateSmallIcons(ULONG_PTR a1)
{
  __int64 v2; // rdx
  bool v3; // bl
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdx
  struct _CALLPROCDATA **v7; // rbx
  __int64 v8; // rdx
  __int64 ThreadWin32Thread; // rax
  char v10; // bl
  __int64 result; // rax
  __int64 *v12[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v14[5]; // [rsp+40h] [rbp-28h] BYREF

  SmartObjStackRefBase<tagCLS>::Init(v12, *(_QWORD *)(a1 + 112));
  v3 = (unsigned int)DestroyClassSmIcon(v12) && *(_QWORD *)(*(_QWORD *)(a1 + 112) + 80LL);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v12, v2);
  if ( v3 && (unsigned int)ClassLock(*(_QWORD *)(a1 + 112), v14) )
  {
    SmartObjStackRefBase<tagCLS>::Init(v13, *(_QWORD *)(a1 + 112));
    xxxCreateClassSmIcon(v13);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v13, v6);
    v7 = *(struct _CALLPROCDATA ***)(a1 + 112);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8);
    *(_QWORD *)(ThreadWin32Thread + 16) = v14[0];
    ClassUnlockWorker(v7);
  }
  v10 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 23LL) & 0x20;
  if ( (unsigned int)DestroyWindowSmIcon(a1, v4, v5) && !v10 )
    xxxCreateWindowSmIcon(a1, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 272LL), 1LL);
  result = IsToplevelWindowDesktopComposed(a1);
  if ( (_DWORD)result )
    return SendDwmIconChange(a1);
  return result;
}
