/*
 * XREFs of RegisterXsdDomain @ 0x1C002016C
 * Callers:
 *     ProcLibDeviceStart @ 0x1C001EF84 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002E78 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004C70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004FC0 (memset.c)
 *     PepQueryPerfDomainInfo @ 0x1C0035344 (PepQueryPerfDomainInfo.c)
 */

char __fastcall RegisterXsdDomain(_QWORD *a1)
{
  _DWORD *v1; // rsi
  _DWORD *v3; // r12
  char v4; // r15
  char v5; // di
  __int64 v6; // rbx
  _QWORD *v7; // rdx
  _QWORD *v8; // rcx
  unsigned int v10; // r14d
  PVOID PoolWithTag; // rax
  __int64 *v12; // rax

  v1 = (_DWORD *)a1[65];
  v3 = (_DWORD *)a1[147];
  v4 = v1 == v3;
  v5 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C001A398,
    0LL);
  v6 = qword_1C001A3B8;
  if ( (__int64 *)qword_1C001A3B8 != &qword_1C001A3B8 )
  {
    while ( *(_DWORD *)(v6 + 36) != v1[3] )
    {
      v6 = *(_QWORD *)v6;
      if ( (__int64 *)v6 == &qword_1C001A3B8 )
        goto LABEL_7;
    }
    if ( v4 != *(_BYTE *)(v6 + 48) )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x13u,
        (__int64)&WPP_30065b99cb4a32253e6076e5eda4c6d3_Traceguids);
      goto LABEL_6;
    }
    goto LABEL_4;
  }
LABEL_7:
  v10 = 56;
  if ( v1 == v3 )
    v10 = 72;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x72637250u);
  v6 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v10);
    *(_QWORD *)(v6 + 24) = v6 + 16;
    *(_QWORD *)(v6 + 16) = v6 + 16;
    v12 = (__int64 *)qword_1C001A3C0;
    if ( *(__int64 **)qword_1C001A3C0 != &qword_1C001A3B8 )
      goto LABEL_19;
    *(_QWORD *)v6 = &qword_1C001A3B8;
    *(_QWORD *)(v6 + 8) = v12;
    *v12 = v6;
    qword_1C001A3C0 = v6;
    *(_DWORD *)(v6 + 36) = v1[3];
    *(_DWORD *)(v6 + 40) = v1[4];
    *(_DWORD *)(v6 + 44) = v1[5];
    *(_BYTE *)(v6 + 48) = v4;
LABEL_4:
    a1[66] = v6;
    v7 = *(_QWORD **)(v6 + 24);
    v8 = a1 + 67;
    if ( *v7 == v6 + 16 )
    {
      *v8 = v6 + 16;
      a1[68] = v7;
      *v7 = v8;
      *(_QWORD *)(v6 + 24) = v8;
      if ( ++*(_DWORD *)(v6 + 32) == *(_DWORD *)(v6 + 44)
        && (!*(_BYTE *)(v6 + 48) || (int)PepQueryPerfDomainInfo(a1, v6) >= 0) )
      {
        v5 = 1;
      }
      goto LABEL_6;
    }
LABEL_19:
    __fastfail(3u);
  }
LABEL_6:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001A398);
  return v5;
}
