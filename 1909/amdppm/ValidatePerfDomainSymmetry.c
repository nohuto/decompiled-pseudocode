/*
 * XREFs of ValidatePerfDomainSymmetry @ 0x1C002F900
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0026714 (ProcLibDeviceStart.c)
 * Callees:
 *     ResetEnumerationContext @ 0x1C00025D4 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C00025F0 (EnumerateNextDevice.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C000B0D8 (WPP_RECORDER_SF_dddd.c)
 *     WPP_RECORDER_SF_ddddd @ 0x1C000B1E8 (WPP_RECORDER_SF_ddddd.c)
 *     WPP_RECORDER_SF_ddii @ 0x1C000B31C (WPP_RECORDER_SF_ddii.c)
 *     WPP_RECORDER_SF_dds @ 0x1C000B434 (WPP_RECORDER_SF_dds.c)
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000E300 (memset.c)
 *     GetPerfDomain @ 0x1C002D710 (GetPerfDomain.c)
 *     ValidatePssSymmetry @ 0x1C002FDE0 (ValidatePssSymmetry.c)
 *     ValidatePctPtcSymmetry @ 0x1C002FEE4 (ValidatePctPtcSymmetry.c)
 *     ValidatePepPerformanceSymmetry @ 0x1C002FFDC (ValidatePepPerformanceSymmetry.c)
 */

__int64 __fastcall ValidatePerfDomainSymmetry(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v2; // r14d
  __int64 v3; // rdi
  __int64 v4; // r9
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int *v10; // r10
  _DWORD *v11; // rdx
  unsigned int v12; // ecx
  __int64 v13; // r8
  _DWORD *v14; // r9
  int v15; // eax
  const char **v16; // r12
  __int64 v17; // rcx
  int v18; // r13d
  __int64 v19; // rdi
  __int64 v20; // r15
  int v21; // r14d
  char v22; // si
  __int64 v23; // rax
  __int64 v24; // rbx
  _BYTE *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rdi
  const char *v30; // [rsp+20h] [rbp-49h]
  __int64 v31; // [rsp+50h] [rbp-19h] BYREF
  __int64 v32; // [rsp+58h] [rbp-11h]
  __int64 v33[12]; // [rsp+60h] [rbp-9h] BYREF
  int v35; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v36; // [rsp+E8h] [rbp+7Fh]

  v1 = a1;
  memset(v33, 0, 0x20uLL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0013418,
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
        v5 = v31;
        if ( v31 != v1 )
          break;
LABEL_47:
        if ( (unsigned int)EnumerateNextDevice((__int64)v33, &v31) )
          goto LABEL_48;
      }
      v6 = *(_QWORD *)(v31 + 264);
      v7 = *(_QWORD *)(v1 + 264);
      if ( (v7 & 0x10FF300000LL) != (v6 & 0x10FF300000LL) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_ddii(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v6 & 0x10FF300000LL,
            v7 & 0x10FF300000LL,
            v4,
            (int)v30);
          v7 = *(_QWORD *)(v1 + 264);
          v6 = *(_QWORD *)(v5 + 264);
        }
        v3 |= (v7 ^ v6) & 0x10FF300000LL;
        v36 = v3;
      }
      if ( (v7 & 0x70000000) != 0 )
      {
        v30 = "_PCT";
        if ( (int)ValidatePctPtcSymmetry(*(unsigned int *)(v1 + 52), v1 + 408, *(unsigned int *)(v5 + 52), v1 + 408) < 0 )
        {
          v3 |= 0x70000000uLL;
          v36 = v3;
        }
        if ( (*(_DWORD *)(v1 + 264) & 0x40000000) != 0
          && (int)ValidatePssSymmetry(
                    *(_DWORD *)(v1 + 52),
                    *(_QWORD *)(v1 + 440),
                    *(_DWORD *)(v5 + 52),
                    *(_QWORD *)(v5 + 440),
                    (__int64)"XPSS") < 0 )
        {
          v3 |= 0x40000000uLL;
          v36 = v3;
        }
        if ( (*(_DWORD *)(v1 + 264) & 0x30000000) != 0
          && (int)ValidatePssSymmetry(
                    *(_DWORD *)(v1 + 52),
                    *(_QWORD *)(v1 + 432),
                    *(_DWORD *)(v5 + 52),
                    *(_QWORD *)(v5 + 432),
                    (__int64)"_PSS") < 0 )
        {
          v3 |= 0x30000000uLL;
          v36 = v3;
        }
      }
      if ( (*(_DWORD *)(v1 + 264) & 0x3300000) != 0 )
      {
        v30 = "_PTC";
        if ( (int)ValidatePctPtcSymmetry(*(unsigned int *)(v1 + 52), v1 + 464, *(unsigned int *)(v5 + 52), v1 + 464) < 0 )
        {
          v3 |= 0x3300000uLL;
          v36 = v3;
        }
        v10 = *(unsigned int **)(v1 + 488);
        v11 = *(_DWORD **)(v5 + 488);
        if ( !v10 || !v11 )
          goto LABEL_32;
        v12 = *v10;
        if ( *v10 != *v11 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dddd((__int64)WPP_GLOBAL_Control->DeviceExtension, (__int64)v11, v8, v9, (int)"_PTC");
LABEL_32:
          v3 |= 0x3300000uLL;
          v36 = v3;
          goto LABEL_33;
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
              goto LABEL_33;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_ddddd(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              (__int64)v11,
              v13,
              (__int64)v14,
              (int)"_PTC");
          goto LABEL_32;
        }
      }
LABEL_33:
      if ( (*(_DWORD *)(v1 + 264) & 0x8000000) != 0 )
      {
        v15 = *(_DWORD *)(v5 + 52);
        v16 = (const char **)&off_1C000F1D8;
        v17 = *(_QWORD *)(v1 + 576);
        v18 = 0;
        v19 = *(_QWORD *)(v5 + 576);
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
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_dds(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                v26,
                v27,
                0x42u,
                (int)v30,
                v21,
                v22,
                *v16);
            v18 = -1073741823;
          }
          v17 = v32;
          v16 += 3;
          --v20;
        }
        while ( v20 );
        v3 = v36;
        v1 = a1;
        v5 = v31;
        if ( v18 < 0 )
        {
          v3 = v36 | 0x8000000;
          v36 |= 0x8000000uLL;
        }
      }
      if ( (*(_QWORD *)(v1 + 264) & 0x1000000000LL) != 0
        && (int)ValidatePepPerformanceSymmetry(
                  *(unsigned int *)(v1 + 52),
                  *(_QWORD *)(v1 + 1176),
                  *(unsigned int *)(v5 + 52),
                  *(_QWORD *)(v5 + 1176)) < 0 )
      {
        v3 |= 0x1000000000uLL;
        v36 = v3;
      }
      goto LABEL_47;
    }
LABEL_48:
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
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0013418);
  return v2;
}
