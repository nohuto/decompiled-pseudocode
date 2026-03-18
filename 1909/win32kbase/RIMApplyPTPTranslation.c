/*
 * XREFs of RIMApplyPTPTranslation @ 0x1C01437EC
 * Callers:
 *     rimTransformGeometry @ 0x1C01570F8 (rimTransformGeometry.c)
 * Callees:
 *     ?TransformPTPLogicalUnitsToPhysical@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z @ 0x1C01431A8 (-TransformPTPLogicalUnitsToPhysical@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMApplyPTPTranslation(struct tagHID_POINTER_DEVICE_INFO *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ecx
  unsigned int v6; // eax
  struct tagPOINT v7; // [rsp+48h] [rbp+28h] BYREF

  if ( *((_DWORD *)a1 + 6) != 7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  TransformPTPLogicalUnitsToPhysical(a1, *(struct tagPOINT *)(a2 + 4), (struct tagPOINT *)(a2 + 120));
  *(_QWORD *)(a2 + 104) = *(_QWORD *)(a2 + 120);
  TransformPTPLogicalUnitsToPhysical(a1, *(struct tagPOINT *)(a2 + 12), (struct tagPOINT *)(a2 + 32));
  v5 = *(_DWORD *)(a2 + 24);
  if ( v5 )
  {
    v6 = *(_DWORD *)(a2 + 28);
    if ( v6 )
    {
      v7 = 0LL;
      TransformPTPLogicalUnitsToPhysical(a1, (struct tagPOINT)__PAIR64__(v6, v5), &v7);
      *(struct tagPOINT *)(a2 + 40) = v7;
    }
  }
}
