/*
 * XREFs of ACPIWakeCompleteRequestQueue @ 0x1C00213D0
 * Callers:
 *     ACPIWakeEmptyRequestQueue @ 0x1C0021344 (ACPIWakeEmptyRequestQueue.c)
 *     OSNotifyDeviceWakeCallBack @ 0x1C0058F90 (OSNotifyDeviceWakeCallBack.c)
 * Callees:
 *     WPP_RECORDER_SF_qDqss @ 0x1C004DE14 (WPP_RECORDER_SF_qDqss.c)
 *     ACPIDeviceIrpWaitWakeRequestComplete @ 0x1C00506A8 (ACPIDeviceIrpWaitWakeRequestComplete.c)
 */

void __fastcall ACPIWakeCompleteRequestQueue(_QWORD **a1, int a2)
{
  _QWORD *v2; // rbx
  _QWORD *v5; // rsi
  void *v6; // r8
  void *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // [rsp+48h] [rbp-10h]

  v2 = *a1;
  while ( v2 != a1 )
  {
    v5 = v2;
    v6 = &unk_1C006FE7D;
    v2 = (_QWORD *)*v2;
    v7 = &unk_1C006FE7D;
    LOBYTE(v8) = 0;
    v9 = v5[5];
    if ( v9 )
    {
      v8 = v5[5];
      v10 = *(_QWORD *)(v9 + 8);
      if ( (v10 & 0x200000000000LL) != 0 )
      {
        v6 = *(void **)(v8 + 560);
        if ( (v10 & 0x400000000000LL) != 0 )
          v7 = *(void **)(v8 + 568);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = (__int64)v7;
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_qDqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v7,
        17,
        10,
        (__int64)&WPP_77f4a81bb1c43aa26362b868938d336a_Traceguids,
        (char)v5,
        a2,
        v8,
        (__int64)v6,
        v11);
    }
    *((_DWORD *)v5 + 64) = a2;
    ACPIDeviceIrpWaitWakeRequestComplete(v5);
  }
}
