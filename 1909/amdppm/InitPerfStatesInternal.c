/*
 * XREFs of InitPerfStatesInternal @ 0x1C0029684
 * Callers:
 *     RegisterHvPerfStatesCounters @ 0x1C00216A0 (RegisterHvPerfStatesCounters.c)
 *     RegisterKernelPerfStates @ 0x1C0029F60 (RegisterKernelPerfStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000138C (WPP_RECORDER_SF_.c)
 *     ResetEnumerationContext @ 0x1C00025D4 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C00025F0 (EnumerateNextDevice.c)
 *     DisplayKernelPerfStates @ 0x1C0007A54 (DisplayKernelPerfStates.c)
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000E300 (memset.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001C614 (GetRegistryDwordValueNoDefault.c)
 *     GetPerfDomain @ 0x1C002D710 (GetPerfDomain.c)
 */

__int64 __fastcall InitPerfStatesInternal(__int64 a1, int (__fastcall *a2)(char *, _QWORD))
{
  int v3; // ecx
  char *v4; // rbx
  __int64 v5; // rax
  unsigned int *v6; // r15
  _QWORD *v7; // rsi
  unsigned int v8; // r13d
  unsigned int v9; // r14d
  unsigned int v10; // edi
  char *PoolWithTag; // rax
  char *v12; // r12
  PVOID v13; // rax
  _QWORD *v14; // rax
  unsigned int v15; // r12d
  char *v16; // rax
  char *v17; // rax
  int v18; // eax
  bool v19; // zf
  void *v20; // rax
  _DWORD *v21; // r12
  unsigned int v22; // r8d
  __int64 v23; // rcx
  __int64 v24; // r10
  _DWORD *v25; // r15
  __int64 v26; // r8
  __int64 v27; // rdx
  int v28; // r9d
  unsigned int v29; // r15d
  unsigned int v30; // r10d
  int v31; // r14d
  __int64 v32; // r11
  __int64 v33; // rcx
  unsigned int v34; // edx
  unsigned int v35; // edx
  unsigned int v36; // ecx
  _BYTE *v37; // rdx
  unsigned __int8 v38; // cl
  __int64 v39; // rax
  __int64 v40; // rcx
  void *v41; // rax
  char v42; // al
  _QWORD *v43; // r14
  int v44; // eax
  __int64 v45; // r10
  char *v46; // r11
  int v47; // ecx
  unsigned int v48; // r8d
  __int64 v49; // rdx
  unsigned int v50; // r8d
  int v51; // eax
  unsigned int v53; // [rsp+30h] [rbp-48h]
  int v54; // [rsp+34h] [rbp-44h] BYREF
  unsigned int v55; // [rsp+38h] [rbp-40h]
  char *v56; // [rsp+40h] [rbp-38h]
  PVOID P; // [rsp+48h] [rbp-30h]
  __int64 v58[5]; // [rsp+50h] [rbp-28h] BYREF
  int PerfDomain; // [rsp+C0h] [rbp+48h]
  __int64 v61; // [rsp+D0h] [rbp+58h] BYREF
  size_t Size; // [rsp+D8h] [rbp+60h]

  memset(v58, 0, 0x20uLL);
  v3 = 0;
  P = 0LL;
  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 264);
  v6 = 0LL;
  v7 = 0LL;
  LODWORD(v61) = 0;
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
    LODWORD(v61) = v3;
  }
  v9 = v3 + v8;
  v55 = v3 + v8;
  if ( !(v3 + v8) )
    return (unsigned int)-1073741823;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0013418,
    0LL);
  PerfDomain = GetPerfDomain(a1, v58, &v54);
  Size = (unsigned int)(96 * PerfDomain);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x72637250u);
  v56 = PoolWithTag;
  v12 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, Size);
    Size = 32 * v9;
    v13 = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x72637250u);
    P = v13;
    if ( v13 )
    {
      memset(v13, 0, Size);
      v14 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x72637250u);
      v7 = v14;
      if ( v14 )
      {
        memset(v14, 0, 0x50uLL);
        v15 = (32 * PerfDomain + 447) & 0xFFFFFFF8;
        LODWORD(Size) = (v15 + 31) & 0xFFFFFFF8;
        v53 = Size + 8 * PerfDomain;
        v16 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v53, 0x72637250u);
        v4 = v16;
        if ( !v16 )
        {
          v10 = -1073741670;
LABEL_16:
          v12 = v56;
          goto LABEL_83;
        }
        memset(v16, 0, v53);
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
        *((_DWORD *)v4 + 9) = 1;
        *((_QWORD *)v4 + 51) = &v4[v15];
        v17 = &v4[(unsigned int)Size];
        *((_WORD *)v4 + 3) = 257;
        *((_QWORD *)v4 + 53) = v17;
        v18 = v54;
        *((_WORD *)v4 + 2) = v54;
        v4[52] = 0;
        *((_DWORD *)v4 + 6) = 100;
        *((_QWORD *)v4 + 42) = PerfControlPTStates;
        if ( v18 == 252 || (v19 = v18 == 1, v20 = PerfControlPTStatesHidden, v19) )
          v20 = PerfControlPTStatesHiddenSwAll;
        *((_QWORD *)v4 + 43) = v20;
        *((_QWORD *)v4 + 41) = PerfSelectionPTStates;
        v7[7] = P;
        *((_QWORD *)v4 + 7) = 0LL;
        *((_QWORD *)v4 + 8) = 100LL;
        if ( v8 && v6 )
        {
          v21 = v4 + 20;
          *((_QWORD *)v4 + 34) = *(_QWORD *)(a1 + 344);
          *((_QWORD *)v4 + 35) = *(_QWORD *)(a1 + 352);
          *((_DWORD *)v4 + 5) = v6[2];
          v4[9] = *(_BYTE *)(a1 + 320);
          v22 = v6[12 * v8 - 9];
          *v7 = *(_QWORD *)(a1 + 280);
          v7[4] = *(_QWORD *)(a1 + 312);
          v7[3] = *(_QWORD *)(a1 + 296);
          v7[5] = a1 + 408;
          *((_QWORD *)v4 + 8) = v6[2];
          *((_QWORD *)v4 + 7) = v6[12 * v8 - 10];
          LODWORD(Size) = v22;
          v23 = 0LL;
          v24 = v8;
          v25 = v6 + 3;
          do
          {
            v26 = v7[7];
            *(_DWORD *)(v23 + v26 + 16) = *(v25 - 1);
            *(_BYTE *)(v23 + v26 + 24) = (unsigned int)(100 * *(v25 - 1)) / *v21;
            *(_QWORD *)(v23 + v26) = *(_QWORD *)(v25 + 3);
            *(_DWORD *)(v23 + v26 + 20) = *v25;
            *(_QWORD *)(v23 + v26 + 8) = *(_QWORD *)(v25 + 5);
            *(_BYTE *)(v23 + v26 + 25) = 1;
            *(_WORD *)(v23 + v26 + 26) = *((_WORD *)v25 + 2);
            if ( (*(_DWORD *)(a1 + 264) & 0x40000000) != 0 )
            {
              *(_QWORD *)(v23 + v26 + 8) = 0LL;
              *(_QWORD *)(v23 + v26) = v25 - 1;
            }
            v25 += 12;
            v23 += 32LL;
            --v24;
          }
          while ( v24 );
          v27 = v7[7];
          v28 = *(_DWORD *)(32LL * (v8 - 1) + v27 + 16);
          goto LABEL_39;
        }
        v21 = v4 + 20;
        *((_DWORD *)v4 + 5) = 0;
        if ( (int)GetRegistryDwordValueNoDefault(
                    (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                    (__int64)L"~MHz",
                    (__int64)(v4 + 20)) >= 0 )
        {
          v28 = *((_DWORD *)v4 + 5);
          if ( v28 )
          {
            v27 = v7[7];
            LODWORD(Size) = 1000 * v28;
LABEL_39:
            v29 = v61;
            if ( (_DWORD)v61 )
            {
              v30 = 0;
              v31 = Size;
              v26 = 0LL;
              v7[1] = *(_QWORD *)(a1 + 288);
              v7[2] = *(_QWORD *)(a1 + 304);
              v7[6] = a1 + 464;
              do
              {
                v61 = *(_QWORD *)(a1 + 488);
                v32 = v7[7] + 32LL * (v30 + v8);
                v33 = v61;
                v34 = v28 * *(_DWORD *)(v26 + v61 + 4) / 0x64u;
                *(_DWORD *)(v32 + 16) = v34;
                *(_BYTE *)(v32 + 24) = 100 * v34 / *v21;
                *(_QWORD *)v32 = *(unsigned int *)(v26 + v33 + 16);
                *(_QWORD *)(v32 + 8) = *(unsigned int *)(v26 + v33 + 20);
                *(_BYTE *)(v32 + 25) = 2;
                *(_WORD *)(v32 + 26) = *(_WORD *)(v26 + v33 + 12);
                v35 = *(_DWORD *)(v26 + v33 + 8);
                if ( !v35 )
                  v35 = v31 * *(_DWORD *)(v26 + v33 + 4) / 0x64u;
                ++v30;
                *(_DWORD *)(v32 + 20) = v35;
                v26 += 20LL;
              }
              while ( v30 < v29 );
              v27 = v7[7];
              v9 = v55;
            }
            v36 = 1;
            if ( v9 > 1 )
            {
              while ( *(_BYTE *)(32LL * v36 + v27 + 24) )
              {
                if ( ++v36 >= v9 )
                  goto LABEL_50;
              }
              v9 = v36;
            }
LABEL_50:
            v37 = (_BYTE *)v7[7];
            *((_DWORD *)v7 + 16) = v9;
            if ( v9 <= v8 )
            {
              *((_DWORD *)v7 + 18) = 0;
              *((_DWORD *)v7 + 17) = v9;
              v38 = v37[32 * v9 - 8];
            }
            else
            {
              *((_DWORD *)v7 + 17) = v8;
              *((_DWORD *)v7 + 18) = v9 - v8;
              v38 = v37[32 * v8 + 24];
            }
            *((_DWORD *)v4 + 7) = v38;
            *((_DWORD *)v4 + 8) = *(unsigned __int8 *)(32LL * (v9 - 1) + v7[7] + 24);
            v39 = *(_QWORD *)(a1 + 336);
            if ( v39 )
              *((_QWORD *)v4 + 32) = v39;
            v40 = *((_QWORD *)v4 + 51);
            *(_DWORD *)(v40 + 12) = 0;
            *(_DWORD *)(v40 + 8) = 100;
            if ( *(_QWORD *)(a1 + 328) )
            {
              v41 = PerfReadWrappingCounter;
              v37 = PerfReadActualMasterCount;
              if ( (*(_QWORD *)(a1 + 264) & 0x8000000000LL) == 0 )
                v41 = PerfReadActualMasterCount;
              *(_QWORD *)v40 = v41;
              v42 = 1;
            }
            else
            {
              *(_QWORD *)v40 = PerfStatesInstantaneousFrequency;
              v42 = 0;
            }
            *(_BYTE *)(v40 + 16) = v42;
            *(_BYTE *)(v40 + 17) = v42;
            DisplayKernelPerfStates((__int64)v4, (__int64)v37, v26);
            v43 = (_QWORD *)*((_QWORD *)v4 + 53);
            ResetEnumerationContext(v58);
            v44 = EnumerateNextDevice((__int64)v58, &v61);
            v12 = v56;
            if ( !v44 )
            {
              v46 = v56 + 12;
              do
              {
                v47 = *((_DWORD *)v7 + 17);
                v48 = 0;
                v49 = v61;
                if ( !v47 || (v48 = *(_DWORD *)(v61 + 448), v48 == v47 - 1) )
                {
                  if ( *((_DWORD *)v7 + 18) )
                    v48 = v47 + *(_DWORD *)(v61 + 496);
                }
                v50 = *(unsigned __int8 *)(32LL * v48 + v7[7] + 24);
                *(_QWORD *)(v46 - 12) = v61;
                *(_QWORD *)(v45 + 8) = v46 - 12;
                if ( *(_BYTE *)(v49 + 78) )
                {
                  v51 = *(_DWORD *)(v49 + 80);
                  *(_BYTE *)(v45 + 28) = 1;
                }
                else
                {
                  v51 = *(_DWORD *)(v49 + 56);
                }
                *(_DWORD *)v45 = v51;
                *(_DWORD *)(v45 + 20) = *(_DWORD *)(v49 + 720);
                *(_DWORD *)(v45 + 16) = v50;
                *(_DWORD *)(v45 + 24) = v50 < 0x64 ? 2 : 0;
                *(_QWORD *)(v46 + 12) = v7;
                *(_DWORD *)v46 = 100;
                if ( *(_QWORD *)(a1 + 328) )
                {
                  *v43 = v46 + 20;
                  *(_QWORD *)(v46 + 68) = *(_QWORD *)(a1 + 328);
                }
                else
                {
                  *v43 = v46 - 12;
                }
                ++v43;
              }
              while ( !(unsigned int)EnumerateNextDevice((__int64)v58, &v61) );
            }
            if ( (*(_DWORD *)(a1 + 264) & 0x400000) != 0 && (v54 == 254 || PerfDomain == 1) )
            {
              *(_WORD *)(v4 + 11) = 257;
              *((_DWORD *)v4 + 12) = 1000;
              *((_DWORD *)v4 + 108) = 1000;
            }
            if ( a2(v4, v53) >= 0 )
            {
              ResetEnumerationContext(v58);
              while ( !(unsigned int)EnumerateNextDevice((__int64)v58, &v61) )
              {
                *(_QWORD *)(v61 + 216) = v12;
                v12 += 96;
              }
              v7 = 0LL;
              P = 0LL;
              v12 = 0LL;
            }
            v10 = 0;
            goto LABEL_83;
          }
        }
        else
        {
          *v21 = 0;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            3u,
            0x1Eu,
            (__int64)&WPP_5ebc86338b0b3226bdc1929ba03294e5_Traceguids);
        *(_QWORD *)(a1 + 264) &= 0xFFFFFFFFFCFFFFFFuLL;
        v10 = -1073741823;
        goto LABEL_16;
      }
    }
  }
  v10 = -1073741670;
LABEL_83:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0013418);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72637250u);
  if ( P )
    ExFreePoolWithTag(P, 0x72637250u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72637250u);
  if ( v12 )
    ExFreePoolWithTag(v12, 0x72637250u);
  return v10;
}
