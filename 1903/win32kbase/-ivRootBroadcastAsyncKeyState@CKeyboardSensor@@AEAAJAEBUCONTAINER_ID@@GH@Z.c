/*
 * XREFs of ?ivRootBroadcastAsyncKeyState@CKeyboardSensor@@AEAAJAEBUCONTAINER_ID@@GH@Z @ 0x1C0180F00
 * Callers:
 *     ?VirtualizeKeyboardInput@CKeyboardSensor@@QEAA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C0180DC4 (-VirtualizeKeyboardInput@CKeyboardSensor@@QEAA-AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SY.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     ??0CIVSerializer@@QEAA@_K@Z @ 0x1C0188388 (--0CIVSerializer@@QEAA@_K@Z.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01883F0 (--1CIVSerializer@@QEAA@XZ.c)
 *     ?ivrIVBroadcast@@YAJPEAXKPEAU_ETHREAD@@10KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z @ 0x1C018DD60 (-ivrIVBroadcast@@YAJPEAXKPEAU_ETHREAD@@10KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z.c)
 */

__int64 __fastcall CKeyboardSensor::ivRootBroadcastAsyncKeyState(
        CKeyboardSensor *this,
        const struct CONTAINER_ID *a2,
        __int16 a3,
        int a4)
{
  const struct CONTAINER_ID *v6; // rsi
  __int64 v8; // rdx
  unsigned int v9; // ebx
  int v10; // r9d
  _DWORD *v11; // rcx
  struct _ETHREAD *CurrentThread; // r9
  int v13; // eax
  char v15; // [rsp+28h] [rbp-70h]
  int (*v16)(struct _IVSRContext *); // [rsp+38h] [rbp-60h]
  void *v17; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v18; // [rsp+48h] [rbp-50h]
  __int64 v19; // [rsp+50h] [rbp-48h]

  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      26,
      (__int64)&WPP_e0ae19b586f83ba3475131465c1bccd2_Traceguids);
  }
  CIVSerializer::CIVSerializer((CIVSerializer *)&v17, 8uLL);
  v8 = v19;
  if ( !v19 )
  {
    v9 = -1073741801;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_14;
    v10 = v19 + 27;
    v15 = 23;
    goto LABEL_10;
  }
  v11 = v17;
  *(_DWORD *)v17 = v18 - 16;
  v11[1] = 1;
  *((_QWORD *)v11 + 1) = 5LL;
  *(_WORD *)v8 = a3;
  *(_DWORD *)(v8 + 4) = a4;
  CurrentThread = KeGetCurrentThread();
  v13 = ivrIVBroadcast(v17, v18, CurrentThread, CurrentThread, this, 1u, v6, v16);
  v9 = v13;
  if ( v13 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_14;
    v10 = 28;
    v15 = v13;
LABEL_10:
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_D((_DWORD)gBaseLog, v8, 12, v10, (__int64)&WPP_e0ae19b586f83ba3475131465c1bccd2_Traceguids, v15);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v8) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      12,
      29,
      (__int64)&WPP_e0ae19b586f83ba3475131465c1bccd2_Traceguids);
  }
LABEL_14:
  CIVSerializer::~CIVSerializer((CIVSerializer *)&v17);
  return v9;
}
