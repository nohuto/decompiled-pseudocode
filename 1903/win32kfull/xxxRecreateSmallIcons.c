/*
 * XREFs of xxxRecreateSmallIcons @ 0x1C02403E0
 * Callers:
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00B5D3C (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0022D88 (IsToplevelWindowDesktopComposed.c)
 *     SendDwmIconChange @ 0x1C00483E8 (SendDwmIconChange.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     DestroyClassSmIcon @ 0x1C0094408 (DestroyClassSmIcon.c)
 *     DestroyWindowSmIcon @ 0x1C00972D0 (DestroyWindowSmIcon.c)
 *     xxxCreateClassSmIcon @ 0x1C00B6100 (xxxCreateClassSmIcon.c)
 *     xxxCreateWindowSmIcon @ 0x1C00B9750 (xxxCreateWindowSmIcon.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C0106C8C (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     ClassLock @ 0x1C010B520 (ClassLock.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C01119A0 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 */

__int64 __fastcall xxxRecreateSmallIcons(ULONG_PTR a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  bool v5; // bl
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _CALLPROCDATA **v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 ThreadWin32Thread; // rax
  char v20; // bl
  __int64 v21; // r9
  __int64 result; // rax
  __int64 *v23[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v24[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v25[5]; // [rsp+40h] [rbp-28h] BYREF

  SmartObjStackRefBase<tagCLS>::Init(v23, *(_QWORD *)(a1 + 136));
  v5 = (unsigned int)DestroyClassSmIcon(v23) && *(_QWORD *)(*(_QWORD *)(a1 + 136) + 80LL);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v23, v2, v3, v4);
  if ( v5 )
  {
    v8 = *(_QWORD *)(a1 + 136);
    memset(v25, 0, 24);
    if ( (unsigned int)ClassLock(v8, v25) )
    {
      SmartObjStackRefBase<tagCLS>::Init(v24, *(_QWORD *)(a1 + 136));
      xxxCreateClassSmIcon(v24, v9, v10, v11);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v24, v12, v13, v14);
      v15 = *(struct _CALLPROCDATA ***)(a1 + 136);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v17, v18);
      *(_QWORD *)(ThreadWin32Thread + 16) = v25[0];
      ClassUnlockWorker(v15);
    }
  }
  v20 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 23LL) & 0x20;
  if ( (unsigned int)DestroyWindowSmIcon(a1, v6, v7) && !v20 )
    xxxCreateWindowSmIcon(a1, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 272LL), 1LL, v21);
  result = IsToplevelWindowDesktopComposed(a1);
  if ( (_DWORD)result )
    return SendDwmIconChange(a1);
  return result;
}
