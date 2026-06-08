/*
 * XREFs of RegisterKernelPepPerf @ 0x1C002B860
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000138C (WPP_RECORDER_SF_.c)
 *     ResetEnumerationContext @ 0x1C00025D4 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C00025F0 (EnumerateNextDevice.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002BEC (WPP_RECORDER_SF_D.c)
 *     PepNotifyPerfConstraints @ 0x1C000C7F4 (PepNotifyPerfConstraints.c)
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000E300 (memset.c)
 *     GetPerfDomain @ 0x1C002D700 (GetPerfDomain.c)
 */

__int64 __fastcall RegisterKernelPepPerf(__int64 a1)
{
  __int64 v2; // rsi
  _QWORD *v3; // rbx
  char *v4; // r13
  int v5; // edi
  int v6; // edi
  int PerfDomain; // eax
  _BYTE *v8; // r15
  SIZE_T v9; // r12
  char *PoolWithTag; // rax
  char *v11; // r12
  __int64 v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // r12d
  _QWORD *v16; // rax
  int v17; // edx
  unsigned __int16 v18; // r9
  bool v19; // al
  bool v20; // al
  int v21; // eax
  int v22; // ecx
  unsigned int v23; // eax
  _QWORD *v24; // rdi
  int i; // eax
  __int64 v26; // r10
  __int64 v27; // r11
  int v28; // ecx
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  __int64 v32; // rdx
  __int64 v33; // r8
  int v34; // ecx
  void *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  int v38; // ecx
  void *v39; // rax
  __int64 v40; // r10
  int v42; // [rsp+30h] [rbp-48h]
  __int64 v43; // [rsp+38h] [rbp-40h] BYREF
  size_t Size; // [rsp+40h] [rbp-38h]
  __int64 v45[6]; // [rsp+48h] [rbp-30h] BYREF
  int v46; // [rsp+C0h] [rbp+48h]
  int v47; // [rsp+C8h] [rbp+50h]
  unsigned int v48; // [rsp+D0h] [rbp+58h]
  int v49; // [rsp+D8h] [rbp+60h] BYREF

  memset(v45, 0, 0x20uLL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0013418,
    0LL);
  v2 = *(_QWORD *)(a1 + 1176);
  v3 = 0LL;
  v4 = 0LL;
  v42 = *(_DWORD *)(v2 + 16);
  if ( !v42 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x2Du,
        (__int64)&WPP_ef5cd4b0386b38340601fad61b1f2a0b_Traceguids);
    v5 = -1073741823;
    goto LABEL_76;
  }
  v47 = *(_DWORD *)(v2 + 52);
  v6 = (v47 != -1) + 1;
  PerfDomain = GetPerfDomain(a1, v45, &v49);
  v8 = *(_BYTE **)(a1 + 544);
  v46 = PerfDomain;
  if ( !v8 || !v8[48] )
    v8 = 0LL;
  v9 = (unsigned int)(40 * PerfDomain);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x72637250u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_9:
    v5 = -1073741670;
    goto LABEL_76;
  }
  memset(PoolWithTag, 0, v9);
  ResetEnumerationContext(v45);
  if ( (unsigned int)EnumerateNextDevice((__int64)v45, &v43) )
  {
LABEL_17:
    v15 = (32 * v46 + 447) & 0xFFFFFFF8;
    v48 = v15 + 24 * v6;
    Size = v48 + 8 * v46 * v6;
    v16 = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x72637250u);
    v3 = v16;
    if ( !v16 )
      goto LABEL_9;
    memset(v16, 0, Size);
    if ( *(_BYTE *)(a1 + 1122) )
      v3[48] = PepParkPreference;
    if ( (*(_QWORD *)(a1 + 264) & 0x10000000000LL) != 0 )
    {
      v3[49] = PepParkMask;
      v3[50] = PepPerfCheckComplete;
      v3[9] = *(_QWORD *)(a1 + 1104);
    }
    v17 = v49;
    v3[52] = v3 + 55;
    *(_DWORD *)v3 = 62;
    v3[51] = (char *)v3 + v15;
    *((_DWORD *)v3 + 4) = v46;
    v3[53] = (char *)v3 + v48;
    *((_DWORD *)v3 + 9) = v6;
    *((_WORD *)v3 + 2) = v17;
    if ( *(_BYTE *)(v2 + 32) )
    {
      v3[42] = PepPerfStateControlHandler;
      v3[41] = PepPerfStateSelectionHandler;
      if ( (*(_DWORD *)(a1 + 264) & 0x400000) != 0 && (v17 == 254 || v46 == 1) && v8 && v8[58] )
      {
        *((_BYTE *)v3 + 11) = 1;
        v19 = (*(_QWORD *)(a1 + 264) & 0x400000000LL) == 0 || !v8[57];
        *((_BYTE *)v3 + 12) = v19;
        *((_DWORD *)v3 + 12) = 1000;
        *((_DWORD *)v3 + 108) = 1000;
      }
    }
    else
    {
      v3[42] = PepPerfControlHandler;
      v3[41] = PepPerfSelectionHandler;
      v3[33] = PepSetTimeWindow;
    }
    *((_BYTE *)v3 + 6) = 0;
    v20 = v8 && v8[59];
    *((_BYTE *)v3 + 7) = v20;
    *((_BYTE *)v3 + 52) = 0;
    *((_DWORD *)v3 + 5) = v42;
    *((_DWORD *)v3 + 6) = *(_DWORD *)(v2 + 20);
    v21 = *(_DWORD *)(v2 + 24);
    *((_DWORD *)v3 + 7) = v21;
    v22 = *(_DWORD *)(v2 + 28);
    if ( !v21 )
      v21 = 1;
    *((_DWORD *)v3 + 7) = v21;
    if ( !v22 )
      v22 = 1;
    *((_DWORD *)v3 + 8) = v22;
    v3[7] = *(unsigned int *)(v2 + 12);
    v3[8] = *(unsigned int *)(v2 + 4);
    if ( *(_BYTE *)(v2 + 32) )
      v23 = *(_DWORD *)(*(_QWORD *)(v2 + 40) + 4LL);
    else
      v23 = (unsigned int)((*(_DWORD *)(v2 + 4) >> 1) + v42 * *(_DWORD *)v2) / *(_DWORD *)(v2 + 4);
    *((_DWORD *)v3 + 11) = v23;
    v24 = (_QWORD *)v3[53];
    ResetEnumerationContext(v45);
    for ( i = EnumerateNextDevice((__int64)v45, &v43); !i; i = EnumerateNextDevice((__int64)v45, &v43) )
    {
      switch ( *(_DWORD *)(v26 + 24) )
      {
        case 1:
          v28 = 4;
          break;
        case 2:
          v28 = 8;
          break;
        case 4:
          v28 = 16;
          break;
        default:
          v28 = 2;
          break;
      }
      v29 = v43;
      v30 = *(_DWORD *)(v26 + 32);
      *(_QWORD *)v26 = v43;
      *(_QWORD *)(v27 + 8) = v26;
      if ( *(_BYTE *)(v29 + 78) )
      {
        v31 = *(_DWORD *)(v29 + 80);
        *(_BYTE *)(v27 + 28) = 1;
      }
      else
      {
        v31 = *(_DWORD *)(v29 + 56);
      }
      *(_DWORD *)v27 = v31;
      *(_DWORD *)(v27 + 20) = *(_DWORD *)(v29 + 720);
      *(_DWORD *)(v27 + 16) = v30;
      *(_DWORD *)(v27 + 24) = v28;
      *v24++ = v26;
      if ( v47 != -1 )
        *v24++ = v26;
    }
    v32 = *(unsigned int *)(v2 + 48);
    v33 = v3[51];
    *(_QWORD *)(v33 + 8) = 100LL;
    *(_BYTE *)(v33 + 16) = *(_BYTE *)(v2 + 8 * v32 + 56) & 1;
    v34 = *(_DWORD *)(v2 + 8 * v32 + 56) & 6;
    *(_BYTE *)(v33 + 17) = v34 == 2;
    *(_BYTE *)(v33 + 18) = (*(_DWORD *)(v2 + 8 * v32 + 56) & 0x80) != 0;
    v35 = PepInstantaneousFrequencyRead;
    if ( v34 == 2 )
      v35 = PepDifferentialFrequencyRead;
    *(_QWORD *)v33 = v35;
    *((_DWORD *)v3 + 9) = 1;
    if ( v47 != -1 )
    {
      v36 = *(unsigned int *)(v2 + 52);
      v37 = v3[51];
      *(_DWORD *)(v37 + 32) = 100;
      *(_DWORD *)(v37 + 36) = 1;
      *(_BYTE *)(v37 + 40) = *(_BYTE *)(v2 + 8 * v36 + 56) & 1;
      v38 = *(_DWORD *)(v2 + 8 * v36 + 56) & 6;
      *(_BYTE *)(v37 + 41) = v38 == 2;
      *(_BYTE *)(v37 + 42) = (*(_DWORD *)(v2 + 8 * v36 + 56) & 0x80) != 0;
      v39 = PepInstantaneousPerfRead;
      if ( v38 == 2 )
        v39 = PepDifferentialPerfRead;
      *(_QWORD *)(v37 + 24) = v39;
      ++*((_DWORD *)v3 + 9);
    }
    v5 = ((__int64 (__fastcall *)(_QWORD *))qword_1C0013628)(v3);
    if ( v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_76;
      v18 = 47;
LABEL_27:
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        v18,
        (__int64)&WPP_ef5cd4b0386b38340601fad61b1f2a0b_Traceguids,
        v5);
      goto LABEL_76;
    }
    ResetEnumerationContext(v45);
    if ( !(unsigned int)EnumerateNextDevice((__int64)v45, &v43) )
    {
      v4 = 0LL;
      do
        *(_QWORD *)(v43 + 1184) = v40;
      while ( !(unsigned int)EnumerateNextDevice((__int64)v45, &v43) );
    }
  }
  else
  {
    v11 = v4 + 8;
    while ( 1 )
    {
      v12 = v43;
      *((_QWORD *)v11 + 1) = *(_QWORD *)(v43 + 1104);
      *(_QWORD *)v11 = *(_QWORD *)(v12 + 1176);
      v5 = PepNotifyPerfConstraints(a1, (_DWORD *)v11 + 5, (_DWORD *)v11 + 4);
      if ( v5 < 0 )
        break;
      v13 = *((_DWORD *)v11 + 5);
      v14 = *(_DWORD *)(v2 + 4);
      if ( v13 > v14 || v13 < *(_DWORD *)(v2 + 12) )
      {
        v5 = -1073741811;
        goto LABEL_76;
      }
      *((_DWORD *)v11 + 6) = 100 * v13 / v14;
      v11 += 40;
      if ( (unsigned int)EnumerateNextDevice((__int64)v45, &v43) )
      {
        v6 = (v47 != -1) + 1;
        goto LABEL_17;
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = 46;
      goto LABEL_27;
    }
  }
LABEL_76:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0013418);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72637250u);
  return (unsigned int)v5;
}
