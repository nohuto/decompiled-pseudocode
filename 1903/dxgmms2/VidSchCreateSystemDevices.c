/*
 * XREFs of VidSchCreateSystemDevices @ 0x1C0090664
 * Callers:
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0090248 (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0003E48 (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchiCreateContextInternal @ 0x1C000FDBC (VidSchiCreateContextInternal.c)
 *     VidSchiGetSoftwareOnlyNodeForDriverEngine @ 0x1C0014F4C (VidSchiGetSoftwareOnlyNodeForDriverEngine.c)
 *     ?VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEXT_DATA@@PEAVDXGCONTEXT@@@Z @ 0x1C0034CDC (-VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEX.c)
 *     VidSchiCreateDeviceInternal @ 0x1C007BAD8 (VidSchiCreateDeviceInternal.c)
 */

__int64 __fastcall VidSchCreateSystemDevices(__int64 a1)
{
  __int64 *v1; // r12
  __int64 v3; // rdx
  __int64 v4; // rcx
  int DeviceInternal; // edi
  struct _VIDSCH_DEVICE **v6; // r13
  int SoftwareOnlyNodeForDriverEngine; // eax
  __int64 v8; // rcx
  __int64 ContextInternal; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int i; // edi
  __int64 v13; // rsi
  unsigned int v14; // r15d
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned int v23; // esi
  __int64 v24; // rax
  __int64 v25; // r14
  int v26; // ecx
  struct _VIDSCH_DEVICE *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rcx
  struct VIDSCH_HW_CONTEXT *HwContextInternal; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // [rsp+20h] [rbp-20h] BYREF
  __int64 v42; // [rsp+28h] [rbp-18h]
  __int64 v43; // [rsp+30h] [rbp-10h]
  int v44; // [rsp+38h] [rbp-8h]

  v1 = (__int64 *)(a1 + 224);
  v41 = 1LL;
  v42 = 0LL;
  v43 = 0LL;
  DeviceInternal = VidSchiCreateDeviceInternal(a1, (__int64)&v41, 0LL, (__int64 *)(a1 + 224));
  if ( DeviceInternal < 0
    || (v6 = (struct _VIDSCH_DEVICE **)(a1 + 240),
        v41 = 17LL,
        v42 = 0LL,
        v43 = 0LL,
        DeviceInternal = VidSchiCreateDeviceInternal(a1, (__int64)&v41, 0LL, (__int64 *)(a1 + 240)),
        DeviceInternal < 0) )
  {
    v31 = WdLogNewEntry5_WdAssertion(v4, v3);
    *(_QWORD *)(v31 + 24) = *(_QWORD *)(a1 + 16);
    WdLogEvent5_WdAssertion(v31);
    return (unsigned int)DeviceInternal;
  }
  v42 = 0x700000000LL;
  v43 = 0LL;
  LODWORD(v41) = 268;
  v44 = *(_DWORD *)(a1 + 40) * *(_DWORD *)(a1 + 140);
  SoftwareOnlyNodeForDriverEngine = VidSchiGetSoftwareOnlyNodeForDriverEngine(a1, 0);
  v8 = *v1;
  HIDWORD(v41) = SoftwareOnlyNodeForDriverEngine;
  ContextInternal = VidSchiCreateContextInternal(v8, (int *)&v41, 0LL);
  *(_QWORD *)(a1 + 232) = ContextInternal;
  if ( !ContextInternal )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdAssertion(v11, v10);
    v32[3] = *(_QWORD *)(a1 + 16);
    v32[4] = 1055LL;
    goto LABEL_34;
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 72); ++i )
  {
    v13 = *(_QWORD *)(a1 + 616);
    v14 = *(_DWORD *)(a1 + 688);
    v15 = v13 + 8LL * i;
    if ( i >= v14 )
      v15 = *(_QWORD *)(a1 + 616);
    if ( (*(_DWORD *)(*(_QWORD *)v15 + 12LL) & 2) == 0 )
    {
      v16 = v13 + 8LL * i;
      if ( i >= v14 )
        v16 = *(_QWORD *)(a1 + 616);
      if ( (*(_DWORD *)(*(_QWORD *)v16 + 12LL) & 8) == 0 )
      {
        v43 = 0LL;
        v44 = 0;
        HIDWORD(v42) = 7;
        LODWORD(v41) = 20;
        HIDWORD(v41) = i;
        v17 = VidSchiSchedulerNodeToDriverEngine(a1, i);
        v18 = *v1;
        LODWORD(v42) = v17;
        v19 = VidSchiCreateContextInternal(v18, (int *)&v41, 0LL);
        v21 = v13 + 8LL * i;
        if ( i >= v14 )
          v21 = v13;
        *(_QWORD *)(*(_QWORD *)v21 + 32LL) = v19;
        v22 = *(_QWORD *)(a1 + 616) + 8LL * i;
        if ( i >= *(_DWORD *)(a1 + 688) )
          v22 = *(_QWORD *)(a1 + 616);
        if ( !*(_QWORD *)(*(_QWORD *)v22 + 32LL) )
        {
          v32 = (_QWORD *)WdLogNewEntry5_WdAssertion(v22, v20);
          v32[3] = i;
          v33 = *(_QWORD *)(a1 + 16);
          v32[5] = 1090LL;
          goto LABEL_33;
        }
      }
    }
    RtlSetBitEx(a1 + 472, i);
  }
  v23 = 0;
  if ( !*(_DWORD *)(a1 + 64) )
    return 0LL;
  while ( 1 )
  {
    v24 = *(_QWORD *)(a1 + 16);
    v43 = 0LL;
    v25 = *(_QWORD *)(v24 + 2440) + 352LL * v23;
    LODWORD(v24) = *(unsigned __int8 *)(a1 + v23 + 76);
    v44 = 0;
    v26 = v24 + *(unsigned __int16 *)(v25 + 2);
    LODWORD(v41) = 29;
    HIDWORD(v41) = v26;
    v27 = *v6;
    v42 = v23 | 0x700000000LL;
    if ( *(_BYTE *)(a1 + 55) )
    {
      LODWORD(v41) = 2077;
      HwContextInternal = VidSchiCreateHwContextInternal(v27, (struct _VIDSCH_CONTEXT_DATA *)&v41, 0LL);
      v36 = *(_QWORD *)(a1 + 256);
      *(_QWORD *)(v36 + 8LL * v23) = HwContextInternal;
      if ( !*(_QWORD *)(*(_QWORD *)(a1 + 256) + 8LL * v23) )
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdAssertion(v36, v35);
        v32[3] = v23;
        v33 = *(_QWORD *)(a1 + 16);
        v32[5] = 1139LL;
        goto LABEL_33;
      }
      goto LABEL_21;
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL * v23) = VidSchiCreateContextInternal((__int64)v27, (int *)&v41, 0LL);
    v29 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL * v23);
    if ( !v29 )
      break;
    *(_BYTE *)(v29 + 633) = 1;
    if ( (*(_BYTE *)(v25 + 16) & 0xC) == 0xC )
    {
      v37 = *(_DWORD *)(v25 + 20) + *(unsigned __int8 *)(a1 + v23 + 76);
      v38 = (__int64)*v6;
      LODWORD(v41) = v41 | 0x200;
      HIDWORD(v41) = v37;
      *(_QWORD *)(*(_QWORD *)(a1 + 272) + 8LL * v23) = VidSchiCreateContextInternal(v38, (int *)&v41, 0LL);
      v40 = *(_QWORD *)(*(_QWORD *)(a1 + 272) + 8LL * v23);
      if ( !v40 )
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdAssertion(0LL, v39);
        v32[3] = v23;
        v33 = *(_QWORD *)(a1 + 16);
        v32[5] = 1174LL;
        goto LABEL_33;
      }
      *(_BYTE *)(v40 + 633) = 1;
    }
LABEL_21:
    if ( ++v23 >= *(_DWORD *)(a1 + 64) )
      return 0LL;
  }
  v32 = (_QWORD *)WdLogNewEntry5_WdAssertion(0LL, v28);
  v32[3] = v23;
  v33 = *(_QWORD *)(a1 + 16);
  v32[5] = 1154LL;
LABEL_33:
  v32[4] = v33;
LABEL_34:
  WdLogEvent5_WdAssertion(v32);
  return (unsigned int)-1073741823;
}
