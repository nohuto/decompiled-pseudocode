/*
 * XREFs of wil::details::ThreadFailureCallbackFn__lambda_776ccda4a4d84a0eb1f0b91dd9e0f2ed___::NotifyFailure @ 0x1800E5760
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?OnStartStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@@Z @ 0x180102D54 (-OnStartStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@@Z.c)
 */

char __fastcall wil::details::ThreadFailureCallbackFn__lambda_776ccda4a4d84a0eb1f0b91dd9e0f2ed___::NotifyFailure(
        __int64 a1,
        __int64 a2)
{
  _BYTE *v2; // rax
  AudioJournal *v4; // rcx
  struct CEndpointCharacteristics *v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_BYTE **)(a1 + 8);
  if ( !*v2 )
  {
    v6 = 0LL;
    *v2 = 1;
    (*(void (__fastcall **)(PVOID, _QWORD, _QWORD, _QWORD, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                              + 24LL))(
      g_pEndpointCharacteristicsCache,
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 216LL),
      0LL,
      0LL,
      &v6);
    AudioJournal::OnStartStream(v4, *(_DWORD *)(a2 + 4), v6);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v6);
  }
  return 0;
}
