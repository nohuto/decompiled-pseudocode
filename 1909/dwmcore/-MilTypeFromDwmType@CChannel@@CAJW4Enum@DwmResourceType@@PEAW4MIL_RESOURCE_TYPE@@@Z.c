/*
 * XREFs of ?MilTypeFromDwmType@CChannel@@CAJW4Enum@DwmResourceType@@PEAW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C9DF8
 * Callers:
 *     ?DuplicateHandleOnTarget@CChannel@@UEAAJIIW4Enum@DwmResourceType@@PEAI@Z @ 0x180020360 (-DuplicateHandleOnTarget@CChannel@@UEAAJIIW4Enum@DwmResourceType@@PEAI@Z.c)
 *     ?DuplicateSharedResource@CChannel@@UEAAJPEAXW4Enum@DwmResourceType@@PEAI@Z @ 0x1800C9C40 (-DuplicateSharedResource@CChannel@@UEAAJPEAXW4Enum@DwmResourceType@@PEAI@Z.c)
 *     ?CreateSharedResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAIPEAPEAX@Z @ 0x1801564B0 (-CreateSharedResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAIPEAPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CChannel::MilTypeFromDwmType(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx

  if ( (unsigned int)a1 >= 0x2A )
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, 0x80070057, 0xCB7u, 0LL);
  }
  else
  {
    v2 = 0;
    *a2 = dword_1802D3980[(unsigned int)a1];
  }
  return v2;
}
