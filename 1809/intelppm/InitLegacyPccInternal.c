/*
 * XREFs of InitLegacyPccInternal @ 0x1C000CF5C
 * Callers:
 *     RegisterKernelLegacyPcc @ 0x1C000D3B0 (RegisterKernelLegacyPcc.c)
 *     RegisterHvLegacyPccCounters @ 0x1C002D020 (RegisterHvLegacyPccCounters.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C0002F1C (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0002F5C (ResetEnumerationContext.c)
 *     DisplayKernelPerfStates @ 0x1C0003050 (DisplayKernelPerfStates.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004C70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004FC0 (memset.c)
 *     InitCommonPerfStateContext @ 0x1C001E008 (InitCommonPerfStateContext.c)
 *     GetPerfDomain @ 0x1C0023648 (GetPerfDomain.c)
 */

__int64 __fastcall InitLegacyPccInternal(__int64 a1, __int64 (__fastcall *a2)(_QWORD *, _QWORD))
{
  _DWORD *v2; // r13
  _QWORD *v3; // rbx
  int v5; // edi
  int PerfDomain; // r15d
  SIZE_T v7; // r14
  __int64 **PoolWithTag; // rax
  __int64 **v9; // rsi
  unsigned int v10; // r14d
  unsigned int v11; // r12d
  PVOID v12; // rax
  char *v13; // r9
  unsigned int v14; // ecx
  unsigned int v15; // r8d
  unsigned int v16; // eax
  unsigned int v17; // edx
  __int64 v18; // rax
  _QWORD *v19; // rdi
  __int64 v20; // rcx
  unsigned int *v21; // rdx
  __int64 v22; // r10
  int v23; // r10d
  int v24; // r11d
  __int64 **v25; // r10
  __int64 *v26; // r11
  __int64 *v27; // rax
  __int64 v29[4]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v31; // [rsp+A0h] [rbp+50h] BYREF

  v2 = (_DWORD *)qword_1C001A878;
  v3 = 0LL;
  if ( qword_1C001A8D0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C001A398,
      0LL);
    PerfDomain = GetPerfDomain(a1, v29, &v31);
    v7 = (unsigned int)(56 * PerfDomain);
    PoolWithTag = (__int64 **)ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x72637250u);
    v9 = PoolWithTag;
    if ( PoolWithTag
      && (memset(PoolWithTag, 0, v7),
          v10 = (32 * PerfDomain + 439) & 0xFFFFFFF8,
          v11 = (v10 + 31) & 0xFFFFFFF8,
          v12 = ExAllocatePoolWithTag(NonPagedPoolNx, v11 + 8 * PerfDomain, 0x72637250u),
          (v3 = v12) != 0LL) )
    {
      memset(v12, 0, v11 + 8 * PerfDomain);
      if ( *(_BYTE *)(a1 + 1106) )
        v3[48] = PepParkPreference;
      if ( (*(_QWORD *)(a1 + 264) & 0x10000000000LL) != 0 )
      {
        v3[49] = PepParkMask;
        v3[50] = PepPerfCheckComplete;
        v3[9] = *(_QWORD *)(a1 + 1088);
      }
      *(_DWORD *)v3 = 60;
      v3[52] = v3 + 54;
      *((_DWORD *)v3 + 4) = PerfDomain;
      *((_DWORD *)v3 + 9) = 1;
      *((_DWORD *)v3 + 1) = 65537;
      *((_BYTE *)v3 + 52) = 0;
      v13 = (char *)v3 + v10;
      v3[51] = v13;
      v3[53] = (char *)v3 + v11;
      v3[42] = PerfControlLegacyPcc;
      v3[43] = PerfControlLegacyPcc;
      v3[41] = PerfSelectionLegacyPcc;
      v3[45] = PerfInitiateLegacyPcc;
      v3[47] = PerfCommitLegacyPcc;
      v14 = v2[7];
      *((_DWORD *)v3 + 5) = v14;
      *((_DWORD *)v3 + 6) = 100;
      v15 = 100 * v2[9] / v14;
      *((_DWORD *)v3 + 7) = v15;
      v17 = 100 * v2[8] % v14;
      v16 = 100 * v2[8] / v14;
      if ( !v15 )
        v15 = 1;
      *((_DWORD *)v3 + 7) = v15;
      if ( !v16 )
        v16 = 1;
      *((_DWORD *)v3 + 8) = v16;
      v3[7] = (unsigned int)v2[9];
      v3[8] = (unsigned int)v2[7];
      v18 = *(_QWORD *)(a1 + 320);
      if ( v18 )
        v3[32] = v18;
      v3[34] = *(_QWORD *)(a1 + 328);
      v3[35] = *(_QWORD *)(a1 + 336);
      if ( dword_1C001A874 )
      {
        v17 = 0x989680 % ((unsigned int)dword_1C001A874 >> 1);
        *((_DWORD *)v3 + 10) = 0x989680 / ((unsigned int)dword_1C001A874 >> 1);
      }
      *((_DWORD *)v13 + 3) = 0;
      *((_WORD *)v13 + 8) = 0;
      *(_QWORD *)v13 = LegacyPccInstantaneousFrequency;
      *((_DWORD *)v13 + 2) = 100;
      *((_DWORD *)v3 + 9) = 1;
      DisplayKernelPerfStates((__int64)v3, v17, v15);
      v19 = (_QWORD *)v3[53];
      ResetEnumerationContext(v29);
      while ( !(unsigned int)EnumerateNextDevice((__int64)v29, &v31) )
      {
        InitCommonPerfStateContext(v31, v23, v24, 100, 0);
        v21 = *(unsigned int **)(v20 + 552);
        *(_QWORD *)v22 = v20;
        *(_DWORD *)(v22 + 48) = 100;
        *(_QWORD *)(v22 + 32) = (char *)v2 + *v21;
        *(_QWORD *)(v22 + 40) = (char *)v2 + v21[1];
        *v19++ = v22;
      }
      v5 = a2(v3, v11 + 8 * PerfDomain);
      if ( v5 >= 0 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(
          WdfDriverGlobals,
          qword_1C001A8C8);
        ResetEnumerationContext(v29);
        if ( !(unsigned int)EnumerateNextDevice((__int64)v29, &v31) )
        {
          v25 = v9 + 1;
          v26 = &qword_1C001A3E8;
          do
          {
            *(_QWORD *)(v31 + 232) = v25 - 1;
            v27 = (__int64 *)qword_1C001A3F0;
            if ( *(__int64 **)qword_1C001A3F0 != v26 )
              __fastfail(3u);
            *v25 = v26;
            v25[1] = v27;
            *v27 = (__int64)v25;
            qword_1C001A3F0 = (__int64)v25;
          }
          while ( !(unsigned int)EnumerateNextDevice((__int64)v29, &v31) );
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
          WdfDriverGlobals,
          qword_1C001A8C8);
        v9 = 0LL;
        v5 = 0;
      }
    }
    else
    {
      v5 = -1073741670;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C001A398);
    if ( v3 )
      ExFreePoolWithTag(v3, 0x72637250u);
    if ( v9 )
      ExFreePoolWithTag(v9, 0x72637250u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v5;
}
