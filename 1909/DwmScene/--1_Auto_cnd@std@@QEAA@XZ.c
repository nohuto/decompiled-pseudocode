/*
 * XREFs of ??1_Auto_cnd@std@@QEAA@XZ @ 0x180075098
 * Callers:
 *     ?dtor$0@?0???0_Pad@std@@QEAA@XZ@4HA_0 @ 0x18012DBB1 (-dtor$0@-0---0_Pad@std@@QEAA@XZ@4HA_0.c)
 * Callees:
 *     _Cnd_destroy @ 0x180127636 (_Cnd_destroy.c)
 */

void __fastcall std::_Auto_cnd::~_Auto_cnd(_Cnd_t *this)
{
  if ( *(_BYTE *)this )
    Cnd_destroy(this[1]);
}
