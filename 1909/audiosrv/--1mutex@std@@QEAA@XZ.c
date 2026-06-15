/*
 * XREFs of ??1mutex@std@@QEAA@XZ @ 0x1800BE1F0
 * Callers:
 *     _CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor$18 @ 0x18007417B (_CPowerReferenceManager--CPowerReferenceManager_--_1_--dtor$18.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl std::mutex::~mutex(_Mtx_t a1)
{
  _Mtx_destroy_in_situ(a1);
}
