/*
 * XREFs of ?ivRootDeliverKeyboardInput@CKeyboardSensor@@MEAAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C0181200
 * Callers:
 *     ?VirtualizeKeyboardInput@CKeyboardSensor@@QEAA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C0180DC4 (-VirtualizeKeyboardInput@CKeyboardSensor@@QEAA-AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SY.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     HMValidateHandleNoSecure @ 0x1C0034F70 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0051D60 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ?SerializeKeyboardInputForContainer@CKeyboardSensor@@AEAAJAEAUCIVSerializer@@AEBU_UNICODE_STRING@@AEBU_KEYBOARD_INPUT_DATA@@@Z @ 0x1C0180BB8 (-SerializeKeyboardInputForContainer@CKeyboardSensor@@AEAAJAEAUCIVSerializer@@AEBU_UNICODE_STRING.c)
 *     ??0CIVSerializer@@QEAA@_K@Z @ 0x1C0188388 (--0CIVSerializer@@QEAA@_K@Z.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01883F0 (--1CIVSerializer@@QEAA@XZ.c)
 *     ?ivrIVSend@@YAJPEAXKPEAU_ETHREAD@@10KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z @ 0x1C018DE30 (-ivrIVSend@@YAJPEAXKPEAU_ETHREAD@@10KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z.c)
 */

__int64 __fastcall CKeyboardSensor::ivRootDeliverKeyboardInput(
        CKeyboardSensor *this,
        const struct CONTAINER_ID *a2,
        const struct _KEYBOARD_INPUT_DATA *a3,
        unsigned __int64 a4)
{
  const struct CONTAINER_ID *v6; // r14
  PVOID v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  int v11; // edx
  unsigned int v12; // ebx
  int v13; // edx
  int v15; // edx
  CKeyboardSensor *v16; // rcx
  int v17; // edi
  _DWORD *v18; // rcx
  struct _ETHREAD *CurrentThread; // r9
  unsigned int v20; // edx
  int v21; // eax
  int (*v22)(struct _IVSRContext *); // [rsp+40h] [rbp-21h]
  char *v23; // [rsp+48h] [rbp-19h] BYREF
  struct _UNICODE_STRING v24; // [rsp+50h] [rbp-11h] BYREF
  void *v25; // [rsp+60h] [rbp-1h] BYREF
  unsigned int v26[2]; // [rsp+68h] [rbp+7h]
  __int64 v27; // [rsp+70h] [rbp+Fh]

  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      10,
      (__int64)&WPP_e0ae19b586f83ba3475131465c1bccd2_Traceguids);
  }
  v8 = 0LL;
  *(_QWORD *)&v24.Length = 0LL;
  v24.Buffer = 0LL;
  v23 = 0LL;
  v9 = HMValidateHandleNoSecure(a4, 19);
  if ( v9 )
  {
    v10 = RawInputManagerDeviceObjectResolveHandle(*(char **)(v9 + 24), 3u, 0, (PVOID *)&v23);
    v12 = v10;
    if ( v10 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 2;
        WPP_RECORDER_SF_D((_DWORD)gBaseLog, v11, 12, 11, (__int64)&WPP_e0ae19b586f83ba3475131465c1bccd2_Traceguids, v10);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v13) = 5;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v13,
              12,
              12,
              (__int64)&WPP_e0ae19b586f83ba3475131465c1bccd2_Traceguids);
          }
        }
      }
      return v12;
    }
    v8 = v23;
    v24 = *(struct _UNICODE_STRING *)(v23 + 296);
  }
  CIVSerializer::CIVSerializer((CIVSerializer *)&v25, 0x28uLL);
  if ( v27 )
  {
    v17 = CKeyboardSensor::SerializeKeyboardInputForContainer(v16, (struct CIVSerializer *)&v25, &v24, a3);
    if ( v17 >= 0 )
    {
      v18 = v25;
      CurrentThread = KeGetCurrentThread();
      v20 = v26[0];
      *((_QWORD *)v25 + 1) = 4LL;
      *v18 = v20 - 16;
      v18[1] = 1;
      v21 = ivrIVSend(v18, v20, CurrentThread, CurrentThread, this, 1u, v6, v22);
      v17 = v21;
      if ( v21 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v8 = v23;
      }
      else
      {
        LOBYTE(v15) = 2;
        WPP_RECORDER_SF_D((_DWORD)gBaseLog, v15, 12, 14, (__int64)&WPP_e0ae19b586f83ba3475131465c1bccd2_Traceguids, v21);
        v8 = v23;
      }
    }
  }
  else
  {
    v17 = -1073741801;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_D((_DWORD)gBaseLog, v15, 12, 13, (__int64)&WPP_e0ae19b586f83ba3475131465c1bccd2_Traceguids, 23);
    }
  }
  if ( v8 )
    ObfDereferenceObject(v8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v15) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v15,
      12,
      15,
      (__int64)&WPP_e0ae19b586f83ba3475131465c1bccd2_Traceguids);
  }
  CIVSerializer::~CIVSerializer((CIVSerializer *)&v25);
  return (unsigned int)v17;
}
