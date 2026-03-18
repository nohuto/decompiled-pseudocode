/*
 * XREFs of ?InitializeDWMSid@DXGVAILOBJECT@@QEAAXKPEAX@Z @ 0x1C0290BB8
 * Callers:
 *     ?AllocateResourceSecurityDescriptor@DXGVAILOBJECT@@QEAAJEKPEAPEAX@Z @ 0x1C028FA14 (-AllocateResourceSecurityDescriptor@DXGVAILOBJECT@@QEAAJEKPEAPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 */

void __fastcall DXGVAILOBJECT::InitializeDWMSid(DXGVAILOBJECT *this, ULONG a2, void *a3)
{
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+20h] [rbp-10h] BYREF

  if ( g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled )
  {
    *(_DWORD *)IdentifierAuthority.Value = 0;
    *(_WORD *)&IdentifierAuthority.Value[4] = 256;
    RtlInitializeSid(a3, &IdentifierAuthority, 1u);
    *RtlSubAuthoritySid(a3, 0) = 0;
  }
  else
  {
    *(_DWORD *)IdentifierAuthority.Value = 0;
    *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
    RtlInitializeSid(a3, &IdentifierAuthority, 3u);
    *RtlSubAuthoritySid(a3, 0) = 90;
    *RtlSubAuthoritySid(a3, 1u) = 0;
    *RtlSubAuthoritySid(a3, 2u) = a2;
  }
}
