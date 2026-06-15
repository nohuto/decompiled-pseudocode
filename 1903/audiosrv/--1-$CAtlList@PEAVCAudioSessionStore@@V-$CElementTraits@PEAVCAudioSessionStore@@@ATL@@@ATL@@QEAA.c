/*
 * XREFs of ??1?$CAtlList@PEAVCAudioSessionStore@@V?$CElementTraits@PEAVCAudioSessionStore@@@ATL@@@ATL@@QEAA@XZ @ 0x1800BE0D8
 * Callers:
 *     _CPolicyConfig::_CPolicyConfig_::_1_::dtor$2 @ 0x1800DD1B4 (_CPolicyConfig--_CPolicyConfig_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<CAudioSessionStore *,ATL::CElementTraits<CAudioSessionStore *>>::~CAtlList<CAudioSessionStore *,ATL::CElementTraits<CAudioSessionStore *>>(
        __int64 *a1)
{
  ATL::CAtlList<CAudioSessionStore *,ATL::CElementTraits<CAudioSessionStore *>>::RemoveAll(a1);
}
