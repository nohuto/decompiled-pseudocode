/*
 * XREFs of PnpReplacePartitionUnit @ 0x1408349E0
 * Callers:
 *     IoReplacePartitionUnit @ 0x140825840 (IoReplacePartitionUnit.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeIsEmptyAffinityEx @ 0x140062160 (KeIsEmptyAffinityEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x1400A7860 (KeQueryActiveProcessorCountEx.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D6F10 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D8290 (KeRevertToUserGroupAffinityThread.c)
 *     KeCopyAffinityEx @ 0x1400EDB30 (KeCopyAffinityEx.c)
 *     IoAddTriageDumpDataBlock @ 0x140191E2C (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PnprQueryReplaceFeatures @ 0x14028A694 (PnprQueryReplaceFeatures.c)
 *     KeFindFirstSetLeftAffinityEx @ 0x14028E530 (KeFindFirstSetLeftAffinityEx.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PnprGetMillisecondCounter @ 0x14057A7BC (PnprGetMillisecondCounter.c)
 *     PnprInitiateReplaceOperation @ 0x14057A814 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceDevices @ 0x14057B1E0 (PnprQuiesceDevices.c)
 *     PnprWakeDevices @ 0x14057BCE0 (PnprWakeDevices.c)
 *     MmUnloadSystemImage @ 0x140710150 (MmUnloadSystemImage.c)
 *     PnprAllocateMappingReserves @ 0x140835898 (PnprAllocateMappingReserves.c)
 *     PnprCollectResources @ 0x140835A50 (PnprCollectResources.c)
 *     PnprFreeMappingReserve @ 0x140835DD8 (PnprFreeMappingReserve.c)
 *     PnprIdentifyUnits @ 0x140836020 (PnprIdentifyUnits.c)
 *     PnprLegacyDeviceDriversPresent @ 0x1408364C8 (PnprLegacyDeviceDriversPresent.c)
 *     PnprLoadPluginDriver @ 0x140836518 (PnprLoadPluginDriver.c)
 *     PnprLockPagesForReplace @ 0x1408366A0 (PnprLockPagesForReplace.c)
 *     PnprLogFailureEvent @ 0x1408366D4 (PnprLogFailureEvent.c)
 *     PnprLogStartEvent @ 0x140836800 (PnprLogStartEvent.c)
 *     PnprLogSuccessEvent @ 0x1408368D4 (PnprLogSuccessEvent.c)
 *     PnprMmConstruct @ 0x140836CC4 (PnprMmConstruct.c)
 *     PnprMmFree @ 0x140836DD0 (PnprMmFree.c)
 *     PnprUnlockPagesForReplace @ 0x140836F90 (PnprUnlockPagesForReplace.c)
 */

LONG __fastcall PnpReplacePartitionUnit(_QWORD *a1)
{
  ULONG ActiveProcessorCount; // eax
  __int64 v3; // r15
  ULONG_PTR v4; // rcx
  __int64 v5; // rdx
  ULONG_PTR v6; // r8
  __int64 v7; // rdx
  PVOID PoolWithTag; // rax
  __int64 v9; // rbx
  int PluginDriver; // esi
  __int64 v11; // rcx
  _WORD *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  ULONG_PTR v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  ULONG_PTR v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  int v43; // eax
  int v44; // eax
  __int64 v45; // rcx
  int v46; // eax
  int v47; // edx
  int v48; // eax
  __int64 v49; // rdx
  int v50; // ecx
  int v51; // ecx
  __int64 v52; // rcx
  int v53; // eax
  int v54; // eax
  int ReplaceFeatures; // eax
  __int64 v56; // rcx
  char v57; // r15
  int v58; // eax
  int v59; // edx
  int v60; // edx
  __int64 v61; // rcx
  int v62; // eax
  int v63; // eax
  __int64 v64; // rcx
  int v65; // eax
  int v66; // eax
  __int64 v67; // rdx
  unsigned int v68; // eax
  __int64 v69; // rdx
  _QWORD *v70; // rcx
  __int64 v71; // r8
  int v72; // eax
  int FirstSetLeftAffinity; // eax
  unsigned int v74; // ecx
  __int64 v75; // r14
  void (*v76)(void); // rax
  void *v77; // rcx
  __int64 v78; // r14
  void *v79; // rcx
  void *v80; // rcx
  void *v81; // rcx
  void *v82; // rcx
  ULONG v84; // [rsp+30h] [rbp-D0h]
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-C8h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v87; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v88[21]; // [rsp+68h] [rbp-98h] BYREF
  char v89[64]; // [rsp+110h] [rbp+10h] BYREF

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v3 = ActiveProcessorCount;
  v84 = ActiveProcessorCount;
  KeWaitForSingleObject(&PnpReplaceEvent, Executive, 0, 0, 0LL);
  if ( *((int *)a1 + 4) >= 0 )
  {
    v4 = a1[1];
    if ( !v4 || (v5 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL)) == 0 || (*(_DWORD *)(v5 + 396) & 0x20000) != 0 )
    {
      if ( v4 )
      {
        IoAddTriageDumpDataBlock(v4, *(unsigned __int16 *)(v4 + 2));
        v4 = a1[1];
        v27 = *(_QWORD *)(v4 + 8);
        if ( v27 )
        {
          IoAddTriageDumpDataBlock(*(_QWORD *)(v4 + 8), *(__int16 *)(v27 + 2));
          v4 = a1[1];
          v28 = *(_QWORD *)(v4 + 8);
          if ( *(_WORD *)(v28 + 56) )
          {
            IoAddTriageDumpDataBlock(v28 + 56, 2);
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(a1[1] + 8LL) + 64LL),
              *(unsigned __int16 *)(*(_QWORD *)(a1[1] + 8LL) + 56LL));
            v4 = a1[1];
          }
        }
        if ( v4 )
          v29 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
        else
          v29 = 0LL;
        if ( v29 )
        {
          if ( v4 )
            v30 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
          else
            v30 = 0LL;
          if ( v4 )
            v31 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
          else
            LODWORD(v31) = 0;
          IoAddTriageDumpDataBlock(v31, 784);
          if ( *(_WORD *)(v30 + 40) )
          {
            IoAddTriageDumpDataBlock(v30 + 40, 2);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v30 + 48), *(unsigned __int16 *)(v30 + 40));
          }
          v4 = a1[1];
          if ( v4 )
            v32 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
          else
            v32 = 0LL;
          if ( *(_WORD *)(v32 + 56) )
          {
            if ( v4 )
              v33 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
            else
              LODWORD(v33) = 0;
            IoAddTriageDumpDataBlock(v33 + 56, 2);
            v34 = a1[1];
            if ( v34 )
              v35 = *(_QWORD *)(*(_QWORD *)(v34 + 312) + 40LL);
            else
              v35 = 0LL;
            if ( v34 )
              v36 = *(_QWORD *)(*(_QWORD *)(v34 + 312) + 40LL);
            else
              v36 = 0LL;
            IoAddTriageDumpDataBlock(*(_QWORD *)(v36 + 64), *(unsigned __int16 *)(v35 + 56));
            v4 = a1[1];
          }
          if ( v4 )
          {
            v37 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
          }
          else
          {
            v37 = 0LL;
            v4 = 0LL;
          }
          if ( *(_QWORD *)(v37 + 16) )
          {
            if ( v4 )
            {
              v38 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
            }
            else
            {
              v38 = 0LL;
              v4 = 0LL;
            }
            if ( *(_WORD *)(*(_QWORD *)(v38 + 16) + 56LL) )
            {
              if ( v4 )
                v39 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
              else
                v39 = 0LL;
              IoAddTriageDumpDataBlock(*(_QWORD *)(v39 + 16) + 56, 2);
              v40 = a1[1];
              if ( v40 )
                v41 = *(_QWORD *)(*(_QWORD *)(v40 + 312) + 40LL);
              else
                v41 = 0LL;
              if ( v40 )
                v42 = *(_QWORD *)(*(_QWORD *)(v40 + 312) + 40LL);
              else
                v42 = 0LL;
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(v42 + 16) + 64LL),
                *(unsigned __int16 *)(*(_QWORD *)(v41 + 16) + 56LL));
              v4 = a1[1];
            }
          }
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, v4, 0LL, 0LL);
    }
    v6 = *a1;
    if ( !*a1 || (v7 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL)) == 0 || (*(_DWORD *)(v7 + 396) & 0x20000) != 0 )
    {
      if ( v6 )
      {
        IoAddTriageDumpDataBlock(*a1, *(unsigned __int16 *)(v6 + 2));
        v6 = *a1;
        v11 = *(_QWORD *)(*a1 + 8LL);
        if ( v11 )
        {
          IoAddTriageDumpDataBlock(v11, *(__int16 *)(v11 + 2));
          v6 = *a1;
          v12 = (_WORD *)(*(_QWORD *)(*a1 + 8LL) + 56LL);
          if ( *v12 )
          {
            IoAddTriageDumpDataBlock((int)v12, 2);
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 64LL),
              *(unsigned __int16 *)(*(_QWORD *)(*a1 + 8LL) + 56LL));
            v6 = *a1;
          }
        }
        if ( v6 )
          v13 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
        else
          v13 = 0LL;
        if ( v13 )
        {
          if ( v6 )
            v14 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
          else
            v14 = 0LL;
          if ( v6 )
            v15 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
          else
            LODWORD(v15) = 0;
          IoAddTriageDumpDataBlock(v15, 784);
          if ( *(_WORD *)(v14 + 40) )
          {
            IoAddTriageDumpDataBlock(v14 + 40, 2);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v14 + 48), *(unsigned __int16 *)(v14 + 40));
          }
          v6 = *a1;
          if ( *a1 )
            v16 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
          else
            v16 = 0LL;
          if ( *(_WORD *)(v16 + 56) )
          {
            if ( v6 )
              v17 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
            else
              LODWORD(v17) = 0;
            IoAddTriageDumpDataBlock(v17 + 56, 2);
            v18 = *a1;
            if ( *a1 )
              v19 = *(_QWORD *)(*(_QWORD *)(v18 + 312) + 40LL);
            else
              v19 = 0LL;
            if ( v18 )
              v20 = *(_QWORD *)(*(_QWORD *)(v18 + 312) + 40LL);
            else
              v20 = 0LL;
            IoAddTriageDumpDataBlock(*(_QWORD *)(v20 + 64), *(unsigned __int16 *)(v19 + 56));
            v6 = *a1;
          }
          if ( v6 )
          {
            v21 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
          }
          else
          {
            v21 = 0LL;
            v6 = 0LL;
          }
          if ( *(_QWORD *)(v21 + 16) )
          {
            if ( v6 )
            {
              v22 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
            }
            else
            {
              v22 = 0LL;
              v6 = 0LL;
            }
            if ( *(_WORD *)(*(_QWORD *)(v22 + 16) + 56LL) )
            {
              if ( v6 )
                v23 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
              else
                v23 = 0LL;
              IoAddTriageDumpDataBlock(*(_QWORD *)(v23 + 16) + 56, 2);
              v24 = *a1;
              if ( *a1 )
                v25 = *(_QWORD *)(*(_QWORD *)(v24 + 312) + 40LL);
              else
                v25 = 0LL;
              if ( v24 )
                v26 = *(_QWORD *)(*(_QWORD *)(v24 + 312) + 40LL);
              else
                v26 = 0LL;
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(v26 + 16) + 64LL),
                *(unsigned __int16 *)(*(_QWORD *)(v25 + 16) + 56LL));
              v6 = *a1;
            }
          }
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, v6, 0LL, 0LL);
    }
    PnprLogStartEvent(*a1, a1[1]);
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x5238uLL, 0x51706E50u);
  v9 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    PluginDriver = -1073741670;
    goto LABEL_189;
  }
  memset(PoolWithTag, 0, 0x5238uLL);
  *(_QWORD *)v9 = *a1;
  *(_QWORD *)(v9 + 32) = a1[1];
  *(_DWORD *)(v9 + 64) = *((_DWORD *)a1 + 4);
  *(_QWORD *)(v9 + 160) = v9 + 152;
  *(_QWORD *)(v9 + 152) = v9 + 152;
  PnprContext = v9;
  if ( !KeDynamicPartitioningSupported && *((int *)a1 + 4) >= 0 )
  {
    v43 = *(_DWORD *)(v9 + 20984);
    if ( !v43 )
      v43 = 174;
    *(_DWORD *)(v9 + 20984) = v43;
    v44 = *(_DWORD *)(v9 + 20988);
    if ( !v44 )
      v44 = 2;
    *(_DWORD *)(v9 + 20988) = v44;
LABEL_116:
    PluginDriver = -1073741637;
    goto LABEL_189;
  }
  if ( (unsigned __int8)PnprLegacyDeviceDriversPresent() )
  {
    v45 = PnprContext;
    PluginDriver = -1073741621;
    v46 = *(_DWORD *)(PnprContext + 20984);
    if ( !v46 )
      v46 = 186;
    v47 = 7;
LABEL_121:
    *(_DWORD *)(v45 + 20984) = v46;
    v48 = *(_DWORD *)(v45 + 20988);
    if ( !v48 )
      v48 = v47;
    *(_DWORD *)(v45 + 20988) = v48;
    goto LABEL_189;
  }
  PnprGetMillisecondCounter(1);
  if ( *((int *)a1 + 4) < 0 )
  {
    PnprLockPagesForReplace();
    PnprQuiesceDevices(v89);
    PnprWakeDevices((__int64)v89);
    PnprUnlockPagesForReplace();
    PluginDriver = 0;
    goto LABEL_189;
  }
  PluginDriver = PnprIdentifyUnits(*(PDEVICE_OBJECT *)v9, *(PDEVICE_OBJECT *)(v9 + 32));
  if ( PluginDriver < 0 )
  {
    v49 = PnprContext;
    v50 = *(_DWORD *)(PnprContext + 20984);
    if ( !v50 )
      v50 = 223;
    *(_DWORD *)(PnprContext + 20984) = v50;
    v51 = *(_DWORD *)(v49 + 20988);
    if ( !v51 )
      v51 = 3;
    *(_DWORD *)(v49 + 20988) = v51;
    goto LABEL_189;
  }
  PluginDriver = PnprCollectResources(v9, v9 + 32);
  if ( PluginDriver < 0 )
  {
    v52 = PnprContext;
    v53 = *(_DWORD *)(PnprContext + 20984);
    if ( !v53 )
      v53 = 236;
    *(_DWORD *)(PnprContext + 20984) = v53;
    v54 = *(_DWORD *)(v52 + 20988);
    if ( !v54 )
      v54 = 1;
    goto LABEL_137;
  }
  PluginDriver = PnprLoadPluginDriver(v9 + 20864, v9 + 20888);
  if ( PluginDriver >= 0 )
  {
    ReplaceFeatures = PnprQueryReplaceFeatures(v9 + 20888, (PDEVICE_OBJECT *)(v9 + 32));
    v56 = *(_QWORD *)(v9 + 24);
    *(_DWORD *)(v9 + 64) |= ReplaceFeatures;
    v57 = ReplaceFeatures;
    if ( *(_DWORD *)(v56 + 4) )
    {
      v58 = *(_DWORD *)(v9 + 20896);
      if ( (v58 & 1) == 0 || !*(_QWORD *)(v9 + 20928) )
      {
        v59 = 277;
        goto LABEL_165;
      }
      if ( (v58 & 2) != 0 && !*(_QWORD *)(v9 + 20936) )
      {
        v59 = 285;
LABEL_165:
        v64 = PnprContext;
        v3 = v84;
        v65 = *(_DWORD *)(PnprContext + 20984);
        if ( !v65 )
          v65 = v59;
        *(_DWORD *)(PnprContext + 20984) = v65;
        v66 = *(_DWORD *)(v64 + 20988);
        if ( !v66 )
          v66 = 9;
        *(_DWORD *)(v64 + 20988) = v66;
        goto LABEL_116;
      }
      PluginDriver = PnprMmConstruct(v56, v9 + 152);
      if ( PluginDriver < 0 )
      {
        v60 = 297;
        goto LABEL_147;
      }
      if ( (v57 & 8) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v9 + 56) + 4LL) = 0;
      }
      else if ( !*(_QWORD *)(v9 + 20968) || (*(_DWORD *)(v9 + 64) & 0x20) != 0 )
      {
        v59 = 321;
        goto LABEL_165;
      }
      v3 = v84;
      PluginDriver = PnprAllocateMappingReserves(v9 + 136, v9 + 144, v84);
      if ( PluginDriver < 0 )
      {
        v45 = PnprContext;
        v46 = *(_DWORD *)(PnprContext + 20984);
        if ( !v46 )
          v46 = 336;
        v47 = 10;
        goto LABEL_121;
      }
      *(_QWORD *)(v9 + 168) = 0LL;
LABEL_171:
      if ( (*(_DWORD *)(v9 + 64) & 0x20) != 0 && !*(_QWORD *)(v9 + 20976) )
      {
        v45 = PnprContext;
        PluginDriver = -1073741637;
        v46 = *(_DWORD *)(PnprContext + 20984);
        if ( !v46 )
          v46 = 356;
        v47 = 9;
        goto LABEL_121;
      }
      *(_DWORD *)(v9 + 176) = v3;
      KeCopyAffinityEx((__int64)&v87, (unsigned __int16 *)KeActiveProcessors);
      v67 = *(_QWORD *)(v9 + 16);
      v68 = *(_DWORD *)(v67 + 8);
      if ( v68 )
      {
        v69 = *(_QWORD *)v67 - (_QWORD)v88;
        v70 = v88;
        v71 = v68;
        do
        {
          *v70 &= ~*(_QWORD *)((char *)v70 + v69);
          ++v70;
          --v71;
        }
        while ( v71 );
      }
      if ( !(unsigned int)KeIsEmptyAffinityEx(&v87) )
      {
        if ( ((v88[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6] >> (KiProcessorIndexToNumberMappingTable[0] & 0x3F)) & 1) != 0 )
          FirstSetLeftAffinity = 0;
        else
          FirstSetLeftAffinity = KeFindFirstSetLeftAffinityEx(&v87);
        *(_DWORD *)(v9 + 180) = FirstSetLeftAffinity;
        v74 = KiProcessorIndexToNumberMappingTable[FirstSetLeftAffinity];
        Affinity.Reserved[1] = 0;
        Affinity.Reserved[2] = 0;
        *(_DWORD *)&Affinity.Group = (unsigned __int16)(v74 >> 6);
        Affinity.Mask = 1LL << (v74 & 0x3F);
        KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
        PluginDriver = PnprInitiateReplaceOperation();
        KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        goto LABEL_189;
      }
      v52 = PnprContext;
      PluginDriver = -1073741621;
      v72 = *(_DWORD *)(PnprContext + 20984);
      if ( !v72 )
        v72 = 383;
      *(_DWORD *)(PnprContext + 20984) = v72;
      v54 = *(_DWORD *)(v52 + 20988);
      if ( !v54 )
        v54 = 6;
LABEL_137:
      *(_DWORD *)(v52 + 20988) = v54;
      goto LABEL_189;
    }
LABEL_170:
    v3 = v84;
    goto LABEL_171;
  }
  if ( !*(_DWORD *)(*(_QWORD *)(v9 + 24) + 4LL) )
    goto LABEL_170;
  v60 = 262;
LABEL_147:
  v61 = PnprContext;
  v3 = v84;
  v62 = *(_DWORD *)(PnprContext + 20984);
  if ( !v62 )
    v62 = v60;
  *(_DWORD *)(PnprContext + 20984) = v62;
  v63 = *(_DWORD *)(v61 + 20988);
  if ( !v63 )
    v63 = 1;
  *(_DWORD *)(v61 + 20988) = v63;
LABEL_189:
  if ( *((int *)a1 + 4) >= 0 )
  {
    if ( PluginDriver < 0 )
    {
      PnprLogFailureEvent(*a1, a1[1], (unsigned int)PluginDriver);
    }
    else
    {
      *(_DWORD *)(v9 + 21040) = PnprGetMillisecondCounter(0);
      PnprLogSuccessEvent();
    }
  }
  if ( v9 )
  {
    v75 = *(_QWORD *)(v9 + 20864);
    if ( v75 )
    {
      v76 = *(void (**)(void))(v9 + 20904);
      if ( v76 )
        v76();
      MmUnloadSystemImage(v75);
    }
    v77 = *(void **)(v9 + 136);
    if ( v77 && *(_QWORD *)(v9 + 144) )
    {
      if ( (_DWORD)v3 )
      {
        v78 = 0LL;
        do
        {
          PnprFreeMappingReserve(v78 + *(_QWORD *)(v9 + 136));
          PnprFreeMappingReserve(v78 + *(_QWORD *)(v9 + 144));
          v78 += 24LL;
          --v3;
        }
        while ( v3 );
        v77 = *(void **)(v9 + 136);
      }
      ExFreePoolWithTag(v77, 0x51706E50u);
      ExFreePoolWithTag(*(PVOID *)(v9 + 144), 0x51706E50u);
    }
    PnprMmFree(v9 + 152);
    v79 = *(void **)(v9 + 16);
    if ( v79 )
    {
      ExFreePoolWithTag(v79, 0x51706E50u);
      *(_QWORD *)(v9 + 16) = 0LL;
    }
    v80 = *(void **)(v9 + 24);
    if ( v80 )
    {
      ExFreePoolWithTag(v80, 0x51706E50u);
      *(_QWORD *)(v9 + 24) = 0LL;
    }
    v81 = *(void **)(v9 + 48);
    if ( v81 )
    {
      ExFreePoolWithTag(v81, 0x51706E50u);
      *(_QWORD *)(v9 + 48) = 0LL;
    }
    v82 = *(void **)(v9 + 56);
    if ( v82 )
    {
      ExFreePoolWithTag(v82, 0x51706E50u);
      *(_QWORD *)(v9 + 56) = 0LL;
    }
    ExFreePoolWithTag((PVOID)v9, 0x51706E50u);
  }
  KeSetEvent(&PnpReplaceEvent, 0, 0);
  *((_DWORD *)a1 + 5) = PluginDriver;
  return KeSetEvent((PRKEVENT)a1 + 1, 0, 0);
}
