/*
 * XREFs of xxxSendMenuSelect @ 0x1C024C394
 * Callers:
 *     xxxMNCancel @ 0x1C0223434 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0223C00 (xxxMNCloseHierarchy.c)
 *     xxxMNDoubleClick @ 0x1C0224190 (xxxMNDoubleClick.c)
 *     xxxMNSelectItem @ 0x1C0226564 (xxxMNSelectItem.c)
 *     xxxMNInvertItem @ 0x1C024A9E4 (xxxMNInvertItem.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C001CE70 (xxxSendNotifyMessage.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x1C00BE5D8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00BFB98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     xxxCallMsgFilter @ 0x1C0101B80 (xxxCallMsgFilter.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

_QWORD *__fastcall xxxSendMenuSelect(__int64 *a1, struct tagWND *a2, __int64 **a3, __int64 a4, __int64 a5)
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
  __int64 v17; // r9
  struct _LARGE_STRING **v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // ebx
  _QWORD v24[2]; // [rsp+38h] [rbp-31h] BYREF
  struct _LARGE_STRING **v25; // [rsp+48h] [rbp-21h]
  __int64 v26[3]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v27; // [rsp+68h] [rbp-1h] BYREF
  int v28; // [rsp+70h] [rbp+7h]
  int v29; // [rsp+74h] [rbp+Bh]
  unsigned __int64 v30; // [rsp+78h] [rbp+Fh]
  struct _LARGE_STRING *v31; // [rsp+80h] [rbp+17h]
  __int128 v32; // [rsp+88h] [rbp+1Fh]

  v6 = (int)a4;
  v29 = 0;
  v32 = 0LL;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v24, a3, (__int64)a3, a4);
  if ( (int)v6 < 0 || *(_DWORD *)(*(_QWORD *)(**a3 + 40) + 44LL) <= (unsigned int)v6 )
  {
    v14 = a3[2];
    if ( !v14 )
      v14 = (__int64 *)**a3;
    SmartObjStackRefBase<tagMENU>::Init(v26, 0LL);
    v26[2] = -1LL;
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v26, v15, v16, v17);
    v25 = 0LL;
    LOWORD(v12) = 0;
    SmartObjStackRefBase<tagMENU>::operator=(v24, 0LL);
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
    v27 = *a1;
  else
    v27 = 0LL;
  v28 = 287;
  v30 = (unsigned __int16)v12 | (unsigned __int64)(v11 << 16);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v24) )
  {
    v31 = 0LL;
  }
  else
  {
    v18 = v25;
    if ( !v25 )
      v18 = *(struct _LARGE_STRING ***)v24[0];
    v31 = *v18;
  }
  if ( !(unsigned int)xxxCallMsgFilter((__int64)&v27, 2) )
    xxxSendNotifyMessage((struct tagWND *)a1, 0x11Fu, v30, v31, 1);
  if ( a2 )
  {
    if ( a2 == (struct tagWND *)a1 )
      v22 = (v11 >> 12) | 0xFFFFFFFD;
    else
      v22 = -4;
    xxxWindowEvent(0x8005u, a2, v22, (unsigned int)(v6 + 1), 0);
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v24, v19, v20, v21);
}
