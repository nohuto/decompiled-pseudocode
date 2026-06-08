/*
 * XREFs of RegisterKernelPepPerf @ 0x1C0034E90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000360C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C00036CC (WPP_RECORDER_SF_.c)
 *     EnumerateNextDevice @ 0x1C0003934 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0003974 (ResetEnumerationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00046C0 (memset.c)
 *     PepNotifyPerfConstraints @ 0x1C000F7D0 (PepNotifyPerfConstraints.c)
 *     InitCommonPerfStateContext @ 0x1C00241F8 (InitCommonPerfStateContext.c)
 *     GetPerfDomain @ 0x1C0024474 (GetPerfDomain.c)
 *     PepTranslateLimitReason @ 0x1C00382A4 (PepTranslateLimitReason.c)
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
  __int64 v24; // rdi
  int i; // eax
  __int64 v26; // rdx
  __int64 v27; // r10
  unsigned int v28; // eax
  _QWORD *v29; // r10
  __int64 v30; // r10
  _QWORD *v31; // r11
  _QWORD *v32; // r11
  __int64 v33; // rdx
  __int64 v34; // r8
  int v35; // ecx
  void *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  int v39; // ecx
  void *v40; // rax
  __int64 v41; // r10
  int v43; // [rsp+30h] [rbp-48h]
  __int64 v44; // [rsp+38h] [rbp-40h] BYREF
  size_t Size; // [rsp+40h] [rbp-38h]
  __int64 v46[6]; // [rsp+48h] [rbp-30h] BYREF
  int v47; // [rsp+C0h] [rbp+48h]
  int v48; // [rsp+C8h] [rbp+50h]
  unsigned int v49; // [rsp+D0h] [rbp+58h]
  int v50; // [rsp+D8h] [rbp+60h] BYREF

  memset(v46, 0, 0x20uLL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C001B398,
    0LL);
  v2 = *(_QWORD *)(a1 + 1176);
  v3 = 0LL;
  v4 = 0LL;
  v43 = *(_DWORD *)(v2 + 16);
  if ( !v43 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x2Du,
        (__int64)&WPP_ef5cd4b0386b38340601fad61b1f2a0b_Traceguids);
    v5 = -1073741823;
    goto LABEL_66;
  }
  v48 = *(_DWORD *)(v2 + 52);
  v6 = (v48 != -1) + 1;
  PerfDomain = GetPerfDomain(a1, (__int64)v46, &v50);
  v8 = *(_BYTE **)(a1 + 544);
  v47 = PerfDomain;
  if ( !v8 || !v8[48] )
    v8 = 0LL;
  v9 = (unsigned int)(40 * PerfDomain);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x72637250u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_9:
    v5 = -1073741670;
    goto LABEL_66;
  }
  memset(PoolWithTag, 0, v9);
  ResetEnumerationContext(v46);
  if ( (unsigned int)EnumerateNextDevice((__int64)v46, &v44) )
  {
LABEL_17:
    v15 = (32 * v47 + 447) & 0xFFFFFFF8;
    v49 = v15 + 24 * v6;
    Size = v49 + 8 * v47 * v6;
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
    v17 = v50;
    v3[52] = v3 + 55;
    *(_DWORD *)v3 = 62;
    v3[51] = (char *)v3 + v15;
    *((_DWORD *)v3 + 4) = v47;
    v3[53] = (char *)v3 + v49;
    *((_DWORD *)v3 + 9) = v6;
    *((_WORD *)v3 + 2) = v17;
    if ( *(_BYTE *)(v2 + 32) )
    {
      v3[42] = PepPerfStateControlHandler;
      v3[41] = PepPerfStateSelectionHandler;
      if ( (*(_DWORD *)(a1 + 264) & 0x400000) != 0 && (v17 == 254 || v47 == 1) && v8 && v8[58] )
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
    *((_DWORD *)v3 + 5) = v43;
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
      v23 = (unsigned int)((*(_DWORD *)(v2 + 4) >> 1) + v43 * *(_DWORD *)v2) / *(_DWORD *)(v2 + 4);
    *((_DWORD *)v3 + 11) = v23;
    v24 = v3[52];
    ResetEnumerationContext(v46);
    for ( i = EnumerateNextDevice((__int64)v46, &v44); !i; i = EnumerateNextDevice((__int64)v46, &v44) )
    {
      v28 = PepTranslateLimitReason(*(unsigned int *)(v27 + 24), v26);
      InitCommonPerfStateContext(v44, v29, v24, *((_DWORD *)v29 + 8), v28);
      *v31 = v30;
      v32 = v31 + 1;
      if ( v48 != -1 )
        *v32 = v30;
      v24 += 32LL;
    }
    v33 = *(unsigned int *)(v2 + 48);
    v34 = v3[51];
    *(_QWORD *)(v34 + 8) = 100LL;
    *(_BYTE *)(v34 + 16) = *(_BYTE *)(v2 + 8 * v33 + 56) & 1;
    v35 = *(_DWORD *)(v2 + 8 * v33 + 56) & 6;
    *(_BYTE *)(v34 + 17) = v35 == 2;
    *(_BYTE *)(v34 + 18) = (*(_DWORD *)(v2 + 8 * v33 + 56) & 0x80) != 0;
    v36 = PepInstantaneousFrequencyRead;
    if ( v35 == 2 )
      v36 = PepDifferentialFrequencyRead;
    *(_QWORD *)v34 = v36;
    *((_DWORD *)v3 + 9) = 1;
    if ( v48 != -1 )
    {
      v37 = *(unsigned int *)(v2 + 52);
      v38 = v3[51];
      *(_DWORD *)(v38 + 32) = 100;
      *(_DWORD *)(v38 + 36) = 1;
      *(_BYTE *)(v38 + 40) = *(_BYTE *)(v2 + 8 * v37 + 56) & 1;
      v39 = *(_DWORD *)(v2 + 8 * v37 + 56) & 6;
      *(_BYTE *)(v38 + 41) = v39 == 2;
      *(_BYTE *)(v38 + 42) = (*(_DWORD *)(v2 + 8 * v37 + 56) & 0x80) != 0;
      v40 = PepInstantaneousPerfRead;
      if ( v39 == 2 )
        v40 = PepDifferentialPerfRead;
      *(_QWORD *)(v38 + 24) = v40;
      ++*((_DWORD *)v3 + 9);
    }
    v5 = ((__int64 (__fastcall *)(_QWORD *))qword_1C001B5A8)(v3);
    if ( v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_66;
      v18 = 47;
LABEL_27:
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        v18,
        (__int64)&WPP_ef5cd4b0386b38340601fad61b1f2a0b_Traceguids,
        v5);
      goto LABEL_66;
    }
    ResetEnumerationContext(v46);
    if ( !(unsigned int)EnumerateNextDevice((__int64)v46, &v44) )
    {
      v4 = 0LL;
      do
        *(_QWORD *)(v44 + 1184) = v41;
      while ( !(unsigned int)EnumerateNextDevice((__int64)v46, &v44) );
    }
  }
  else
  {
    v11 = v4 + 8;
    while ( 1 )
    {
      v12 = v44;
      *((_QWORD *)v11 + 1) = *(_QWORD *)(v44 + 1104);
      *(_QWORD *)v11 = *(_QWORD *)(v12 + 1176);
      v5 = PepNotifyPerfConstraints(a1, (_DWORD *)v11 + 5, (_DWORD *)v11 + 4);
      if ( v5 < 0 )
        break;
      v13 = *((_DWORD *)v11 + 5);
      v14 = *(_DWORD *)(v2 + 4);
      if ( v13 > v14 || v13 < *(_DWORD *)(v2 + 12) )
      {
        v5 = -1073741811;
        goto LABEL_66;
      }
      *((_DWORD *)v11 + 6) = 100 * v13 / v14;
      v11 += 40;
      if ( (unsigned int)EnumerateNextDevice((__int64)v46, &v44) )
      {
        v6 = (v48 != -1) + 1;
        goto LABEL_17;
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = 46;
      goto LABEL_27;
    }
  }
LABEL_66:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001B398);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72637250u);
  return (unsigned int)v5;
}
