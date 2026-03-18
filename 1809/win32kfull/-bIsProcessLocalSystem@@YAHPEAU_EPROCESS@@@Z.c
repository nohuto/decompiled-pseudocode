/*
 * XREFs of ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0094930
 * Callers:
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C008E570 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     NtGdiSetPUMPDOBJ @ 0x1C008F620 (NtGdiSetPUMPDOBJ.c)
 *     NtGdiSetDeviceGammaRamp @ 0x1C0094880 (NtGdiSetDeviceGammaRamp.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C00E2D90 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     NtGdiStartPage @ 0x1C00E3160 (NtGdiStartPage.c)
 *     ?GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x1C011B3C8 (-GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z.c)
 *     NtGdiEngCreateBitmap @ 0x1C012D9A0 (NtGdiEngCreateBitmap.c)
 *     NtGdiEngCreateDeviceSurface @ 0x1C012DC90 (NtGdiEngCreateDeviceSurface.c)
 *     NtGdiEndPage @ 0x1C0260D10 (NtGdiEndPage.c)
 *     ?bIsProcessLocalSystem@@YAHXZ @ 0x1C026C9C8 (-bIsProcessLocalSystem@@YAHXZ.c)
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
