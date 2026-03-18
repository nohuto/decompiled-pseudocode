/*
 * XREFs of xxxMNDismissIfOffMenu @ 0x1C01E6574
 * Callers:
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01B9F2C (-xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0021B08 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0021B98 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     IsModalMenuStarted @ 0x1C01BA7A4 (IsModalMenuStarted.c)
 *     xxxMNFindWindowFromPoint @ 0x1C01E6A2C (xxxMNFindWindowFromPoint.c)
 */

__int64 __fastcall xxxMNDismissIfOffMenu(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // rbx
  __int64 ThreadWin32Thread; // rax
  unsigned int v13; // edi
  __int64 *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD v19[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v20[4]; // [rsp+60h] [rbp-20h] BYREF
  char v21; // [rsp+90h] [rbp+10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v19, 0LL);
  v5 = *(_QWORD *)(a1 + 40);
  if ( *(char *)(v5 + 20) < 0 || *(char *)(v5 + 19) < 0 || !(unsigned int)IsModalMenuStarted(*(_QWORD *)(a1 + 16)) )
    goto LABEL_17;
  v6 = *(_QWORD **)(v4 + 600);
  v7 = v6 ? *v6 : 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v19, v7);
  if ( !*(_QWORD *)v19[0] )
    goto LABEL_17;
  if ( !*(_QWORD *)(*(_QWORD *)v19[0] + 8LL) )
    goto LABEL_17;
  v8 = xxxMNFindWindowFromPoint(v19, &v21, a2);
  v9 = *(_QWORD *)(a1 + 40);
  if ( *(char *)(v9 + 20) < 0 || *(char *)(v9 + 19) < 0 || v8 )
    goto LABEL_17;
  v10 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 600LL);
  if ( v10 )
    v10 = (_QWORD *)*v10;
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v19, (__int64)v10);
  if ( *(_QWORD *)v19[0] && *(_QWORD *)(*(_QWORD *)v19[0] + 8LL) )
  {
    v11 = *(_QWORD *)(*(_QWORD *)v19[0] + 8LL);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
    v13 = 1;
    v20[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v20;
    v20[1] = v11;
    _InterlockedAdd((volatile signed __int32 *)(v11 + 8), 1u);
    v14 = *(__int64 **)(*(_QWORD *)v19[0] + 8LL);
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout(v14, 0x1Fu, 0LL, 0LL, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v16, v15, v17);
  }
  else
  {
LABEL_17:
    v13 = 0;
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v19, v4);
  return v13;
}
