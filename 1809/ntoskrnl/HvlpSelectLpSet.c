/*
 * XREFs of HvlpSelectLpSet @ 0x140272640
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x14017EBD0 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     HvlpComputeLpComparisonMetrics @ 0x140271C0C (HvlpComputeLpComparisonMetrics.c)
 *     HvlpLpComparison @ 0x1402723B8 (HvlpLpComparison.c)
 *     HvlpQueryApicIdAndNumaNode @ 0x140272518 (HvlpQueryApicIdAndNumaNode.c)
 *     HviGetImplementationLimits @ 0x140322650 (HviGetImplementationLimits.c)
 */

__int64 __fastcall HvlpSelectLpSet(unsigned int a1, __int64 a2)
{
  int v4; // r15d
  unsigned int v5; // ebp
  unsigned int v6; // r12d
  unsigned int v7; // esi
  _WORD *v8; // rbx
  int ApicIdAndNumaNode; // eax
  unsigned int v10; // r13d
  __int64 (__fastcall *v11)(__int64, char *, unsigned int *); // rax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  int v15; // r13d
  __int64 v16; // rsi
  int v17; // ebx
  int v18; // r10d
  unsigned int v19; // r11d
  __int64 v20; // r9
  unsigned __int16 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned int v24; // edx
  unsigned int v25; // eax
  _BYTE *v26; // rcx
  unsigned int v27; // ebx
  _BYTE *v28; // rsi
  unsigned int v29; // r9d
  unsigned int v30; // eax
  _BYTE *v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rcx
  _BYTE *v34; // rsi
  unsigned int v35; // edx
  int v36; // r8d
  _DWORD *v37; // rcx
  __int64 i; // rcx
  unsigned __int16 v40[2]; // [rsp+20h] [rbp-68h] BYREF
  __int16 v41; // [rsp+24h] [rbp-64h] BYREF
  unsigned int v42; // [rsp+28h] [rbp-60h]
  int v43; // [rsp+2Ch] [rbp-5Ch]
  unsigned int v44; // [rsp+30h] [rbp-58h] BYREF
  int v45; // [rsp+34h] [rbp-54h]
  char v46[8]; // [rsp+38h] [rbp-50h] BYREF
  unsigned int v47[4]; // [rsp+40h] [rbp-48h] BYREF

  v42 = 0;
  v4 = 1;
  if ( (HvlpRootFlags & 1) == 0 )
  {
    KeHypervisorNumprocSpecified = 0;
    KeRootProcSpecified = 0;
    KeRootProcNumaNodesSpecified = 0;
    KeRootProcPerNodeSpecified = 0;
    KeRootProcPerCoreSpecified = 0;
  }
  if ( (HvlpRootFlags & 0x800) != 0 )
  {
    KeRootProcSpecified = 0;
    KeRootProcNumaNodesSpecified = 0;
    KeRootProcPerNodeSpecified = 0;
    KeRootProcPerCoreSpecified = 1;
  }
  HviGetImplementationLimits(v47);
  v5 = 64;
  v6 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore * KeGetCurrentPrcb()->CoresPerPhysicalProcessor - 1);
  if ( v47[0] < 0x40 )
    v5 = v47[0];
  if ( KeRootProcSpecified && KeRootProcSpecified < v5 && !KeRootProcNumaNodesSpecified )
    v5 = KeRootProcSpecified;
  v7 = 0;
  v43 = HalEnumerateProcessors((unsigned int)KeRegisteredProcessors);
  if ( a1 )
  {
    v8 = (_WORD *)(a2 + 10);
    do
    {
      *((_BYTE *)v8 - 10) = 1;
      ApicIdAndNumaNode = HvlpQueryApicIdAndNumaNode(v7, v8 - 3, v40);
      v42 = ApicIdAndNumaNode;
      v10 = ApicIdAndNumaNode;
      if ( ApicIdAndNumaNode == -1073741275 )
      {
        v42 = 0;
        *((_BYTE *)v8 - 10) = 0;
      }
      else
      {
        if ( ApicIdAndNumaNode < 0 )
          return v10;
        v11 = (__int64 (__fastcall *)(__int64, char *, unsigned int *))HvlpQueryProximityId;
        v12 = v40[0];
        *(v8 - 1) = v40[0];
        if ( v11 )
        {
          v13 = v11(v12, v46, &v44);
          LOWORD(v12) = v40[0];
        }
        else
        {
          v13 = -1073741275;
        }
        if ( v13 < 0
          || (!HvlpQueryProximityNode
            ? (v14 = -1073741275)
            : (v14 = HvlpQueryProximityNode(v44, &v41), LOWORD(v12) = v40[0]),
              v14 < 0) )
        {
          *v8 = v12;
        }
        else
        {
          *v8 = v41;
        }
        v8[1] = *v8;
      }
      ++v7;
      v8 += 18;
    }
    while ( v7 < a1 );
  }
  v15 = v43;
  v16 = a2 + 1;
  v17 = 1;
  *(_BYTE *)(a2 + 1) = 1;
  v18 = 1;
  while ( 1 )
  {
    v19 = 0;
    v45 = v18;
    v43 = v17;
    if ( a1 )
    {
      v20 = a2;
      do
      {
        if ( *(_BYTE *)v20 )
        {
          if ( *(_BYTE *)(v20 + 1) )
            goto LABEL_57;
          v21 = *(_WORD *)(v20 + 8);
          if ( v21 >= (unsigned __int16)KeNumberNodes
            || (*(_BYTE *)(KeNodeBlock[v21] + 173) & 2) == 0
            || v4 == 512
            || v4 == v15
            || KeMaximumProcessors && v4 == KeMaximumProcessors )
          {
            goto LABEL_57;
          }
          if ( KeBootprocSpecified && v4 == KeBootprocSpecified
            || KeNumprocSpecified && v19 >= KeNumprocSpecified
            || KeHypervisorNumprocSpecified && v4 == KeHypervisorNumprocSpecified )
          {
            goto LABEL_57;
          }
          if ( v18 == v5 )
          {
            v22 = 0LL;
            do
            {
              if ( *(_WORD *)(a2 + 36 * v22 + 8) == v21 && *(_BYTE *)(a2 + 36 * v22 + 1) )
                break;
              v22 = (unsigned int)(v22 + 1);
            }
            while ( (unsigned int)v22 < a1 );
            if ( (_DWORD)v22 == a1 )
              goto LABEL_57;
          }
          if ( v17 == KeRegisteredProcessors )
          {
            v23 = v16;
            v24 = 0;
            do
            {
              if ( (v6 & *(_DWORD *)(v20 + 4)) == (v6 & *(_DWORD *)(v23 + 3)) && *(_BYTE *)v23 )
                break;
              ++v24;
              v23 += 36LL;
            }
            while ( v24 < a1 );
            if ( v24 == a1 )
LABEL_57:
              *(_BYTE *)v20 = 0;
          }
        }
        ++v19;
        v20 += 36LL;
      }
      while ( v19 < a1 );
    }
    v25 = 0;
    if ( a1 )
    {
      v26 = (_BYTE *)a2;
      do
      {
        if ( *v26 )
          break;
        ++v25;
        v26 += 36;
      }
      while ( v25 < a1 );
    }
    if ( v25 == a1 )
      return v42;
    v27 = 0;
    if ( a1 )
    {
      v28 = (_BYTE *)a2;
      do
      {
        if ( *v28 )
          HvlpComputeLpComparisonMetrics(a1, a2, v27);
        ++v27;
        v28 += 36;
      }
      while ( v27 < a1 );
    }
    v29 = -1;
    v30 = 0;
    if ( a1 )
    {
      v31 = (_BYTE *)a2;
      while ( !*v31 )
      {
        ++v30;
        v31 += 36;
        if ( v30 >= a1 )
          goto LABEL_75;
      }
      v29 = v30;
    }
LABEL_75:
    v32 = v29 + 1;
    if ( (unsigned int)v32 < a1 )
    {
      v33 = 9 * v32;
      v34 = (_BYTE *)(a2 + 36 * v32);
      do
      {
        if ( *v34 && (unsigned int)HvlpLpComparison(v33, a2, v32, v29) == -1 )
          v29 = v32;
        LODWORD(v32) = v32 + 1;
        v34 += 36;
      }
      while ( (unsigned int)v32 < a1 );
    }
    ++v4;
    v35 = 0;
    v36 = v6 & *(_DWORD *)(a2 + 36LL * v29 + 4);
    *(_BYTE *)(a2 + 36LL * v29 + 1) = 1;
    if ( a1 )
    {
      v37 = (_DWORD *)(a2 + 4);
      do
      {
        if ( v35 != v29 && *((_BYTE *)v37 - 3) && (v6 & *v37) == v36 )
          break;
        ++v35;
        v37 += 9;
      }
      while ( v35 < a1 );
    }
    v17 = v43 + 1;
    if ( v35 != a1 )
      v17 = v43;
    for ( i = 0LL; (unsigned int)i < a1; i = (unsigned int)(i + 1) )
    {
      if ( (_DWORD)i != v29
        && *(_BYTE *)(a2 + 36 * i + 1)
        && *(_WORD *)(a2 + 36 * i + 8) == *(_WORD *)(a2 + 36LL * v29 + 8) )
      {
        break;
      }
    }
    v16 = a2 + 1;
    v18 = v45 + 1;
    if ( (_DWORD)i != a1 )
      v18 = v45;
  }
}
