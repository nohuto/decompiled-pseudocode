/*
 * XREFs of xxxMNDismissIfOffMenu @ 0x1C0223A90
 * Callers:
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01F2740 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00EB5EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00EFC04 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     IsModalMenuStarted @ 0x1C01F2FD4 (IsModalMenuStarted.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0223FC0 (xxxMNFindWindowFromPoint.c)
 */

__int64 __fastcall xxxMNDismissIfOffMenu(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  __int64 v12; // rbx
  __int64 ThreadWin32Thread; // rax
  unsigned int v14; // ebx
  __int64 *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD v20[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v21; // [rsp+60h] [rbp-20h] BYREF
  __int64 v22; // [rsp+68h] [rbp-18h]
  __int64 v23; // [rsp+70h] [rbp-10h]
  char v24; // [rsp+90h] [rbp+10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v20, 0LL);
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v6 = *(_QWORD *)(a1 + 40);
  if ( *(char *)(v6 + 20) < 0 || *(char *)(v6 + 19) < 0 || !(unsigned int)IsModalMenuStarted(*(_QWORD *)(a1 + 16)) )
    goto LABEL_17;
  v7 = *(_QWORD **)(v4 + 600);
  v8 = v7 ? *v7 : 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v20, v8);
  if ( !*(_QWORD *)v20[0] )
    goto LABEL_17;
  if ( !*(_QWORD *)(*(_QWORD *)v20[0] + 8LL) )
    goto LABEL_17;
  v9 = xxxMNFindWindowFromPoint(v20, &v24, a2);
  v10 = *(_QWORD *)(a1 + 40);
  if ( *(char *)(v10 + 20) < 0 || *(char *)(v10 + 19) < 0 || v9 )
    goto LABEL_17;
  v11 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 600LL);
  if ( v11 )
    v11 = (_QWORD *)*v11;
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v20, (__int64)v11);
  if ( *(_QWORD *)v20[0] && *(_QWORD *)(*(_QWORD *)v20[0] + 8LL) )
  {
    v12 = *(_QWORD *)(*(_QWORD *)v20[0] + 8LL);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v5);
    v21 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v21;
    v22 = v12;
    HMLockObject(v12);
    v14 = 1;
    v15 = *(__int64 **)(*(_QWORD *)v20[0] + 8LL);
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout(v15, 0x1Fu, 0LL, 0LL, 0, 0, 0LL, 1u, 1);
    ThreadUnlock1(v17, v16, v18);
  }
  else
  {
LABEL_17:
    v14 = 0;
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v20, v4, v5);
  return v14;
}
