/*
 * XREFs of NVMeLogTelemetryWaitForCmdComplete @ 0x1C0015C10
 * Callers:
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0018FF8 (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     GetSrbExtension @ 0x1C0003F10 (GetSrbExtension.c)
 *     NVMeLogTelemetry @ 0x1C000C25C (NVMeLogTelemetry.c)
 *     GetLunExtension @ 0x1C00138E8 (GetLunExtension.c)
 */

__int64 __fastcall NVMeLogTelemetryWaitForCmdComplete(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 SrbExtension; // rax
  __int64 v8; // rdx
  unsigned __int8 v9; // r15
  unsigned int v10; // r11d
  __int64 v11; // r10
  unsigned __int8 v12; // di
  unsigned int v13; // esi
  __int64 result; // rax
  __int64 LunExtension; // r14
  unsigned int v16; // ebx
  unsigned int v17; // r9d
  int v18; // r11d
  int v19; // [rsp+28h] [rbp-D0h]
  int v20; // [rsp+30h] [rbp-C8h]
  int v21; // [rsp+38h] [rbp-C0h]
  int v22; // [rsp+40h] [rbp-B8h]

  v5 = a4;
  v6 = a3;
  SrbExtension = GetSrbExtension(a2);
  v9 = *(_BYTE *)(v8 + 3);
  v10 = -1;
  v11 = SrbExtension;
  v12 = 0;
  v13 = 0;
  result = 0xFFFFFFFFLL;
  LunExtension = 0LL;
  v16 = -1;
  if ( v17 >= 0xFA )
  {
    if ( v11 )
    {
      v18 = (unsigned __int8)*(_DWORD *)(v11 + 4096);
      v12 = *(_BYTE *)(v11 + 4253) & 1;
      if ( v12 && (v18 == 2 || (unsigned int)(v18 - 9) <= 1) )
        v13 = (unsigned __int8)*(_DWORD *)(v11 + 4136);
      LunExtension = GetLunExtension(a1, *(_DWORD *)(v11 + 4100));
      result = 0xFFFFFFFFLL;
    }
    if ( (unsigned int)v5 < (unsigned int)v6 )
    {
      if ( v11 )
      {
        v16 = (*(unsigned __int16 *)(v11 + 4250) >> 9) & 7;
        result = (unsigned __int8)(*(unsigned __int16 *)(v11 + 4250) >> 1);
      }
    }
    else
    {
      v9 = 9;
    }
    return NVMeLogTelemetry(
             a1,
             LunExtension,
             0LL,
             1LL,
             "WaitForCmdComplete",
             v19,
             v20,
             v21,
             v22,
             "TimeoutInMS",
             v6,
             "TotalWaitTimeInMS",
             v5,
             "SrbStatus",
             v9,
             "IsAdminCmd",
             v12,
             "CmdOpCode",
             v10,
             "CmdExtra",
             v13,
             "StatusCodeType",
             v16,
             "StatusCode",
             result);
  }
  return result;
}
