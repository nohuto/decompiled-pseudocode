/*
 * XREFs of ValidatePerfDomainSymmetry @ 0x1C002FA1C
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0027484 (ProcLibDeviceStart.c)
 * Callees:
 *     ResetEnumerationContext @ 0x1C0003CB4 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C0003CD0 (EnumerateNextDevice.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C000BCF0 (WPP_RECORDER_SF_dddd.c)
 *     WPP_RECORDER_SF_ddddd @ 0x1C000BE00 (WPP_RECORDER_SF_ddddd.c)
 *     WPP_RECORDER_SF_ddii @ 0x1C000BF34 (WPP_RECORDER_SF_ddii.c)
 *     WPP_RECORDER_SF_dds @ 0x1C000C04C (WPP_RECORDER_SF_dds.c)
 *     _guard_dispatch_icall_nop @ 0x1C000CB40 (_guard_dispatch_icall_nop.c)
 *     GetPerfDomain @ 0x1C0022064 (GetPerfDomain.c)
 *     ValidatePssSymmetry @ 0x1C002FEB0 (ValidatePssSymmetry.c)
 *     ValidatePctPtcSymmetry @ 0x1C002FF94 (ValidatePctPtcSymmetry.c)
 *     ValidatePepPerformanceSymmetry @ 0x1C003006C (ValidatePepPerformanceSymmetry.c)
 */

__int64 __fastcall ValidatePerfDomainSymmetry(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // r14d
  __int64 v3; // rsi
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int *v10; // r10
  _DWORD *v11; // rdx
  unsigned int v12; // ecx
  __int64 v13; // r8
  _DWORD *v14; // r9
  int v15; // eax
  __int64 *v16; // r12
  __int64 v17; // rcx
  int v18; // r13d
  __int64 v19; // rsi
  __int64 v20; // r15
  int v21; // r14d
  char v22; // di
  __int64 v23; // rax
  __int64 v24; // rbx
  _BYTE *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rsi
  const char *v30; // [rsp+20h] [rbp-49h]
  __int64 v31; // [rsp+50h] [rbp-19h] BYREF
  __int64 v32; // [rsp+58h] [rbp-11h]
  __int64 v33[12]; // [rsp+60h] [rbp-9h] BYREF
  int v35; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v36; // [rsp+E8h] [rbp+7Fh]

  v1 = a1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00113E8,
    0LL);
  v2 = 0;
  if ( (unsigned int)GetPerfDomain(v1, (__int64)v33, &v35) != 1 )
  {
    v36 = 0LL;
    v3 = 0LL;
    ResetEnumerationContext(v33);
    if ( !(unsigned int)EnumerateNextDevice((__int64)v33, &v31) )
    {
      while ( 1 )
      {
        v6 = v31;
        if ( v31 != v1 )
          break;
LABEL_41:
        if ( (unsigned int)EnumerateNextDevice((__int64)v33, &v31) )
          goto LABEL_42;
      }
      v7 = *(_QWORD *)(v1 + 264);
      if ( (v7 & 0x10FF300000LL) != (*(_QWORD *)(v31 + 264) & 0x10FF300000LL) )
      {
        WPP_RECORDER_SF_ddii((__int64)WPP_GLOBAL_Control->DeviceExtension, v7 & 0x10FF300000LL, v4, v5, (int)v30);
        v7 = *(_QWORD *)(v1 + 264);
        v3 |= (v7 ^ *(_QWORD *)(v6 + 264)) & 0x10FF300000LL;
        v36 = v3;
      }
      if ( (v7 & 0x70000000) != 0 )
      {
        v30 = "_PCT";
        if ( (int)ValidatePctPtcSymmetry(*(unsigned int *)(v1 + 52), v1 + 392, *(unsigned int *)(v6 + 52), v1 + 392) < 0 )
        {
          v3 |= 0x70000000uLL;
          v36 = v3;
        }
        if ( (*(_DWORD *)(v1 + 264) & 0x40000000) != 0
          && (int)ValidatePssSymmetry(
                    *(_DWORD *)(v1 + 52),
                    *(_QWORD *)(v1 + 424),
                    *(_DWORD *)(v6 + 52),
                    *(_QWORD *)(v6 + 424),
                    (__int64)"XPSS") < 0 )
        {
          v3 |= 0x40000000uLL;
          v36 = v3;
        }
        if ( (*(_DWORD *)(v1 + 264) & 0x30000000) != 0
          && (int)ValidatePssSymmetry(
                    *(_DWORD *)(v1 + 52),
                    *(_QWORD *)(v1 + 416),
                    *(_DWORD *)(v6 + 52),
                    *(_QWORD *)(v6 + 416),
                    (__int64)"_PSS") < 0 )
        {
          v3 |= 0x30000000uLL;
          v36 = v3;
        }
      }
      if ( (*(_DWORD *)(v1 + 264) & 0x3300000) != 0 )
      {
        v30 = "_PTC";
        if ( (int)ValidatePctPtcSymmetry(*(unsigned int *)(v1 + 52), v1 + 448, *(unsigned int *)(v6 + 52), v1 + 448) < 0 )
        {
          v3 |= 0x3300000uLL;
          v36 = v3;
        }
        v10 = *(unsigned int **)(v1 + 472);
        v11 = *(_DWORD **)(v6 + 472);
        if ( !v10 || !v11 )
          goto LABEL_28;
        v12 = *v10;
        if ( *v10 != *v11 )
        {
          WPP_RECORDER_SF_dddd((__int64)WPP_GLOBAL_Control->DeviceExtension, (__int64)v11, v8, v9, (int)"_PTC");
LABEL_28:
          v3 |= 0x3300000uLL;
          v36 = v3;
          goto LABEL_29;
        }
        v13 = 0LL;
        if ( v12 )
        {
          v14 = v11 + 1;
          while ( *(_DWORD *)((char *)v14 + (char *)v10 - (char *)v11) == *v14 )
          {
            v13 = (unsigned int)(v13 + 1);
            v14 += 5;
            if ( (unsigned int)v13 >= v12 )
              goto LABEL_29;
          }
          WPP_RECORDER_SF_ddddd(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            (__int64)v11,
            v13,
            (__int64)v14,
            (int)"_PTC");
          goto LABEL_28;
        }
      }
LABEL_29:
      if ( (*(_DWORD *)(v1 + 264) & 0x8000000) != 0 )
      {
        v15 = *(_DWORD *)(v6 + 52);
        v16 = (__int64 *)&off_1C000D1D8;
        v17 = *(_QWORD *)(v1 + 560);
        v18 = 0;
        v19 = *(_QWORD *)(v6 + 560);
        v20 = 15LL;
        v35 = v15;
        v21 = *(_DWORD *)(v1 + 52);
        v22 = v15;
        v32 = v17;
        do
        {
          v23 = *((unsigned int *)v16 - 2);
          v24 = 4LL;
          v25 = (_BYTE *)(v23 + v17);
          if ( *v25 != 10 )
            v24 = 12LL;
          if ( RtlCompareMemory(v25, (const void *)(v23 + v19), (unsigned int)v24) != v24 )
          {
            WPP_RECORDER_SF_dds((__int64)WPP_GLOBAL_Control->DeviceExtension, v26, v27, 0x42u, (int)v30, v21, v22, *v16);
            v18 = -1073741823;
          }
          v17 = v32;
          v16 += 3;
          --v20;
        }
        while ( v20 );
        v1 = a1;
        v3 = v36;
        v6 = v31;
        if ( v18 < 0 )
        {
          v3 = v36 | 0x8000000;
          v36 |= 0x8000000uLL;
        }
      }
      if ( (*(_QWORD *)(v1 + 264) & 0x1000000000LL) != 0
        && (int)ValidatePepPerformanceSymmetry(
                  *(unsigned int *)(v1 + 52),
                  *(_QWORD *)(v1 + 1160),
                  *(unsigned int *)(v6 + 52),
                  *(_QWORD *)(v6 + 1160)) < 0 )
      {
        v3 |= 0x1000000000uLL;
        v36 = v3;
      }
      goto LABEL_41;
    }
LABEL_42:
    ResetEnumerationContext(v33);
    if ( !(unsigned int)EnumerateNextDevice((__int64)v33, &v31) )
    {
      v28 = ~v3;
      do
        *(_QWORD *)(v31 + 264) &= v28;
      while ( !(unsigned int)EnumerateNextDevice((__int64)v33, &v31) );
    }
    v2 = (*(_QWORD *)(v1 + 264) & 0x10FF300000LL) == 0 ? 0xC0000001 : 0;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00113E8);
  return v2;
}
