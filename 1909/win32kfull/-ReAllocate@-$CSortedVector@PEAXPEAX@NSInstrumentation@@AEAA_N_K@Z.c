/*
 * XREFs of ?ReAllocate@?$CSortedVector@PEAXPEAX@NSInstrumentation@@AEAA_N_K@Z @ 0x1C029861C
 * Callers:
 *     ?Insert@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K0@Z @ 0x1C00FA058 (-Insert@-$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K0@Z.c)
 *     ?Insert@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAU_FONTFILEVIEW@@@Z @ 0x1C01215F4 (-Insert@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAU_FONTFILEVIEW@@.c)
 *     ?Insert@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAX0@Z @ 0x1C02D2F24 (-Insert@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAX0@Z.c)
 * Callees:
 *     memmove @ 0x1C0168100 (memmove.c)
 */

char __fastcall NSInstrumentation::CSortedVector<void *,void *>::ReAllocate(__int64 a1, unsigned __int64 a2)
{
  PVOID PoolWithTag; // rax
  PVOID v5; // rdi
  char result; // al

  if ( !is_mul_ok(0x10uLL, a2) )
    return 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 16 * a2, 0x63497355u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  memmove(PoolWithTag, *(const void **)(a1 + 48), 16LL * *(_QWORD *)(a1 + 32));
  ExFreePoolWithTag(*(PVOID *)(a1 + 48), 0);
  result = 1;
  *(_QWORD *)(a1 + 48) = v5;
  *(_QWORD *)(a1 + 32) = a2;
  return result;
}
