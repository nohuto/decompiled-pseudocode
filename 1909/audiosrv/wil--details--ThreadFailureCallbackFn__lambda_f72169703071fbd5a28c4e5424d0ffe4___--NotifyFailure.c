/*
 * XREFs of wil::details::ThreadFailureCallbackFn__lambda_f72169703071fbd5a28c4e5424d0ffe4___::NotifyFailure @ 0x1800E57E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?OnStopStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@N@Z @ 0x180102E90 (-OnStopStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@N@Z.c)
 */

char __fastcall wil::details::ThreadFailureCallbackFn__lambda_f72169703071fbd5a28c4e5424d0ffe4___::NotifyFailure(
        __int64 a1,
        __int64 a2)
{
  _BYTE *v4; // rcx
  AudioJournal *v5; // rcx
  struct CEndpointCharacteristics *v7; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_BYTE **)(a1 + 8);
  if ( !*v4 && !**(_BYTE **)(a1 + 16) )
  {
    v7 = 0LL;
    *v4 = 1;
    (*(void (__fastcall **)(PVOID, _QWORD, _QWORD, _QWORD, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                              + 24LL))(
      g_pEndpointCharacteristicsCache,
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 216LL),
      0LL,
      0LL,
      &v7);
    AudioJournal::OnStopStream(v5, *(_DWORD *)(a2 + 4), v7, 0.0);
    *(_BYTE *)(*(_QWORD *)(a1 + 32) + 16LL) = 0;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v7);
  }
  return 0;
}
