/*
 * XREFs of OSNotifyCreateDevice @ 0x1C000FFB4
 * Callers:
 *     OSNotifyCreate @ 0x1C000E770 (OSNotifyCreate.c)
 *     ACPIBuildMissingChildren @ 0x1C00239F8 (ACPIBuildMissingChildren.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C000D900 (WPP_RECORDER_SF_qD.c)
 *     AMLIGetParent @ 0x1C000FF40 (AMLIGetParent.c)
 *     ACPIBuildDeviceRequest @ 0x1C0010064 (ACPIBuildDeviceRequest.c)
 *     ACPIBuildDeviceExtension @ 0x1C00104F4 (ACPIBuildDeviceExtension.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 */

__int64 __fastcall OSNotifyCreateDevice(__int64 BugCheckParameter3, unsigned __int64 a2)
{
  ULONG_PTR v3; // rdi
  ULONG_PTR v4; // rax
  ULONG_PTR v5; // rsi
  ULONG_PTR v6; // rdx
  int v7; // ebx
  unsigned __int16 v9; // r9
  ULONG_PTR v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = 0LL;
  v3 = BugCheckParameter3;
  v4 = AMLIGetParent(BugCheckParameter3);
  v5 = v4;
  v6 = *(_QWORD *)(*(_QWORD *)v4 + 104LL);
  if ( !v6 )
    v6 = RootDeviceExtension;
  if ( *(_DWORD *)(v6 + 16) != 1599293264 )
    KeBugCheckEx(0xA5u, 0x16uLL, v4, v3, 0LL);
  v7 = ACPIBuildDeviceExtension(v3, v6, &v10);
  if ( !v10 )
    v7 = -1073741823;
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 12;
LABEL_14:
      WPP_RECORDER_SF_qD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        v9,
        (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids,
        v3,
        v7);
    }
  }
  else
  {
    _InterlockedOr64((volatile signed __int64 *)(v10 + 8), a2);
    v3 = v10;
    v7 = ACPIBuildDeviceRequest(v10);
    if ( v7 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 13;
      goto LABEL_14;
    }
  }
  AMLIDereferenceHandleEx(v5);
  return (unsigned int)v7;
}
