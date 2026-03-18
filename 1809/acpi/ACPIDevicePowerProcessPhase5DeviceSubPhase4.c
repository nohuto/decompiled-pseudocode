/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase4 @ 0x1C001B5C0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0003980 (ACPIGet.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C001DC64 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C001F050 (ACPIDeviceCompleteGenericPhase.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase4(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 v2; // rbx
  char v4; // bp
  unsigned int v5; // ebx
  void *v6; // rax
  void *v7; // rdx
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // [rsp+48h] [rbp-10h]

  v1 = *(__int64 **)(a1 + 40);
  v2 = a1 + 216;
  *(_DWORD *)(a1 + 212) = 7;
  memset((void *)(a1 + 216), 0, 0x28uLL);
  v4 = 0;
  v5 = ACPIGet(v1, 1096045407, -1610344446, 0LL, 0, (__int64)ACPIDeviceCompleteGenericPhase, a1, v2 + 16, v2 + 24);
  v6 = &unk_1C006E28A;
  v7 = &unk_1C006E28A;
  if ( v1 )
  {
    v8 = v1[1];
    v4 = (char)v1;
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v6 = (void *)v1[70];
      if ( (v8 & 0x400000000000LL) != 0 )
        v7 = (void *)v1[71];
    }
  }
  v10 = (__int64)v7;
  LOBYTE(v7) = 4;
  WPP_RECORDER_SF_qLqss(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v7,
    10,
    78,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
    a1,
    v5,
    v4,
    (__int64)v6,
    v10);
  result = 259LL;
  if ( v5 != 259 )
  {
    ACPIDeviceCompleteGenericPhase(0LL, v5, 0LL, a1);
    return 0LL;
  }
  return result;
}
