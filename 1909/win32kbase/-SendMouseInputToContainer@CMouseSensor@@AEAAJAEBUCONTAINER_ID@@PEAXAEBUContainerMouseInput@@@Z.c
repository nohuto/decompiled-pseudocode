/*
 * XREFs of ?SendMouseInputToContainer@CMouseSensor@@AEAAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z @ 0x1C0185188
 * Callers:
 *     ?ivRootDeliverMouseInput@CMouseSensor@@MEAAJAEAUCONTAINER_ID@@PEAX@Z @ 0x1C01855D0 (-ivRootDeliverMouseInput@CMouseSensor@@MEAAJAEAUCONTAINER_ID@@PEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0059370 (RawInputManagerDeviceObjectResolveHandle.c)
 *     IsTouchpadDevice @ 0x1C018230C (IsTouchpadDevice.c)
 *     ?SerializeContainerMouseInput@CMouseSensor@@AEAAJAEAUCIVSerializer@@AEBU_UNICODE_STRING@@_NAEBUContainerMouseInput@@@Z @ 0x1C0185480 (-SerializeContainerMouseInput@CMouseSensor@@AEAAJAEAUCIVSerializer@@AEBU_UNICODE_STRING@@_NAEBUC.c)
 *     ??0CIVSerializer@@QEAA@_K@Z @ 0x1C0186198 (--0CIVSerializer@@QEAA@_K@Z.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C0186200 (--1CIVSerializer@@QEAA@XZ.c)
 *     ?ivrIVSend@@YAJPEAXKPEAU_ETHREAD@@10KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z @ 0x1C018BC40 (-ivrIVSend@@YAJPEAXKPEAU_ETHREAD@@10KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z.c)
 */

__int64 __fastcall CMouseSensor::SendMouseInputToContainer(
        CMouseSensor *this,
        const struct CONTAINER_ID *a2,
        char *a3,
        const struct ContainerMouseInput *a4)
{
  const struct CONTAINER_ID *v6; // r13
  PVOID v7; // rbx
  CMouseSensor *v8; // rcx
  int v9; // edi
  int v10; // edx
  unsigned int v11; // r15d
  char v12; // r14
  int v13; // eax
  PDEVICE_OBJECT v14; // rcx
  int v15; // r9d
  _QWORD *v16; // rcx
  struct _ETHREAD *CurrentThread; // r9
  unsigned int v18; // edx
  int v19; // eax
  int (*v21)(struct _IVSRContext *); // [rsp+40h] [rbp-21h]
  PVOID Object; // [rsp+48h] [rbp-19h] BYREF
  struct _UNICODE_STRING v23; // [rsp+50h] [rbp-11h] BYREF
  void *v24; // [rsp+60h] [rbp-1h] BYREF
  unsigned int v25[2]; // [rsp+68h] [rbp+7h]
  __int64 v26; // [rsp+70h] [rbp+Fh]

  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      12,
      (__int64)&WPP_4f37c21e97fd386cd8c91c1406c012ed_Traceguids);
  }
  v7 = 0LL;
  *(_QWORD *)&v23.Length = 0LL;
  v23.Buffer = 0LL;
  Object = 0LL;
  CIVSerializer::CIVSerializer((CIVSerializer *)&v24, 0x38uLL);
  if ( !v26 )
  {
    v9 = -1073741801;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_31;
    WPP_RECORDER_SF_D((_DWORD)gBaseLog, 2, 12, 13, (__int64)&WPP_4f37c21e97fd386cd8c91c1406c012ed_Traceguids, 23);
    goto LABEL_27;
  }
  v11 = 0;
  v12 = *(_BYTE *)(*(_QWORD *)a4 + 32LL);
  if ( !a3 )
  {
LABEL_18:
    v9 = CMouseSensor::SerializeContainerMouseInput(v8, (struct CIVSerializer *)&v24, &v23, v12, a4);
    if ( v7 )
    {
      ObfDereferenceObject(v7);
      v7 = 0LL;
      Object = 0LL;
    }
    if ( v9 >= 0 )
    {
      v16 = v24;
      CurrentThread = KeGetCurrentThread();
      v18 = v25[0];
      *((_DWORD *)v24 + 1) = 1;
      v16[1] = 3LL;
      *(_DWORD *)v16 = v18 - 16;
      v19 = ivrIVSend(v16, v18, CurrentThread, CurrentThread, this, v11, v6, v21);
      v9 = v19;
      if ( v19 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v7 = Object;
      }
      else
      {
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_D((_DWORD)gBaseLog, v10, 12, 16, (__int64)&WPP_4f37c21e97fd386cd8c91c1406c012ed_Traceguids, v19);
        v7 = Object;
      }
    }
    if ( v7 )
      ObfDereferenceObject(v7);
LABEL_27:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v15 = 17;
        goto LABEL_30;
      }
    }
    goto LABEL_31;
  }
  v13 = RawInputManagerDeviceObjectResolveHandle(a3, 3u, 0, &Object);
  v9 = v13;
  if ( v13 >= 0 )
  {
    v7 = Object;
    v8 = 0LL;
    v23 = *(struct _UNICODE_STRING *)((char *)Object + 296);
    if ( Object != (PVOID)-88LL )
      v8 = (CMouseSensor *)*((_QWORD *)Object + 11);
    if ( v12 && IsTouchpadDevice((unsigned __int64)v8) )
      v11 = 2;
    goto LABEL_18;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_D((_DWORD)gBaseLog, 2, 12, 14, (__int64)&WPP_4f37c21e97fd386cd8c91c1406c012ed_Traceguids, v13);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = WPP_GLOBAL_Control;
      v10 = 0;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v15 = 15;
LABEL_30:
        LOBYTE(v10) = 5;
        WPP_RECORDER_SF_(v14->DeviceExtension, v10, 12, v15, (__int64)&WPP_4f37c21e97fd386cd8c91c1406c012ed_Traceguids);
      }
    }
  }
LABEL_31:
  CIVSerializer::~CIVSerializer((CIVSerializer *)&v24);
  return (unsigned int)v9;
}
