/*
 * XREFs of InitLegacyPccInternal @ 0x1C00089AC
 * Callers:
 *     RegisterKernelLegacyPcc @ 0x1C0008990 (RegisterKernelLegacyPcc.c)
 *     RegisterHvLegacyPccCounters @ 0x1C00216E0 (RegisterHvLegacyPccCounters.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C00025F0 (EnumerateNextDevice.c)
 *     DisplayKernelPerfStates @ 0x1C0007A54 (DisplayKernelPerfStates.c)
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000E300 (memset.c)
 *     InitCommonPerfStateContext @ 0x1C0029648 (InitCommonPerfStateContext.c)
 *     GetPerfDomain @ 0x1C002D700 (GetPerfDomain.c)
 */

__int64 __fastcall InitLegacyPccInternal(__int64 a1, __int64 (__fastcall *a2)(_QWORD *, _QWORD))
{
  _QWORD *v3; // rbx
  int v4; // edi
  int PerfDomain; // r15d
  SIZE_T v6; // r14
  __int64 **PoolWithTag; // rax
  __int64 **v8; // rsi
  unsigned int v9; // r14d
  unsigned int v10; // r12d
  PVOID v11; // rax
  __int64 v12; // r9
  _DWORD *v13; // r14
  char *v14; // r9
  unsigned int v15; // ecx
  __int64 v16; // r8
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rax
  _QWORD *v20; // rdi
  __int64 v21; // rcx
  unsigned int *v22; // rdx
  __int64 v23; // r10
  int v24; // r9d
  int v25; // r10d
  int v26; // r11d
  __int64 **v27; // r10
  __int64 *v28; // r11
  __int64 *v29; // rax
  _QWORD v31[4]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v33; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v34; // [rsp+A8h] [rbp+58h]

  memset(v31, 0, sizeof(v31));
  v3 = 0LL;
  v34 = qword_1C0013908;
  if ( qword_1C0013960 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C0013418,
      0LL);
    PerfDomain = GetPerfDomain(a1, v31, &v33);
    v6 = (unsigned int)(56 * PerfDomain);
    PoolWithTag = (__int64 **)ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x72637250u);
    v8 = PoolWithTag;
    if ( PoolWithTag
      && (memset(PoolWithTag, 0, v6),
          v9 = (32 * PerfDomain + 447) & 0xFFFFFFF8,
          v10 = (v9 + 31) & 0xFFFFFFF8,
          v11 = ExAllocatePoolWithTag(NonPagedPoolNx, v10 + 8 * PerfDomain, 0x72637250u),
          (v3 = v11) != 0LL) )
    {
      memset(v11, 0, v10 + 8 * PerfDomain);
      if ( *(_BYTE *)(a1 + 1122) )
        v3[48] = PepParkPreference;
      if ( (*(_QWORD *)(a1 + 264) & 0x10000000000LL) != 0 )
      {
        v3[49] = PepParkMask;
        v3[50] = PepPerfCheckComplete;
        v3[9] = *(_QWORD *)(a1 + 1104);
      }
      *(_DWORD *)v3 = 62;
      v3[52] = v3 + 55;
      *((_DWORD *)v3 + 4) = PerfDomain;
      *((_DWORD *)v3 + 9) = 1;
      *((_DWORD *)v3 + 1) = 65537;
      *((_BYTE *)v3 + 52) = 0;
      v12 = v9;
      v13 = (_DWORD *)v34;
      v14 = (char *)v3 + v12;
      v3[51] = v14;
      v3[53] = (char *)v3 + v10;
      v3[42] = PerfControlLegacyPcc;
      v3[43] = PerfControlLegacyPcc;
      v3[41] = PerfSelectionLegacyPcc;
      v3[45] = PerfInitiateLegacyPcc;
      v3[47] = PerfCommitLegacyPcc;
      v15 = v13[7];
      *((_DWORD *)v3 + 5) = v15;
      *((_DWORD *)v3 + 6) = 100;
      HIDWORD(v18) = 0;
      v16 = 100 * v13[9] / v15;
      *((_DWORD *)v3 + 7) = v16;
      LODWORD(v18) = 100 * v13[8] % v15;
      v17 = 100 * v13[8] / v15;
      if ( !(_DWORD)v16 )
        v16 = 1LL;
      *((_DWORD *)v3 + 7) = v16;
      if ( !v17 )
        v17 = 1;
      *((_DWORD *)v3 + 8) = v17;
      v3[7] = (unsigned int)v13[9];
      v3[8] = (unsigned int)v13[7];
      v19 = *(_QWORD *)(a1 + 336);
      if ( v19 )
        v3[32] = v19;
      v3[34] = *(_QWORD *)(a1 + 344);
      v3[35] = *(_QWORD *)(a1 + 352);
      if ( dword_1C0013904 )
      {
        v18 = 0x989680 % ((unsigned int)dword_1C0013904 >> 1);
        *((_DWORD *)v3 + 10) = 0x989680 / ((unsigned int)dword_1C0013904 >> 1);
      }
      *((_QWORD *)v14 + 1) = 100LL;
      *(_QWORD *)v14 = LegacyPccInstantaneousFrequency;
      *((_WORD *)v14 + 8) = 0;
      *((_DWORD *)v3 + 9) = 1;
      DisplayKernelPerfStates((__int64)v3, v18, v16);
      v20 = (_QWORD *)v3[53];
      if ( v31[2] )
        LOBYTE(v31[3]) = 0;
      else
        v31[1] = v31[0];
      while ( !(unsigned int)EnumerateNextDevice((__int64)v31, &v33) )
      {
        InitCommonPerfStateContext(v33, v25, v26, 100, 0);
        v22 = *(unsigned int **)(v21 + 568);
        *(_QWORD *)v23 = v21;
        *(_DWORD *)(v23 + 48) = v24;
        *(_QWORD *)(v23 + 32) = (char *)v13 + *v22;
        *(_QWORD *)(v23 + 40) = (char *)v13 + v22[1];
        *v20++ = v23;
      }
      v4 = a2(v3, v10 + 8 * PerfDomain);
      if ( v4 >= 0 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(
          WdfDriverGlobals,
          qword_1C0013958);
        if ( v31[2] )
          LOBYTE(v31[3]) = 0;
        else
          v31[1] = v31[0];
        if ( !(unsigned int)EnumerateNextDevice((__int64)v31, &v33) )
        {
          v27 = v8 + 1;
          v28 = &qword_1C0013468;
          do
          {
            *(_QWORD *)(v33 + 232) = v27 - 1;
            v29 = (__int64 *)qword_1C0013470;
            if ( *(__int64 **)qword_1C0013470 != v28 )
              __fastfail(3u);
            *v27 = v28;
            v27[1] = v29;
            *v29 = (__int64)v27;
            qword_1C0013470 = (__int64)v27;
          }
          while ( !(unsigned int)EnumerateNextDevice((__int64)v31, &v33) );
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
          WdfDriverGlobals,
          qword_1C0013958);
        v8 = 0LL;
        v4 = 0;
      }
    }
    else
    {
      v4 = -1073741670;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C0013418);
    if ( v3 )
      ExFreePoolWithTag(v3, 0x72637250u);
    if ( v8 )
      ExFreePoolWithTag(v8, 0x72637250u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v4;
}
