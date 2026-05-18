/*
 * XREFs of ??1_Auto_mtx@std@@QEAA@XZ @ 0x1800750B0
 * Callers:
 *     ?dtor$1@?0???0_Pad@std@@QEAA@XZ@4HA_0 @ 0x18012DBBD (-dtor$1@-0---0_Pad@std@@QEAA@XZ@4HA_0.c)
 * Callees:
 *     _Mtx_destroy @ 0x180127624 (_Mtx_destroy.c)
 */

void __fastcall std::_Auto_mtx::~_Auto_mtx(_Mtx_t *this)
{
  if ( *(_BYTE *)this )
    Mtx_destroy(this[1]);
}
