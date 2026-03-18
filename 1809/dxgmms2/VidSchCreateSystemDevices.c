/*
 * XREFs of VidSchCreateSystemDevices @ 0x1C008CDCC
 * Callers:
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C008C9C4 (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0002CAC (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchiCreateContextInternal @ 0x1C0011938 (VidSchiCreateContextInternal.c)
 *     VidSchiGetSoftwareOnlyNodeForDriverEngine @ 0x1C0015B78 (VidSchiGetSoftwareOnlyNodeForDriverEngine.c)
 *     ?VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEXT_DATA@@PEAVDXGCONTEXT@@@Z @ 0x1C00342C4 (-VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEX.c)
 *     VidSchiCreateDeviceInternal @ 0x1C007B00C (VidSchiCreateDeviceInternal.c)
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
  char *ContextInternal; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 i; // rdi
  __int64 v13; // rsi
  unsigned int v14; // r15d
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  char *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // r14
  int v25; // ecx
  int v26; // eax
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
  __int128 v41; // [rsp+20h] [rbp-20h] BYREF
  __int64 v42; // [rsp+30h] [rbp-10h]
  int v43; // [rsp+38h] [rbp-8h]

  v1 = (__int64 *)(a1 + 224);
  v41 = 1uLL;
  v42 = 0LL;
  DeviceInternal = VidSchiCreateDeviceInternal(a1, (__int64)&v41, 0LL, (__int64 *)(a1 + 224));
  if ( DeviceInternal < 0
    || (v6 = (struct _VIDSCH_DEVICE **)(a1 + 240),
        v41 = 0x11uLL,
        v42 = 0LL,
        DeviceInternal = VidSchiCreateDeviceInternal(a1, (__int64)&v41, 0LL, (__int64 *)(a1 + 240)),
        DeviceInternal < 0) )
  {
    v31 = WdLogNewEntry5_WdAssertion(v4, v3);
    *(_QWORD *)(v31 + 24) = *(_QWORD *)(a1 + 16);
    WdLogEvent5_WdAssertion(v31);
    return (unsigned int)DeviceInternal;
  }
  *((_QWORD *)&v41 + 1) = 0x700000000LL;
  v42 = 0LL;
  *(_QWORD *)&v41 = 268LL;
  v43 = *(_DWORD *)(a1 + 40) * *(_DWORD *)(a1 + 140);
  SoftwareOnlyNodeForDriverEngine = VidSchiGetSoftwareOnlyNodeForDriverEngine(a1, 0);
  v8 = *v1;
  DWORD1(v41) = SoftwareOnlyNodeForDriverEngine;
  ContextInternal = VidSchiCreateContextInternal(v8, (int *)&v41, 0LL);
  *(_QWORD *)(a1 + 232) = ContextInternal;
  if ( !ContextInternal )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdAssertion(v11, v10);
    v32[3] = *(_QWORD *)(a1 + 16);
    v32[4] = 1054LL;
    goto LABEL_33;
  }
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 72); i = (unsigned int)(i + 1) )
  {
    v13 = *(_QWORD *)(a1 + 616);
    v14 = *(_DWORD *)(a1 + 688);
    v15 = v13 + 8 * i;
    if ( (unsigned int)i >= v14 )
      v15 = *(_QWORD *)(a1 + 616);
    if ( (*(_DWORD *)(*(_QWORD *)v15 + 12LL) & 2) == 0 )
    {
      v16 = v13 + 8 * i;
      if ( (unsigned int)i >= v14 )
        v16 = *(_QWORD *)(a1 + 616);
      if ( (*(_DWORD *)(*(_QWORD *)v16 + 12LL) & 8) == 0 )
      {
        *((_QWORD *)&v41 + 1) = 0x700000000LL;
        v42 = 0LL;
        v43 = 0;
        LODWORD(v41) = 20;
        DWORD1(v41) = i;
        v17 = VidSchiSchedulerNodeToDriverEngine(a1, i);
        v18 = *v1;
        DWORD2(v41) = v17;
        v19 = VidSchiCreateContextInternal(v18, (int *)&v41, 0LL);
        v21 = v13 + 8 * i;
        if ( (unsigned int)i >= v14 )
          v21 = v13;
        *(_QWORD *)(*(_QWORD *)v21 + 32LL) = v19;
        v22 = *(_QWORD *)(a1 + 616) + 8 * i;
        if ( (unsigned int)i >= *(_DWORD *)(a1 + 688) )
          v22 = *(_QWORD *)(a1 + 616);
        if ( !*(_QWORD *)(*(_QWORD *)v22 + 32LL) )
        {
          v32 = (_QWORD *)WdLogNewEntry5_WdAssertion(v22, v20);
          v32[3] = (unsigned int)i;
          v33 = *(_QWORD *)(a1 + 16);
          v32[5] = 1089LL;
          goto LABEL_32;
        }
      }
    }
    RtlSetBitEx(a1 + 472, (unsigned int)i);
  }
  v23 = 0LL;
  if ( !*(_DWORD *)(a1 + 64) )
    return 0LL;
  while ( 1 )
  {
    v24 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 2416LL) + 352LL * (unsigned int)v23;
    v41 = 0uLL;
    v42 = 0LL;
    v25 = *(unsigned __int16 *)(v24 + 2);
    v43 = 0;
    v26 = *(unsigned __int8 *)(a1 + v23 + 76);
    HIDWORD(v41) = 7;
    *(_QWORD *)((char *)&v41 + 4) = (unsigned int)(v26 + v25);
    v27 = *v6;
    LODWORD(v41) = 29;
    DWORD2(v41) = v23;
    if ( *(_BYTE *)(a1 + 55) )
    {
      LODWORD(v41) = 2077;
      HwContextInternal = VidSchiCreateHwContextInternal(v27, (struct _VIDSCH_CONTEXT_DATA *)&v41, 0LL);
      v36 = *(_QWORD *)(a1 + 256);
      *(_QWORD *)(v36 + 8 * v23) = HwContextInternal;
      if ( !*(_QWORD *)(*(_QWORD *)(a1 + 256) + 8 * v23) )
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdAssertion(v36, v35);
        v32[3] = (unsigned int)v23;
        v33 = *(_QWORD *)(a1 + 16);
        v32[5] = 1138LL;
        goto LABEL_32;
      }
      goto LABEL_21;
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8 * v23) = VidSchiCreateContextInternal((__int64)v27, (int *)&v41, 0LL);
    v29 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8 * v23);
    if ( !v29 )
      break;
    *(_BYTE *)(v29 + 633) = 1;
    if ( (*(_BYTE *)(v24 + 16) & 0xC) == 0xC )
    {
      v37 = *(_DWORD *)(v24 + 20) + *(unsigned __int8 *)(a1 + v23 + 76);
      v38 = (__int64)*v6;
      LODWORD(v41) = v41 | 0x200;
      DWORD1(v41) = v37;
      *(_QWORD *)(*(_QWORD *)(a1 + 272) + 8 * v23) = VidSchiCreateContextInternal(v38, (int *)&v41, 0LL);
      v40 = *(_QWORD *)(*(_QWORD *)(a1 + 272) + 8 * v23);
      if ( !v40 )
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdAssertion(0LL, v39);
        v32[3] = (unsigned int)v23;
        v33 = *(_QWORD *)(a1 + 16);
        v32[5] = 1173LL;
        goto LABEL_32;
      }
      *(_BYTE *)(v40 + 633) = 1;
    }
LABEL_21:
    v23 = (unsigned int)(v23 + 1);
    if ( (unsigned int)v23 >= *(_DWORD *)(a1 + 64) )
      return 0LL;
  }
  v32 = (_QWORD *)WdLogNewEntry5_WdAssertion(0LL, v28);
  v32[3] = (unsigned int)v23;
  v33 = *(_QWORD *)(a1 + 16);
  v32[5] = 1153LL;
LABEL_32:
  v32[4] = v33;
LABEL_33:
  WdLogEvent5_WdAssertion(v32);
  return (unsigned int)-1073741823;
}
