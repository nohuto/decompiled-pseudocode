/*
 * XREFs of ?SecurityShim_SharedMessagePortSecurity@@YAJPEAPEAX@Z @ 0x180169B4C
 * Callers:
 *     ?Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z @ 0x180147B0C (-Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z.c)
 * Callees:
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x18005A298 (-FailFastWithHR@@YAXJ_K0@Z.c)
 */

__int64 __fastcall SecurityShim_SharedMessagePortSecurity(void **a1)
{
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+30h] [rbp+8h] BYREF

  SecurityDescriptor = 0LL;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;0x01;;;WD)(A;;0x01;;;AC)(A;;0x01;;;S-1-15-3-1024-1502825166-1963708345-2616377461-2562897074-4192028372-"
           "3968301570-1997628692-1435953622)",
          1u,
          &SecurityDescriptor,
          0LL) )
    FailFastWithHR(-2147467259, retaddr, 0x2EuLL);
  *a1 = SecurityDescriptor;
  return 0LL;
}
