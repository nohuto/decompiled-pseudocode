/*
 * XREFs of __report_rangecheckfailure @ 0x14001BDB8
 * Callers:
 *     ?UpdateRegistryFromResourceS@CAtlModule@ATL@@QEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z @ 0x140053824 (-UpdateRegistryFromResourceS@CAtlModule@ATL@@QEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z.c)
 * Callees:
 *     __report_securityfailure @ 0x14001BDD4 (__report_securityfailure.c)
 */

void __noreturn _report_rangecheckfailure()
{
  _report_securityfailure(8LL);
}
