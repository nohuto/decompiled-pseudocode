/*
 * XREFs of EmpEvaluateNodeLink @ 0x1400D261C
 * Callers:
 *     EmpEvaluateNodeLink @ 0x1400D261C (EmpEvaluateNodeLink.c)
 *     EmpEvaluateTargetRule @ 0x1400D3088 (EmpEvaluateTargetRule.c)
 * Callees:
 *     EmpEvaluateNodeLink @ 0x1400D261C (EmpEvaluateNodeLink.c)
 *     EmpEvaluateParseNodeMapping @ 0x1400D2F74 (EmpEvaluateParseNodeMapping.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EmpEvaluateNodeLink(
        int *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        int a9)
{
  int v9; // eax
  __int64 v10; // rsi
  PVOID PoolWithTag; // r14
  PVOID v12; // rbp
  PVOID v13; // r15
  __int64 v14; // rdi
  unsigned int v16; // ebx
  __int64 v17; // rcx
  unsigned int v18; // r13d
  unsigned int v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // eax
  __int64 v22; // rdi
  int v23; // esi
  int v25; // eax
  unsigned int v27; // [rsp+70h] [rbp-58h]
  int v28; // [rsp+74h] [rbp-54h]
  __int64 v29; // [rsp+78h] [rbp-50h]
  unsigned int v30; // [rsp+D0h] [rbp+8h]
  int v31; // [rsp+D8h] [rbp+10h]

  v31 = a2;
  v9 = *a1;
  v10 = 0LL;
  PoolWithTag = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v16 = 1;
  if ( (unsigned int)*a1 > 1 )
  {
    if ( v9 != 2 )
      return v16;
    v22 = *((_QWORD *)a1 + 1);
    v23 = EmpEvaluateNodeLink(
            *(_QWORD *)(v22 + 8),
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            *(_QWORD *)(v22 + 24),
            *(_DWORD *)(v22 + 16));
    if ( v23 == 1 )
      return v16;
    if ( *(_BYTE *)v22 == 38 )
    {
      if ( !v23 )
        return 0;
    }
    else if ( v23 == 2 && *(_BYTE *)v22 == 124 )
    {
      return 2;
    }
    v25 = EmpEvaluateNodeLink(
            *(_QWORD *)(v22 + 32),
            v31,
            a3,
            a4,
            a5,
            a6,
            a7,
            *(_QWORD *)(v22 + 48),
            *(_DWORD *)(v22 + 40));
    if ( v25 == 1 )
      return v16;
    if ( *(_BYTE *)v22 == 38 )
    {
      if ( v23 && v25 )
        return 2;
      v16 = 0;
    }
    if ( *(_BYTE *)v22 != 124 )
      return v16;
    if ( !v23 && !v25 )
      return 0;
    return 2;
  }
  v17 = *((_QWORD *)a1 + 1);
  if ( v9 )
  {
    v10 = v17;
    if ( !*(_BYTE *)(v17 + 20) )
      return v16;
    v18 = *(_DWORD *)(v17 + 40);
    v30 = *(_DWORD *)(v17 + 48);
    v19 = *(_DWORD *)(v17 + 44);
  }
  else
  {
    v14 = v17;
    if ( !*(_QWORD *)(v17 + 16) )
      return v16;
    v18 = *(_DWORD *)(v17 + 56);
    v30 = *(_DWORD *)(v17 + 64);
    v19 = *(_DWORD *)(v17 + 60);
  }
  v27 = v19;
  v28 = a1[4];
  if ( !v28 || (v29 = *((_QWORD *)a1 + 3)) == 0 )
  {
    LODWORD(v29) = a8;
    v28 = a9;
    if ( !a8 )
    {
      if ( v9 )
        return (unsigned int)EmpEvaluateNodeLink(*(_QWORD *)(v10 + 96), a2, a3, a4, a5, a6, a7, 0LL, 0);
      else
        return (unsigned int)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64, int, _QWORD))(v14 + 16))(
                               a6,
                               a7,
                               a2,
                               a3,
                               a4,
                               a5,
                               *(_QWORD *)(v14 + 32));
    }
  }
  if ( v18 )
  {
    if ( !is_mul_ok(v18, 8uLL) )
      return v16;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v18, 0x76654D45u);
    if ( !PoolWithTag )
      return v16;
  }
  if ( !v27 || is_mul_ok(v27, 4uLL) && (v13 = ExAllocatePoolWithTag(PagedPool, 4LL * v27, 0x76654D45u)) != 0LL )
  {
    v20 = v30;
    if ( !v30 )
      goto LABEL_17;
    if ( is_mul_ok(v30, 8uLL) )
    {
      v12 = ExAllocatePoolWithTag(PagedPool, 8LL * v30, 0x76654D45u);
      if ( v12 )
      {
        v20 = v30;
LABEL_17:
        if ( (unsigned __int8)EmpEvaluateParseNodeMapping(
                                v29,
                                v28,
                                v31,
                                a3,
                                a4,
                                a5,
                                a6,
                                a7,
                                (__int64)PoolWithTag,
                                v18,
                                (__int64)v13,
                                v27,
                                (__int64)v12,
                                v20) )
        {
          if ( *a1 )
            v21 = EmpEvaluateNodeLink(
                    *(_QWORD *)(v10 + 96),
                    (_DWORD)PoolWithTag,
                    v18,
                    (_DWORD)v13,
                    v27,
                    (__int64)v12,
                    v30,
                    0LL,
                    0);
          else
            v21 = (*(__int64 (__fastcall **)(PVOID, _QWORD, PVOID, _QWORD, PVOID, unsigned int, _QWORD))(v14 + 16))(
                    v12,
                    v30,
                    PoolWithTag,
                    v18,
                    v13,
                    v27,
                    *(_QWORD *)(v14 + 32));
          v16 = v21;
        }
      }
    }
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x76654D45u);
  if ( v13 )
    ExFreePoolWithTag(v13, 0x76654D45u);
  if ( v12 )
    ExFreePoolWithTag(v12, 0x76654D45u);
  return v16;
}
