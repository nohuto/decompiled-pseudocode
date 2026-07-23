/*
 * XREFs of HvlpSelectVpSet @ 0x140272A84
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x14017EBD0 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     HvlpComputeLpComparisonMetrics @ 0x140271C0C (HvlpComputeLpComparisonMetrics.c)
 *     HvlpLpComparison @ 0x1402723B8 (HvlpLpComparison.c)
 *     HviGetImplementationLimits @ 0x140322650 (HviGetImplementationLimits.c)
 */

__int64 __fastcall HvlpSelectVpSet(unsigned int a1, __int64 a2)
{
  __int64 v2; // rbx
  char v3; // r12
  char v5; // r13
  _WORD *v6; // rcx
  __int64 v7; // rdx
  char v8; // al
  __int16 *v9; // rsi
  unsigned int v10; // ecx
  _DWORD *v11; // rax
  int v12; // eax
  unsigned int v13; // r10d
  unsigned int v14; // r11d
  unsigned int v15; // ecx
  unsigned int v16; // r9d
  __int64 v17; // r8
  unsigned __int16 *v18; // rdx
  __int64 v19; // r14
  int v20; // r15d
  __int64 v21; // rcx
  __int64 v22; // rbp
  int v23; // r8d
  _WORD *v24; // rdx
  __int64 v25; // r9
  _DWORD *v26; // rdx
  int v27; // r9d
  __int64 v28; // r10
  unsigned int v29; // r8d
  int v30; // edx
  unsigned int v31; // eax
  _BYTE *v32; // rcx
  unsigned int v33; // esi
  _BYTE *v34; // rbp
  unsigned int v35; // r9d
  unsigned int v36; // eax
  _BYTE *v37; // rcx
  __int64 v38; // rsi
  __int64 v39; // rcx
  _BYTE *v40; // rbp
  __int64 v41; // rcx
  unsigned int i; // esi
  char v43; // al
  int v44; // r8d
  _WORD *j; // rdx
  unsigned int v46; // ecx
  int v48[4]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v49[64]; // [rsp+30h] [rbp-78h] BYREF

  v2 = a1;
  v3 = 0;
  HvlpMinrootConfigurationError = 0;
  v5 = 0;
  HviGetImplementationLimits(v48);
  if ( (_DWORD)v2 )
  {
    v6 = (_WORD *)(a2 + 8);
    v7 = (unsigned int)v2;
    do
    {
      v6[2] = *v6;
      *(v6 - 4) = 1;
      v8 = 0;
      if ( (HvlpRootFlags & 0x800) == 0 )
        v8 = *((_BYTE *)v6 - 6);
      *((_BYTE *)v6 - 5) = v8;
      v6 += 18;
      --v7;
    }
    while ( v7 );
  }
  v9 = KeRootProcNumaNodes;
  if ( (HvlpFlags & 0x800000) == 0 )
    goto LABEL_42;
  if ( (HvlpRootFlags & 0x800) != 0 )
    goto LABEL_42;
  v10 = 0;
  if ( !(_DWORD)v2 )
    goto LABEL_42;
  v11 = (_DWORD *)(a2 + 28);
  while ( !*((_BYTE *)v11 - 26) || !*v11 )
  {
    ++v10;
    v11 += 9;
    if ( v10 >= (unsigned int)v2 )
      goto LABEL_42;
  }
  v3 = 1;
  if ( (KeRootProcPerNodeSpecified & 1) != 0 )
  {
    KeRootProcPerNodeSpecified = 0;
    HvlpMinrootConfigurationError = 1;
  }
  if ( (KeRootProcPerCoreSpecified & 1) != 0 )
  {
    KeRootProcPerCoreSpecified = 0;
    HvlpMinrootConfigurationError = 1;
  }
  v12 = KeRootProcSpecified;
  if ( (KeRootProcSpecified & 1) != 0 )
  {
    v12 = 0;
    HvlpMinrootConfigurationError = 1;
    KeRootProcSpecified = 0;
  }
  if ( !v12 )
    goto LABEL_42;
  memset(v49, 0, sizeof(v49));
  v13 = KeRootProcNumaNodesSpecified;
  v14 = 0;
  v15 = 0;
  if ( !KeRootProcNumaNodesSpecified )
    v13 = (unsigned __int16)KeNumberNodes;
  v16 = 0;
  if ( !v13 )
  {
LABEL_38:
    if ( KeRootProcNumaNodesSpecified )
    {
      KeRootProcNumaNodesSpecified = 0;
      HvlpMinrootConfigurationError = 1;
    }
    goto LABEL_42;
  }
  do
  {
    if ( KeRootProcNumaNodesSpecified )
    {
      v17 = (unsigned __int16)*v9;
      if ( (unsigned int)v17 >= 0x40 || v49[v17] )
        goto LABEL_36;
      v49[v17] = 1;
    }
    else
    {
      LODWORD(v17) = v16;
    }
    v18 = (unsigned __int16 *)(a2 + 8);
    while ( !*((_BYTE *)v18 - 6) || *v18 != (_DWORD)v17 )
    {
      ++v14;
      v18 += 18;
      if ( v14 >= (unsigned int)v2 )
        goto LABEL_35;
    }
    ++v15;
LABEL_35:
    v14 = 0;
LABEL_36:
    ++v16;
    ++v9;
  }
  while ( v16 < v13 );
  if ( !v15 )
    goto LABEL_38;
  if ( KeRootProcSpecified <= v15 )
  {
    KeRootProcSpecified = 0;
    HvlpMinrootConfigurationError = 1;
  }
LABEL_42:
  v19 = a2 + 1;
  *(_BYTE *)(a2 + 3) = 1;
  *(_BYTE *)(a2 + 1) = 1;
  v20 = 1;
  while ( 1 )
  {
    if ( (_DWORD)v2 )
    {
      v21 = a2;
      v22 = v2;
      do
      {
        if ( *(_BYTE *)v21 )
        {
          if ( *(_BYTE *)(v21 + 1) || !*(_BYTE *)(v21 + 2) || v20 == v48[0] )
            goto LABEL_70;
          if ( KeRootProcPerNodeSpecified )
          {
            v23 = 0;
            v24 = (_WORD *)(a2 + 8);
            v25 = v2;
            do
            {
              if ( *((_BYTE *)v24 - 7) && *v24 == *(_WORD *)(v21 + 8) )
                ++v23;
              v24 += 18;
              --v25;
            }
            while ( v25 );
            if ( v23 == KeRootProcPerNodeSpecified )
              goto LABEL_70;
          }
          if ( KeRootProcPerCoreSpecified )
          {
            v26 = (_DWORD *)(a2 + 4);
            v27 = 0;
            v28 = v2;
            v29 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore - 1);
            do
            {
              if ( *((_BYTE *)v26 - 3) && (v29 & *v26) == (v29 & *(_DWORD *)(v21 + 4)) )
                ++v27;
              v26 += 9;
              --v28;
            }
            while ( v28 );
            if ( v27 == KeRootProcPerCoreSpecified )
              goto LABEL_70;
          }
          if ( KeRootProcNumaNodesSpecified )
          {
            v30 = 0;
            while ( KeRootProcNumaNodes[v30] != *(_WORD *)(v21 + 12) )
            {
              if ( ++v30 >= (unsigned int)KeRootProcNumaNodesSpecified )
                goto LABEL_70;
            }
          }
          if ( KeRootProcSpecified && v20 == KeRootProcSpecified )
LABEL_70:
            *(_BYTE *)v21 = 0;
        }
        v21 += 36LL;
        --v22;
      }
      while ( v22 );
    }
    v31 = 0;
    if ( (_DWORD)v2 )
    {
      v32 = (_BYTE *)a2;
      do
      {
        if ( *v32 )
          break;
        ++v31;
        v32 += 36;
      }
      while ( v31 < (unsigned int)v2 );
    }
    if ( v31 == (_DWORD)v2 )
      break;
    v33 = 0;
    if ( (_DWORD)v2 )
    {
      v34 = (_BYTE *)a2;
      do
      {
        if ( *v34 )
          HvlpComputeLpComparisonMetrics(v2, a2, v33);
        ++v33;
        v34 += 36;
      }
      while ( v33 < (unsigned int)v2 );
    }
    v35 = -1;
    v36 = 0;
    if ( (_DWORD)v2 )
    {
      v37 = (_BYTE *)a2;
      while ( !*v37 )
      {
        ++v36;
        v37 += 36;
        if ( v36 >= (unsigned int)v2 )
          goto LABEL_88;
      }
      v35 = v36;
    }
LABEL_88:
    v38 = v35 + 1;
    if ( (unsigned int)v38 < (unsigned int)v2 )
    {
      v39 = 9 * v38;
      v40 = (_BYTE *)(a2 + 36 * v38);
      do
      {
        if ( *v40 )
        {
          if ( (unsigned int)HvlpLpComparison(v39, a2, v38, v35) == -1 )
            v35 = v38;
        }
        LODWORD(v38) = v38 + 1;
        v40 += 36;
      }
      while ( (unsigned int)v38 < (unsigned int)v2 );
    }
    ++v20;
    v41 = 9LL * v35;
    *(_BYTE *)(a2 + 4 * v41 + 1) = 1;
    *(_BYTE *)(a2 + 4 * v41 + 3) = 1;
  }
  if ( v3 )
  {
    for ( i = 0; i < (unsigned int)v2; v19 += 36LL )
    {
      if ( *(_BYTE *)v19 )
      {
        HvlpComputeLpComparisonMetrics(v2, a2, i);
        if ( !*(_DWORD *)(v19 + 27) )
        {
          *(_BYTE *)v19 = 0;
          v43 = 0;
          if ( (HvlpRootFlags & 0x800) == 0 )
            v43 = *(_BYTE *)(v19 + 1);
          *(_BYTE *)(v19 + 2) = v43;
          v5 = 1;
          HvlpMinrootConfigurationError = 1;
        }
      }
      ++i;
    }
  }
  if ( KeRootProcNumaNodesSpecified )
    return 0LL;
  if ( v5 )
    return 0LL;
  v44 = 0;
  if ( !(_DWORD)v2 )
    return 0LL;
  for ( j = (_WORD *)(a2 + 8); ; j += 18 )
  {
    if ( *((_BYTE *)j - 6) )
    {
      v46 = 0;
      do
      {
        if ( *(_WORD *)(a2 + 36LL * v46 + 8) == *j && *(_BYTE *)(a2 + 36LL * v46 + 1) )
          break;
        ++v46;
      }
      while ( v46 < (unsigned int)v2 );
      if ( v46 == (_DWORD)v2 )
        break;
    }
    if ( ++v44 >= (unsigned int)v2 )
      return 0LL;
  }
  return 3221225473LL;
}
