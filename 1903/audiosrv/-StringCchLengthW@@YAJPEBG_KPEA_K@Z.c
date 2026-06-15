/*
 * XREFs of ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x18004CAD0
 * Callers:
 *     ?_GetSoundAlias@@YAHPEBGPEAG_KAEAKHPEAUHKEY__@@0@Z @ 0x18004C400 (-_GetSoundAlias@@YAHPEBGPEAG_KAEAKHPEAUHKEY__@@0@Z.c)
 *     AudioServerGetAudioHistoryProducerInfo @ 0x1800E7200 (AudioServerGetAudioHistoryProducerInfo.c)
 *     ?GetAppServiceName@@YAJPEBGPEAPEAG@Z @ 0x18013E480 (-GetAppServiceName@@YAJPEBGPEAPEAG@Z.c)
 * Callees:
 *     StringLengthWorkerW_0 @ 0x18004DD94 (StringLengthWorkerW_0.c)
 */

HRESULT __fastcall StringCchLengthW(const unsigned __int16 *a1, size_t a2, unsigned __int64 *a3)
{
  HRESULT result; // eax

  if ( a1 )
    result = StringLengthWorkerW_0(a1, a2, a3);
  else
    result = -2147024809;
  if ( result < 0 )
  {
    if ( a3 )
      *a3 = 0LL;
  }
  return result;
}
