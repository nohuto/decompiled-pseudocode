/*
 * XREFs of ??0ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ @ 0x180119238
 * Callers:
 *     ?AppendChainLink@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUIChainLink@2345@@Z @ 0x18011A810 (-AppendChainLink@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUICha.c)
 *     ?AppendChainLink@CImmersiveApp@@UEAAJPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z @ 0x18011A8F0 (-AppendChainLink@CImmersiveApp@@UEAAJPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z.c)
 *     ?RemoveFromChainIfPreviousMatches@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x18011F088 (-RemoveFromChainIfPreviousMatches@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windo.c)
 *     ?_RemoveFromChain@CImmersiveApp@@AEAAXXZ @ 0x180121CD4 (-_RemoveFromChain@CImmersiveApp@@AEAAXXZ.c)
 *     ?AppendChainLink@?$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUIChainLink@2345@@Z @ 0x1801BD290 (-AppendChainLink@-$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUICha.c)
 *     ?RemoveFromChainIfPreviousMatches@?$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x1801BFB58 (-RemoveFromChainIfPreviousMatches@-$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windo.c)
 * Callees:
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800854B0 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180119FDC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::ChainLinkNotifier(
        __int64 a1)
{
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  `eh vector constructor iterator'(
    (char *)(a1 + 16),
    24LL,
    2LL,
    Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Payload::Payload);
  `vector constructor iterator'(
    (void *)(a1 + 64),
    8uLL,
    2uLL,
    (void *(*)(void *))Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::InternalPayload::InternalPayload);
  return a1;
}
