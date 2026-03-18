/*
 * XREFs of ACPIDevicePowerProcessPhase1DeviceSubPhase2 @ 0x1C002CBA0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIAsyncEvalObject @ 0x1C00140BC (AMLIAsyncEvalObject.c)
 *     WPP_RECORDER_SF_qLdqss @ 0x1C001D208 (WPP_RECORDER_SF_qLdqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C001F050 (ACPIDeviceCompleteGenericPhase.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase1DeviceSubPhase2(__int64 a1)
{
  _QWORD *v1; // rbx
  char v2; // si
  __int64 v3; // rax
  int v5; // ebp
  __int64 *v6; // r14
  const char *v7; // rcx
  __int64 v8; // r8
  const char *v9; // rdx
  __int64 v10; // r9
  __int64 result; // rax
  int v12; // eax
  __int64 v13; // rdx
  const char *v14; // rcx
  const char *v15; // r8
  int v16; // [rsp+20h] [rbp-48h]

  v1 = *(_QWORD **)(a1 + 40);
  v2 = 0;
  v3 = *(int *)(a1 + 104);
  v5 = 0;
  *(_DWORD *)(a1 + 212) = 5;
  v6 = (__int64 *)v1[v3 + 51];
  if ( !v6 )
  {
    v7 = (const char *)&unk_1C006E28A;
    v8 = 0LL;
    v9 = (const char *)&unk_1C006E28A;
    if ( v1 )
    {
      v10 = v1[1];
      v8 = (__int64)v1;
      if ( (v10 & 0x200000000000LL) != 0 )
      {
        v7 = (const char *)v1[70];
        if ( (v10 & 0x400000000000LL) != 0 )
          v9 = (const char *)v1[71];
      }
    }
    WPP_RECORDER_SF_qLdqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)v9,
      v8,
      0x3Au,
      v16,
      a1,
      0,
      5,
      v8,
      v7,
      v9);
LABEL_7:
    ACPIDeviceCompleteGenericPhase((__int64)v6, v5, 0LL, a1);
    return 0LL;
  }
  *(_DWORD *)(a1 + 56) |= 0x1000000u;
  v12 = AMLIAsyncEvalObject(v6, 0LL, 0, 0LL);
  v14 = (const char *)&unk_1C006E28A;
  v5 = v12;
  v15 = (const char *)&unk_1C006E28A;
  if ( v1 )
  {
    v13 = v1[1];
    v2 = (char)v1;
    if ( (v13 & 0x200000000000LL) != 0 )
    {
      v14 = (const char *)v1[70];
      if ( (v13 & 0x400000000000LL) != 0 )
        v15 = (const char *)v1[71];
    }
  }
  WPP_RECORDER_SF_qLdqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v13,
    (__int64)v15,
    0x39u,
    (int)ACPIDeviceCompleteGenericPhase,
    a1,
    v12,
    *(_DWORD *)(a1 + 212),
    v2,
    v14,
    v15);
  result = 259LL;
  if ( v5 != 259 )
    goto LABEL_7;
  return result;
}
