/*
 * XREFs of AppModelFreeUnicodeString @ 0x140134560
 * Callers:
 *     KIsUnlockSettingEnabled @ 0x1406E3610 (KIsUnlockSettingEnabled.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
