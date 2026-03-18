/*
 * XREFs of OSNotifyCreateProcessor @ 0x1C002C634
 * Callers:
 *     OSNotifyCreate @ 0x1C000E770 (OSNotifyCreate.c)
 *     ACPIBuildMissingChildren @ 0x1C00239F8 (ACPIBuildMissingChildren.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001B40 (WPP_RECORDER_SF_D.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C000CD58 (ACPIInitReferenceDeviceExtension.c)
 *     WPP_RECORDER_SF_qD @ 0x1C000D900 (WPP_RECORDER_SF_qD.c)
 *     AMLIGetParent @ 0x1C000FF40 (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     ACPIBuildProcessorExtension @ 0x1C002C704 (ACPIBuildProcessorExtension.c)
 */

__int64 __fastcall OSNotifyCreateProcessor(__int64 a1, unsigned __int64 a2)
{
  volatile signed __int32 *v4; // rsi
  ULONG_PTR v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int v10; // [rsp+28h] [rbp-30h]
  int v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  v12 = 0LL;
  v4 = (volatile signed __int32 *)AMLIGetParent(a1);
  v5 = *(_QWORD *)(*(_QWORD *)v4 + 104LL);
  if ( !v5 )
    v5 = RootDeviceExtension;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = a1;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x11u,
      (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids,
      v10);
  }
  v6 = ACPIBuildProcessorExtension(a1, v5, &v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = v6;
      WPP_RECORDER_SF_qD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0x12u,
        (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids,
        a1,
        v11);
    }
  }
  else
  {
    ACPIInitReferenceDeviceExtension(v12);
    _InterlockedOr64((volatile signed __int64 *)(v8 + 8), a2);
    v7 = 259;
  }
  AMLIDereferenceHandleEx(v4);
  return v7;
}
