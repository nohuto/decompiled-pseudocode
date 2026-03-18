/*
 * XREFs of ACPIIoctlEvalControlMethod @ 0x1C00112B4
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C0001400 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIThermalDeviceControl @ 0x1C0008730 (ACPIThermalDeviceControl.c)
 *     ACPIProcessorDeviceControl @ 0x1C0091C40 (ACPIProcessorDeviceControl.c)
 * Callees:
 *     FreeData @ 0x1C00054E0 (FreeData.c)
 *     ACPIIoctlEvalPreProcessingV1 @ 0x1C000E4C8 (ACPIIoctlEvalPreProcessingV1.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x1C0010284 (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIIoctlEvalPostProcessingV1 @ 0x1C0010AE0 (ACPIIoctlEvalPostProcessingV1.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C00116EC (AMLIEvalNameSpaceObject.c)
 *     AcpiIoctlCleanupArgumentObjects @ 0x1C002AE2C (AcpiIoctlCleanupArgumentObjects.c)
 *     ACPIIoctlEvalPostProcessingV2 @ 0x1C00574D0 (ACPIIoctlEvalPostProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x1C00575AC (ACPIIoctlEvalPreProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x1C0057920 (ACPIIoctlEvalPreProcessingV2Ex.c)
 */

__int64 __fastcall ACPIIoctlEvalControlMethod(ULONG_PTR a1, IRP *a2, __int64 a3)
{
  int v3; // esi
  _QWORD *v4; // rbx
  __int64 v5; // r13
  PVOID v6; // r15
  unsigned int v7; // r12d
  int v9; // eax
  int v10; // edi
  __int64 v11; // r8
  int v12; // esi
  int v13; // esi
  char v14; // r8
  int v15; // eax
  int v17; // esi
  PVOID v18[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v19; // [rsp+98h] [rbp+48h] BYREF
  PVOID P; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+58h] BYREF

  v3 = *(_DWORD *)(a3 + 24);
  v4 = 0LL;
  v5 = 0LL;
  P = 0LL;
  v6 = 0LL;
  v21 = 0LL;
  v7 = 0;
  v18[0] = 0LL;
  LODWORD(v19) = 0;
  switch ( v3 )
  {
    case 3325956:
      v9 = ACPIIoctlEvalPreProcessingV1(a1, (__int64)a2, a3, PagedPool, &v21, &P, v18, (unsigned int *)&v19);
      break;
    case 3325976:
      v9 = ACPIIoctlEvalPreProcessingV1Ex(a1, (__int64)a2, a3, PagedPool, &v21, &P, v18, (unsigned int *)&v19);
      break;
    case 3326012:
      v9 = ACPIIoctlEvalPreProcessingV2(a1, (__int64)&v21, (__int64)&P, (__int64)v18, (__int64)&v19);
      break;
    case 3326020:
      v9 = ACPIIoctlEvalPreProcessingV2Ex(a1, a2, a3, 1LL, &v21, &P, v18, &v19);
      break;
    default:
      goto LABEL_6;
  }
  v4 = P;
  v10 = v9;
  if ( v9 < 0 )
    goto LABEL_15;
  v5 = v21;
  v6 = v18[0];
  v7 = v19;
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
    v12 = v3 - 3325956;
    if ( v12 )
    {
      v13 = v12 - 20;
      if ( v13 )
      {
        v17 = v13 - 36;
        if ( v17 )
        {
          if ( v17 != 8 )
            goto LABEL_14;
          LOBYTE(v11) = 1;
        }
        else
        {
          v11 = 0LL;
        }
        v15 = ACPIIoctlEvalPostProcessingV2(a2, v4, v11);
LABEL_13:
        v10 = v15;
LABEL_14:
        dword_1C0082858 = 0;
        pszDest = 0;
        FreeData(v4);
        goto LABEL_15;
      }
      v14 = 1;
    }
    else
    {
      v14 = 0;
    }
    v15 = ACPIIoctlEvalPostProcessingV1(a2, (__int64)v4, v14);
    goto LABEL_13;
  }
LABEL_15:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x52706341u);
  a2->IoStatus.Status = v10;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v10;
}
