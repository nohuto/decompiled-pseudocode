/*
 * XREFs of RtlpLocateActivationContextSectionForQuery @ 0x18002FF04
 * Callers:
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x18002FE40 (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x180031A58 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpQueryRunLevel @ 0x1800320F8 (RtlpQueryRunLevel.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800E0F80 (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1800E1210 (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextManifestResourceName @ 0x1800E1494 (RtlpQueryInformationActivationContextManifestResourceName.c)
 * Callees:
 *     RtlpLocateActivationContextSection @ 0x18000AE54 (RtlpLocateActivationContextSection.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

void __fastcall RtlpLocateActivationContextSectionForQuery(
        _DWORD *a1,
        int *a2,
        void *a3,
        size_t a4,
        size_t *a5,
        size_t Size,
        _DWORD *a7,
        __int64 a8,
        unsigned int a9,
        _QWORD *a10,
        _DWORD *a11)
{
  int ActivationContextSection; // eax

  if ( a7
    && (ActivationContextSection = RtlpLocateActivationContextSection(a7, 0LL, a9, a10, a11),
        *a2 = ActivationContextSection,
        ActivationContextSection != -1072365567) )
  {
    *a1 = ((ActivationContextSection >> 31) & 1) + 1;
  }
  else
  {
    *a1 = 2;
    if ( Size > a4 )
    {
      *a2 = -1073741789;
    }
    else
    {
      memset(a3, 0, Size);
      if ( a5 )
        *a5 = Size;
      *a2 = 0;
    }
  }
}
