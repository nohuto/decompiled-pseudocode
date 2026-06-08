/*
 * XREFs of RegisterKernelPepPerf @ 0x1C001FF60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00010B0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00016A8 (WPP_RECORDER_SF_D.c)
 *     ResetEnumerationContext @ 0x1C0003CB4 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C0003CD0 (EnumerateNextDevice.c)
 *     PepNotifyPerfConstraints @ 0x1C0009E58 (PepNotifyPerfConstraints.c)
 *     _guard_dispatch_icall_nop @ 0x1C000CB40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000CEC0 (memset.c)
 *     GetPerfDomain @ 0x1C0022064 (GetPerfDomain.c)
 */

__int64 __fastcall RegisterKernelPepPerf(__int64 a1)
{
  __int64 v2; // rsi
  _QWORD *v3; // rbx
  char *v4; // r13
  unsigned int v5; // edi
  int v6; // edi
  int PerfDomain; // eax
  _BYTE *v8; // r15
  SIZE_T v9; // r12
  char *PoolWithTag; // rax
  char *v11; // r12
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // r12d
  _QWORD *v17; // rax
  int v18; // edx
  unsigned __int16 v19; // r9
  bool v20; // al
  bool v21; // al
  int v22; // eax
  int v23; // ecx
  unsigned int v24; // eax
  _QWORD *v25; // rdi
  int i; // eax
  __int64 v27; // r10
  __int64 v28; // r11
  int v29; // ecx
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
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

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00113E8,
    0LL);
  v2 = *(_QWORD *)(a1 + 1160);
  v3 = 0LL;
  v4 = 0LL;
  v43 = *(_DWORD *)(v2 + 16);
  if ( !v43 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x2Du,
      (__int64)&WPP_74c73a8d2c983a7ecb82bd797551b25b_Traceguids);
    v5 = -1073741823;
    goto LABEL_72;
  }
  v48 = *(_DWORD *)(v2 + 52);
  v6 = (v48 != -1) + 1;
  PerfDomain = GetPerfDomain(a1, v46, &v50);
  v8 = *(_BYTE **)(a1 + 528);
  v47 = PerfDomain;
  if ( !v8 || !v8[48] )
    v8 = 0LL;
  v9 = (unsigned int)(40 * PerfDomain);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x72637250u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_7;
  memset(PoolWithTag, 0, v9);
  ResetEnumerationContext(v46);
  if ( !(unsigned int)EnumerateNextDevice((__int64)v46, &v44) )
  {
    v11 = v4 + 8;
    while ( 1 )
    {
      v12 = v44;
      *((_QWORD *)v11 + 1) = *(_QWORD *)(v44 + 1088);
      *(_QWORD *)v11 = *(_QWORD *)(v12 + 1160);
      v13 = PepNotifyPerfConstraints(a1, (_DWORD *)v11 + 5, (_DWORD *)v11 + 4);
      v5 = v13;
      if ( v13 < 0 )
        break;
      v14 = *((_DWORD *)v11 + 5);
      v15 = *(_DWORD *)(v2 + 4);
      if ( v14 > v15 || v14 < *(_DWORD *)(v2 + 12) )
      {
        v5 = -1073741811;
        goto LABEL_72;
      }
      *((_DWORD *)v11 + 6) = 100 * v14 / v15;
      v11 += 40;
      if ( (unsigned int)EnumerateNextDevice((__int64)v46, &v44) )
      {
        v6 = (v48 != -1) + 1;
        goto LABEL_15;
      }
    }
    v19 = 46;
    goto LABEL_24;
  }
LABEL_15:
  v16 = (32 * v47 + 439) & 0xFFFFFFF8;
  v49 = v16 + 24 * v6;
  Size = v49 + 8 * v47 * v6;
  v17 = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x72637250u);
  v3 = v17;
  if ( !v17 )
  {
LABEL_7:
    v5 = -1073741670;
    goto LABEL_72;
  }
  memset(v17, 0, Size);
  if ( *(_BYTE *)(a1 + 1106) )
    v3[48] = PepParkPreference;
  if ( (*(_QWORD *)(a1 + 264) & 0x10000000000LL) != 0 )
  {
    v3[49] = PepParkMask;
    v3[50] = PepPerfCheckComplete;
    v3[9] = *(_QWORD *)(a1 + 1088);
  }
  v18 = v50;
  v3[52] = v3 + 54;
  *(_DWORD *)v3 = 60;
  v3[51] = (char *)v3 + v16;
  *((_DWORD *)v3 + 4) = v47;
  v3[53] = (char *)v3 + v49;
  *((_DWORD *)v3 + 9) = v6;
  *((_WORD *)v3 + 2) = v18;
  if ( *(_BYTE *)(v2 + 32) )
  {
    v3[42] = PepPerfStateControlHandler;
    v3[41] = PepPerfStateSelectionHandler;
    if ( (*(_DWORD *)(a1 + 264) & 0x400000) != 0 && (v18 == 254 || v47 == 1) && v8 && v8[58] )
    {
      *((_BYTE *)v3 + 11) = 1;
      v20 = (*(_QWORD *)(a1 + 264) & 0x400000000LL) == 0 || !v8[57];
      *((_DWORD *)v3 + 12) = -1;
      *((_BYTE *)v3 + 12) = v20;
    }
  }
  else
  {
    v3[42] = PepPerfControlHandler;
    v3[41] = PepPerfSelectionHandler;
    v3[33] = PepSetTimeWindow;
  }
  *((_BYTE *)v3 + 6) = 0;
  v21 = v8 && v8[59];
  *((_BYTE *)v3 + 7) = v21;
  *((_BYTE *)v3 + 52) = 0;
  *((_DWORD *)v3 + 5) = v43;
  *((_DWORD *)v3 + 6) = *(_DWORD *)(v2 + 20);
  v22 = *(_DWORD *)(v2 + 24);
  *((_DWORD *)v3 + 7) = v22;
  v23 = *(_DWORD *)(v2 + 28);
  if ( !v22 )
    v22 = 1;
  *((_DWORD *)v3 + 7) = v22;
  if ( !v23 )
    v23 = 1;
  *((_DWORD *)v3 + 8) = v23;
  v3[7] = *(unsigned int *)(v2 + 12);
  v3[8] = *(unsigned int *)(v2 + 4);
  if ( *(_BYTE *)(v2 + 32) )
    v24 = *(_DWORD *)(*(_QWORD *)(v2 + 40) + 4LL);
  else
    v24 = (unsigned int)((*(_DWORD *)(v2 + 4) >> 1) + v43 * *(_DWORD *)v2) / *(_DWORD *)(v2 + 4);
  *((_DWORD *)v3 + 11) = v24;
  v25 = (_QWORD *)v3[53];
  ResetEnumerationContext(v46);
  for ( i = EnumerateNextDevice((__int64)v46, &v44); !i; i = EnumerateNextDevice((__int64)v46, &v44) )
  {
    switch ( *(_DWORD *)(v27 + 24) )
    {
      case 1:
        v29 = 4;
        break;
      case 2:
        v29 = 8;
        break;
      case 4:
        v29 = 16;
        break;
      default:
        v29 = 2;
        break;
    }
    v30 = v44;
    v31 = *(_DWORD *)(v27 + 32);
    *(_QWORD *)v27 = v44;
    *(_QWORD *)(v28 + 8) = v27;
    if ( *(_BYTE *)(v30 + 78) )
    {
      v32 = *(_DWORD *)(v30 + 80);
      *(_BYTE *)(v28 + 28) = 1;
    }
    else
    {
      v32 = *(_DWORD *)(v30 + 56);
    }
    *(_DWORD *)v28 = v32;
    *(_DWORD *)(v28 + 20) = *(_DWORD *)(v30 + 704);
    *(_DWORD *)(v28 + 16) = v31;
    *(_DWORD *)(v28 + 24) = v29;
    *v25++ = v27;
    if ( v48 != -1 )
      *v25++ = v27;
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
  v13 = ((__int64 (__fastcall *)(_QWORD *))qword_1C00115E8)(v3);
  v5 = v13;
  if ( v13 < 0 )
  {
    v19 = 47;
LABEL_24:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      v19,
      (__int64)&WPP_74c73a8d2c983a7ecb82bd797551b25b_Traceguids,
      v13);
    goto LABEL_72;
  }
  ResetEnumerationContext(v46);
  if ( !(unsigned int)EnumerateNextDevice((__int64)v46, &v44) )
  {
    v4 = 0LL;
    do
      *(_QWORD *)(v44 + 1168) = v41;
    while ( !(unsigned int)EnumerateNextDevice((__int64)v46, &v44) );
  }
LABEL_72:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00113E8);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72637250u);
  return v5;
}
