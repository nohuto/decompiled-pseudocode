/*
 * XREFs of ?QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z @ 0x180057994
 * Callers:
 *     ?OnHandEventOccurred@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUILegacyPrivHandEventArgs@34567@@Z @ 0x180058DA0 (-OnHandEventOccurred@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PE.c)
 *     ?OnHomeGestureDetected@SpectrumListener@@AEAAJPEAUIInspectable@@PEAUIHomeGestureDetectedEventArgs@Internal@Mirage@Windows@@@Z @ 0x180059000 (-OnHomeGestureDetected@SpectrumListener@@AEAAJPEAUIInspectable@@PEAUIHomeGestureDetectedEventArg.c)
 *     ?OnHeadEventOccurred@SpectrumListener@@EEAAXUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@Windows@@@Z @ 0x180059120 (-OnHeadEventOccurred@SpectrumListener@@EEAAXUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@W.c)
 *     ?OnPhraseDetected@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIPrivVoiceEventArgs@34567@@Z @ 0x180059270 (-OnPhraseDetected@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUI.c)
 * Callees:
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003618 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?LogMPCRawInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@@Z @ 0x180057018 (-LogMPCRawInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@@Z.c)
 *     ??$_Emplace_reallocate@AEAULegacyInputInfo@@@?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@QEAAPEAULegacyInputInfo@@QEAU2@AEAU2@@Z @ 0x1800580D4 (--$_Emplace_reallocate@AEAULegacyInputInfo@@@-$vector@ULegacyInputInfo@@V-$allocator@ULegacyInpu.c)
 *     memcpy_0 @ 0x18012DB5F (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCRawInputProvider::QueueInput(MPCRawInputProvider *this, struct InputInfo *a2)
{
  _DWORD *v4; // rdx
  ISMTracing *v5; // rcx
  __int64 v6; // rdx
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v4 && *v4 )
  {
    ISMTracing::Instance();
    ISMTracing::LogMPCRawInputReport_(v5, a2);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 2064));
  v6 = *((_QWORD *)this + 256);
  if ( *((_QWORD *)this + 257) == v6 )
  {
    std::vector<LegacyInputInfo>::_Emplace_reallocate<LegacyInputInfo &>((char *)this + 2040, v6, a2);
  }
  else
  {
    memcpy_0(*((void **)this + 256), a2, 0x640uLL);
    *((_QWORD *)this + 256) += 1600LL;
  }
  if ( this != (MPCRawInputProvider *)-2064LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 2064));
  if ( !SetEvent(*((HANDLE *)this + 253)) )
  {
    wil::details::in1diag3::FailFast_GetLastError(
      retaddr,
      (void *)0x904,
      (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
      v7);
    JUMPOUT(0x180057A6DLL);
  }
  return 0LL;
}
