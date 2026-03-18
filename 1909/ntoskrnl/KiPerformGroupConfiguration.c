/*
 * XREFs of KiPerformGroupConfiguration @ 0x1409ED6C8
 * Callers:
 *     KePerformGroupConfiguration @ 0x1409EDA90 (KePerformGroupConfiguration.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     strstr @ 0x14019FD30 (strstr.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     HviGetImplementationLimits @ 0x140343900 (HviGetImplementationLimits.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MmGetChannelInformation @ 0x14074E2F8 (MmGetChannelInformation.c)
 *     KiAssignAllNodesToGroup0 @ 0x1409EDA30 (KiAssignAllNodesToGroup0.c)
 *     KiAssignAdjustableNodes @ 0x140A3BC48 (KiAssignAdjustableNodes.c)
 *     KiAssignFixedNodes @ 0x140A3BCF0 (KiAssignFixedNodes.c)
 *     KiShuffleAssignedNodes @ 0x140A3BEE8 (KiShuffleAssignedNodes.c)
 */

__int64 __fastcall KiPerformGroupConfiguration(void *a1)
{
  unsigned __int16 v1; // ax
  __int64 *v2; // rsi
  PVOID v3; // r12
  unsigned int v4; // r14d
  unsigned __int16 v5; // r13
  int v6; // r15d
  unsigned __int16 v7; // di
  __int64 v8; // rcx
  _DWORD *v9; // rdx
  unsigned __int16 v10; // di
  unsigned __int16 v11; // bx
  unsigned __int16 i; // r14
  int v13; // eax
  unsigned __int16 v14; // bx
  int ChannelInformation; // eax
  PVOID v16; // r8
  SIZE_T v17; // rdi
  char v18; // cl
  _QWORD *v19; // rax
  __int64 *v20; // r8
  __int64 v21; // r9
  unsigned __int16 v22; // ax
  __int64 v23; // rbx
  __int64 v24; // r8
  _DWORD *v25; // rdi
  __int64 v26; // r9
  __int64 result; // rax
  __int64 *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned int *v31; // rdi
  __int64 *v32; // rdx
  __int64 v33; // rcx
  int v34; // eax
  int *v35; // rdi
  unsigned __int16 v36; // r9
  __int64 j; // rcx
  unsigned __int16 v38; // cx
  __int64 v39; // rdx
  char v40; // al
  unsigned __int16 v41; // di
  unsigned int v42; // r8d
  unsigned int v43; // eax
  _DWORD *v44; // rcx
  __int64 v45; // rcx
  unsigned __int16 v46; // di
  int v47; // r14d
  unsigned __int16 v48; // dx
  unsigned __int16 v49; // r8
  __int64 v50; // rcx
  unsigned __int16 v51; // cx
  __int64 v52; // r11
  __int64 v53; // r10
  _QWORD *v54; // r8
  unsigned int v55; // edi
  bool v56; // zf
  __int64 v57; // r8
  unsigned __int16 v58; // ax
  __int16 v59; // di
  __int64 v60; // rdx
  __int64 *v61; // rcx
  __int64 v62; // [rsp+38h] [rbp-D0h] BYREF
  PVOID P; // [rsp+40h] [rbp-C8h] BYREF
  int v64; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v65; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v66; // [rsp+50h] [rbp-B8h]
  int v67; // [rsp+54h] [rbp-B4h] BYREF
  SIZE_T v68[2]; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v69[20]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v70[80]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v71[64]; // [rsp+108h] [rbp+0h] BYREF

  v1 = KeNumberNodes;
  v2 = KeNodeBlock;
  P = a1;
  v66 = 0;
  v3 = a1;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      ((void (__fastcall *)(_QWORD, int *))KiNumaQueryNodeCapacity)(v7, &v64);
      v8 = KeNodeBlock[v7];
      *(_BYTE *)(v8 + 180) = v64;
      v4 += v64;
      if ( v64 )
        ++v5;
      v9 = (_DWORD *)(v8 + 168);
      if ( KiNumaQueryProximityId )
      {
        ((void (__fastcall *)(_QWORD, _DWORD *, unsigned int *))KiNumaQueryProximityId)(v7, v9, &v65);
        ((void (__fastcall *)(_QWORD, __int64))KiNumaQueryProximityNode)(v65, KeNodeBlock[v7] + 148);
        if ( *(_DWORD *)(KeNodeBlock[v7] + 168) == v65 )
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
    v3 = P;
    v66 = v4;
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
      for ( i = 0; i < v10; *((_DWORD *)KeNodeDistance + v13 + v11 * (unsigned __int16)KeNumberNodes) = v67 )
      {
        ((void (__fastcall *)(_QWORD, _QWORD, int *))KiNumaQueryNodeDistance[0])(v11, i, &v67);
        v10 = KeNumberNodes;
        v13 = i++;
      }
      ++v11;
    }
    while ( v11 < v10 );
    v3 = P;
    v2 = KeNodeBlock;
  }
  P = 0LL;
  v14 = 0;
  if ( v10 )
  {
    do
    {
      if ( *(_WORD *)(KeNodeBlock[v14] + 146) == *(_WORD *)(KeNodeBlock[v14] + 148) )
      {
        ChannelInformation = MmGetChannelInformation(0, v14, &P, v68);
        if ( ChannelInformation < 0 )
          KeBugCheckEx(0x32u, ChannelInformation, 0LL, 0LL, 0LL);
        v16 = P;
        v17 = 0LL;
        v18 = 1;
        if ( v68[0] / 0x28 )
        {
          v19 = (char *)P + 8;
          do
          {
            if ( *v19 )
            {
              v18 = 0;
              goto LABEL_22;
            }
            ++v17;
            v19 += 5;
          }
          while ( v17 < v68[0] / 0x28 );
          v18 = 1;
        }
LABEL_22:
        *(_BYTE *)(KeNodeBlock[v14] + 181) = *(_BYTE *)(KeNodeBlock[v14] + 181) & 0xEF | (16 * v18);
        ExFreePoolWithTag(v16, 0);
        P = 0LL;
      }
      ++v14;
    }
    while ( v14 < (unsigned __int16)KeNumberNodes );
    if ( KeNumberNodes )
    {
      v20 = KeNodeBlock;
      v21 = (unsigned __int16)KeNumberNodes;
      do
      {
        v22 = *(_WORD *)(*v20 + 148);
        if ( *(_WORD *)(*v20 + 146) != v22 )
          *(_BYTE *)(*v20 + 181) ^= (*(_BYTE *)(*v20 + 181) ^ *(_BYTE *)(KeNodeBlock[v22] + 181)) & 0x10;
        ++v20;
        --v21;
      }
      while ( v21 );
    }
  }
  v68[0] = 0LL;
  v68[1] = 0LL;
  if ( HvlHypervisorConnected )
  {
    if ( (HvlpRootFlags & 1) != 0 && (unsigned int)(KeRootProcSpecified - 1) <= 0x3F && !KeDynamicPartitioningSupported )
      return KiAssignAllNodesToGroup0();
    if ( (HvlpFlags & 0x80u) == 0 )
    {
      HviGetImplementationLimits(v68);
      if ( LODWORD(v68[0]) != -1 || (HvlEnlightenments & 0x4004) != 0 )
        return KiAssignAllNodesToGroup0();
    }
  }
  v23 = 20LL;
  v24 = 0xFFFFLL;
  v25 = *(_DWORD **)(*((_QWORD *)v3 + 30) + 288LL);
  if ( v25 && v6 == *v25 )
  {
    if ( KeNumberNodes )
    {
      v28 = KeNodeBlock;
      v29 = (unsigned __int16)KeNumberNodes;
      do
      {
        v30 = *v28++;
        *(_WORD *)(v30 + 144) = -1;
        *(_BYTE *)(v30 + 181) &= ~2u;
        --v29;
      }
      while ( v29 );
    }
    if ( v6 )
    {
      while ( 1 )
      {
        v31 = v25 + 1;
        --v6;
        if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, __int64 *, __int64))KiNumaQueryProximityNode)(
                             *v31,
                             &v62,
                             v24) )
          break;
        v25 = v31 + 1;
        if ( *v25 >= 0x14u && *v25 != 0xFFFF )
          break;
        if ( KeNumberNodes )
        {
          v32 = KeNodeBlock;
          v24 = (unsigned __int16)KeNumberNodes;
          do
          {
            v33 = *v32;
            if ( *(_WORD *)(*v32 + 148) == (_WORD)v62 )
            {
              *(_WORD *)(v33 + 144) = *(_WORD *)v25;
              *(_BYTE *)(v33 + 181) |= 2u;
            }
            ++v32;
            --v24;
          }
          while ( v24 );
        }
        if ( !v6 )
          goto LABEL_65;
      }
    }
    else
    {
LABEL_65:
      if ( *(_WORD *)(KeNodeBlock[0] + 144) != 0xFFFF )
      {
        v34 = KiMaximumGroupSize;
        v35 = v69;
        v36 = KeNumberNodes;
        for ( j = 20LL; j; --j )
          *v35++ = v34;
        v38 = 0;
        if ( !v36 )
        {
LABEL_76:
          KiMaximumGroups = 0;
          v44 = v69;
          do
          {
            if ( *v44 < (unsigned int)KiMaximumGroupSize )
              ++KiMaximumGroups;
            ++v44;
            --v23;
          }
          while ( v23 );
          result = (unsigned __int16)KeNumberNodes;
          if ( KeNumberNodes )
          {
            v45 = (unsigned __int16)KeNumberNodes;
            do
            {
              result = *v2++;
              *(_BYTE *)(result + 181) |= 8u;
              --v45;
            }
            while ( v45 );
          }
          return result;
        }
        while ( 1 )
        {
          v39 = KeNodeBlock[v38];
          v40 = *(_BYTE *)(v39 + 181);
          if ( (v40 & 2) == 0 )
            break;
          v41 = *(_WORD *)(v39 + 144);
          if ( v41 == 0xFFFF )
          {
            *(_BYTE *)(v39 + 181) = v40 & 0xFD;
          }
          else
          {
            v42 = *(unsigned __int8 *)(v39 + 180);
            v43 = v69[v41];
            if ( v43 < v42 )
              break;
            v69[v41] = v43 - v42;
          }
          if ( ++v38 >= v36 )
            goto LABEL_76;
        }
      }
    }
  }
  if ( strstr(*((const char **)v3 + 27), "MAXGROUP=OFF") )
  {
    KiMaximizeGroupsCreated = 0;
  }
  else if ( strstr(*((const char **)v3 + 27), "MAXGROUP") )
  {
    KiMaximizeGroupsCreated = 1;
  }
  if ( v5 == 1 || !KiMaximizeGroupsCreated && v66 <= KiMaximumGroupSize )
    return KiAssignAllNodesToGroup0();
  v46 = KeNumberNodes;
  v47 = 0;
  v48 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      v49 = 0;
      while ( v48 == v49 || *((_DWORD *)KeNodeDistance + v49 + v48 * v46) == 0xFFFF )
      {
        if ( ++v49 >= v46 )
          goto LABEL_92;
      }
      v50 = KeNodeBlock[v48];
      *(_BYTE *)(v50 + 181) |= 8u;
      v47 += *(unsigned __int8 *)(v50 + 180);
LABEL_92:
      ++v48;
    }
    while ( v48 < v46 );
    memmove(v71, KeNodeBlock, 8LL * v46);
  }
  if ( v46 - 1 > 0 )
  {
    v51 = 1;
    do
    {
      if ( v51 < (unsigned __int16)KeNumberNodes )
      {
        v52 = (unsigned __int16)(v51 - 1);
        v53 = (unsigned __int16)(KeNumberNodes - v51);
        v54 = &v71[v51];
        do
        {
          v26 = v71[v52];
          if ( *(_BYTE *)(v26 + 180) < *(_BYTE *)(*v54 + 180LL) )
          {
            v71[v52] = *v54;
            *v54 = v26;
          }
          ++v54;
          --v53;
        }
        while ( v53 );
      }
      ++v51;
    }
    while ( (unsigned __int16)(v51 - 1) < v46 - 1 );
  }
  if ( !v47 )
  {
    LOWORD(v55) = 1;
LABEL_109:
    v56 = (_WORD)v55 == 20;
    goto LABEL_110;
  }
  if ( KiMaximizeGroupsCreated )
    LOWORD(v55) = v5;
  else
    v55 = (v47 + KiMaximumGroupSize - 1) / (unsigned int)KiMaximumGroupSize;
  v56 = (_WORD)v55 == 20;
  if ( (unsigned __int16)v55 > 0x14u )
  {
    LOWORD(v55) = 20;
    goto LABEL_109;
  }
  do
  {
LABEL_110:
    LOBYTE(v26) = v56;
    if ( (unsigned __int8)KiAssignFixedNodes(
                            (unsigned int)v71,
                            v5,
                            (unsigned __int16)v55,
                            v26,
                            (__int64)v70,
                            (__int64)v69) )
      break;
    LOWORD(v55) = v55 + 1;
    v56 = (_WORD)v55 == 20;
  }
  while ( (unsigned __int16)v55 <= 0x14u );
  KiShuffleAssignedNodes(v71, v5, v70, v69);
  v58 = KiAssignAdjustableNodes(v71, v5, v57, v70);
  if ( (unsigned __int16)v55 > v58 )
    v58 = v55;
  KiMaximumGroups = v58;
  result = KeNodeBlock[0];
  v59 = *(_WORD *)(KeNodeBlock[0] + 144);
  if ( v5 < (unsigned __int16)KeNumberNodes )
  {
    v60 = (unsigned __int16)(KeNumberNodes - v5);
    v61 = &v71[v5];
    do
    {
      result = *v61++;
      *(_WORD *)(result + 144) = v59;
      *(_BYTE *)(result + 181) |= 2u;
      --v60;
    }
    while ( v60 );
  }
  return result;
}
