/*
 * XREFs of KeQueryLogicalProcessorRelationship @ 0x1400DC030
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1400A69C0 (KeQueryMaximumProcessorCountEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x1400A73B0 (KeGetProcessorIndexFromNumber.c)
 *     KeQueryActiveProcessorCountEx @ 0x1400A7860 (KeQueryActiveProcessorCountEx.c)
 *     KeAndAffinityEx @ 0x1400DC780 (KeAndAffinityEx.c)
 *     KeOrAffinityEx @ 0x1400DC970 (KeOrAffinityEx.c)
 *     KeAndGroupAffinityEx @ 0x14016A3D0 (KeAndGroupAffinityEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

NTSTATUS __stdcall KeQueryLogicalProcessorRelationship(
        PPROCESSOR_NUMBER ProcessorNumber,
        LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType,
        PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information,
        PULONG Length)
{
  ULONG v5; // r14d
  __int64 v6; // r12
  char *v7; // rbx
  ULONG v8; // r13d
  LOGICAL_PROCESSOR_RELATIONSHIP v9; // edi
  NTSTATUS v10; // r15d
  __int64 v11; // rax
  __int64 v12; // rbx
  DWORD v13; // ebx
  DWORD v14; // r9d
  __int64 v15; // rcx
  unsigned __int64 v16; // r10
  unsigned __int16 v17; // r11
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int64 v28; // rax
  int v29; // eax
  unsigned __int16 v30; // r9
  WORD v31; // dx
  _QWORD *v32; // r8
  __int64 v33; // r10
  bool v34; // zf
  WORD v35; // cx
  __int64 v36; // rax
  unsigned __int16 v37; // dx
  GROUP_AFFINITY *GroupMask; // rcx
  unsigned __int64 *v39; // r8
  unsigned __int64 v40; // r10
  int v41; // edx
  DWORD v42; // eax
  unsigned int v43; // r12d
  __int64 v44; // rdi
  __int64 v45; // r12
  __int64 v46; // r13
  int v47; // eax
  ULONG ProcessorIndexFromNumber; // r13d
  unsigned int v49; // r13d
  unsigned __int16 v50; // ax
  unsigned __int16 v51; // di
  unsigned __int64 v52; // r8
  __int64 v53; // rcx
  __int64 v54; // rax
  unsigned __int16 *v55; // r12
  int v56; // eax
  ULONG v57; // [rsp+20h] [rbp-E0h]
  NTSTATUS v58; // [rsp+28h] [rbp-D8h]
  __int64 v59; // [rsp+28h] [rbp-D8h]
  unsigned int v60; // [rsp+30h] [rbp-D0h]
  ULONG v61; // [rsp+34h] [rbp-CCh]
  ULONG v63; // [rsp+3Ch] [rbp-C4h]
  __int64 v65; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v66; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v67; // [rsp+58h] [rbp-A8h]
  PULONG v68; // [rsp+60h] [rbp-A0h]
  _DWORD v69[44]; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v70[44]; // [rsp+120h] [rbp+20h] BYREF
  _OWORD v71[10]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v72; // [rsp+270h] [rbp+170h]
  _BYTE v73[4]; // [rsp+280h] [rbp+180h] BYREF
  char v74; // [rsp+284h] [rbp+184h] BYREF

  v57 = *Length;
  v5 = 0;
  v68 = Length;
  v58 = 0;
  if ( ProcessorNumber )
  {
    ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcessorNumber);
    v61 = ProcessorIndexFromNumber;
    if ( ProcessorIndexFromNumber >= (unsigned int)KeNumberProcessors_0 )
      return -1073741811;
    v60 = ProcessorIndexFromNumber;
  }
  else
  {
    v61 = 0;
    v60 = KeNumberProcessors_0 - 1;
  }
  v6 = 5LL;
  v7 = &v74;
  do
  {
    *(_QWORD *)(v7 - 4) = 1310721LL;
    memset(v7 + 4, 0, 0xA0uLL);
    v7 += 168;
    --v6;
  }
  while ( v6 );
  v69[0] = 1310721;
  memset(&v69[1], 0, 0xA4uLL);
  v70[0] = 1310721;
  memset(&v70[1], 0, 0xA4uLL);
  v8 = v61;
  v9 = RelationshipType;
  v10 = 0;
  v65 = 0LL;
  v66 = 0LL;
  if ( v61 <= v60 )
  {
    v11 = v61;
    v63 = v61;
    while ( 1 )
    {
      v12 = KiProcessorBlock[v11];
      if ( v9 == RelationProcessorPackage || v9 == RelationAll )
      {
        v19 = *(_OWORD *)(v12 + 24736);
        v71[0] = *(_OWORD *)(v12 + 24720);
        v20 = *(_OWORD *)(v12 + 24752);
        v71[1] = v19;
        v21 = *(_OWORD *)(v12 + 24768);
        v71[2] = v20;
        v22 = *(_OWORD *)(v12 + 24784);
        v71[3] = v21;
        v23 = *(_OWORD *)(v12 + 24800);
        v71[4] = v22;
        v24 = *(_OWORD *)(v12 + 24816);
        v71[5] = v23;
        v25 = *(_OWORD *)(v12 + 24832);
        v71[6] = v24;
        v26 = *(_OWORD *)(v12 + 24848);
        v71[7] = v25;
        v27 = *(_OWORD *)(v12 + 24864);
        v28 = *(_QWORD *)(v12 + 24880);
        v71[8] = v26;
        v71[9] = v27;
        v72 = v28;
        v29 = KeAndAffinityEx(v70, v71, 0LL);
        if ( ProcessorNumber || !v29 )
        {
          KeOrAffinityEx(v70, v71, v70);
          v30 = v71[0];
          v31 = 0;
          if ( LOWORD(v71[0]) )
          {
            v32 = (_QWORD *)v71 + 1;
            v33 = LOWORD(v71[0]);
            do
            {
              v34 = *v32 == 0LL;
              v35 = v31;
              ++v32;
              ++v31;
              if ( v34 )
                v31 = v35;
              --v33;
            }
            while ( v33 );
          }
          v36 = (16 * v31 + 39) & 0xFFFFFFF8;
          v5 += v36;
          if ( v5 > v57 )
          {
            v10 = -1073741820;
          }
          else
          {
            Information->Processor.GroupCount = v31;
            Information->Relationship = RelationProcessorPackage;
            v37 = 0;
            Information->Size = v36;
            Information->Group.MaximumGroupCount = 0;
            *(_QWORD *)((char *)&Information->NumaNode.NodeNumber + 2) = 0LL;
            *(_QWORD *)&Information->Group.Reserved[6] = 0LL;
            *(_DWORD *)&Information->Group.Reserved[14] = 0;
            GroupMask = Information->Processor.GroupMask;
            if ( v30 )
            {
              v39 = (unsigned __int64 *)v71 + 1;
              do
              {
                v40 = *v39;
                if ( *v39 )
                {
                  *(_QWORD *)&GroupMask->Group = 0LL;
                  GroupMask->Group = v37;
                  GroupMask->Mask = v40;
                  ++GroupMask;
                }
                ++v37;
                ++v39;
              }
              while ( v37 < v30 );
            }
            Information = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)Information + v36);
          }
        }
      }
      if ( v9 == RelationProcessorCore || v9 == RelationAll )
      {
        v45 = *(unsigned __int8 *)(v12 + 208);
        v46 = *(_QWORD *)(v12 + 24920);
        LOWORD(v66) = *(unsigned __int8 *)(v12 + 208);
        v65 = v46;
        v47 = KeAndGroupAffinityEx(v69, &v65, 0LL);
        if ( ProcessorNumber || !v47 )
        {
          if ( LOWORD(v69[0]) <= (unsigned __int16)v45 )
            LOWORD(v69[0]) = v45 + 1;
          *(_QWORD *)&v69[2 * v45 + 2] |= v46;
          v5 += 48;
          if ( v5 > v57 )
          {
            v10 = -1073741820;
          }
          else
          {
            Information->Processor.Flags = *(_QWORD *)(v12 + 200) != v46;
            Information->Relationship = RelationProcessorCore;
            Information->Size = 48;
            Information->Processor.EfficiencyClass = *(_BYTE *)(v12 + 24224);
            Information->Processor.GroupCount = 1;
            *(_QWORD *)((char *)&Information->NumaNode.NodeNumber + 2) = 0LL;
            *(_QWORD *)&Information->Group.Reserved[6] = 0LL;
            *(_DWORD *)&Information->Group.Reserved[14] = 0;
            Information->Processor.GroupMask[0].Mask = 0LL;
            Information->Cache.GroupMask.Mask = 0LL;
            Information->Processor.GroupMask[0].Group = *(unsigned __int8 *)(v12 + 208);
            Information->Processor.GroupMask[0].Mask = *(_QWORD *)(v12 + 24920);
            Information = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)Information + 48);
          }
        }
      }
      if ( v9 == RelationAll || v9 == RelationCache )
      {
        v49 = 0;
        v50 = *(unsigned __int8 *)(v12 + 208);
        LOWORD(v66) = v50;
        if ( *(_DWORD *)(v12 + 24596) )
          break;
      }
LABEL_13:
      v11 = v63 + 1;
      v63 = v11;
      if ( (unsigned int)v11 > v60 )
      {
        v8 = v61;
        v58 = v10;
        goto LABEL_15;
      }
    }
    v51 = v50;
    while ( 1 )
    {
      v52 = *(_QWORD *)(v12 + 200);
      v53 = v49;
      v54 = *(_QWORD *)(v12 + 8LL * v49 + 24944);
      v59 = v54;
      if ( v54 )
      {
        v67 = *(_QWORD *)(v12 + 8LL * v49 + 24944);
        v65 = v54;
        v55 = (unsigned __int16 *)&v73[168 * v49];
        v56 = KeAndGroupAffinityEx(v55, &v65, 0LL);
        if ( !ProcessorNumber && v56 )
          goto LABEL_69;
        if ( *v55 <= v51 )
          *v55 = v51 + 1;
        v52 = v67;
        *(_QWORD *)&v55[4 * v51 + 4] |= v59;
        v53 = v49;
      }
      v5 += 56;
      if ( v5 > v57 )
      {
        v10 = -1073741820;
      }
      else
      {
        Information->Relationship = RelationCache;
        Information->Size = 56;
        Information->Processor.Flags = *(_BYTE *)(v12 + 12 * v53 + 24536);
        Information->Processor.EfficiencyClass = *(_BYTE *)(v12 + 12 * v53 + 24537);
        Information->Cache.LineSize = *(_WORD *)(v12 + 12 * v53 + 24538);
        Information->Cache.CacheSize = *(_DWORD *)(v12 + 12 * v53 + 24540);
        Information->Cache.Type = *(_DWORD *)(v12 + 12 * v53 + 24544);
        *(_QWORD *)&Information->Group.Reserved[8] = 0LL;
        *(_QWORD *)&Information->Group.Reserved[16] = 0LL;
        *(_DWORD *)&Information->Group.GroupInfo[0].Reserved[2] = 0;
        Information->Cache.GroupMask.Mask = 0LL;
        *(_QWORD *)&Information->Group.GroupInfo[0].Reserved[14] = 0LL;
        Information->Cache.GroupMask.Group = *(unsigned __int8 *)(v12 + 208);
        Information->Cache.GroupMask.Mask = v52;
        Information = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)Information + 56);
      }
LABEL_69:
      if ( ++v49 >= *(_DWORD *)(v12 + 24596) )
      {
        v9 = RelationshipType;
        goto LABEL_13;
      }
    }
  }
LABEL_15:
  if ( v9 == RelationNumaNode || v9 == RelationAll )
  {
    v13 = (unsigned __int16)KeNumberNodes;
    v14 = 0;
    do
    {
      v15 = KeNodeBlock[v14];
      v16 = *(_QWORD *)(v15 + 136);
      if ( v16 )
      {
        v17 = *(_WORD *)(v15 + 144);
        if ( !ProcessorNumber
          || ((unsigned int)(v16 >> (KiProcessorIndexToNumberMappingTable[v8] & 0x3F)) & ((unsigned int)KiProcessorIndexToNumberMappingTable[v8] >> 6 == v17)) != 0 )
        {
          v5 += 48;
          if ( v5 > v57 )
          {
            v10 = -1073741820;
          }
          else
          {
            Information->Size = 48;
            Information->Relationship = RelationNumaNode;
            Information->NumaNode.NodeNumber = v14;
            *(_QWORD *)Information->Group.Reserved = 0LL;
            *(_QWORD *)&Information->Group.Reserved[8] = 0LL;
            *(_DWORD *)&Information->Group.Reserved[16] = 0;
            Information->Cache.GroupMask.Mask = 0LL;
            Information->Processor.GroupMask[0].Group = v17;
            Information->Processor.GroupMask[0].Mask = v16;
            Information = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)Information + 48);
          }
        }
      }
      ++v14;
    }
    while ( v14 < v13 );
    v9 = RelationshipType;
    v58 = v10;
  }
  if ( v9 == RelationGroup || v9 == RelationAll && !ProcessorNumber )
  {
    v41 = (unsigned __int16)KiActiveGroups;
    v42 = (48 * (unsigned __int16)KiActiveGroups + 39) & 0xFFFFFFF8;
    v5 += v42;
    if ( v5 > v57 )
    {
      v10 = -1073741820;
    }
    else
    {
      Information->Size = v42;
      v43 = 0;
      Information->Group.MaximumGroupCount = KiMaximumGroups;
      Information->Relationship = RelationGroup;
      Information->Cache.LineSize = v41;
      *(_QWORD *)Information->Group.Reserved = 0LL;
      *(_QWORD *)&Information->Group.Reserved[8] = 0LL;
      *(_DWORD *)&Information->Group.Reserved[16] = 0;
      if ( v41 )
      {
        do
        {
          v44 = v43;
          Information->Cache.Reserved[v44 * 48 + 12] = KeQueryMaximumProcessorCountEx(v43);
          Information->Cache.Reserved[v44 * 48 + 13] = KeQueryActiveProcessorCountEx(v43);
          Information->Group.GroupInfo[v44].ActiveProcessorMask = qword_1405426A8[v43];
          memset(Information->Group.GroupInfo[v44].Reserved, 0, sizeof(Information->Group.GroupInfo[v44].Reserved));
          ++v43;
        }
        while ( v43 < (unsigned __int16)KiActiveGroups );
        v10 = v58;
      }
    }
  }
  if ( !v10 && !v5 )
    v10 = -1073741823;
  *v68 = v5;
  return v10;
}
