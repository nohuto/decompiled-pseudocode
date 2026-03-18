/*
 * XREFs of ACPIIoctlGetDeviceSpecificData @ 0x1C002CC78
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C0001400 (ACPIIrpDispatchDeviceControl.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     AMLIIsObjectInGivenScope @ 0x1C000E350 (AMLIIsObjectInGivenScope.c)
 *     ACPIIoctlEvalPostProcessingV1 @ 0x1C0010AE0 (ACPIIoctlEvalPostProcessingV1.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C00116EC (AMLIEvalNameSpaceObject.c)
 *     FreeDataBuffs @ 0x1C0013E30 (FreeDataBuffs.c)
 *     AMLIGetNameSpaceObject @ 0x1C001A858 (AMLIGetNameSpaceObject.c)
 */

__int64 __fastcall ACPIIoctlGetDeviceSpecificData(ULONG_PTR a1, IRP *a2, __int64 a3)
{
  unsigned int v3; // eax
  int v5; // edx
  __int64 v6; // rdi
  _IRP *MasterIrp; // r13
  __int64 DeviceExtension; // rax
  _QWORD *v9; // rsi
  int v10; // ebx
  PVOID PoolWithTag; // rax
  _DWORD *v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // r12
  __int64 v16; // rdx
  _DWORD *v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rbx
  unsigned int v20; // eax
  __int64 *v21; // [rsp+58h] [rbp+10h] BYREF

  v3 = *(_DWORD *)(a3 + 16);
  v5 = *(_DWORD *)(a3 + 8);
  v6 = 0LL;
  v21 = 0LL;
  a2->IoStatus.Information = 0LL;
  if ( v3 < 0x1C )
  {
    v10 = -1073741820;
    goto LABEL_10;
  }
  if ( (unsigned int)(v5 - 1) <= 0x12 )
  {
    v10 = -1073741789;
    goto LABEL_10;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( *(_DWORD *)&MasterIrp->Type != 1214866753 )
  {
    v10 = -1073741585;
    goto LABEL_10;
  }
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v9 = *(_QWORD **)(DeviceExtension + 712);
  if ( !v9 )
  {
    v10 = -1073741810;
    goto LABEL_10;
  }
  v10 = AMLIGetNameSpaceObject("_DSD", *(__int64 **)(DeviceExtension + 712), (unsigned __int64 *)&v21, 1);
  if ( v10 >= 0 )
  {
    v10 = AMLIIsObjectInGivenScope((__int64)v21, v9);
    if ( v10 >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x52706341u);
      v6 = (__int64)PoolWithTag;
      if ( !PoolWithTag )
      {
        v10 = -1073741670;
        goto LABEL_6;
      }
      v10 = AMLIEvalNameSpaceObject(v21, PoolWithTag, 0, 0LL);
      if ( v10 < 0 )
        goto LABEL_6;
      if ( *(_WORD *)(v6 + 2) != 4 )
        goto LABEL_29;
      v13 = *(_DWORD **)(v6 + 32);
      v14 = 0LL;
      if ( *v13 <= 1u )
        goto LABEL_29;
      while ( HIWORD(v13[10 * v14 + 2]) != 3
           || v13[10 * v14 + 8] != 16
           || RtlCompareMemory(&MasterIrp->AllocationProcessorNumber, *(const void **)&v13[10 * v14 + 10], 0x10uLL) != 16 )
      {
        v14 = (unsigned int)(v14 + 2);
        if ( (unsigned int)(v14 + 1) >= *v13 )
          goto LABEL_29;
      }
      LODWORD(v15) = *(&MasterIrp->Flags + 1);
      if ( (_DWORD)v15 )
      {
        if ( HIWORD(v13[10 * (unsigned int)(v14 + 1) + 2]) != 4 )
          goto LABEL_29;
        v17 = *(_DWORD **)&v13[10 * (unsigned int)(v14 + 1) + 10];
        v18 = 0LL;
        if ( !*v17 )
          goto LABEL_29;
        while ( 1 )
        {
          if ( HIWORD(v17[10 * v18 + 2]) == 4 )
          {
            v19 = *(_QWORD *)&v17[10 * v18 + 10];
            if ( *(_DWORD *)v19 > 1u && *(_WORD *)(v19 + 10) == 2 )
            {
              v20 = *(_DWORD *)(v19 + 32);
              if ( (_DWORD)v15 == v20 )
              {
                v15 = *(&MasterIrp->Flags + 1);
                if ( v15 == RtlCompareMemory(&MasterIrp->AssociatedIrp, *(const void **)(v19 + 40), v20) )
                  break;
              }
            }
          }
          v18 = (unsigned int)(v18 + 1);
          if ( (unsigned int)v18 >= *v17 )
            goto LABEL_29;
        }
        v16 = v19 + 48;
      }
      else
      {
        v16 = (__int64)&v13[10 * (unsigned int)(v14 + 1) + 2];
      }
      if ( v16 )
      {
        v10 = ACPIIoctlEvalPostProcessingV1(a2, v16, 1);
LABEL_30:
        dword_1C0082858 = 0;
        pszDest = 0;
        FreeDataBuffs(v6, 1u);
        goto LABEL_6;
      }
LABEL_29:
      v10 = -1073741275;
      goto LABEL_30;
    }
  }
LABEL_6:
  if ( v21 )
    AMLIDereferenceHandleEx((volatile signed __int32 *)v21);
  if ( v6 )
    ExFreePoolWithTag((PVOID)v6, 0x52706341u);
LABEL_10:
  a2->IoStatus.Status = v10;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v10;
}
