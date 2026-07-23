/*
 * XREFs of PiDevCfgConfigureDeviceDriverConfiguration @ 0x1406FADE4
 * Callers:
 *     PiDevCfgConfigureDeviceDriver @ 0x1406FAD54 (PiDevCfgConfigureDeviceDriver.c)
 *     PiDevCfgMigrateDevice @ 0x140701FB0 (PiDevCfgMigrateDevice.c)
 * Callees:
 *     PiDevCfgConfigureDeviceKeys @ 0x1406FAEA8 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgCopyObjectProperties @ 0x1406FB6E4 (PiDevCfgCopyObjectProperties.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceDriverConfiguration(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        PVOID a7,
        __int64 a8)
{
  int v10; // edi
  int v11; // ebp
  __int64 result; // rax
  PVOID P; // [rsp+20h] [rbp-48h]

  v10 = a2;
  v11 = a1;
  if ( (a4 & 1) == 0 )
    return PiDevCfgConfigureDeviceKeys(v11, v10, a3, a4, a7, a8);
  result = PiDevCfgCopyObjectProperties(
             PiPnpRtlCtx,
             0,
             0,
             a3,
             (SIZE_T)P,
             *(_QWORD *)(a1 + 48),
             1,
             *(_QWORD *)(a2 + 16),
             a5,
             a6,
             (*(_DWORD *)a2 & 1u) << 17);
  if ( (int)result >= 0 )
    return PiDevCfgConfigureDeviceKeys(v11, v10, a3, a4, a7, a8);
  return result;
}
