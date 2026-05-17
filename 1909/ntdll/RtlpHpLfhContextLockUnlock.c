/*
 * XREFs of RtlpHpLfhContextLockUnlock @ 0x18010AAC0
 * Callers:
 *     RtlLockHeapManagerForCloning @ 0x1800EF164 (RtlLockHeapManagerForCloning.c)
 *     RtlpHpUnlockHeapForCloning @ 0x18010AA24 (RtlpHpUnlockHeapForCloning.c)
 * Callees:
 *     RtlpHpLfhOwnerLockUnlock @ 0x18010AB84 (RtlpHpLfhOwnerLockUnlock.c)
 */

__int64 __fastcall RtlpHpLfhContextLockUnlock(__int64 a1, unsigned int a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rdi
  __int64 result; // rax

  v3 = (__int64 *)(a1 + 128);
  v4 = 129LL;
  do
  {
    result = *v3;
    if ( (*v3 & 1) == 0 )
      result = RtlpHpLfhOwnerLockUnlock(*v3, a2);
    ++v3;
    --v4;
  }
  while ( v4 );
  return result;
}
