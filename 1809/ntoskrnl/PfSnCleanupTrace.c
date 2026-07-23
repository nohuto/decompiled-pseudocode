/*
 * XREFs of PfSnCleanupTrace @ 0x14066A764
 * Callers:
 *     PfSnBeginTrace @ 0x1406696E4 (PfSnBeginTrace.c)
 *     PfSnEndTrace @ 0x14066A514 (PfSnEndTrace.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnCleanupTrace(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  int v5; // ebp
  _QWORD *v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  void *v10; // rcx
  _QWORD **v11; // rbx
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  void *v14; // rcx
  void *v15; // rcx

  v1 = a1 + 520;
  v3 = *(_QWORD *)(a1 + 528);
  v4 = *(_QWORD *)(a1 + 520);
  if ( (v3 & 1) != 0 && v4 )
    v4 ^= v1;
  v5 = v3 & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v4 )
        {
          v6 = (_QWORD *)v4;
          if ( v5 )
            v4 ^= *(_QWORD *)v4;
          else
            v4 = *(_QWORD *)v4;
          *v6 = 0LL;
        }
        v7 = *(_QWORD *)(v4 + 8);
        if ( !v7 )
          break;
        v8 = v4;
        if ( v5 )
          v4 ^= v7;
        else
          v4 = *(_QWORD *)(v4 + 8);
        *(_QWORD *)(v8 + 8) = 0LL;
      }
      v9 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v5 && v9 )
        v9 ^= v4;
      CmSiFreeMemory((PPRIVILEGE_SET)v4);
      if ( !v9 )
        break;
      v4 = v9;
    }
    LOBYTE(v3) = *(_BYTE *)(v1 + 8);
  }
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 8) = 0LL;
  if ( (v3 & 1) != 0 )
    *(_BYTE *)(v1 + 8) = 1;
  v10 = *(void **)(a1 + 584);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  v11 = (_QWORD **)(a1 + 104);
  while ( 1 )
  {
    v12 = *v11;
    if ( *v11 == v11 )
      break;
    if ( (_QWORD **)v12[1] != v11 || (v13 = (_QWORD *)*v12, *(_QWORD **)(*v12 + 8LL) != v12) )
      __fastfail(3u);
    *v11 = v13;
    v13[1] = v11;
    --*(_DWORD *)(a1 + 120);
    ExFreePoolWithTag(v12, 0);
  }
  v14 = *(void **)(a1 + 472);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  v15 = *(void **)(a1 + 352);
  if ( v15 )
    ObfDereferenceObjectWithTag(v15, 0x73576650u);
  if ( (*(_BYTE *)(a1 + 486) & 2) != 0 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&stru_14043D280);
}
