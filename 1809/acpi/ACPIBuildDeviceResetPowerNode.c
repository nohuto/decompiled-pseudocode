/*
 * XREFs of ACPIBuildDeviceResetPowerNode @ 0x1C004969C
 * Callers:
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C0015480 (ACPIBuildProcessDevicePhasePrr.c)
 * Callees:
 *     AMLIGetNameSpaceObject @ 0x1C000ABD0 (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_sqss @ 0x1C002BCAC (WPP_RECORDER_SF_sqss.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     WPP_RECORDER_SF_sLqss @ 0x1C004B0DC (WPP_RECORDER_SF_sLqss.c)
 */

__int64 __fastcall ACPIBuildDeviceResetPowerNode(_QWORD *BugCheckParameter2, __int64 *BugCheckParameter3, __int64 a3)
{
  _QWORD *PoolWithTag; // rax
  unsigned int v7; // esi
  _QWORD *v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rdi
  _QWORD *v14; // rdx
  __int64 v16; // r8
  const char *v17; // rcx
  const char *v18; // r10
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+80h] [rbp+18h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x50706341u);
  v7 = 0;
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x38uLL);
    KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
    BugCheckParameter2[50] = v8;
    v9 = *(_QWORD *)(a3 + 32);
    v20 = 0LL;
    if ( (int)AMLIGetNameSpaceObject(*(_BYTE **)(v9 + 40), BugCheckParameter3, (unsigned __int64 *)&v20, 0) < 0 )
    {
      WPP_RECORDER_SF_sLqss(WPP_GLOBAL_Control->DeviceExtension, 0, BugCheckParameter2[1], 15);
      KeBugCheckEx(0xA5u, 6uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, *(_QWORD *)(v9 + 40));
    }
    v10 = v20;
    if ( !v20 || *(_WORD *)(*(_QWORD *)v20 + 66LL) != 11 )
    {
      v16 = BugCheckParameter2[1];
      v17 = (const char *)&unk_1C006E28A;
      v18 = (const char *)&unk_1C006E28A;
      if ( (v16 & 0x200000000000LL) != 0 )
      {
        v17 = (const char *)BugCheckParameter2[70];
        if ( (v16 & 0x400000000000LL) != 0 )
          v18 = (const char *)BugCheckParameter2[71];
      }
      WPP_RECORDER_SF_sqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xAu,
        0x10u,
        BugCheckParameter4,
        *(const char **)(v9 + 40),
        (char)BugCheckParameter2,
        v17,
        v18);
      KeBugCheckEx(0xA5u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, *(_QWORD *)(v9 + 40));
    }
    v11 = *(_QWORD *)(*(_QWORD *)v20 + 104LL);
    v8[1] = v11;
    v12 = v11 + 48;
    *((_DWORD *)v8 + 4) = 7;
    v8[4] = BugCheckParameter2;
    *((_DWORD *)v8 + 5) = 5;
    v13 = v8 + 5;
    v14 = *(_QWORD **)(v12 + 8);
    if ( *v14 != v12 )
      __fastfail(3u);
    *v13 = v12;
    v13[1] = v14;
    *v14 = v13;
    *(_QWORD *)(v12 + 8) = v13;
    AMLIDereferenceHandleEx(v10);
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
