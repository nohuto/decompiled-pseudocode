/*
 * XREFs of AppModelFreeUnicodeString @ 0x1401345F0
 * Callers:
 *     KIsUnlockSettingEnabled @ 0x1406C30D0 (KIsUnlockSettingEnabled.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AppModelFreeUnicodeString(_QWORD *a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = (void *)a1[1];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x4D707041u);
    result = 0LL;
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  return result;
}
