/*
 * XREFs of ACPIBuildDevicePowerNodes @ 0x1C0015A94
 * Callers:
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C00152A0 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C0015580 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C001E8C0 (ACPIBuildProcessDevicePhasePrx.c)
 * Callees:
 *     AMLIGetNameSpaceObject @ 0x1C000ABD0 (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C001952C (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     WPP_RECORDER_SF_sqss @ 0x1C002BCAC (WPP_RECORDER_SF_sqss.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     WPP_RECORDER_SF_sLqss @ 0x1C004B0DC (WPP_RECORDER_SF_sLqss.c)
 *     ACPIInitRemovePowerNodes @ 0x1C0054944 (ACPIInitRemovePowerNodes.c)
 *     AMLIIsEqualHandle @ 0x1C006110C (AMLIIsEqualHandle.c)
 */

__int64 __fastcall ACPIBuildDevicePowerNodes(
        _QWORD *BugCheckParameter2,
        __int64 *BugCheckParameter3,
        __int64 a3,
        int a4)
{
  unsigned int *v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // r13
  __int64 *v7; // r12
  unsigned int v9; // r15d
  unsigned int v10; // esi
  _BYTE *PoolWithTag; // rax
  _BYTE *v13; // rbp
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 v18; // rcx
  unsigned int v19; // r14d
  __int64 v20; // r15
  __int64 v21; // rdx
  _QWORD *v22; // r9
  _QWORD *v23; // r8
  __int64 v24; // rax
  __int64 *v25; // rdx
  __int64 **v26; // r8
  ULONG_PTR v27; // r14
  __int64 v28; // rdx
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  void *v32; // r8
  int v33; // [rsp+50h] [rbp-48h]
  unsigned __int64 v34[8]; // [rsp+58h] [rbp-40h] BYREF
  unsigned int v37; // [rsp+B8h] [rbp+20h]

  v4 = *(unsigned int **)(a3 + 32);
  v5 = 0;
  v6 = a4;
  v7 = BugCheckParameter3;
  v33 = 0;
  v9 = 0;
  v10 = *v4;
  if ( !a4 )
  {
    if ( v10 < 2 )
      KeBugCheckEx(0xA5u, 5uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, *v4);
    v9 = 2;
    v10 -= 2;
    v33 = 2;
  }
  if ( v10 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 56LL * v10, 0x50706341u);
    v13 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 56LL * v10);
      KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
      BugCheckParameter2[v6 + 45] = v13;
      v37 = 0;
      while ( 1 )
      {
        v34[0] = 0LL;
        v14 = 5LL * v9;
        v15 = *(_QWORD *)(a3 + 32);
        if ( (int)AMLIGetNameSpaceObject(*(_BYTE **)(v15 + 8 * v14 + 40), v7, v34, 0) < 0 )
        {
          v32 = &unk_1C006E28A;
          if ( BugCheckParameter2 )
          {
            v16 = BugCheckParameter2[1];
            if ( (v16 & 0x200000000000LL) != 0 && (v16 & 0x400000000000LL) != 0 )
              v32 = (void *)BugCheckParameter2[71];
          }
          WPP_RECORDER_SF_sLqss(WPP_GLOBAL_Control->DeviceExtension, v16, (_DWORD)v32, 13);
          KeBugCheckEx(0xA5u, 6uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v7, *(_QWORD *)(v15 + 8 * v14 + 40));
        }
        v17 = v34[0];
        if ( !v34[0] || *(_WORD *)(*(_QWORD *)v34[0] + 66LL) != 11 )
        {
          LOBYTE(v16) = 2;
          WPP_RECORDER_SF_sqss(WPP_GLOBAL_Control->DeviceExtension, v16, 10, 14);
          KeBugCheckEx(
            0xA5u,
            0x12uLL,
            (ULONG_PTR)BugCheckParameter2,
            (ULONG_PTR)BugCheckParameter3,
            *(_QWORD *)(v15 + 8 * v14 + 40));
        }
        v18 = *(_QWORD *)(*(_QWORD *)v34[0] + 104LL);
        v19 = v37;
        v20 = 56LL * v37;
        *(_QWORD *)&v13[v20 + 8] = v18;
        *(_DWORD *)&v13[v20 + 16] = *(_DWORD *)(v18 + 44);
        *(_QWORD *)&v13[v20 + 32] = BugCheckParameter2;
        *(_DWORD *)&v13[v20 + 20] = v6;
        if ( !(_DWORD)v6 )
          v13[v20 + 24] = 1;
        v21 = v18;
        if ( (_DWORD)v6 == 1 && (BugCheckParameter2[1] & 0x400000) != 0 )
        {
          _InterlockedOr64((volatile signed __int64 *)(v18 + 16), 0x220uLL);
          v21 = *(_QWORD *)&v13[v20 + 8];
          v17 = v34[0];
        }
        v22 = (_QWORD *)(v21 + 48);
        v23 = *(_QWORD **)(v21 + 48);
        if ( v23 != (_QWORD *)(v21 + 48) )
        {
          while ( 1 )
          {
            v27 = *(v23 - 1);
            if ( (_QWORD *)v27 != BugCheckParameter2
              && (unsigned __int8)AMLIIsEqualHandle(*(_QWORD *)(v27 + 712), BugCheckParameter2[89])
              && ((*(_DWORD *)(v27 + 952) & 0x20000) == 0 || *(_DWORD *)(v27 + 848) == *(_DWORD *)(*(_QWORD *)v28 + 40LL)) )
            {
              break;
            }
            v23 = (_QWORD *)*v23;
            if ( v23 == v22 )
              goto LABEL_34;
          }
          ACPIInitRemovePowerNodes(v27);
          if ( (*(_DWORD *)(v27 + 952) & 0x20000) != 0 )
          {
            KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
            v30 = *(_QWORD *)(v27 + 832);
            if ( *(_QWORD *)(v30 + 8) != v27 + 832 || (v31 = *(_QWORD **)(v27 + 840), *v31 != v27 + 832) )
LABEL_35:
              __fastfail(3u);
            *v31 = v30;
            *(_QWORD *)(v30 + 8) = v31;
            ACPIInitDereferenceDeviceExtensionLocked(v27);
            KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
          }
LABEL_34:
          v19 = v37;
        }
        v24 = *(_QWORD *)&v13[v20 + 8] + 48LL;
        v25 = (__int64 *)&v13[v20 + 40];
        v26 = *(__int64 ***)(*(_QWORD *)&v13[v20 + 8] + 56LL);
        if ( *v26 != (__int64 *)v24 )
          goto LABEL_35;
        *v25 = v24;
        v25[1] = (__int64)v26;
        *v26 = v25;
        *(_QWORD *)(v24 + 8) = v25;
        *(_QWORD *)&v13[v20] = (unsigned __int64)&v13[v20 + 56] & -(__int64)(v19 < v10 - 1);
        AMLIDereferenceHandleEx(v17);
        v9 = v33 + 1;
        v37 = v19 + 1;
        ++v33;
        if ( v19 + 1 >= v10 )
          break;
        v7 = BugCheckParameter3;
      }
      KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v5;
}
