/*
 * XREFs of SeCaptureSidAndAttributesArray @ 0x1405BE0D0
 * Callers:
 *     NtCreateTokenEx @ 0x1405BD550 (NtCreateTokenEx.c)
 *     SepSetTokenCapabilities @ 0x1405BDEA4 (SepSetTokenCapabilities.c)
 *     SepLengthSidAndAttributesArray @ 0x1405BE014 (SepLengthSidAndAttributesArray.c)
 *     SepCreateClaimAttributes @ 0x1405BE654 (SepCreateClaimAttributes.c)
 *     NtSetInformationToken @ 0x1405BEAA0 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140656130 (NtCreateLowBoxToken.c)
 *     NtAdjustGroupsToken @ 0x1406B6B70 (NtAdjustGroupsToken.c)
 *     NtFilterToken @ 0x1406C7E00 (NtFilterToken.c)
 *     SepDuplicateClaimAttributes @ 0x1408A5180 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     RtlLengthSid @ 0x1400162C0 (RtlLengthSid.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlValidSid @ 0x140632590 (RtlValidSid.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SeCaptureSidAndAttributesArray(
        char *Src,
        unsigned int a2,
        char a3,
        char *a4,
        unsigned int a5,
        int a6,
        int a7,
        PVOID *a8,
        unsigned int *a9)
{
  char *v9; // r12
  char *PoolWithTag; // r9
  int v13; // r13d
  unsigned int v14; // r14d
  unsigned int v15; // edi
  unsigned int i; // edx
  char *v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  unsigned int v22; // eax
  char *v23; // r9
  unsigned int v24; // ecx
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r8
  PVOID *v27; // r13
  char *v28; // rdi
  char *v29; // r15
  unsigned int v30; // r14d
  _QWORD *v31; // r12
  unsigned __int8 *v32; // rdx
  unsigned int v33; // edi
  char *v35; // rcx
  unsigned int v36; // esi
  _QWORD *v37; // r15
  unsigned int v38; // r14d
  void *v39; // rdi
  int v40; // [rsp+24h] [rbp-64h]
  unsigned int v41; // [rsp+28h] [rbp-60h]
  int v42; // [rsp+30h] [rbp-58h]
  char *v43; // [rsp+30h] [rbp-58h]
  char *P; // [rsp+38h] [rbp-50h]
  char v45; // [rsp+A0h] [rbp+18h]
  int v47; // [rsp+C0h] [rbp+38h]

  v45 = a3;
  v9 = a4;
  PoolWithTag = 0LL;
  P = 0LL;
  v13 = 0;
  v47 = 0;
  if ( !a2 )
  {
    *a8 = 0LL;
    *a9 = 0;
    return 0LL;
  }
  if ( a2 > 0x1000 )
    return 3221225485LL;
  v14 = 16 * a2;
  v42 = 16 * a2 + 3;
  v15 = v42 & 0xFFFFFFFC;
  v41 = v42 & 0xFFFFFFFC;
  if ( a3 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v15, 0x61546553u);
    P = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    if ( v14 )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v17 = &Src[v14];
      if ( (unsigned __int64)v17 > 0x7FFFFFFF0000LL || v17 < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v18 = 0;
    v40 = 0;
    while ( v18 < a2 )
    {
      v19 = 16LL * v18;
      v20 = *(_QWORD *)&Src[v19];
      v21 = v20 + 1;
      if ( (unsigned __int64)(v20 + 1) >= 0x7FFFFFFF0000LL )
        v21 = 0x7FFFFFFF0000LL;
      v22 = *(unsigned __int8 *)v21;
      if ( v22 > 0xF )
      {
        v13 = -1073741704;
        v47 = -1073741704;
        v15 = v41;
        break;
      }
      v23 = &PoolWithTag[v19];
      *(_QWORD *)v23 = v20;
      v24 = 4 * v22 + 8;
      *((_DWORD *)v23 + 2) = v24;
      v25 = *(_QWORD *)v23;
      if ( (*(_QWORD *)v23 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v26 = v25 + v24;
      if ( v26 > 0x7FFFFFFF0000LL || v26 < v25 )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        v24 = *((_DWORD *)v23 + 2);
      }
      v15 = ((v24 + 3) & 0xFFFFFFFC) + v41;
      v41 = v15;
      v18 = ++v40;
      v13 = 0;
      v47 = 0;
      PoolWithTag = P;
    }
    if ( v13 < 0 )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      return (unsigned int)v13;
    }
    v9 = a4;
    a3 = v45;
  }
  else
  {
    for ( i = 0; i < a2; ++i )
      v15 += (4 * *(unsigned __int8 *)(*(_QWORD *)&Src[16 * i] + 1LL) + 11) & 0xFFFFFFFC;
  }
  *a9 = v15;
  if ( !v9 )
  {
    v28 = (char *)ExAllocatePoolWithTag(PagedPool, v15, 0x61536553u);
    v27 = a8;
    *a8 = v28;
    if ( v28 )
    {
      a3 = v45;
      goto LABEL_32;
    }
    if ( v45 )
      ExFreePoolWithTag(P, 0);
    return 3221225626LL;
  }
  if ( v15 <= a5 )
  {
    v27 = a8;
    *a8 = v9;
    v28 = v9;
LABEL_32:
    if ( a3 )
    {
      memmove(v28, Src, v14);
      v35 = &v28[v42 & 0xFFFFFFFC];
      v43 = v35;
      v36 = 0;
      v37 = *v27;
      while ( v36 < a2 && !v47 )
      {
        memmove(v35, *(const void **)&P[16 * v36], *(unsigned int *)&P[16 * v36 + 8]);
        v37[2 * v36] = v43;
        v38 = *(_DWORD *)&P[16 * v36 + 8];
        v35 = &v43[(v38 + 3) & 0xFFFFFFFC];
        v43 = v35;
        if ( (v37[2 * v36 + 1] & 0x1FFFFF80) != 0 )
        {
          v47 = -1073741811;
        }
        else
        {
          v39 = (void *)v37[2 * v36];
          if ( !RtlValidSid(v39) || RtlLengthSid(v39) != v38 )
            v47 = -1073741704;
          v35 = v43;
        }
        ++v36;
      }
    }
    else
    {
      memmove(v28, Src, v14);
      v29 = &v28[v42 & 0xFFFFFFFC];
      v30 = 0;
      v31 = *v27;
      while ( v30 < a2 )
      {
        v32 = (unsigned __int8 *)v31[2 * v30];
        v33 = 4 * v32[1] + 8;
        memmove(v29, v32, v33);
        v31[2 * v30++] = v29;
        v29 += (v33 + 3) & 0xFFFFFFFC;
      }
      v27 = a8;
      v9 = a4;
    }
    if ( v45 )
      ExFreePoolWithTag(P, 0);
    if ( !v9 && v47 < 0 )
    {
      ExFreePoolWithTag(*v27, 0);
      *v27 = 0LL;
    }
    return (unsigned int)v47;
  }
  if ( a3 )
    ExFreePoolWithTag(PoolWithTag, 0);
  return 3221225507LL;
}
