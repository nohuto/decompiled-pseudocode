/*
 * XREFs of OSNotifyCreateProcessor @ 0x1C0015E8C
 * Callers:
 *     ACPIBuildMissingChildren @ 0x1C0017160 (ACPIBuildMissingChildren.c)
 *     OSNotifyCreate @ 0x1C001CF10 (OSNotifyCreate.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002680 (WPP_RECORDER_SF_D.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     ACPIBuildProcessorExtension @ 0x1C0015CA4 (ACPIBuildProcessorExtension.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C0017BC4 (ACPIInitReferenceDeviceExtension.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00195FC (WPP_RECORDER_SF_qD.c)
 *     AMLIGetParent @ 0x1C001AEEC (AMLIGetParent.c)
 */

__int64 __fastcall OSNotifyCreateProcessor(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  int v6; // eax
  int v7; // edx
  unsigned int v8; // ebx
  __int64 v9; // rcx
  int v11; // [rsp+28h] [rbp-30h]
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  v12 = 0LL;
  v4 = AMLIGetParent();
  v5 = *(_QWORD *)(*(_QWORD *)v4 + 104LL);
  if ( !v5 )
    v5 = RootDeviceExtension;
  v11 = a1;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x11u,
    (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids,
    v11);
  v6 = ACPIBuildProcessorExtension(a1, v5, &v12);
  v8 = v6;
  if ( v6 < 0 )
  {
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_qD(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      22,
      18,
      (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids,
      a1,
      v6);
  }
  else
  {
    ACPIInitReferenceDeviceExtension(v12);
    _InterlockedOr64((volatile signed __int64 *)(v9 + 8), a2);
    v8 = 259;
  }
  AMLIDereferenceHandleEx(v4);
  return v8;
}
