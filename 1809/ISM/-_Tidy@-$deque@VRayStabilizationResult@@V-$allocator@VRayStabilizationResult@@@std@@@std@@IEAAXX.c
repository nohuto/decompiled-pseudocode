/*
 * XREFs of ?_Tidy@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@IEAAXXZ @ 0x1800F49CC
 * Callers:
 *     ??1MPCInputProviderBase@@UEAA@XZ @ 0x1801007B8 (--1MPCInputProviderBase@@UEAA@XZ.c)
 *     ?Reset@RayStabilizer@@QEAAXXZ @ 0x1801030B4 (-Reset@RayStabilizer@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::deque<RayStabilizationResult>::_Tidy(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  void *v4; // rcx
  char *v5; // rcx
  const struct std::nothrow_t *v6; // rdx
  char *v7; // r8
  char *v8; // rcx

  v1 = a1[4];
  while ( v1 )
  {
    a1[4] = --v1;
    if ( !v1 )
      a1[3] = 0LL;
  }
  v3 = a1[2];
  while ( v3 )
  {
    --v3;
    v4 = *(void **)(a1[1] + 8 * v3);
    if ( v4 )
      operator delete(v4, (const struct std::nothrow_t *)0x64);
  }
  v5 = (char *)a1[1];
  if ( v5 )
  {
    v6 = (const struct std::nothrow_t *)(8LL * a1[2]);
    if ( (unsigned __int64)v6 >= 0x1000 )
    {
      v7 = (char *)*((_QWORD *)v5 - 1);
      v6 = (const struct std::nothrow_t *)((char *)v6 + 39);
      v8 = (char *)(v5 - v7);
      if ( (unsigned __int64)(v8 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v8, v6);
        JUMPOUT(0x1800F4A6ALL);
      }
      v5 = v7;
    }
    operator delete(v5, v6);
  }
  a1[2] = 0LL;
  a1[1] = 0LL;
}
