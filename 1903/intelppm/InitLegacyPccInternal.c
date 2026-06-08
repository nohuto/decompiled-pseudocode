/*
 * XREFs of InitLegacyPccInternal @ 0x1C000D63C
 * Callers:
 *     RegisterKernelLegacyPcc @ 0x1C000DAA0 (RegisterKernelLegacyPcc.c)
 *     RegisterHvLegacyPccCounters @ 0x1C002F650 (RegisterHvLegacyPccCounters.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C0003934 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0003974 (ResetEnumerationContext.c)
 *     DisplayKernelPerfStates @ 0x1C0003990 (DisplayKernelPerfStates.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00046C0 (memset.c)
 *     InitCommonPerfStateContext @ 0x1C00241F8 (InitCommonPerfStateContext.c)
 *     GetPerfDomain @ 0x1C0024474 (GetPerfDomain.c)
 */

__int64 __fastcall InitLegacyPccInternal(__int64 a1, __int64 (__fastcall *a2)(_QWORD *, _QWORD))
{
  _DWORD *v3; // r13
  _QWORD *v4; // rbx
  int v5; // edi
  int PerfDomain; // r14d
  SIZE_T v7; // rbp
  PVOID PoolWithTag; // rax
  void *v9; // rsi
  unsigned int v10; // ebp
  unsigned int v11; // r15d
  PVOID v12; // rax
  char *v13; // r9
  unsigned int v14; // ecx
  unsigned int v15; // r8d
  unsigned int v16; // eax
  unsigned int v17; // edx
  __int64 v18; // rax
  _QWORD *v19; // rdi
  int v20; // r10d
  int v21; // r11d
  __int64 v22; // rcx
  unsigned int *v23; // rdx
  __int64 v24; // r10
  _QWORD *v25; // r10
  __int64 v26; // r11
  _QWORD *v27; // rax
  __int64 v29[11]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v31; // [rsp+A0h] [rbp+18h] BYREF

  memset(v29, 0, 0x20uLL);
  v3 = (_DWORD *)qword_1C001B888;
  v4 = 0LL;
  if ( qword_1C001B8E0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C001B398,
      0LL);
    PerfDomain = GetPerfDomain(a1, v29, &v31);
    v7 = (unsigned int)(56 * PerfDomain);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x72637250u);
    v9 = PoolWithTag;
    if ( PoolWithTag
      && (memset(PoolWithTag, 0, v7),
          v10 = (32 * PerfDomain + 447) & 0xFFFFFFF8,
          v11 = (v10 + 31) & 0xFFFFFFF8,
          v12 = ExAllocatePoolWithTag(NonPagedPoolNx, v11 + 8 * PerfDomain, 0x72637250u),
          (v4 = v12) != 0LL) )
    {
      memset(v12, 0, v11 + 8 * PerfDomain);
      if ( *(_BYTE *)(a1 + 1122) )
        v4[48] = PepParkPreference;
      if ( (*(_QWORD *)(a1 + 264) & 0x10000000000LL) != 0 )
      {
        v4[49] = PepParkMask;
        v4[50] = PepPerfCheckComplete;
        v4[9] = *(_QWORD *)(a1 + 1104);
      }
      *(_DWORD *)v4 = 62;
      v4[52] = v4 + 55;
      *((_DWORD *)v4 + 4) = PerfDomain;
      *((_DWORD *)v4 + 9) = 1;
      *((_DWORD *)v4 + 1) = 65537;
      *((_BYTE *)v4 + 52) = 0;
      v13 = (char *)v4 + v10;
      v4[51] = v13;
      v4[53] = (char *)v4 + v11;
      v4[42] = PerfControlLegacyPcc;
      v4[43] = PerfControlLegacyPcc;
      v4[41] = PerfSelectionLegacyPcc;
      v4[45] = PerfInitiateLegacyPcc;
      v4[47] = PerfCommitLegacyPcc;
      v14 = v3[7];
      *((_DWORD *)v4 + 5) = v14;
      *((_DWORD *)v4 + 6) = 100;
      v15 = 100 * v3[9] / v14;
      *((_DWORD *)v4 + 7) = v15;
      v17 = 100 * v3[8] % v14;
      v16 = 100 * v3[8] / v14;
      if ( !v15 )
        v15 = 1;
      *((_DWORD *)v4 + 7) = v15;
      if ( !v16 )
        v16 = 1;
      *((_DWORD *)v4 + 8) = v16;
      v4[7] = (unsigned int)v3[9];
      v4[8] = (unsigned int)v3[7];
      v18 = *(_QWORD *)(a1 + 336);
      if ( v18 )
        v4[32] = v18;
      v4[34] = *(_QWORD *)(a1 + 344);
      v4[35] = *(_QWORD *)(a1 + 352);
      if ( dword_1C001B884 )
      {
        v17 = 0x989680 % ((unsigned int)dword_1C001B884 >> 1);
        *((_DWORD *)v4 + 10) = 0x989680 / ((unsigned int)dword_1C001B884 >> 1);
      }
      *((_QWORD *)v13 + 1) = 100LL;
      *(_QWORD *)v13 = LegacyPccInstantaneousFrequency;
      *((_WORD *)v13 + 8) = 0;
      *((_DWORD *)v4 + 9) = 1;
      DisplayKernelPerfStates((__int64)v4, v17, v15);
      v19 = (_QWORD *)v4[53];
      ResetEnumerationContext(v29);
      while ( !(unsigned int)EnumerateNextDevice((__int64)v29, &v31) )
      {
        InitCommonPerfStateContext(v31, v20, v21, 100, 0);
        v23 = *(unsigned int **)(v22 + 568);
        *(_QWORD *)v24 = v22;
        *(_DWORD *)(v24 + 48) = 100;
        *(_QWORD *)(v24 + 32) = (char *)v3 + *v23;
        *(_QWORD *)(v24 + 40) = (char *)v3 + v23[1];
        *v19++ = v24;
      }
      v5 = a2(v4, v11 + 8 * PerfDomain);
      if ( v5 >= 0 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(
          WdfDriverGlobals,
          qword_1C001B8D8);
        ResetEnumerationContext(v29);
        while ( !(unsigned int)EnumerateNextDevice((__int64)v29, &v31) )
        {
          *(_QWORD *)(v31 + 232) = v25 - 1;
          v27 = (_QWORD *)qword_1C001B3F0;
          if ( *(_QWORD *)qword_1C001B3F0 != v26 )
            __fastfail(3u);
          *v25 = v26;
          v25[1] = v27;
          *v27 = v25;
          qword_1C001B3F0 = (__int64)v25;
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
          WdfDriverGlobals,
          qword_1C001B8D8);
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
      qword_1C001B398);
    if ( v4 )
      ExFreePoolWithTag(v4, 0x72637250u);
    if ( v9 )
      ExFreePoolWithTag(v9, 0x72637250u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v5;
}
