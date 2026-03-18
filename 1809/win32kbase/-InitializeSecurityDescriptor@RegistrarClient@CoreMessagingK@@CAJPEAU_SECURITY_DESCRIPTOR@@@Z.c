/*
 * XREFs of ?InitializeSecurityDescriptor@RegistrarClient@CoreMessagingK@@CAJPEAU_SECURITY_DESCRIPTOR@@@Z @ 0x1C0085574
 * Callers:
 *     ?Connect@RegistrarClient@CoreMessagingK@@CAJXZ @ 0x1C0084774 (-Connect@RegistrarClient@CoreMessagingK@@CAJXZ.c)
 * Callees:
 *     ?Alloc@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z @ 0x1C008564C (-Alloc@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z.c)
 */

__int64 __fastcall CoreMessagingK::RegistrarClient::InitializeSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  ULONG v2; // esi
  int v3; // eax
  struct _ACL *v4; // rdi
  NTSTATUS v5; // ebx
  PACL Acl; // [rsp+38h] [rbp+10h] BYREF

  v2 = RtlLengthSid(&unk_1C0194450) + 20;
  v3 = CoreMessagingK::Runtime::Alloc(v2, 1146309955LL, &Acl);
  v4 = Acl;
  v5 = v3;
  if ( v3 >= 0 )
  {
    v4 = Acl;
    v5 = RtlCreateAcl(Acl, v2, 2u);
    if ( v5 >= 0 )
    {
      v5 = RtlAddAccessAllowedAce(v4, 2u, 1u, &unk_1C0194450);
      if ( v5 >= 0 )
      {
        v5 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v4, 0);
        if ( v5 >= 0 )
        {
          v5 = 0;
          v4 = 0LL;
        }
      }
    }
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0x44534D43u);
  return (unsigned int)v5;
}
