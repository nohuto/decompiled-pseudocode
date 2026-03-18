/*
 * XREFs of NVMeLogTelemetryWaitForCmdComplete @ 0x1C00162BC
 * Callers:
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00180C4 (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     GetSrbExtension @ 0x1C0005118 (GetSrbExtension.c)
 *     GetLunExtension @ 0x1C00146C4 (GetLunExtension.c)
 *     NVMeLogTelemetry @ 0x1C001601C (NVMeLogTelemetry.c)
 */

__int64 __fastcall NVMeLogTelemetryWaitForCmdComplete(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 SrbExtension; // rax
  __int64 v8; // rdx
  unsigned __int8 v9; // r15
  unsigned int v10; // ebx
  __int64 v11; // r10
  unsigned __int8 v12; // di
  unsigned int v13; // esi
  __int64 result; // rax
  __int64 LunExtension; // rbp
  unsigned int v16; // r11d
  unsigned int v17; // r9d
  int v18; // [rsp+20h] [rbp-C8h]
  int v19; // [rsp+28h] [rbp-C0h]
  int v20; // [rsp+30h] [rbp-B8h]
  int v21; // [rsp+38h] [rbp-B0h]
  int v22; // [rsp+40h] [rbp-A8h]
  int v23; // [rsp+50h] [rbp-98h]
  int v24; // [rsp+60h] [rbp-88h]
  int v25; // [rsp+70h] [rbp-78h]
  int v26; // [rsp+80h] [rbp-68h]
  int v27; // [rsp+90h] [rbp-58h]
  int v28; // [rsp+A0h] [rbp-48h]
  int v29; // [rsp+B0h] [rbp-38h]

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
      v10 = (unsigned __int8)*(_DWORD *)(v11 + 4096);
      v12 = *(_BYTE *)(v11 + 4253) & 1;
      if ( v12 && (v10 == 2 || v10 - 9 <= 1) )
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
             v10,
             v12,
             v18,
             v19,
             v20,
             v21,
             v22,
             v6,
             v23,
             v5,
             v24,
             v9,
             v25,
             v12,
             v26,
             v10,
             v27,
             v13,
             v28,
             v16,
             v29,
             result);
  }
  return result;
}
