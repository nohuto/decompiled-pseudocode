/*
 * XREFs of InitPerfStatesInternal @ 0x1C0023A18
 * Callers:
 *     RegisterKernelPerfStates @ 0x1C00244C0 (RegisterKernelPerfStates.c)
 *     RegisterHvPerfStatesCounters @ 0x1C002FCF0 (RegisterHvPerfStatesCounters.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00036CC (WPP_RECORDER_SF_.c)
 *     EnumerateNextDevice @ 0x1C0003934 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0003974 (ResetEnumerationContext.c)
 *     DisplayKernelPerfStates @ 0x1C0003990 (DisplayKernelPerfStates.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00046C0 (memset.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001FC34 (GetRegistryDwordValueNoDefault.c)
 *     InitCommonPerfStateContext @ 0x1C00241F8 (InitCommonPerfStateContext.c)
 *     CalculatePercentageCap @ 0x1C002422C (CalculatePercentageCap.c)
 *     GetPerfDomain @ 0x1C0024474 (GetPerfDomain.c)
 */

__int64 __fastcall InitPerfStatesInternal(__int64 a1, int (__fastcall *a2)(char *, _QWORD))
{
  int v3; // ecx
  char *v4; // rbx
  __int64 v5; // rax
  unsigned int *v6; // r15
  _QWORD *v7; // rsi
  unsigned int v8; // r12d
  unsigned int v9; // r14d
  char *PoolWithTag; // rax
  char *v11; // r13
  PVOID v12; // rax
  _QWORD *v13; // rax
  char *v14; // rax
  char *v15; // rax
  int v16; // eax
  bool v17; // zf
  void *v18; // rax
  unsigned int v19; // r8d
  __int64 v20; // rcx
  _DWORD *v21; // r15
  __int64 v22; // r11
  __int64 v23; // r8
  __int64 v24; // rdx
  _DWORD *v25; // r15
  int v26; // r9d
  unsigned int v27; // ecx
  _BYTE *v28; // rdx
  unsigned __int8 v29; // cl
  __int64 v30; // rax
  __int64 v31; // rcx
  void *v32; // rax
  char v33; // al
  __int64 v34; // r12
  _QWORD *v35; // r15
  char *v36; // r14
  unsigned int v37; // eax
  int v38; // r11d
  __int64 v39; // r10
  unsigned int v40; // edi
  unsigned int v42; // r10d
  unsigned int v43; // r13d
  int v44; // r14d
  __int64 v45; // r11
  __int64 v46; // rcx
  unsigned int v47; // edx
  unsigned int v48; // edx
  unsigned int v49; // [rsp+30h] [rbp-48h]
  int v50; // [rsp+34h] [rbp-44h]
  int v51; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v52; // [rsp+3Ch] [rbp-3Ch]
  PVOID P; // [rsp+40h] [rbp-38h]
  char *v54; // [rsp+48h] [rbp-30h]
  __int64 v55[5]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v56; // [rsp+C0h] [rbp+48h] BYREF
  int (__fastcall *v57)(char *, _QWORD); // [rsp+C8h] [rbp+50h]
  int PerfDomain; // [rsp+D0h] [rbp+58h]
  size_t Size; // [rsp+D8h] [rbp+60h]

  v57 = a2;
  memset(v55, 0, 0x20uLL);
  v3 = 0;
  P = 0LL;
  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 264);
  v6 = 0LL;
  v7 = 0LL;
  LODWORD(v56) = 0;
  v8 = 0;
  if ( (v5 & 0x70000000) != 0 )
  {
    if ( (v5 & 0x40000000) != 0 )
      v6 = *(unsigned int **)(a1 + 440);
    else
      v6 = *(unsigned int **)(a1 + 432);
    v8 = *v6;
  }
  if ( (v5 & 0x3300000) != 0 )
  {
    v3 = **(_DWORD **)(a1 + 488);
    LODWORD(v56) = v3;
  }
  v9 = v3 + v8;
  v52 = v3 + v8;
  if ( !(v3 + v8) )
    return (unsigned int)-1073741823;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C001B398,
    0LL);
  PerfDomain = GetPerfDomain(a1, v55, &v51);
  Size = (unsigned int)(96 * PerfDomain);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x72637250u);
  v54 = PoolWithTag;
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_62;
  memset(PoolWithTag, 0, Size);
  Size = 32 * v9;
  v12 = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x72637250u);
  P = v12;
  if ( !v12 )
    goto LABEL_62;
  memset(v12, 0, Size);
  v13 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x72637250u);
  v7 = v13;
  if ( !v13 )
    goto LABEL_62;
  memset(v13, 0, 0x50uLL);
  LODWORD(Size) = (32 * PerfDomain + 447) & 0xFFFFFFF8;
  v50 = (Size + 31) & 0xFFFFFFF8;
  v49 = v50 + 8 * PerfDomain;
  v14 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v49, 0x72637250u);
  v4 = v14;
  if ( v14 )
  {
    memset(v14, 0, v49);
    if ( *(_BYTE *)(a1 + 1122) )
      *((_QWORD *)v4 + 48) = PepParkPreference;
    if ( (*(_QWORD *)(a1 + 264) & 0x10000000000LL) != 0 )
    {
      *((_QWORD *)v4 + 49) = PepParkMask;
      *((_QWORD *)v4 + 50) = PepPerfCheckComplete;
      *((_QWORD *)v4 + 9) = *(_QWORD *)(a1 + 1104);
    }
    *((_DWORD *)v4 + 4) = PerfDomain;
    *(_DWORD *)v4 = 62;
    *((_QWORD *)v4 + 52) = v4 + 440;
    v15 = &v4[(unsigned int)Size];
    *((_DWORD *)v4 + 9) = 1;
    *((_QWORD *)v4 + 51) = v15;
    *((_WORD *)v4 + 3) = 257;
    *((_QWORD *)v4 + 53) = &v4[v50];
    v16 = v51;
    *((_WORD *)v4 + 2) = v51;
    v4[52] = 0;
    *((_DWORD *)v4 + 6) = 100;
    *((_QWORD *)v4 + 42) = PerfControlPTStates;
    if ( v16 == 252 || (v17 = v16 == 1, v18 = PerfControlPTStatesHidden, v17) )
      v18 = PerfControlPTStatesHiddenSwAll;
    *((_QWORD *)v4 + 43) = v18;
    *((_QWORD *)v4 + 41) = PerfSelectionPTStates;
    v7[7] = P;
    *((_QWORD *)v4 + 7) = 0LL;
    *((_QWORD *)v4 + 8) = 100LL;
    if ( v8 && v6 )
    {
      *((_QWORD *)v4 + 34) = *(_QWORD *)(a1 + 344);
      *((_QWORD *)v4 + 35) = *(_QWORD *)(a1 + 352);
      *((_DWORD *)v4 + 5) = v6[2];
      v4[9] = *(_BYTE *)(a1 + 320);
      v19 = v6[12 * v8 - 9];
      *v7 = *(_QWORD *)(a1 + 280);
      v7[4] = *(_QWORD *)(a1 + 312);
      v7[3] = *(_QWORD *)(a1 + 296);
      v7[5] = a1 + 408;
      *((_QWORD *)v4 + 8) = v6[2];
      *((_QWORD *)v4 + 7) = v6[12 * v8 - 10];
      LODWORD(Size) = v19;
      v20 = 0LL;
      v21 = v6 + 3;
      v22 = v8;
      do
      {
        v23 = v7[7];
        *(_DWORD *)(v20 + v23 + 16) = *(v21 - 1);
        *(_BYTE *)(v20 + v23 + 24) = (unsigned int)(100 * *(v21 - 1)) / *((_DWORD *)v4 + 5);
        *(_QWORD *)(v20 + v23) = *(_QWORD *)(v21 + 3);
        *(_DWORD *)(v20 + v23 + 20) = *v21;
        *(_QWORD *)(v20 + v23 + 8) = *(_QWORD *)(v21 + 5);
        *(_BYTE *)(v20 + v23 + 25) = 1;
        *(_WORD *)(v20 + v23 + 26) = *((_WORD *)v21 + 2);
        if ( (*(_DWORD *)(a1 + 264) & 0x40000000) != 0 )
        {
          *(_QWORD *)(v20 + v23 + 8) = 0LL;
          *(_QWORD *)(v20 + v23) = v21 - 1;
        }
        v21 += 12;
        v20 += 32LL;
        --v22;
      }
      while ( v22 );
      v24 = v7[7];
      v25 = v4 + 20;
      v26 = *(_DWORD *)(32LL * (v8 - 1) + v24 + 16);
      goto LABEL_25;
    }
    v25 = v4 + 20;
    *((_DWORD *)v4 + 5) = 0;
    if ( (int)GetRegistryDwordValueNoDefault(
                (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                (__int64)L"~MHz",
                (__int64)(v4 + 20)) >= 0 )
    {
      v26 = *((_DWORD *)v4 + 5);
      if ( v26 )
      {
        v24 = v7[7];
        LODWORD(Size) = 1000 * v26;
LABEL_25:
        if ( (_DWORD)v56 )
        {
          v42 = 0;
          v43 = v56;
          v23 = 0LL;
          v44 = Size;
          v7[1] = *(_QWORD *)(a1 + 288);
          v7[2] = *(_QWORD *)(a1 + 304);
          v7[6] = a1 + 464;
          do
          {
            v56 = *(_QWORD *)(a1 + 488);
            v45 = v7[7] + 32LL * (v42 + v8);
            v46 = v56;
            v47 = v26 * *(_DWORD *)(v23 + v56 + 4) / 0x64u;
            *(_DWORD *)(v45 + 16) = v47;
            *(_BYTE *)(v45 + 24) = 100 * v47 / *v25;
            *(_QWORD *)v45 = *(unsigned int *)(v23 + v46 + 16);
            *(_QWORD *)(v45 + 8) = *(unsigned int *)(v23 + v46 + 20);
            *(_BYTE *)(v45 + 25) = 2;
            *(_WORD *)(v45 + 26) = *(_WORD *)(v23 + v46 + 12);
            v48 = *(_DWORD *)(v23 + v46 + 8);
            if ( !v48 )
              v48 = v44 * *(_DWORD *)(v23 + v46 + 4) / 0x64u;
            ++v42;
            *(_DWORD *)(v45 + 20) = v48;
            v23 += 20LL;
          }
          while ( v42 < v43 );
          v24 = v7[7];
          v9 = v52;
          v11 = v54;
        }
        v27 = 1;
        if ( v9 > 1 )
        {
          while ( *(_BYTE *)(32LL * v27 + v24 + 24) )
          {
            if ( ++v27 >= v9 )
              goto LABEL_29;
          }
          v9 = v27;
        }
LABEL_29:
        v28 = (_BYTE *)v7[7];
        *((_DWORD *)v7 + 16) = v9;
        if ( v9 > v8 )
        {
          *((_DWORD *)v7 + 17) = v8;
          *((_DWORD *)v7 + 18) = v9 - v8;
          v29 = v28[32 * v8 + 24];
        }
        else
        {
          *((_DWORD *)v7 + 17) = v9;
          *((_DWORD *)v7 + 18) = 0;
          v29 = v28[32 * v9 - 8];
        }
        *((_DWORD *)v4 + 7) = v29;
        *((_DWORD *)v4 + 8) = *(unsigned __int8 *)(32LL * (v9 - 1) + v7[7] + 24);
        v30 = *(_QWORD *)(a1 + 336);
        if ( v30 )
          *((_QWORD *)v4 + 32) = v30;
        v31 = *((_QWORD *)v4 + 51);
        *(_QWORD *)(v31 + 8) = 100LL;
        if ( *(_QWORD *)(a1 + 328) )
        {
          v32 = PerfReadWrappingCounter;
          v28 = PerfReadActualMasterCount;
          if ( (*(_QWORD *)(a1 + 264) & 0x8000000000LL) == 0 )
            v32 = PerfReadActualMasterCount;
          *(_QWORD *)v31 = v32;
          v33 = 1;
        }
        else
        {
          *(_QWORD *)v31 = PerfStatesInstantaneousFrequency;
          v33 = 0;
        }
        *(_BYTE *)(v31 + 16) = v33;
        *(_BYTE *)(v31 + 17) = v33;
        DisplayKernelPerfStates((__int64)v4, (int)v28, v23);
        v34 = *((_QWORD *)v4 + 52);
        v35 = (_QWORD *)*((_QWORD *)v4 + 53);
        ResetEnumerationContext(v55);
        if ( !(unsigned int)EnumerateNextDevice((__int64)v55, &v56) )
        {
          v36 = v11 + 12;
          do
          {
            v37 = CalculatePercentageCap(v7, *(unsigned int *)(v56 + 448), *(unsigned int *)(v56 + 496));
            InitCommonPerfStateContext(v38, (_DWORD)v36 - 12, v34, v37, v37 < 0x64 ? 2 : 0);
            *(_QWORD *)(v36 + 12) = v7;
            *(_DWORD *)v36 = 100;
            if ( *(_QWORD *)(a1 + 328) )
            {
              *v35 = v36 + 20;
              *(_QWORD *)(v36 + 68) = *(_QWORD *)(a1 + 328);
            }
            else
            {
              *v35 = v39;
            }
            ++v35;
            v36 += 96;
            LODWORD(v34) = v34 + 32;
          }
          while ( !(unsigned int)EnumerateNextDevice((__int64)v55, &v56) );
        }
        if ( (*(_DWORD *)(a1 + 264) & 0x400000) != 0 && (v51 == 254 || PerfDomain == 1) )
        {
          *(_WORD *)(v4 + 11) = 257;
          *((_DWORD *)v4 + 12) = 1000;
          *((_DWORD *)v4 + 108) = 1000;
        }
        if ( v57(v4, v49) >= 0 )
        {
          ResetEnumerationContext(v55);
          while ( !(unsigned int)EnumerateNextDevice((__int64)v55, &v56) )
          {
            *(_QWORD *)(v56 + 216) = v11;
            v11 += 96;
          }
          v7 = 0LL;
          P = 0LL;
          v11 = 0LL;
        }
        v40 = 0;
        goto LABEL_51;
      }
    }
    else
    {
      *v25 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x1Eu,
        (__int64)&WPP_ef5cd4b0386b38340601fad61b1f2a0b_Traceguids);
    *(_QWORD *)(a1 + 264) &= 0xFFFFFFFFFCFFFFFFuLL;
    v40 = -1073741823;
  }
  else
  {
LABEL_62:
    v40 = -1073741670;
  }
LABEL_51:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001B398);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72637250u);
  if ( P )
    ExFreePoolWithTag(P, 0x72637250u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72637250u);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x72637250u);
  return v40;
}
