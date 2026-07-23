/*
 * XREFs of CmpCheckNotifyAccess @ 0x1405DD224
 * Callers:
 *     CmpNotifyTriggerCheck @ 0x1405DD1A8 (CmpNotifyTriggerCheck.c)
 * Callees:
 *     SeAccessCheck @ 0x140051640 (SeAccessCheck.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1405D9920 (CmpGetSecurityCacheEntryForKcbStack.c)
 */

BOOLEAN __fastcall CmpCheckNotifyAccess(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SecurityCacheEntryForKcbStack; // rax
  ACCESS_MASK GrantedAccess; // [rsp+60h] [rbp+8h] BYREF
  NTSTATUS AccessStatus; // [rsp+78h] [rbp+20h] BYREF

  GrantedAccess = 0;
  SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a2, a3, 0LL);
  return SeAccessCheck(
           (PSECURITY_DESCRIPTOR)(SecurityCacheEntryForKcbStack + 32),
           (PSECURITY_SUBJECT_CONTEXT)(a1 + 56),
           0,
           0x10u,
           0,
           0LL,
           (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
           1,
           &GrantedAccess,
           &AccessStatus);
}
