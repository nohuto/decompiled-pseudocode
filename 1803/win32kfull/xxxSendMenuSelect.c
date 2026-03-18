/*
 * XREFs of xxxSendMenuSelect @ 0x1C020A438
 * Callers:
 *     xxxMNCancel @ 0x1C01E59BC (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C01E61D0 (xxxMNCloseHierarchy.c)
 *     xxxMNDoubleClick @ 0x1C01E6710 (xxxMNDoubleClick.c)
 *     xxxMNSelectItem @ 0x1C01E8994 (xxxMNSelectItem.c)
 *     xxxMNInvertItem @ 0x1C0208B28 (xxxMNInvertItem.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x1C0026290 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00262C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxSendNotifyMessage @ 0x1C0060D20 (xxxSendNotifyMessage.c)
 *     xxxCallMsgFilter @ 0x1C0129564 (xxxCallMsgFilter.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

_QWORD *__fastcall xxxSendMenuSelect(struct tagWND *a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v6; // rdi
  int v9; // r14d
  _QWORD *v10; // rdx
  _DWORD *v11; // r8
  int v12; // ecx
  __int64 v13; // rax
  int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // ebx
  int v17; // ecx
  int v18; // ebx
  __int64 v19; // rdi
  __int64 v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // rdx
  unsigned int v23; // ebx
  _QWORD v25[2]; // [rsp+38h] [rbp-21h] BYREF
  _QWORD *v26; // [rsp+48h] [rbp-11h]
  _QWORD v27[3]; // [rsp+50h] [rbp-9h] BYREF
  _QWORD v28[6]; // [rsp+68h] [rbp+Fh] BYREF

  v6 = a4;
  memset(v28, 0, sizeof(v28));
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>((__int64)v25, a3);
  if ( (int)v6 < 0 || *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a3 + 40LL) + 44LL) <= (unsigned int)v6 )
  {
    v19 = *(_QWORD *)(a3 + 16);
    if ( !v19 )
      v19 = **(_QWORD **)a3;
    SmartObjStackRefBase<tagMENU>::Init(v27, 0LL);
    v27[2] = -1LL;
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v27, v20);
    v16 = 0;
    if ( v19 == -1 )
      v16 = 0xFFFF;
    LOWORD(v9) = 0;
    v26 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v25, 0LL);
    LODWORD(v6) = -1;
  }
  else
  {
    LOWORD(v9) = v6;
    v10 = (_QWORD *)(*(_QWORD *)(**(_QWORD **)a3 + 88LL) + 96 * v6);
    v11 = (_DWORD *)*v10;
    v12 = *(_DWORD *)*v10 & 0x6B64 | *(_DWORD *)(*v10 + 4LL) & 0x8B;
    v13 = v10[2];
    v14 = v12 | 0x10;
    if ( !v13 )
      v14 = v12;
    v15 = v14 & 0xFFFF5FFF;
    v16 = v15;
    if ( (v15 & 0x10) == 0 )
      v9 = v11[2];
    if ( a5 )
    {
      v17 = *(_DWORD *)(a5 + 20);
      if ( v17 == -1 )
        v16 = v15 | 0x8000;
      if ( (*(_DWORD *)(a5 + 8) & 2) != 0 )
      {
        v18 = v15 | 0x8000;
        if ( v17 != -1 )
          v18 = v15;
        v16 = v18 | 0x2000;
      }
    }
  }
  if ( a1 )
    v28[0] = *(_QWORD *)a1;
  else
    v28[0] = 0LL;
  LODWORD(v28[1]) = 287;
  v28[2] = (unsigned __int16)v9 | (unsigned __int64)((unsigned __int16)v16 << 16);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v25) )
  {
    v28[3] = 0LL;
  }
  else
  {
    v21 = v26;
    if ( !v26 )
      v21 = *(_QWORD **)v25[0];
    v28[3] = *v21;
  }
  if ( !(unsigned int)xxxCallMsgFilter((__int64)v28, 2) )
    xxxSendNotifyMessage(a1, 0x11Fu, v28[2], (struct _LARGE_STRING *)v28[3], 1);
  if ( a2 )
  {
    if ( (struct tagWND *)a2 == a1 )
      v23 = (v16 >> 12) | 0xFFFFFFFD;
    else
      v23 = -4;
    xxxWindowEvent(0x8005u, a2, v23, v6 + 1, 0);
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v25, v22);
}
