/*
 * XREFs of RtlSetSecurityDescriptorRMControl @ 0x180085230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlSetSecurityDescriptorRMControl(PSECURITY_DESCRIPTOR SecurityDescriptor, PUCHAR RMControl)
{
  __int16 v2; // ax
  UCHAR v3; // r8

  v2 = *((_WORD *)SecurityDescriptor + 1);
  v3 = 0;
  if ( RMControl )
  {
    *((_WORD *)SecurityDescriptor + 1) = v2 | 0x4000;
    v3 = *RMControl;
  }
  else
  {
    *((_WORD *)SecurityDescriptor + 1) = v2 & 0xBFFF;
  }
  *((_BYTE *)SecurityDescriptor + 1) = v3;
}
