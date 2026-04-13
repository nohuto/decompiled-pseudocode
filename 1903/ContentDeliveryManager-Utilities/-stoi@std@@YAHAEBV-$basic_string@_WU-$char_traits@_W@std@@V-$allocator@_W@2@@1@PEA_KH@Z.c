/*
 * XREFs of ?stoi@std@@YAHAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@PEA_KH@Z @ 0x18006DE3C
 * Callers:
 *     ?DwordBiPredicateCreator@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z @ 0x18006EA20 (-DwordBiPredicateCreator@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV-$uniq.c)
 *     ?GetFeatureIdAndReportingIdForTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@AEAIAEAG@Z @ 0x18006FBC8 (-GetFeatureIdAndReportingIdForTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargete.c)
 * Callees:
 *     ?_Xinvalid_argument@std@@YAXPEBD@Z @ 0x1800ADF88 (-_Xinvalid_argument@std@@YAXPEBD@Z.c)
 *     ?_Xout_of_range@std@@YAXPEBD@Z @ 0x1800ADFE0 (-_Xout_of_range@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::stoi(wchar_t *String, wchar_t *a2)
{
  const wchar_t *v2; // rbx
  unsigned int v3; // edi
  wchar_t *EndPtr; // [rsp+38h] [rbp+10h] BYREF

  EndPtr = a2;
  v2 = String;
  if ( *((_QWORD *)String + 3) >= 8uLL )
    v2 = *(const wchar_t **)String;
  *_errno() = 0;
  v3 = wcstol(v2, &EndPtr, 10);
  if ( v2 == EndPtr )
    std::_Xinvalid_argument("invalid stoi argument");
  if ( *_errno() == 34 )
    std::_Xout_of_range("stoi argument out of range");
  return v3;
}
