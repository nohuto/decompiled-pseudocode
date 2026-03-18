/*
 * XREFs of OSNotifyCreateDevice @ 0x1C001AF60
 * Callers:
 *     ACPIBuildMissingChildren @ 0x1C0017160 (ACPIBuildMissingChildren.c)
 *     OSNotifyCreate @ 0x1C001CF10 (OSNotifyCreate.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00195FC (WPP_RECORDER_SF_qD.c)
 *     AMLIGetParent @ 0x1C001AEEC (AMLIGetParent.c)
 *     ACPIBuildDeviceRequest @ 0x1C001B010 (ACPIBuildDeviceRequest.c)
 *     ACPIBuildDeviceExtension @ 0x1C001B100 (ACPIBuildDeviceExtension.c)
 */

__int64 __fastcall OSNotifyCreateDevice(__int64 BugCheckParameter3, unsigned __int64 a2)
{
  ULONG_PTR v3; // rdi
  ULONG_PTR v4; // rax
  __int64 v5; // rsi
  ULONG_PTR v6; // rdx
  int v7; // ebx
  int v8; // eax
  unsigned __int16 v10; // r9
  int v11; // [rsp+30h] [rbp-18h]
  ULONG_PTR v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = 0LL;
  v3 = BugCheckParameter3;
  v4 = AMLIGetParent(BugCheckParameter3);
  v5 = v4;
  v6 = *(_QWORD *)(*(_QWORD *)v4 + 104LL);
  if ( !v6 )
    v6 = RootDeviceExtension;
  if ( *(_DWORD *)(v6 + 16) != 1599293264 )
    KeBugCheckEx(0xA5u, 0x16uLL, v4, v3, 0LL);
  v7 = ACPIBuildDeviceExtension(v3, v6, &v12);
  if ( !v12 )
    v7 = -1073741823;
  if ( v7 < 0 )
  {
    v10 = 12;
    v11 = v7;
LABEL_12:
    WPP_RECORDER_SF_qD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x16u,
      v10,
      (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids,
      v3,
      v11);
    goto LABEL_8;
  }
  _InterlockedOr64((volatile signed __int64 *)(v12 + 8), a2);
  v3 = v12;
  v8 = ACPIBuildDeviceRequest(v12);
  v7 = v8;
  if ( v8 < 0 )
  {
    v10 = 13;
    v11 = v8;
    goto LABEL_12;
  }
LABEL_8:
  AMLIDereferenceHandleEx(v5);
  return (unsigned int)v7;
}
