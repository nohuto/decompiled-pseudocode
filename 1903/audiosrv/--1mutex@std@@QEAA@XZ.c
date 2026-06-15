/*
 * XREFs of ??1mutex@std@@QEAA@XZ @ 0x1800BE6C0
 * Callers:
 *     _CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor$18 @ 0x180071D0F (_CPowerReferenceManager--CPowerReferenceManager_--_1_--dtor$18.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl std::mutex::~mutex(_Mtx_t a1)
{
  _Mtx_destroy_in_situ(a1);
}
