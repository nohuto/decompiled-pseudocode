/*
 * XREFs of ??0ComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@QEAA@PEAUIInspectable@@AEBUtagHostIdentifier@2345@KW4CRSComponentRelationshipFlags@2345@@Z @ 0x1803A4B9C
 * Callers:
 *     ?RegisterDisconnectedComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJUtagHostIdentifier@2345@IPEAUIInspectable@@@Z @ 0x1803A7040 (-RegisterDisconnectedComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Win.c)
 *     ?RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJUtagHostIdentifier@2345@IIPEAUIInspectable@@@Z @ 0x1803A7510 (-RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Int_ea_1803A7510.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo::ComponentInfo(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  __int64 *v5; // rcx
  __int64 result; // rax

  *(_QWORD *)a1 = *(_QWORD *)a3;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a3 + 8);
  *(_DWORD *)(a1 + 12) = a4;
  v5 = (__int64 *)(a1 + 16);
  *v5 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v5);
  *(_QWORD *)(a1 + 36) = 1LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  result = a1;
  *(_BYTE *)(a1 + 72) = 1;
  return result;
}
