/*
 * XREFs of ?NpiGetReservedBuffer@NP_CONTEXT@@SAPEAXPEAU1@PEAUNP_CTX@1@@Z @ 0x140301D14
 * Callers:
 *     ?NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z @ 0x14015775C (-NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z.c)
 * Callees:
 *     ?NpiPerformPageOut@NP_CONTEXT@@SAJPEAU1@PEAUNP_CTX@1@@Z @ 0x140301E34 (-NpiPerformPageOut@NP_CONTEXT@@SAJPEAU1@PEAUNP_CTX@1@@Z.c)
 */

char *__fastcall NP_CONTEXT::NpiGetReservedBuffer(struct NP_CONTEXT *a1, struct NP_CONTEXT::NP_CTX *a2)
{
  char *v3; // rbx
  __int64 v5; // rdi
  char *v6; // r8
  char *v7; // rcx

  v3 = (char *)a1 + 64;
  v5 = 0LL;
  while ( 1 )
  {
    v6 = (char *)*((_QWORD *)v3 + 1);
    if ( v6 != v3 )
      break;
    if ( NP_CONTEXT::NpiPerformPageOut(a1, a2) < 0 )
      return (char *)v5;
  }
  v7 = *(char **)v3;
  *(_QWORD *)v3 = **(_QWORD **)v3;
  if ( v7 == v6 )
  {
    *((_QWORD *)v3 + 1) = v3;
    *(_QWORD *)v3 = 0LL;
  }
  else
  {
    --*(_QWORD *)v6;
  }
  return v7;
}
