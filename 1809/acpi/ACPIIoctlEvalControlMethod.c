/*
 * XREFs of ACPIIoctlEvalControlMethod @ 0x1C000B778
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C000B590 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIThermalDeviceControl @ 0x1C0012060 (ACPIThermalDeviceControl.c)
 *     ACPIProcessorDeviceControl @ 0x1C0097700 (ACPIProcessorDeviceControl.c)
 * Callees:
 *     FreeData @ 0x1C00031E4 (FreeData.c)
 *     ACPIIoctlEvalPreProcessingV1 @ 0x1C000B2E8 (ACPIIoctlEvalPreProcessingV1.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B954 (AMLIEvalNameSpaceObject.c)
 *     ACPIIoctlEvalPostProcessingV1 @ 0x1C000BA4C (ACPIIoctlEvalPostProcessingV1.c)
 *     AcpiIoctlCleanupArgumentObjects @ 0x1C000BF08 (AcpiIoctlCleanupArgumentObjects.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x1C0028E9C (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIIoctlEvalPostProcessingV2 @ 0x1C0055A00 (ACPIIoctlEvalPostProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x1C0055ADC (ACPIIoctlEvalPreProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x1C0055E50 (ACPIIoctlEvalPreProcessingV2Ex.c)
 */

__int64 __fastcall ACPIIoctlEvalControlMethod(ULONG_PTR a1, IRP *a2, __int64 a3)
{
  int v3; // esi
  PVOID v4; // rbx
  __int64 v5; // r13
  PVOID v6; // r15
  unsigned int v7; // r12d
  int v9; // eax
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // esi
  int v15; // esi
  int v16; // eax
  int v18; // esi
  PVOID v19[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v20; // [rsp+98h] [rbp+48h] BYREF
  PVOID P; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+58h] BYREF

  v3 = *(_DWORD *)(a3 + 24);
  v4 = 0LL;
  v5 = 0LL;
  P = 0LL;
  v6 = 0LL;
  v22 = 0LL;
  v7 = 0;
  v19[0] = 0LL;
  LODWORD(v20) = 0;
  switch ( v3 )
  {
    case 3325956:
      v9 = ACPIIoctlEvalPreProcessingV1(a1, (__int64)a2, a3, PagedPool, &v22, &P, v19, (unsigned int *)&v20);
      break;
    case 3325976:
      v9 = ACPIIoctlEvalPreProcessingV1Ex(a1, a2, a3, 1LL, &v22, &P, v19, &v20);
      break;
    case 3326012:
      v9 = ACPIIoctlEvalPreProcessingV2(a1, (__int64)&v22, (__int64)&P, (__int64)v19, (__int64)&v20);
      break;
    case 3326020:
      v9 = ACPIIoctlEvalPreProcessingV2Ex(a1, a2, a3, 1LL, &v22, &P, v19, &v20);
      break;
    default:
      goto LABEL_6;
  }
  v4 = P;
  v10 = v9;
  if ( v9 < 0 )
    goto LABEL_15;
  v5 = v22;
  v6 = v19[0];
  v7 = v20;
LABEL_6:
  v10 = AMLIEvalNameSpaceObject(v5, v4, v7, v6);
  AMLIDereferenceHandleEx(v5);
  if ( v6 )
  {
    AcpiIoctlCleanupArgumentObjects(v6, v7);
    ExFreePoolWithTag(v6, 0x41706341u);
  }
  if ( v10 >= 0 )
  {
    v14 = v3 - 3325956;
    if ( v14 )
    {
      v15 = v14 - 20;
      if ( v15 )
      {
        v18 = v15 - 36;
        if ( v18 )
        {
          if ( v18 != 8 )
            goto LABEL_14;
          LOBYTE(v12) = 1;
        }
        else
        {
          v12 = 0LL;
        }
        v16 = ACPIIoctlEvalPostProcessingV2(a2, v4, v12);
LABEL_13:
        v10 = v16;
LABEL_14:
        dword_1C0080868 = 0;
        pszDest = 0;
        FreeData((__int64)v4, v11, v12, v13);
        goto LABEL_15;
      }
      LOBYTE(v12) = 1;
    }
    else
    {
      v12 = 0LL;
    }
    v16 = ACPIIoctlEvalPostProcessingV1(a2, v4, v12);
    goto LABEL_13;
  }
LABEL_15:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x52706341u);
  a2->IoStatus.Status = v10;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v10;
}
