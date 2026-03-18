/*
 * XREFs of ??0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z @ 0x1C001DDD0
 * Callers:
 *     DpiMiracastQueryMiracastSupportForFDO @ 0x1C0141900 (DpiMiracastQueryMiracastSupportForFDO.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1C026ED40 (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 * Callees:
 *     ?Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C001DE00 (-Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 */

AUTO_PNPPOWER_LOCK *__fastcall AUTO_PNPPOWER_LOCK::AUTO_PNPPOWER_LOCK(
        AUTO_PNPPOWER_LOCK *this,
        struct _COMMON_PNP_CONTEXT *a2)
{
  *(_QWORD *)this = a2;
  *((_WORD *)this + 4) = 0;
  *((_BYTE *)this + 10) = 0;
  if ( a2 )
    AUTO_PNPPOWER_LOCK::Acquire(this);
  return this;
}
