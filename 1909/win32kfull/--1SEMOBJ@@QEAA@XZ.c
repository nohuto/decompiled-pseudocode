/*
 * XREFs of ??1SEMOBJ@@QEAA@XZ @ 0x1C026AB64
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00B1A70 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     GreCreateHalftonePalette @ 0x1C02AFD6C (GreCreateHalftonePalette.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00B8724 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall SEMOBJ::~SEMOBJ(SEMOBJ *this)
{
  SEMOBJ::vUnlock(this);
}
