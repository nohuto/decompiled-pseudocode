/*
 * XREFs of ?Notify@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXXZ @ 0x1801660F0
 * Callers:
 *     ??1ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ @ 0x180160D50 (--1ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ.c)
 *     ?AppendChainLink@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUIChainLink@2345@@Z @ 0x180161BA0 (-AppendChainLink@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUICha.c)
 *     ?AppendChainLink@CImmersiveApp@@UEAAJPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z @ 0x180161CA0 (-AppendChainLink@CImmersiveApp@@UEAAJPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z.c)
 *     ?RemoveFromChainIfPreviousMatches@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x1801675D8 (-RemoveFromChainIfPreviousMatches@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windo.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a5fd20ec656c6250dae9aa58fde1c803___::Run @ 0x180167E70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a5fd20ec656c6250dae9aa58fde1c803___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@Multitasking@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800678C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@M.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18007EED8 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801339D8 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$ChainLinkEventStart@PEBDPEAUIChainLink@Chaining@Shell@Internal@Windows@@AEAW4ChainLinkEventType@2345@@ChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@SAX$$QEAPEBD$$QEAPEAUIChainLink@1234@AEAW4ChainLinkEventType@1234@@Z @ 0x18015EEE8 (--$ChainLinkEventStart@PEBDPEAUIChainLink@Chaining@Shell@Internal@Windows@@AEAW4ChainLinkEventTy.c)
 *     ??$ChainLinkEventStop@PEBDPEAUIChainLink@Chaining@Shell@Internal@Windows@@AEAW4ChainLinkEventType@2345@@ChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@SAX$$QEAPEBD$$QEAPEAUIChainLink@1234@AEAW4ChainLinkEventType@1234@@Z @ 0x18015EFC0 (--$ChainLinkEventStop@PEBDPEAUIChainLink@Chaining@Shell@Internal@Windows@@AEAW4ChainLinkEventTyp.c)
 *     ??0ChainLinkEventArgs@Chaining@Shell@Internal@Windows@@QEAA@W4ChainLinkEventType@1234@@Z @ 0x1801606D0 (--0ChainLinkEventArgs@Chaining@Shell@Internal@Windows@@QEAA@W4ChainLinkEventType@1234@@Z.c)
 *     ?Attach@?$ComPtr@VChainLinkEventArgs@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVChainLinkEventArgs@Chaining@Shell@Internal@Windows@@@Z @ 0x180161F18 (-Attach@-$ComPtr@VChainLinkEventArgs@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVC.c)
 *     ?DeliverChainLinkEventInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAXW4ChainLinkEventTypeInternal@12345@@Z @ 0x180162764 (-DeliverChainLinkEventInternal@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@.c)
 */

void __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Notify(__int64 a1)
{
  __int64 *v1; // rsi
  int *v3; // r12
  int *v4; // rdi
  __int64 v5; // rbx
  void *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 (__fastcall ***v9)(_QWORD); // rcx
  __int64 v10; // rdx
  __int64 (__fastcall ***v11)(_QWORD); // rcx
  __int64 i; // rbx
  __int128 v13; // [rsp+20h] [rbp-20h] BYREF
  __int64 v14; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v16; // [rsp+70h] [rbp+30h] BYREF
  __int64 v17; // [rsp+78h] [rbp+38h] BYREF

  v1 = (__int64 *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 8) )
  {
    v3 = (int *)(a1 + 64);
    if ( a1 + 16 != a1 + 64 )
    {
      v4 = (int *)(a1 + 32);
      do
      {
        if ( *((_QWORD *)v4 - 2) )
        {
          v5 = 0LL;
          v16 = 0LL;
          v6 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
          if ( v6
            && (v7 = Windows::Internal::Shell::Chaining::ChainLinkEventArgs::ChainLinkEventArgs((__int64)v6, *v4),
                Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::ChainLinkEventArgs>::Attach(&v16, v7),
                (v5 = v16) != 0) )
          {
            v8 = *v1;
            v16 = *((_QWORD *)v4 - 1);
            v9 = (__int64 (__fastcall ***)(_QWORD))(v8 + 16 + *(int *)(*(_QWORD *)(v8 + 16) + 8LL));
            v17 = (**v9)(v9);
            Windows::Internal::Shell::Chaining::ChainLinkTraceLogging::ChainLinkEventStart<char const *,Windows::Internal::Shell::Chaining::IChainLink *,enum Windows::Internal::Shell::Chaining::ChainLinkEventType &>(
              (LPCSTR *)&v17,
              &v16,
              v4);
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)v4 - 2) + 80LL))(
              *((_QWORD *)v4 - 2),
              *((_QWORD *)v4 - 1),
              v5);
            v10 = *v1;
            v16 = *((_QWORD *)v4 - 1);
            v11 = (__int64 (__fastcall ***)(_QWORD))(v10 + 16 + *(int *)(*(_QWORD *)(v10 + 16) + 8LL));
            v17 = (**v11)(v11);
            Windows::Internal::Shell::Chaining::ChainLinkTraceLogging::ChainLinkEventStop<char const *,Windows::Internal::Shell::Chaining::IChainLink *,enum Windows::Internal::Shell::Chaining::ChainLinkEventType &>(
              (LPCSTR *)&v17,
              &v16,
              v4);
          }
          else
          {
            wil::details::in1diag3::Log_Hr(
              retaddr,
              881LL,
              (__int64)"internal\\onecoreuapshell\\inc\\chaininghelpers.h",
              (const char *)0x8007000ELL);
          }
          v14 = 0LL;
          v13 = 0LL;
          Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)v4 - 2, (__int64 *)&v13);
          Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)v4 - 1, (__int64 *)&v13 + 1);
          *v4 = v14;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13 + 1);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
          if ( v5 )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::Release(v5);
        }
        v4 += 6;
      }
      while ( v4 - 4 != v3 );
    }
    for ( i = a1 + 64; i != a1 + 80; i += 8LL )
    {
      if ( *(_BYTE *)(i + 4) )
      {
        Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::DeliverChainLinkEventInternal(
          *v1,
          *(_DWORD *)i);
        *(_QWORD *)i = 0LL;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v1);
  }
}
