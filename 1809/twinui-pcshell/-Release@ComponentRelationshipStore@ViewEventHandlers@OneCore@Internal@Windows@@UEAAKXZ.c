/*
 * XREFs of ?Release@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAKXZ @ 0x180217BA0
 * Callers:
 *     ?Release@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@W7EAAKXZ @ 0x1800A2400 (-Release@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@W7EAAKXZ.c)
 *     ?Release@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@WBA@EAAKXZ @ 0x1800A2410 (-Release@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@WBA@EAAKXZ.c)
 *     ?Release@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@WBI@EAAKXZ @ 0x1800A2420 (-Release@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Microsoft::WRL::FtmBase>::Release(this);
}
