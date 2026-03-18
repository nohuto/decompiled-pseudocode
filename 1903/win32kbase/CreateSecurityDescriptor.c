/*
 * XREFs of CreateSecurityDescriptor @ 0x1C0010FA0
 * Callers:
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C00166E0 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     InitSecurity @ 0x1C026846C (InitSecurity.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0013990 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 */

struct _ACL *__fastcall CreateSecurityDescriptor(PVOID AceList, ULONG AceListLength, BOOLEAN DaclDefaulted)
{
  ULONG v3; // ebx
  struct _ACL *v7; // rax
  struct _ACL *v8; // rdi
  NTSTATUS v9; // ebx

  v3 = AceListLength + 8;
  if ( AceListLength + 8 >= AceListLength && AceListLength + 48 >= AceListLength + 8 )
  {
    v7 = (struct _ACL *)Win32AllocPoolWithQuota(AceListLength + 48, 1702064981LL);
    v8 = v7;
    if ( v7 )
    {
      RtlCreateSecurityDescriptor(v7, 1u);
      if ( RtlCreateAcl(v8 + 5, v3, 2u) >= 0 && RtlAddAce(v8 + 5, 2u, 0xFFFFFFFF, AceList, AceListLength) >= 0 )
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
  return 0LL;
}
