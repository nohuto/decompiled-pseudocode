/*
 * XREFs of HvlpSelectVpSet @ 0x1402866D8
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140185A30 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     HvlpComputeLpComparisonMetrics @ 0x140285780 (HvlpComputeLpComparisonMetrics.c)
 *     HvlpLpComparison @ 0x140285F78 (HvlpLpComparison.c)
 *     HviGetImplementationLimits @ 0x140343900 (HviGetImplementationLimits.c)
 */

__int64 __fastcall HvlpSelectVpSet(unsigned int a1, __int64 a2)
{
  __int64 v2; // rbx
  _WORD *v4; // rcx
  __int64 v5; // rdx
  char v6; // al
  int v7; // r14d
  __int64 v8; // rcx
  __int64 v9; // rbp
  int v10; // r8d
  _WORD *v11; // rdx
  __int64 v12; // r9
  _DWORD *v13; // rdx
  int v14; // r9d
  __int64 v15; // r10
  int v16; // r8d
  int v17; // edx
  unsigned int v18; // eax
  _BYTE *v19; // rcx
  unsigned int v20; // esi
  _BYTE *v21; // rbp
  unsigned int v22; // r9d
  unsigned int v23; // eax
  _BYTE *v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  _BYTE *v27; // rsi
  __int64 v28; // rcx
  int v29; // r8d
  _WORD *i; // rdx
  unsigned int v31; // ecx
  _QWORD v33[2]; // [rsp+20h] [rbp-38h] BYREF

  v2 = a1;
  v33[0] = 0LL;
  v33[1] = 0LL;
  HviGetImplementationLimits(v33);
  if ( (_DWORD)v2 )
  {
    v4 = (_WORD *)(a2 + 8);
    v5 = (unsigned int)v2;
    do
    {
      v4[2] = *v4;
      *(v4 - 4) = 1;
      v6 = 0;
      if ( (HvlpRootFlags & 0x800) == 0 )
        v6 = *((_BYTE *)v4 - 6);
      *((_BYTE *)v4 - 5) = v6;
      v4 += 18;
      --v5;
    }
    while ( v5 );
  }
  *(_BYTE *)(a2 + 1) = 1;
  v7 = 1;
  *(_BYTE *)(a2 + 3) = 1;
  while ( 1 )
  {
    if ( (_DWORD)v2 )
    {
      v8 = a2;
      v9 = v2;
      do
      {
        if ( *(_BYTE *)v8 )
        {
          if ( *(_BYTE *)(v8 + 1) || !*(_BYTE *)(v8 + 2) || v7 == LODWORD(v33[0]) )
            goto LABEL_34;
          if ( KeRootProcPerNodeSpecified )
          {
            v10 = 0;
            v11 = (_WORD *)(a2 + 8);
            v12 = v2;
            do
            {
              if ( *((_BYTE *)v11 - 7) && *v11 == *(_WORD *)(v8 + 8) )
                ++v10;
              v11 += 18;
              --v12;
            }
            while ( v12 );
            if ( v10 == KeRootProcPerNodeSpecified )
              goto LABEL_34;
          }
          if ( KeRootProcPerCoreSpecified )
          {
            v13 = (_DWORD *)(a2 + 4);
            v14 = 0;
            v15 = v2;
            v16 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore - 1);
            do
            {
              if ( *((_BYTE *)v13 - 3) && (v16 & *v13) == (v16 & *(_DWORD *)(v8 + 4)) )
                ++v14;
              v13 += 9;
              --v15;
            }
            while ( v15 );
            if ( v14 == KeRootProcPerCoreSpecified )
              goto LABEL_34;
          }
          if ( KeRootProcNumaNodesSpecified )
          {
            v17 = 0;
            while ( KeRootProcNumaNodes[v17] != *(_WORD *)(v8 + 12) )
            {
              if ( ++v17 >= (unsigned int)KeRootProcNumaNodesSpecified )
                goto LABEL_34;
            }
          }
          if ( KeRootProcSpecified && v7 == KeRootProcSpecified )
LABEL_34:
            *(_BYTE *)v8 = 0;
        }
        v8 += 36LL;
        --v9;
      }
      while ( v9 );
    }
    v18 = 0;
    if ( (_DWORD)v2 )
    {
      v19 = (_BYTE *)a2;
      do
      {
        if ( *v19 )
          break;
        ++v18;
        v19 += 36;
      }
      while ( v18 < (unsigned int)v2 );
    }
    if ( v18 == (_DWORD)v2 )
      break;
    v20 = 0;
    if ( (_DWORD)v2 )
    {
      v21 = (_BYTE *)a2;
      do
      {
        if ( *v21 )
          HvlpComputeLpComparisonMetrics(v2, a2, v20);
        ++v20;
        v21 += 36;
      }
      while ( v20 < (unsigned int)v2 );
    }
    v22 = -1;
    v23 = 0;
    if ( (_DWORD)v2 )
    {
      v24 = (_BYTE *)a2;
      while ( !*v24 )
      {
        ++v23;
        v24 += 36;
        if ( v23 >= (unsigned int)v2 )
          goto LABEL_52;
      }
      v22 = v23;
    }
LABEL_52:
    v25 = v22 + 1;
    if ( (unsigned int)v25 < (unsigned int)v2 )
    {
      v26 = 9 * v25;
      v27 = (_BYTE *)(a2 + 36 * v25);
      do
      {
        if ( *v27 )
        {
          if ( (unsigned int)HvlpLpComparison(v26, a2, v25, v22) == -1 )
            v22 = v25;
        }
        LODWORD(v25) = v25 + 1;
        v27 += 36;
      }
      while ( (unsigned int)v25 < (unsigned int)v2 );
    }
    ++v7;
    v28 = 9LL * v22;
    *(_BYTE *)(a2 + 4 * v28 + 1) = 1;
    *(_BYTE *)(a2 + 4 * v28 + 3) = 1;
  }
  if ( KeRootProcNumaNodesSpecified )
    return 0LL;
  v29 = 0;
  if ( !(_DWORD)v2 )
    return 0LL;
  for ( i = (_WORD *)(a2 + 8); ; i += 18 )
  {
    if ( *((_BYTE *)i - 6) )
    {
      v31 = 0;
      do
      {
        if ( *(_WORD *)(a2 + 36LL * v31 + 8) == *i && *(_BYTE *)(a2 + 36LL * v31 + 1) )
          break;
        ++v31;
      }
      while ( v31 < (unsigned int)v2 );
      if ( v31 == (_DWORD)v2 )
        break;
    }
    if ( ++v29 >= (unsigned int)v2 )
      return 0LL;
  }
  return 3221225473LL;
}
