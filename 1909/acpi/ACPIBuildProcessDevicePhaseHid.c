/*
 * XREFs of ACPIBuildProcessDevicePhaseHid @ 0x1C0027A10
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0002200 (ACPIGet.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C00101E0 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0015140 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00170E0 (WPP_RECORDER_SF_Lqss.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseHid(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // r15
  const char *v3; // rax
  unsigned int v4; // edi
  unsigned int v5; // r14d
  const char *v7; // r12
  __int64 v8; // rbp
  __int64 v9; // rbp
  __int64 *v10; // rax
  __int64 v11; // rdx
  void *v12; // rax
  void *v13; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = 0;
  v3 = AcpiInternalDeviceFlagTable;
  v4 = 0;
  v5 = 0;
  v7 = *(const char **)(v1 + 560);
  if ( AcpiInternalDeviceFlagTable )
  {
    v8 = 0LL;
    while ( !strstr(v7, v3) )
    {
      v8 = ++v5;
      v3 = (&AcpiInternalDeviceFlagTable)[4 * v5];
      if ( !v3 )
        goto LABEL_7;
    }
    v9 = 4 * v8;
    _InterlockedOr64((volatile signed __int64 *)(v1 + 8), (unsigned __int64)(&AcpiInternalDeviceFlagTable)[v9 + 1]);
    _InterlockedOr64((volatile signed __int64 *)(v1 + 952), (unsigned __int64)(&AcpiInternalDeviceFlagTable)[v9 + 2]);
    v2 = 1;
  }
LABEL_7:
  _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x200000000000uLL);
  v10 = AMLIGetNamedChild(*(__int64 **)(v1 + 712), 1145652063);
  if ( !v10 || v2 )
  {
    *(_DWORD *)(a1 + 32) = 10;
  }
  else
  {
    AMLIDereferenceHandleEx((volatile signed __int32 *)v10);
    *(_DWORD *)(a1 + 32) = 9;
    v4 = ACPIGet((__int64 *)v1, 1145652063, 671613191, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, a1 + 128, 0LL);
  }
  v11 = *(_QWORD *)(v1 + 8);
  v12 = &unk_1C006FE7D;
  v13 = &unk_1C006FE7D;
  if ( (v11 & 0x200000000000LL) != 0 )
  {
    v12 = *(void **)(v1 + 560);
    if ( (v11 & 0x400000000000LL) != 0 )
      v13 = *(void **)(v1 + 568);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x28u,
      (__int64)&WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids,
      v4,
      v1,
      (__int64)v12,
      (__int64)v13);
  if ( v4 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL, v4, 0LL, a1);
  return v4;
}
