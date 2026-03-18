/*
 * XREFs of xxxSendMenuSelect @ 0x1C024BC54
 * Callers:
 *     xxxMNCancel @ 0x1C0222EF4 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C02236C0 (xxxMNCloseHierarchy.c)
 *     xxxMNDoubleClick @ 0x1C0223C50 (xxxMNDoubleClick.c)
 *     xxxMNSelectItem @ 0x1C0226024 (xxxMNSelectItem.c)
 *     xxxMNInvertItem @ 0x1C024A2A4 (xxxMNInvertItem.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C001FA80 (xxxSendNotifyMessage.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x1C005FCB8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     xxxCallMsgFilter @ 0x1C00DD700 (xxxCallMsgFilter.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

_QWORD *__fastcall xxxSendMenuSelect(__int64 *a1, struct tagWND *a2, __int64 **a3, int a4, __int64 a5)
{
  __int64 v6; // rsi
  _QWORD *v9; // rdx
  int v10; // ebx
  unsigned int v11; // ebx
  int v12; // r15d
  int v13; // ecx
  __int64 *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  struct _LARGE_STRING **v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned int v20; // ebx
  _QWORD v22[2]; // [rsp+38h] [rbp-31h] BYREF
  struct _LARGE_STRING **v23; // [rsp+48h] [rbp-21h]
  __int64 v24[3]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v25; // [rsp+68h] [rbp-1h] BYREF
  int v26; // [rsp+70h] [rbp+7h]
  int v27; // [rsp+74h] [rbp+Bh]
  unsigned __int64 v28; // [rsp+78h] [rbp+Fh]
  struct _LARGE_STRING *v29; // [rsp+80h] [rbp+17h]
  __int128 v30; // [rsp+88h] [rbp+1Fh]

  v6 = a4;
  v27 = 0;
  v30 = 0LL;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v22, a3, (__int64)a3);
  if ( (int)v6 < 0 || *(_DWORD *)(*(_QWORD *)(**a3 + 40) + 44LL) <= (unsigned int)v6 )
  {
    v14 = a3[2];
    if ( !v14 )
      v14 = (__int64 *)**a3;
    SmartObjStackRefBase<tagMENU>::Init(v24, 0LL);
    v24[2] = -1LL;
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v24, v15, v16);
    v23 = 0LL;
    LOWORD(v12) = 0;
    SmartObjStackRefBase<tagMENU>::operator=(v22, 0LL);
    LODWORD(v6) = -1;
    v11 = 0xFFFF;
    if ( v14 != (__int64 *)-1LL )
      v11 = 0;
  }
  else
  {
    v9 = (_QWORD *)(*(_QWORD *)(**a3 + 88) + 96 * v6);
    v10 = *(_DWORD *)*v9 & 0x6B64 | *(_DWORD *)(*v9 + 4LL) & 0x8B;
    if ( v9[2] )
      v10 |= 0x10u;
    v11 = v10 & 0xFFFF5FFF;
    LOWORD(v12) = v6;
    if ( (v11 & 0x10) == 0 )
      v12 = *(_DWORD *)(*v9 + 8LL);
    if ( a5 )
    {
      v13 = v11 | 0x8000;
      if ( *(_DWORD *)(a5 + 20) != -1 )
        v13 = v11;
      v11 = v13;
      if ( (*(_DWORD *)(a5 + 8) & 2) != 0 )
        v11 = v13 | 0x2000;
    }
  }
  if ( a1 )
    v25 = *a1;
  else
    v25 = 0LL;
  v26 = 287;
  v28 = (unsigned __int16)v12 | (unsigned __int64)(v11 << 16);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v22) )
  {
    v29 = 0LL;
  }
  else
  {
    v17 = v23;
    if ( !v23 )
      v17 = *(struct _LARGE_STRING ***)v22[0];
    v29 = *v17;
  }
  if ( !(unsigned int)xxxCallMsgFilter((__int64)&v25, 2) )
    xxxSendNotifyMessage((struct tagWND *)a1, 0x11Fu, v28, v29, 1);
  if ( a2 )
  {
    if ( a2 == (struct tagWND *)a1 )
      v20 = (v11 >> 12) | 0xFFFFFFFD;
    else
      v20 = -4;
    xxxWindowEvent(0x8005u, a2, v20, v6 + 1, 0);
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v22, v18, v19);
}
