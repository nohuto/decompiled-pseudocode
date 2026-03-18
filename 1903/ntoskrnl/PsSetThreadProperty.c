/*
 * XREFs of PsSetThreadProperty @ 0x140139170
 * Callers:
 *     <none>
 * Callees:
 *     PspValidateThread @ 0x1400BEF00 (PspValidateThread.c)
 *     PspInsertProperty @ 0x1401391B0 (PspInsertProperty.c)
 *     PspRemoveProperty @ 0x140139298 (PspRemoveProperty.c)
 */

__int64 __fastcall PsSetThreadProperty(struct _KTHREAD *a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // rcx

  result = PspValidateThread(a1);
  if ( (int)result >= 0 )
  {
    v5 = v2 + 1936;
    if ( v3 )
      return PspInsertProperty(v5, v4, v3);
    else
      return PspRemoveProperty(v5, v4, 0LL);
  }
  return result;
}
