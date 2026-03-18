/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase4 @ 0x1C00296B0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0002200 (ACPIGet.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0016610 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C0017370 (WPP_RECORDER_SF_qLqss.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase4(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 v2; // rbx
  char v4; // bp
  unsigned int v5; // eax
  const char *v6; // rcx
  unsigned int v7; // ebx
  const char *v8; // rdx
  __int64 v9; // rax
  __int64 result; // rax

  v1 = *(__int64 **)(a1 + 40);
  v2 = a1 + 216;
  *(_DWORD *)(a1 + 212) = 7;
  memset((void *)(a1 + 216), 0, 0x28uLL);
  v4 = 0;
  v5 = ACPIGet(v1, 1096045407, -1610344446, 0LL, 0, (__int64)ACPIDeviceCompleteGenericPhase, a1, v2 + 16, v2 + 24);
  v6 = (const char *)&unk_1C006FE7D;
  v7 = v5;
  v8 = (const char *)&unk_1C006FE7D;
  if ( v1 )
  {
    v9 = v1[1];
    v4 = (char)v1;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v6 = (const char *)v1[70];
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = (const char *)v1[71];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x4Eu,
      (__int64)&WPP_16ea8f8368aa31d784935a69de07acde_Traceguids,
      a1,
      v7,
      v4,
      v6,
      v8);
  result = 259LL;
  if ( v7 != 259 )
  {
    ACPIDeviceCompleteGenericPhase(0LL, v7, 0LL, a1);
    return 0LL;
  }
  return result;
}
