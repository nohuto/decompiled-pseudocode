/*
 * XREFs of ??1?$unique_ptr@$$BY0A@$$CBGU?$default_delete@$$BY0A@$$CBG@std@@@std@@QEAA@XZ @ 0x180041290
 * Callers:
 *     _CQueryKnownGameList::GetGameEntryFromPID_::_1_::dtor$0 @ 0x1800455BE (_CQueryKnownGameList--GetGameEntryFromPID_--_1_--dtor$0.c)
 *     _CQueryKnownGameList::GetGameEntryByIdentifier_::_1_::dtor$4 @ 0x180045618 (_CQueryKnownGameList--GetGameEntryByIdentifier_--_1_--dtor$4.c)
 *     _CQueryKnownGameList::GetGameEntryByIdentifier_::_1_::dtor$5 @ 0x18004562A (_CQueryKnownGameList--GetGameEntryByIdentifier_--_1_--dtor$5.c)
 *     _CQueryKnownGameList::GetGameEntryByIdentifier_::_1_::dtor$6 @ 0x18004563C (_CQueryKnownGameList--GetGameEntryByIdentifier_--_1_--dtor$6.c)
 *     _CQueryKnownGameList::GetProcessWorkingDirectoryByPID_::_1_::dtor$3 @ 0x18004564E (_CQueryKnownGameList--GetProcessWorkingDirectoryByPID_--_1_--dtor$3.c)
 *     _CQueryKnownGameList::GetProcessArgsByPID_::_1_::dtor$3 @ 0x180045660 (_CQueryKnownGameList--GetProcessArgsByPID_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall std::unique_ptr<unsigned short const [0]>::~unique_ptr<unsigned short const [0]>(
        void **a1,
        const struct std::nothrow_t *a2)
{
  operator delete(*a1, a2);
}
