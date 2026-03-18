/*
 * XREFs of xxxMNDismissIfOffMenu @ 0x1C0223FD0
 * Callers:
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01F28C0 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C011022C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C01154C4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     IsModalMenuStarted @ 0x1C01F3154 (IsModalMenuStarted.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0224500 (xxxMNFindWindowFromPoint.c)
 */

__int64 __fastcall xxxMNDismissIfOffMenu(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  __int64 v13; // rbx
  __int64 ThreadWin32Thread; // rax
  unsigned int v15; // ebx
  __int64 *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD v21[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v22; // [rsp+60h] [rbp-20h] BYREF
  __int64 v23; // [rsp+68h] [rbp-18h]
  __int64 v24; // [rsp+70h] [rbp-10h]
  char v25; // [rsp+90h] [rbp+10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v21, 0LL);
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v7 = *(_QWORD *)(a1 + 40);
  if ( *(char *)(v7 + 20) < 0 || *(char *)(v7 + 19) < 0 || !(unsigned int)IsModalMenuStarted(*(_QWORD *)(a1 + 16)) )
    goto LABEL_17;
  v8 = *(_QWORD **)(v4 + 600);
  v9 = v8 ? *v8 : 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v21, v9);
  if ( !*(_QWORD *)v21[0] )
    goto LABEL_17;
  if ( !*(_QWORD *)(*(_QWORD *)v21[0] + 8LL) )
    goto LABEL_17;
  v10 = xxxMNFindWindowFromPoint(v21, &v25, a2);
  v11 = *(_QWORD *)(a1 + 40);
  if ( *(char *)(v11 + 20) < 0 || *(char *)(v11 + 19) < 0 || v10 )
    goto LABEL_17;
  v12 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 600LL);
  if ( v12 )
    v12 = (_QWORD *)*v12;
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v21, (__int64)v12);
  if ( *(_QWORD *)v21[0] && *(_QWORD *)(*(_QWORD *)v21[0] + 8LL) )
  {
    v13 = *(_QWORD *)(*(_QWORD *)v21[0] + 8LL);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v5, v6);
    v22 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v22;
    v23 = v13;
    HMLockObject(v13);
    v15 = 1;
    v16 = *(__int64 **)(*(_QWORD *)v21[0] + 8LL);
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout(v16, 0x1Fu, 0LL, 0LL, 0, 0, 0LL, 1u, 1);
    ThreadUnlock1(v18, v17, v19);
  }
  else
  {
LABEL_17:
    v15 = 0;
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v21, v4, v5, v6);
  return v15;
}
