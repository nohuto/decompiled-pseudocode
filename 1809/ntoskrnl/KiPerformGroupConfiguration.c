/*
 * XREFs of KiPerformGroupConfiguration @ 0x1409B75EC
 * Callers:
 *     KePerformGroupConfiguration @ 0x1409B6C1C (KePerformGroupConfiguration.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     strstr @ 0x140195000 (strstr.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     HviGetImplementationLimits @ 0x140322650 (HviGetImplementationLimits.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     KiAssignAllNodesToGroup0 @ 0x1409B785C (KiAssignAllNodesToGroup0.c)
 *     KiAssignAdjustableNodes @ 0x1409F7638 (KiAssignAdjustableNodes.c)
 *     KiAssignFixedNodes @ 0x1409F76E0 (KiAssignFixedNodes.c)
 *     KiShuffleAssignedNodes @ 0x1409F78D8 (KiShuffleAssignedNodes.c)
 */

__int64 __fastcall KiPerformGroupConfiguration(__int64 a1)
{
  unsigned __int16 v1; // ax
  __int64 *v2; // r15
  __int64 v3; // r12
  unsigned int v4; // r14d
  unsigned __int16 v5; // r13
  int v6; // esi
  unsigned __int16 v7; // di
  __int64 v8; // rcx
  _DWORD *v9; // rdx
  unsigned __int16 v10; // di
  unsigned __int16 v11; // bx
  unsigned __int16 i; // r14
  int v13; // eax
  __int64 v14; // r14
  _DWORD *v15; // rbx
  __int64 v16; // r9
  __int64 result; // rax
  __int64 *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 *v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rcx
  int v24; // eax
  int *v25; // rdi
  unsigned __int16 v26; // r9
  __int64 j; // rcx
  unsigned __int16 v28; // cx
  __int64 v29; // rdx
  char v30; // al
  unsigned __int16 v31; // di
  unsigned int v32; // r8d
  unsigned int v33; // eax
  _DWORD *v34; // rcx
  __int64 v35; // rcx
  unsigned __int16 v36; // di
  int v37; // ebx
  unsigned __int16 v38; // dx
  unsigned __int16 v39; // r8
  __int64 v40; // rcx
  unsigned __int16 v41; // cx
  __int64 v42; // r11
  __int64 v43; // r10
  _QWORD *v44; // r8
  unsigned int v45; // edi
  bool v46; // zf
  __int64 v47; // r8
  unsigned __int16 v48; // ax
  __int16 v49; // di
  __int64 v50; // rdx
  __int64 *v51; // rcx
  int v52; // [rsp+38h] [rbp-D0h] BYREF
  int v53; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v54; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v55; // [rsp+44h] [rbp-C4h]
  __int64 v56; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v57[3]; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD v58[20]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v59[80]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v60[64]; // [rsp+108h] [rbp+0h] BYREF

  v1 = KeNumberNodes;
  v2 = KeNodeBlock;
  v57[0] = a1;
  v55 = 0;
  v3 = a1;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      ((void (__fastcall *)(_QWORD, int *))KiNumaQueryNodeCapacity[0])(v7, &v53);
      v8 = KeNodeBlock[v7];
      *(_BYTE *)(v8 + 172) = v53;
      v4 += v53;
      if ( v53 )
        ++v5;
      v9 = (_DWORD *)(v8 + 160);
      if ( KiNumaQueryProximityId )
      {
        ((void (__fastcall *)(_QWORD, _DWORD *, unsigned int *))KiNumaQueryProximityId)(v7, v9, &v54);
        ((void (__fastcall *)(_QWORD, __int64))KiNumaQueryProximityNode)(v54, KeNodeBlock[v7] + 148);
        if ( *(_DWORD *)(KeNodeBlock[v7] + 160) == v54 )
          ++v6;
      }
      else
      {
        *v9 = 0;
        v6 = 1;
        *(_WORD *)(v8 + 148) = *(_WORD *)(v8 + 146);
      }
      ++v7;
      v1 = KeNumberNodes;
    }
    while ( v7 < (unsigned __int16)KeNumberNodes );
    v3 = v57[0];
    v55 = v4;
  }
  if ( v1 > 1u )
  {
    KeNodeDistance = ExAllocatePoolWithTag(NonPagedPoolNx, 4 * v1 * (unsigned int)v1, 0x2020654Bu);
    if ( !KeNodeDistance )
      KeBugCheckEx(0x32u, 0xFFFFFFFFC000009AuLL, 0LL, 0LL, 0LL);
  }
  v10 = KeNumberNodes;
  v11 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      for ( i = 0; i < v10; *((_DWORD *)KeNodeDistance + v13 + v11 * (unsigned __int16)KeNumberNodes) = v56 )
      {
        ((void (__fastcall *)(_QWORD, _QWORD, __int64 *))KiNumaQueryNodeDistance)(v11, i, &v56);
        v10 = KeNumberNodes;
        v13 = i++;
      }
      ++v11;
    }
    while ( v11 < v10 );
    v3 = v57[0];
    v2 = KeNodeBlock;
  }
  if ( HvlHypervisorConnected )
  {
    if ( (HvlpRootFlags & 1) != 0 && (unsigned int)(KeRootProcSpecified - 1) <= 0x3F && !KeDynamicPartitioningSupported )
      return KiAssignAllNodesToGroup0();
    if ( (HvlpFlags & 0x80u) == 0 )
    {
      HviGetImplementationLimits(v57);
      if ( LODWORD(v57[0]) != -1 || (HvlEnlightenments & 0x4004) != 0 )
        return KiAssignAllNodesToGroup0();
    }
  }
  v14 = 20LL;
  v15 = *(_DWORD **)(*(_QWORD *)(v3 + 240) + 264LL);
  if ( v15 && v6 == *v15 )
  {
    if ( v10 )
    {
      v18 = KeNodeBlock;
      v19 = v10;
      do
      {
        v20 = *v18++;
        *(_WORD *)(v20 + 144) = -1;
        *(_BYTE *)(v20 + 173) &= ~2u;
        --v19;
      }
      while ( v19 );
    }
    while ( v6 )
    {
      --v6;
      if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, int *))KiNumaQueryProximityNode)((unsigned int)v15[1], &v52) )
        goto LABEL_17;
      v15 += 2;
      if ( *v15 >= 0x14u && *v15 != 0xFFFF )
        goto LABEL_17;
      if ( KeNumberNodes )
      {
        v21 = KeNodeBlock;
        v22 = (unsigned __int16)KeNumberNodes;
        do
        {
          v23 = *v21;
          if ( *(_WORD *)(*v21 + 148) == (_WORD)v52 )
          {
            *(_WORD *)(v23 + 144) = *(_WORD *)v15;
            *(_BYTE *)(v23 + 173) |= 2u;
          }
          ++v21;
          --v22;
        }
        while ( v22 );
      }
    }
    if ( *(_WORD *)(KeNodeBlock[0] + 144) != 0xFFFF )
    {
      v24 = KiMaximumGroupSize;
      v25 = v58;
      v26 = KeNumberNodes;
      for ( j = 20LL; j; --j )
        *v25++ = v24;
      v28 = 0;
      if ( !v26 )
      {
LABEL_59:
        KiMaximumGroups = 0;
        v34 = v58;
        do
        {
          if ( *v34 < (unsigned int)KiMaximumGroupSize )
            ++KiMaximumGroups;
          ++v34;
          --v14;
        }
        while ( v14 );
        result = (unsigned __int16)KeNumberNodes;
        if ( KeNumberNodes )
        {
          v35 = (unsigned __int16)KeNumberNodes;
          do
          {
            result = *v2++;
            *(_BYTE *)(result + 173) |= 8u;
            --v35;
          }
          while ( v35 );
        }
        return result;
      }
      while ( 1 )
      {
        v29 = KeNodeBlock[v28];
        v30 = *(_BYTE *)(v29 + 173);
        if ( (v30 & 2) == 0 )
          break;
        v31 = *(_WORD *)(v29 + 144);
        if ( v31 == 0xFFFF )
        {
          *(_BYTE *)(v29 + 173) = v30 & 0xFD;
        }
        else
        {
          v32 = *(unsigned __int8 *)(v29 + 172);
          v33 = v58[v31];
          if ( v33 < v32 )
            break;
          v58[v31] = v33 - v32;
        }
        if ( ++v28 >= v26 )
          goto LABEL_59;
      }
    }
  }
LABEL_17:
  if ( strstr(*(const char **)(v3 + 216), "MAXGROUP=OFF") )
  {
    KiMaximizeGroupsCreated = 0;
  }
  else if ( strstr(*(const char **)(v3 + 216), "MAXGROUP") )
  {
    KiMaximizeGroupsCreated = 1;
  }
  if ( v5 == 1 || !KiMaximizeGroupsCreated && v55 <= KiMaximumGroupSize )
    return KiAssignAllNodesToGroup0();
  v36 = KeNumberNodes;
  v37 = 0;
  v38 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      v39 = 0;
      while ( v38 == v39 || *((_DWORD *)KeNodeDistance + v39 + v38 * v36) == 0xFFFF )
      {
        if ( ++v39 >= v36 )
          goto LABEL_75;
      }
      v40 = KeNodeBlock[v38];
      *(_BYTE *)(v40 + 173) |= 8u;
      v37 += *(unsigned __int8 *)(v40 + 172);
LABEL_75:
      ++v38;
    }
    while ( v38 < v36 );
    memmove(v60, KeNodeBlock, 8LL * v36);
  }
  if ( v36 - 1 > 0 )
  {
    v41 = 1;
    do
    {
      if ( v41 < (unsigned __int16)KeNumberNodes )
      {
        v42 = (unsigned __int16)(v41 - 1);
        v43 = (unsigned __int16)(KeNumberNodes - v41);
        v44 = &v60[v41];
        do
        {
          v16 = v60[v42];
          if ( *(_BYTE *)(v16 + 172) < *(_BYTE *)(*v44 + 172LL) )
          {
            v60[v42] = *v44;
            *v44 = v16;
          }
          ++v44;
          --v43;
        }
        while ( v43 );
      }
      ++v41;
    }
    while ( (unsigned __int16)(v41 - 1) < v36 - 1 );
  }
  if ( !v37 )
  {
    LOWORD(v45) = 1;
LABEL_92:
    v46 = (_WORD)v45 == 20;
    goto LABEL_93;
  }
  if ( KiMaximizeGroupsCreated )
    LOWORD(v45) = v5;
  else
    v45 = (v37 + KiMaximumGroupSize - 1) / (unsigned int)KiMaximumGroupSize;
  v46 = (_WORD)v45 == 20;
  if ( (unsigned __int16)v45 > 0x14u )
  {
    LOWORD(v45) = 20;
    goto LABEL_92;
  }
  do
  {
LABEL_93:
    LOBYTE(v16) = v46;
    if ( (unsigned __int8)KiAssignFixedNodes(
                            (unsigned int)v60,
                            v5,
                            (unsigned __int16)v45,
                            v16,
                            (__int64)v59,
                            (__int64)v58) )
      break;
    LOWORD(v45) = v45 + 1;
    v46 = (_WORD)v45 == 20;
  }
  while ( (unsigned __int16)v45 <= 0x14u );
  KiShuffleAssignedNodes(v60, v5, v59, v58);
  v48 = KiAssignAdjustableNodes(v60, v5, v47, v59);
  if ( (unsigned __int16)v45 > v48 )
    v48 = v45;
  KiMaximumGroups = v48;
  result = KeNodeBlock[0];
  v49 = *(_WORD *)(KeNodeBlock[0] + 144);
  if ( v5 < (unsigned __int16)KeNumberNodes )
  {
    v50 = (unsigned __int16)(KeNumberNodes - v5);
    v51 = &v60[v5];
    do
    {
      result = *v51++;
      *(_WORD *)(result + 144) = v49;
      *(_BYTE *)(result + 173) |= 2u;
      --v50;
    }
    while ( v50 );
  }
  return result;
}
