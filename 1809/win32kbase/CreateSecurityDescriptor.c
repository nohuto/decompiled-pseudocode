/*
 * XREFs of CreateSecurityDescriptor @ 0x1C0018250
 * Callers:
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C001CFB0 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     InitSecurity @ 0x1C021C2E0 (InitSecurity.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0019AB0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 */

struct _ACL *__fastcall CreateSecurityDescriptor(PVOID AceList, ULONG AceListLength, BOOLEAN DaclDefaulted)
{
  ULONG v6; // ebx
  struct _ACL *v7; // rax
  struct _ACL *v8; // rdi
  NTSTATUS v9; // ebx

  if ( AceListLength + 8 >= AceListLength )
  {
    v6 = AceListLength + 8;
    if ( AceListLength + 48 >= AceListLength + 8 )
    {
      v7 = (struct _ACL *)Win32AllocPoolWithQuota(AceListLength + 48, 1702064981LL);
      v8 = v7;
      if ( v7 )
      {
        RtlCreateSecurityDescriptor(v7, 1u);
        if ( RtlCreateAcl(v8 + 5, v6, 2u) >= 0 && RtlAddAce(v8 + 5, 2u, 0xFFFFFFFF, AceList, AceListLength) >= 0 )
        {
          v9 = RtlSetDaclSecurityDescriptor(v8, 1u, v8 + 5, DaclDefaulted);
          RtlSetSaclSecurityDescriptor(v8, 0, 0LL, 0);
          RtlSetOwnerSecurityDescriptor(v8, 0LL, 0);
          RtlSetGroupSecurityDescriptor(v8, 0LL, 0);
          if ( v9 >= 0 )
            return v8;
        }
        Win32FreePool(v8);
      }
    }
  }
  return 0LL;
}
