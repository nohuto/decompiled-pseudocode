/*
 * XREFs of KeQueryLogicalProcessorRelationship @ 0x1400FD290
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1400048C0 (KeQueryMaximumProcessorCountEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x140004A40 (KeGetProcessorIndexFromNumber.c)
 *     KeQueryActiveProcessorCountEx @ 0x1400052B0 (KeQueryActiveProcessorCountEx.c)
 *     KeAndAffinityEx @ 0x1400BE320 (KeAndAffinityEx.c)
 *     KeOrAffinityEx @ 0x1400FDD80 (KeOrAffinityEx.c)
 *     KeAndGroupAffinityEx @ 0x1401478E0 (KeAndGroupAffinityEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

NTSTATUS __stdcall KeQueryLogicalProcessorRelationship(
        PPROCESSOR_NUMBER ProcessorNumber,
        LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType,
        PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information,
        PULONG Length)
{
  ULONG v7; // r14d
  __int64 v8; // r12
  char *v9; // rbx
  ULONG v10; // r13d
  LOGICAL_PROCESSOR_RELATIONSHIP v11; // edi
  NTSTATUS v12; // r15d
  __int64 v13; // rax
  __int64 v14; // rbx
  DWORD v15; // ebx
  DWORD v16; // r9d
  __int64 v17; // rcx
  unsigned __int64 v18; // r10
  unsigned __int16 v19; // r11
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int64 v30; // rax
  int v31; // eax
  unsigned __int16 v32; // r9
  WORD v33; // dx
  _QWORD *v34; // r8
  __int64 v35; // r10
  bool v36; // zf
  WORD v37; // cx
  __int64 v38; // rax
  unsigned __int16 v39; // dx
  GROUP_AFFINITY *GroupMask; // rcx
  unsigned __int64 *v41; // r8
  unsigned __int64 v42; // r10
  int v43; // edx
  DWORD v44; // eax
  unsigned int v45; // r12d
  __int64 v46; // rdi
  __int64 v47; // r12
  __int64 v48; // r13
  int v49; // eax
  ULONG ProcessorIndexFromNumber; // r13d
  unsigned int v51; // r13d
  unsigned __int16 v52; // ax
  unsigned __int16 v53; // di
  unsigned __int64 v54; // r8
  __int64 v55; // rcx
  __int64 v56; // rax
  unsigned __int16 *v57; // r12
  int v58; // eax
  ULONG v59; // [rsp+20h] [rbp-E0h]
  NTSTATUS v60; // [rsp+28h] [rbp-D8h]
  __int64 v61; // [rsp+28h] [rbp-D8h]
  unsigned int v62; // [rsp+30h] [rbp-D0h]
  ULONG v63; // [rsp+34h] [rbp-CCh]
  ULONG v65; // [rsp+3Ch] [rbp-C4h]
  __int64 v67; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v68; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v69; // [rsp+58h] [rbp-A8h]
  PULONG v70; // [rsp+60h] [rbp-A0h]
  _QWORD v71[22]; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v72[44]; // [rsp+120h] [rbp+20h] BYREF
  _OWORD v73[10]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v74; // [rsp+270h] [rbp+170h]
  _BYTE v75[4]; // [rsp+280h] [rbp+180h] BYREF
  char v76; // [rsp+284h] [rbp+184h] BYREF

  v70 = Length;
  memset(v71, 0, 0xA8uLL);
  memset(v72, 0, 0xA8uLL);
  v60 = 0;
  v7 = 0;
  v59 = *Length;
  if ( ProcessorNumber )
  {
    ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcessorNumber);
    v63 = ProcessorIndexFromNumber;
    if ( ProcessorIndexFromNumber >= (unsigned int)KeNumberProcessors_0 )
      return -1073741811;
    v62 = ProcessorIndexFromNumber;
  }
  else
  {
    v63 = 0;
    v62 = KeNumberProcessors_0 - 1;
  }
  v8 = 5LL;
  v9 = &v76;
  do
  {
    *(_QWORD *)(v9 - 4) = 1310721LL;
    memset(v9 + 4, 0, 0xA0uLL);
    v9 += 168;
    --v8;
  }
  while ( v8 );
  LODWORD(v71[0]) = 1310721;
  memset((char *)v71 + 4, 0, 0xA4uLL);
  v72[0] = 1310721;
  memset(&v72[1], 0, 0xA4uLL);
  v10 = v63;
  v11 = RelationshipType;
  v12 = 0;
  v67 = 0LL;
  v68 = 0LL;
  if ( v63 <= v62 )
  {
    v13 = v63;
    v65 = v63;
    while ( 1 )
    {
      v14 = KiProcessorBlock[v13];
      if ( v11 == RelationProcessorPackage || v11 == RelationAll )
      {
        v21 = *(_OWORD *)(v14 + 24736);
        v73[0] = *(_OWORD *)(v14 + 24720);
        v22 = *(_OWORD *)(v14 + 24752);
        v73[1] = v21;
        v23 = *(_OWORD *)(v14 + 24768);
        v73[2] = v22;
        v24 = *(_OWORD *)(v14 + 24784);
        v73[3] = v23;
        v25 = *(_OWORD *)(v14 + 24800);
        v73[4] = v24;
        v26 = *(_OWORD *)(v14 + 24816);
        v73[5] = v25;
        v27 = *(_OWORD *)(v14 + 24832);
        v73[6] = v26;
        v28 = *(_OWORD *)(v14 + 24848);
        v73[7] = v27;
        v29 = *(_OWORD *)(v14 + 24864);
        v30 = *(_QWORD *)(v14 + 24880);
        v73[8] = v28;
        v73[9] = v29;
        v74 = v30;
        v31 = KeAndAffinityEx((unsigned __int16 *)v72, (unsigned __int16 *)v73, 0LL);
        if ( ProcessorNumber || !v31 )
        {
          KeOrAffinityEx(v72, v73, v72);
          v32 = v73[0];
          v33 = 0;
          if ( LOWORD(v73[0]) )
          {
            v34 = (_QWORD *)v73 + 1;
            v35 = LOWORD(v73[0]);
            do
            {
              v36 = *v34 == 0LL;
              v37 = v33;
              ++v34;
              ++v33;
              if ( v36 )
                v33 = v37;
              --v35;
            }
            while ( v35 );
          }
          v38 = (16 * v33 + 39) & 0xFFFFFFF8;
          v7 += v38;
          if ( v7 > v59 )
          {
            v12 = -1073741820;
          }
          else
          {
            Information->Processor.GroupCount = v33;
            Information->Relationship = RelationProcessorPackage;
            v39 = 0;
            Information->Size = v38;
            Information->Group.MaximumGroupCount = 0;
            *(_QWORD *)((char *)&Information->NumaNode.NodeNumber + 2) = 0LL;
            *(_QWORD *)&Information->Group.Reserved[6] = 0LL;
            *(_DWORD *)&Information->Group.Reserved[14] = 0;
            GroupMask = Information->Processor.GroupMask;
            if ( v32 )
            {
              v41 = (unsigned __int64 *)v73 + 1;
              do
              {
                v42 = *v41;
                if ( *v41 )
                {
                  *(_QWORD *)&GroupMask->Group = 0LL;
                  GroupMask->Group = v39;
                  GroupMask->Mask = v42;
                  ++GroupMask;
                }
                ++v39;
                ++v41;
              }
              while ( v39 < v32 );
            }
            Information = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)Information + v38);
          }
        }
      }
      if ( v11 == RelationProcessorCore || v11 == RelationAll )
      {
        v47 = *(unsigned __int8 *)(v14 + 208);
        v48 = *(_QWORD *)(v14 + 24920);
        LOWORD(v68) = *(unsigned __int8 *)(v14 + 208);
        v67 = v48;
        v49 = KeAndGroupAffinityEx(v71, &v67, 0LL);
        if ( ProcessorNumber || !v49 )
        {
          if ( LOWORD(v71[0]) <= (unsigned __int16)v47 )
            LOWORD(v71[0]) = v47 + 1;
          v71[v47 + 1] |= v48;
          v7 += 48;
          if ( v7 > v59 )
          {
            v12 = -1073741820;
          }
          else
          {
            Information->Processor.Flags = *(_QWORD *)(v14 + 200) != v48;
            Information->Relationship = RelationProcessorCore;
            Information->Size = 48;
            Information->Processor.EfficiencyClass = *(_BYTE *)(v14 + 24224);
            Information->Processor.GroupCount = 1;
            *(_QWORD *)((char *)&Information->NumaNode.NodeNumber + 2) = 0LL;
            *(_QWORD *)&Information->Group.Reserved[6] = 0LL;
            *(_DWORD *)&Information->Group.Reserved[14] = 0;
            Information->Processor.GroupMask[0].Mask = 0LL;
            Information->Cache.GroupMask.Mask = 0LL;
            Information->Processor.GroupMask[0].Group = *(unsigned __int8 *)(v14 + 208);
            Information->Processor.GroupMask[0].Mask = *(_QWORD *)(v14 + 24920);
            Information = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)Information + 48);
          }
        }
      }
      if ( v11 == RelationAll || v11 == RelationCache )
      {
        v51 = 0;
        v52 = *(unsigned __int8 *)(v14 + 208);
        LOWORD(v68) = v52;
        if ( *(_DWORD *)(v14 + 24596) )
          break;
      }
LABEL_13:
      v13 = v65 + 1;
      v65 = v13;
      if ( (unsigned int)v13 > v62 )
      {
        v10 = v63;
        v60 = v12;
        goto LABEL_15;
      }
    }
    v53 = v52;
    while ( 1 )
    {
      v54 = *(_QWORD *)(v14 + 200);
      v55 = v51;
      v56 = *(_QWORD *)(v14 + 8LL * v51 + 24944);
      v61 = v56;
      if ( v56 )
      {
        v69 = *(_QWORD *)(v14 + 8LL * v51 + 24944);
        v67 = v56;
        v57 = (unsigned __int16 *)&v75[168 * v51];
        v58 = KeAndGroupAffinityEx(v57, &v67, 0LL);
        if ( !ProcessorNumber && v58 )
          goto LABEL_68;
        if ( *v57 <= v53 )
          *v57 = v53 + 1;
        v54 = v69;
        *(_QWORD *)&v57[4 * v53 + 4] |= v61;
        v55 = v51;
      }
      v7 += 56;
      if ( v7 > v59 )
      {
        v12 = -1073741820;
      }
      else
      {
        Information->Relationship = RelationCache;
        Information->Size = 56;
        Information->Processor.Flags = *(_BYTE *)(v14 + 12 * v55 + 24536);
        Information->Processor.EfficiencyClass = *(_BYTE *)(v14 + 12 * v55 + 24537);
        Information->Cache.LineSize = *(_WORD *)(v14 + 12 * v55 + 24538);
        Information->Cache.CacheSize = *(_DWORD *)(v14 + 12 * v55 + 24540);
        Information->Cache.Type = *(_DWORD *)(v14 + 12 * v55 + 24544);
        *(_QWORD *)&Information->Group.Reserved[8] = 0LL;
        *(_QWORD *)&Information->Group.Reserved[16] = 0LL;
        *(_DWORD *)&Information->Group.GroupInfo[0].Reserved[2] = 0;
        Information->Cache.GroupMask.Mask = 0LL;
        *(_QWORD *)&Information->Group.GroupInfo[0].Reserved[14] = 0LL;
        Information->Cache.GroupMask.Group = *(unsigned __int8 *)(v14 + 208);
        Information->Cache.GroupMask.Mask = v54;
        Information = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)Information + 56);
      }
LABEL_68:
      if ( ++v51 >= *(_DWORD *)(v14 + 24596) )
      {
        v11 = RelationshipType;
        goto LABEL_13;
      }
    }
  }
LABEL_15:
  if ( v11 == RelationNumaNode || v11 == RelationAll )
  {
    v15 = (unsigned __int16)KeNumberNodes;
    v16 = 0;
    do
    {
      v17 = KeNodeBlock[v16];
      v18 = *(_QWORD *)(v17 + 136);
      if ( v18 )
      {
        v19 = *(_WORD *)(v17 + 144);
        if ( !ProcessorNumber
          || ((unsigned int)(v18 >> (KiProcessorIndexToNumberMappingTable[v10] & 0x3F)) & ((unsigned int)KiProcessorIndexToNumberMappingTable[v10] >> 6 == v19)) != 0 )
        {
          v7 += 48;
          if ( v7 > v59 )
          {
            v12 = -1073741820;
          }
          else
          {
            Information->Size = 48;
            Information->Relationship = RelationNumaNode;
            Information->NumaNode.NodeNumber = v16;
            *(_QWORD *)Information->Group.Reserved = 0LL;
            *(_QWORD *)&Information->Group.Reserved[8] = 0LL;
            *(_DWORD *)&Information->Group.Reserved[16] = 0;
            Information->Cache.GroupMask.Mask = 0LL;
            Information->Processor.GroupMask[0].Group = v19;
            Information->Processor.GroupMask[0].Mask = v18;
            Information = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)Information + 48);
          }
        }
      }
      ++v16;
    }
    while ( v16 < v15 );
    v11 = RelationshipType;
    v60 = v12;
  }
  if ( v11 == RelationGroup || v11 == RelationAll && !ProcessorNumber )
  {
    v43 = (unsigned __int16)KiActiveGroups;
    v44 = (48 * (unsigned __int16)KiActiveGroups + 39) & 0xFFFFFFF8;
    v7 += v44;
    if ( v7 > v59 )
    {
      v12 = -1073741820;
    }
    else
    {
      Information->Size = v44;
      v45 = 0;
      Information->Group.MaximumGroupCount = KiMaximumGroups;
      Information->Relationship = RelationGroup;
      Information->Cache.LineSize = v43;
      *(_QWORD *)Information->Group.Reserved = 0LL;
      *(_QWORD *)&Information->Group.Reserved[8] = 0LL;
      *(_DWORD *)&Information->Group.Reserved[16] = 0;
      if ( v43 )
      {
        do
        {
          v46 = v45;
          Information->Cache.Reserved[v46 * 48 + 12] = KeQueryMaximumProcessorCountEx(v45);
          Information->Cache.Reserved[v46 * 48 + 13] = KeQueryActiveProcessorCountEx(v45);
          Information->Group.GroupInfo[v46].ActiveProcessorMask = qword_140572748[v45];
          memset(Information->Group.GroupInfo[v46].Reserved, 0, sizeof(Information->Group.GroupInfo[v46].Reserved));
          ++v45;
        }
        while ( v45 < (unsigned __int16)KiActiveGroups );
        v12 = v60;
      }
    }
  }
  if ( !v12 && !v7 )
    v12 = -1073741823;
  *v70 = v7;
  return v12;
}
