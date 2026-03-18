/*
 * XREFs of ?ivRootDeliverFullKeyboardStates@CKeyboardSensor@@AEAAJAEBUCONTAINER_ID@@@Z @ 0x1C017EE94
 * Callers:
 *     ?VirtualizeFullKeyboardStates@CKeyboardSensor@@QEAAXK@Z @ 0x1C017EB08 (-VirtualizeFullKeyboardStates@CKeyboardSensor@@QEAAXK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     ?SerializeFullKeyboardStatesForContainer@CKeyboardSensor@@AEAAJAEAUCIVSerializer@@@Z @ 0x1C017E8A4 (-SerializeFullKeyboardStatesForContainer@CKeyboardSensor@@AEAAJAEAUCIVSerializer@@@Z.c)
 *     ??0CIVSerializer@@QEAA@_K@Z @ 0x1C0186198 (--0CIVSerializer@@QEAA@_K@Z.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C0186200 (--1CIVSerializer@@QEAA@XZ.c)
 *     ?ivrIVSend@@YAJPEAXKPEAU_ETHREAD@@10KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z @ 0x1C018BC40 (-ivrIVSend@@YAJPEAXKPEAU_ETHREAD@@10KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z.c)
 */

__int64 __fastcall CKeyboardSensor::ivRootDeliverFullKeyboardStates(
        CKeyboardSensor *this,
        const struct CONTAINER_ID *a2)
{
  const struct CONTAINER_ID *v2; // rdi
  int v4; // edx
  CKeyboardSensor *v5; // rcx
  int v6; // ebx
  int v7; // r9d
  _DWORD *v8; // rcx
  struct _ETHREAD *CurrentThread; // r9
  int v10; // eax
  char v12; // [rsp+28h] [rbp-70h]
  int (*v13)(struct _IVSRContext *); // [rsp+38h] [rbp-60h]
  void *v14; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v15; // [rsp+48h] [rbp-50h]
  __int64 v16; // [rsp+50h] [rbp-48h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      30,
      (__int64)&WPP_e0ae19b586f83ba3475131465c1bccd2_Traceguids);
  }
  CIVSerializer::CIVSerializer((CIVSerializer *)&v14, 0x10uLL);
  if ( !v16 )
  {
    v6 = -1073741801;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_15;
    v7 = 31;
    v12 = 23;
    goto LABEL_11;
  }
  v6 = CKeyboardSensor::SerializeFullKeyboardStatesForContainer(v5, (struct CIVSerializer *)&v14);
  if ( v6 >= 0 )
  {
    v8 = v14;
    *(_DWORD *)v14 = v15 - 16;
    v8[1] = 1;
    *((_QWORD *)v8 + 1) = 6LL;
    CurrentThread = KeGetCurrentThread();
    v10 = ivrIVSend(v14, v15, CurrentThread, CurrentThread, this, 1u, v2, v13);
    v6 = v10;
    if ( v10 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_15;
      v7 = 32;
      v12 = v10;
LABEL_11:
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_D((_DWORD)gBaseLog, v4, 12, v7, (__int64)&WPP_e0ae19b586f83ba3475131465c1bccd2_Traceguids, v12);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v4) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      12,
      33,
      (__int64)&WPP_e0ae19b586f83ba3475131465c1bccd2_Traceguids);
  }
LABEL_15:
  CIVSerializer::~CIVSerializer((CIVSerializer *)&v14);
  return (unsigned int)v6;
}
