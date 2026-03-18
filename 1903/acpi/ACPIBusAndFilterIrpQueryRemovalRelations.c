/*
 * XREFs of ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C004CCA0
 * Callers:
 *     ACPIBusIrpQueryDeviceRelations @ 0x1C008F010 (ACPIBusIrpQueryDeviceRelations.c)
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C008F850 (ACPIFilterIrpQueryDeviceRelations.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00170E0 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C0017224 (WPP_RECORDER_SF_qqss.c)
 *     WPP_RECORDER_SF_qss @ 0x1C001AA84 (WPP_RECORDER_SF_qss.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     WPP_RECORDER_SF_dqqss @ 0x1C004DC0C (WPP_RECORDER_SF_dqqss.c)
 */

__int64 __fastcall ACPIBusAndFilterIrpQueryRemovalRelations(ULONG_PTR a1, PVOID *a2)
{
  __int64 DeviceExtension; // rax
  unsigned int v4; // ebx
  _QWORD *v5; // rdi
  __int64 v6; // rax
  const char *v7; // rsi
  const char *v8; // rcx
  KIRQL v10; // al
  __int64 v11; // rcx
  __int64 v12; // rcx
  void *v13; // rsi
  _QWORD **v14; // r12
  int v15; // eax
  _QWORD *v16; // rcx
  SIZE_T v17; // rbp
  _DWORD *PoolWithTag; // rax
  _DWORD *v19; // r14
  unsigned int *v20; // r15
  __int64 v21; // rax
  const char *v22; // rdx
  const char *v23; // rcx
  _QWORD *i; // r15
  void *v25; // r8
  void *v26; // rdx
  void *v27; // rbp
  __int64 v28; // rax
  __int64 v29; // rcx
  void *v30; // rax
  int v31; // [rsp+20h] [rbp-68h]
  KIRQL NewIrql; // [rsp+A0h] [rbp+18h]

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = 0;
  v5 = (_QWORD *)DeviceExtension;
  if ( *(_QWORD *)(DeviceExtension + 712) )
  {
    v10 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    v11 = v5[113];
    NewIrql = v10;
    if ( v11 )
      v12 = *(_QWORD *)(v11 + 72);
    else
      v12 = 0LL;
    v13 = &unk_1C006FE7D;
    if ( v12 )
    {
      v14 = (_QWORD **)(v12 + 48);
      v15 = 0;
      v16 = *(_QWORD **)(v12 + 48);
      while ( v16 != v14 )
      {
        v16 = (_QWORD *)*v16;
        ++v15;
      }
      if ( *a2 )
        v15 += *(_DWORD *)*a2;
      v17 = 8LL * (unsigned int)(v15 - 1) + 16;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v17, 0x44706341u);
      v19 = PoolWithTag;
      if ( PoolWithTag )
      {
        v20 = (unsigned int *)*a2;
        if ( v20 )
        {
          memmove(PoolWithTag + 2, v20 + 2, 8LL * *v20);
          *v19 = *v20;
        }
        else
        {
          memset(PoolWithTag, 0, v17);
        }
        v21 = v5[1];
        v22 = (const char *)&unk_1C006FE7D;
        v23 = (const char *)&unk_1C006FE7D;
        if ( (v21 & 0x200000000000LL) != 0 )
        {
          v22 = (const char *)v5[70];
          if ( (v21 & 0x400000000000LL) != 0 )
            v23 = (const char *)v5[71];
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            0xCu,
            0x13u,
            (__int64)&WPP_5ea0bed1d6f13f26cf29dd07beb1e62d_Traceguids,
            (char)v5,
            v22,
            v23);
        for ( i = *v14; i != v14; i = (_QWORD *)*i )
        {
          v25 = &unk_1C006FE7D;
          v26 = &unk_1C006FE7D;
          v27 = *(void **)(*(i - 1) + 736LL);
          v28 = v5[1];
          if ( (v28 & 0x200000000000LL) != 0 )
          {
            v25 = (void *)v5[70];
            if ( (v28 & 0x400000000000LL) != 0 )
              v26 = (void *)v5[71];
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dqqss(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)v26,
              (_DWORD)v25,
              0,
              v31,
              *v19,
              (char)v27,
              (char)v5,
              (__int64)v25,
              (__int64)v26);
          if ( v27 && ObReferenceObjectByPointer(v27, 0, 0LL, 0) >= 0 )
            *(_QWORD *)&v19[2 * (*v19)++ + 2] = v27;
        }
        if ( *a2 )
          ExFreePoolWithTag(*a2, 0);
        *a2 = v19;
      }
      else
      {
        v4 = -1073741670;
      }
    }
    else
    {
      v4 = -1073741637;
    }
    KeReleaseSpinLock(&AcpiPowerLock, NewIrql);
    if ( (int)(v4 + 0x80000000) >= 0 && v4 != -1073741637 )
    {
      v29 = v5[1];
      v30 = &unk_1C006FE7D;
      if ( (v29 & 0x200000000000LL) != 0 )
      {
        v13 = (void *)v5[70];
        if ( (v29 & 0x400000000000LL) != 0 )
          v30 = (void *)v5[71];
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xCu,
          0x15u,
          (__int64)&WPP_5ea0bed1d6f13f26cf29dd07beb1e62d_Traceguids,
          v4,
          (char)v5,
          (__int64)v13,
          (__int64)v30);
    }
    return v4;
  }
  else
  {
    v6 = *(_QWORD *)(DeviceExtension + 8);
    v7 = (const char *)&unk_1C006FE7D;
    v8 = (const char *)&unk_1C006FE7D;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v7 = (const char *)v5[70];
      if ( (v6 & 0x400000000000LL) != 0 )
        v8 = (const char *)v5[71];
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xCu,
        0x12u,
        (__int64)&WPP_5ea0bed1d6f13f26cf29dd07beb1e62d_Traceguids,
        0,
        (char)v5,
        v7,
        v8);
    return 3221225485LL;
  }
}
