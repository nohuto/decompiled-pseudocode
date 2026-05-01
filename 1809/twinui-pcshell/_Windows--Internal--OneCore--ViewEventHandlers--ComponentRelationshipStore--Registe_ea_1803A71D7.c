/*
 * XREFs of _Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::RegisterDisconnectedComponent_::_1_::catch$39 @ 0x1803A71D7
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007E604 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::RegisterDisconnectedComponent_::_1_::catch_39(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 232),
                           (void *)0x10F,
                           (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
                           a4);
  return &loc_1803A718F;
}
