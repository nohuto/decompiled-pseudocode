/*
 * XREFs of ??1mutex@std@@QEAA@XZ @ 0x1800AFCA0
 * Callers:
 *     _CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor$5 @ 0x18006F3DF (_CPowerReferenceManager--CPowerReferenceManager_--_1_--dtor$5.c)
 *     _CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor$21 @ 0x18006F3F5 (_CPowerReferenceManager--CPowerReferenceManager_--_1_--dtor$21.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl std::mutex::~mutex(_Mtx_t a1)
{
  _Mtx_destroy_in_situ(a1);
}
