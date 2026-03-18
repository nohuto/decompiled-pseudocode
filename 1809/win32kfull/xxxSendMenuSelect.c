/*
 * XREFs of xxxSendMenuSelect @ 0x1C0233710
 * Callers:
 *     xxxMNCancel @ 0x1C020B900 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C020C100 (xxxMNCloseHierarchy.c)
 *     xxxMNDoubleClick @ 0x1C020C670 (xxxMNDoubleClick.c)
 *     xxxMNSelectItem @ 0x1C020E8F4 (xxxMNSelectItem.c)
 *     xxxMNInvertItem @ 0x1C0231D7C (xxxMNInvertItem.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0069C30 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     xxxSendNotifyMessage @ 0x1C00D14F0 (xxxSendNotifyMessage.c)
 *     xxxCallMsgFilter @ 0x1C00D2880 (xxxCallMsgFilter.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x1C010C02C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

_QWORD *__fastcall xxxSendMenuSelect(struct tagWND *a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v6; // rdi
  int v9; // r15d
  _QWORD *v10; // rdx
  int v11; // ebx
  unsigned int v12; // ebx
  int v13; // ecx
  __int64 v14; // rsi
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // ebx
  _QWORD v20[2]; // [rsp+38h] [rbp-31h] BYREF
  _QWORD *v21; // [rsp+48h] [rbp-21h]
  _QWORD v22[3]; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v23[6]; // [rsp+68h] [rbp-1h] BYREF

  v6 = a4;
  memset(v23, 0, sizeof(v23));
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v20, a3);
  if ( (int)v6 < 0 || *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a3 + 40LL) + 44LL) <= (unsigned int)v6 )
  {
    v14 = *(_QWORD *)(a3 + 16);
    if ( !v14 )
      v14 = **(_QWORD **)a3;
    SmartObjStackRefBase<tagMENU>::Init(v22, 0LL);
    v22[2] = -1LL;
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v22, v15);
    v21 = 0LL;
    LOWORD(v9) = 0;
    SmartObjStackRefBase<tagMENU>::operator=(v20, 0LL);
    LODWORD(v6) = -1;
    v12 = 0xFFFF;
    if ( v14 != -1 )
      v12 = 0;
  }
  else
  {
    LOWORD(v9) = v6;
    v10 = (_QWORD *)(*(_QWORD *)(**(_QWORD **)a3 + 88LL) + 96 * v6);
    v11 = *(_DWORD *)*v10 & 0x6B64 | *(_DWORD *)(*v10 + 4LL) & 0x8B | 0x10;
    if ( !v10[2] )
      v11 = *(_DWORD *)*v10 & 0x6B64 | *(_DWORD *)(*v10 + 4LL) & 0x8B;
    v12 = v11 & 0xFFFF5FFF;
    if ( (v12 & 0x10) == 0 )
      v9 = *(_DWORD *)(*v10 + 8LL);
    if ( a5 )
    {
      v13 = v12 | 0x8000;
      if ( *(_DWORD *)(a5 + 20) != -1 )
        v13 = v12;
      v12 = v13;
      if ( (*(_DWORD *)(a5 + 8) & 2) != 0 )
        v12 = v13 | 0x2000;
    }
  }
  if ( a1 )
    v23[0] = *(_QWORD *)a1;
  else
    v23[0] = 0LL;
  LODWORD(v23[1]) = 287;
  v23[2] = (unsigned __int16)v9 | (unsigned __int64)(v12 << 16);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v20) )
  {
    v23[3] = 0LL;
  }
  else
  {
    v16 = v21;
    if ( !v21 )
      v16 = *(_QWORD **)v20[0];
    v23[3] = *v16;
  }
  if ( !(unsigned int)xxxCallMsgFilter((__int64)v23, 2) )
    xxxSendNotifyMessage(a1, 0x11Fu, v23[2], (struct _LARGE_STRING *)v23[3], 1);
  if ( a2 )
  {
    if ( (struct tagWND *)a2 == a1 )
      v18 = (v12 >> 12) | 0xFFFFFFFD;
    else
      v18 = -4;
    xxxWindowEvent(0x8005u, a2, v18, v6 + 1, 0);
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v20, v17);
}
