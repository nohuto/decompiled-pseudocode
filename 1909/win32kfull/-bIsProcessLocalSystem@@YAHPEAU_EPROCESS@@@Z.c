/*
 * XREFs of ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0285014
 * Callers:
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C0099F38 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     NtGdiSetPUMPDOBJ @ 0x1C00DBCC0 (NtGdiSetPUMPDOBJ.c)
 *     ?GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x1C00F703C (-GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C00F8214 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     NtGdiStartPage @ 0x1C00F8470 (NtGdiStartPage.c)
 *     NtGdiEngCreateBitmap @ 0x1C0110310 (NtGdiEngCreateBitmap.c)
 *     NtGdiEngCreateDeviceSurface @ 0x1C0110450 (NtGdiEngCreateDeviceSurface.c)
 *     NtGdiEndPage @ 0x1C0279D00 (NtGdiEndPage.c)
 *     ?bIsProcessLocalSystem@@YAHXZ @ 0x1C02850B8 (-bIsProcessLocalSystem@@YAHXZ.c)
 *     NtGdiSetDeviceGammaRamp @ 0x1C02AF620 (NtGdiSetDeviceGammaRamp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bIsProcessLocalSystem(struct _EPROCESS *a1)
{
  unsigned int v1; // esi
  PACCESS_TOKEN v2; // rdi
  NTSTATUS v3; // ebx
  PVOID TokenInformation; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  TokenInformation = 0LL;
  v2 = PsReferencePrimaryToken(a1);
  v3 = SeQueryInformationToken(v2, TokenUser, &TokenInformation);
  PsDereferencePrimaryToken(v2);
  if ( v3 >= 0 )
  {
    v1 = RtlEqualSid(SeExports->SeLocalSystemSid, *(PSID *)TokenInformation);
    ExFreePoolWithTag(TokenInformation, 0);
  }
  return v1;
}
