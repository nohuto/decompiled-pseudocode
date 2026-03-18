/*
 * XREFs of HvlpSelectLpSet @ 0x140286284
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140185A30 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     HvlpComputeLpComparisonMetrics @ 0x140285780 (HvlpComputeLpComparisonMetrics.c)
 *     HvlpLpComparison @ 0x140285F78 (HvlpLpComparison.c)
 *     HvlpQueryApicIdAndNumaNode @ 0x1402860EC (HvlpQueryApicIdAndNumaNode.c)
 *     HviGetImplementationLimits @ 0x140343900 (HviGetImplementationLimits.c)
 */

__int64 __fastcall HvlpSelectLpSet(unsigned int a1, __int64 a2)
{
  int v4; // ebx
  unsigned int v5; // r15d
  unsigned int v6; // esi
  int v7; // edx
  _WORD *v8; // rbx
  int ApicIdAndNumaNode; // eax
  unsigned int v10; // r13d
  __int64 (__fastcall *v11)(__int64, _BYTE *, unsigned int *); // rax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  int v15; // esi
  int v16; // r12d
  int v17; // r10d
  unsigned int v18; // r11d
  __int64 v19; // r9
  unsigned __int16 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned int v23; // edx
  unsigned int v24; // eax
  _BYTE *v25; // rcx
  unsigned int v26; // ebx
  _BYTE *v27; // rsi
  unsigned int v28; // r9d
  unsigned int v29; // eax
  _BYTE *v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  _BYTE *v33; // rbx
  unsigned int v34; // edx
  int v35; // r8d
  _DWORD *v36; // rcx
  __int64 i; // rcx
  _WORD v39[2]; // [rsp+20h] [rbp-40h] BYREF
  __int16 v40; // [rsp+24h] [rbp-3Ch] BYREF
  int v41; // [rsp+28h] [rbp-38h]
  unsigned int v42; // [rsp+2Ch] [rbp-34h]
  int v43; // [rsp+30h] [rbp-30h]
  unsigned int v44; // [rsp+34h] [rbp-2Ch] BYREF
  int v45; // [rsp+38h] [rbp-28h]
  int v46; // [rsp+3Ch] [rbp-24h]
  _BYTE v47[8]; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v48[2]; // [rsp+48h] [rbp-18h] BYREF

  v48[0] = 0LL;
  v48[1] = 0LL;
  v4 = 1;
  v42 = 0;
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
  HviGetImplementationLimits(v48);
  v5 = 64;
  v43 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore * KeGetCurrentPrcb()->CoresPerPhysicalProcessor - 1);
  if ( LODWORD(v48[0]) < 0x40 )
    v5 = v48[0];
  if ( KeRootProcSpecified && KeRootProcSpecified < v5 && !KeRootProcNumaNodesSpecified )
    v5 = KeRootProcSpecified;
  v41 = HalEnumerateProcessors((unsigned int)KeRegisteredProcessors);
  v6 = 0;
  v7 = v41;
  if ( a1 )
  {
    v8 = (_WORD *)(a2 + 10);
    do
    {
      *((_BYTE *)v8 - 10) = 1;
      ApicIdAndNumaNode = HvlpQueryApicIdAndNumaNode(v6, v8 - 3, v39);
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
        v11 = (__int64 (__fastcall *)(__int64, _BYTE *, unsigned int *))HvlpQueryProximityId;
        v12 = v39[0];
        *(v8 - 1) = v39[0];
        if ( v11 )
        {
          v13 = v11(v12, v47, &v44);
          LOWORD(v12) = v39[0];
        }
        else
        {
          v13 = -1073741275;
        }
        if ( v13 < 0
          || (!HvlpQueryProximityNode
            ? (v14 = -1073741275)
            : (v14 = HvlpQueryProximityNode(v44, &v40), LOWORD(v12) = v39[0]),
              v14 < 0) )
        {
          *v8 = v12;
        }
        else
        {
          *v8 = v40;
        }
        v8[1] = *v8;
      }
      ++v6;
      v8 += 18;
    }
    while ( v6 < a1 );
    v7 = v41;
    v4 = 1;
  }
  v15 = v43;
  v16 = 1;
  *(_BYTE *)(a2 + 1) = 1;
  v17 = 1;
  while ( 1 )
  {
    v18 = 0;
    v46 = v17;
    v45 = v4;
    if ( a1 )
    {
      v19 = a2;
      do
      {
        if ( *(_BYTE *)v19 )
        {
          if ( *(_BYTE *)(v19 + 1) )
            goto LABEL_58;
          v20 = *(_WORD *)(v19 + 8);
          if ( v20 >= (unsigned __int16)KeNumberNodes
            || (*(_BYTE *)(KeNodeBlock[v20] + 181) & 2) == 0
            || v16 == 512
            || v16 == v7
            || KeMaximumProcessors && v16 == KeMaximumProcessors )
          {
            goto LABEL_58;
          }
          if ( KeBootprocSpecified && v16 == KeBootprocSpecified
            || KeNumprocSpecified && v18 >= KeNumprocSpecified
            || KeHypervisorNumprocSpecified && v16 == KeHypervisorNumprocSpecified )
          {
            goto LABEL_58;
          }
          if ( v17 == v5 )
          {
            v21 = 0LL;
            do
            {
              if ( *(_WORD *)(a2 + 36 * v21 + 8) == v20 && *(_BYTE *)(a2 + 36 * v21 + 1) )
                break;
              v21 = (unsigned int)(v21 + 1);
            }
            while ( (unsigned int)v21 < a1 );
            if ( (_DWORD)v21 == a1 )
              goto LABEL_58;
          }
          if ( v4 == KeRegisteredProcessors )
          {
            v22 = a2 + 1;
            v23 = 0;
            do
            {
              if ( (v15 & *(_DWORD *)(v19 + 4)) == (v15 & *(_DWORD *)(v22 + 3)) && *(_BYTE *)v22 )
                break;
              ++v23;
              v22 += 36LL;
            }
            while ( v23 < a1 );
            if ( v23 == a1 )
LABEL_58:
              *(_BYTE *)v19 = 0;
          }
        }
        v7 = v41;
        ++v18;
        v19 += 36LL;
      }
      while ( v18 < a1 );
    }
    v24 = 0;
    if ( a1 )
    {
      v25 = (_BYTE *)a2;
      do
      {
        if ( *v25 )
          break;
        ++v24;
        v25 += 36;
      }
      while ( v24 < a1 );
    }
    if ( v24 == a1 )
      return v42;
    v26 = 0;
    if ( a1 )
    {
      v27 = (_BYTE *)a2;
      do
      {
        if ( *v27 )
          HvlpComputeLpComparisonMetrics(a1, a2, v26);
        ++v26;
        v27 += 36;
      }
      while ( v26 < a1 );
    }
    v28 = -1;
    v29 = 0;
    if ( a1 )
    {
      v30 = (_BYTE *)a2;
      while ( !*v30 )
      {
        ++v29;
        v30 += 36;
        if ( v29 >= a1 )
          goto LABEL_76;
      }
      v28 = v29;
    }
LABEL_76:
    v31 = v28 + 1;
    if ( (unsigned int)v31 < a1 )
    {
      v32 = 9 * v31;
      v33 = (_BYTE *)(a2 + 36 * v31);
      do
      {
        if ( *v33 && (unsigned int)HvlpLpComparison(v32, a2, v31, v28) == -1 )
          v28 = v31;
        LODWORD(v31) = v31 + 1;
        v33 += 36;
      }
      while ( (unsigned int)v31 < a1 );
    }
    v15 = v43;
    ++v16;
    v34 = 0;
    v35 = v43 & *(_DWORD *)(a2 + 36LL * v28 + 4);
    *(_BYTE *)(a2 + 36LL * v28 + 1) = 1;
    if ( a1 )
    {
      v36 = (_DWORD *)(a2 + 4);
      do
      {
        if ( v34 != v28 && *((_BYTE *)v36 - 3) && (v15 & *v36) == v35 )
          break;
        ++v34;
        v36 += 9;
      }
      while ( v34 < a1 );
    }
    v4 = v45 + 1;
    if ( v34 != a1 )
      v4 = v45;
    for ( i = 0LL; (unsigned int)i < a1; i = (unsigned int)(i + 1) )
    {
      if ( (_DWORD)i != v28
        && *(_BYTE *)(a2 + 36 * i + 1)
        && *(_WORD *)(a2 + 36 * i + 8) == *(_WORD *)(a2 + 36LL * v28 + 8) )
      {
        break;
      }
    }
    v7 = v41;
    v17 = v46 + 1;
    if ( (_DWORD)i != a1 )
      v17 = v46;
  }
}
