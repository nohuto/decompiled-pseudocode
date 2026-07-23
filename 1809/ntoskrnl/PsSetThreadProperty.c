/*
 * XREFs of PsSetThreadProperty @ 0x14010F1E0
 * Callers:
 *     <none>
 * Callees:
 *     PspInsertProperty @ 0x14010F024 (PspInsertProperty.c)
 *     PspRemoveProperty @ 0x14010F10C (PspRemoveProperty.c)
 *     PspValidateThread @ 0x14010F354 (PspValidateThread.c)
 */

__int64 __fastcall PsSetThreadProperty(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  void *v5; // r9
  __int64 v6; // r10
  KSPIN_LOCK *v7; // rcx

  result = PspValidateThread(a1, a2, a3, a3);
  if ( (int)result >= 0 )
  {
    v7 = (KSPIN_LOCK *)(v4 + 1920);
    if ( v5 )
      return PspInsertProperty(v7, v6, v5);
    else
      return PspRemoveProperty((__int64)v7, v6, 0LL);
  }
  return result;
}
