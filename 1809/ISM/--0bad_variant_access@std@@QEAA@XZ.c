/*
 * XREFs of ??0bad_variant_access@std@@QEAA@XZ @ 0x18004915C
 * Callers:
 *     ?GetPROPVARIANT@MPCConstantManager@@QEAA?AV?$optional@UtagPROPVARIANT@@@std@@KW4InputType@@PEBG@Z @ 0x180048F44 (-GetPROPVARIANT@MPCConstantManager@@QEAA-AV-$optional@UtagPROPVARIANT@@@std@@KW4InputType@@PEBG@.c)
 *     ?UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ @ 0x1800F3274 (-UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z @ 0x1800F3C58 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z.c)
 *     ??$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@PEBG@Z @ 0x1800F3DD4 (--$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@PEBG@Z.c)
 *     ??$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@PEBG@Z @ 0x1800F41BC (--$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@PEBG@Z.c)
 *     ??$GetStaticConstantForInputType@M@MPCConstantManager@@QEAAMW4InputType@@PEBG@Z @ 0x1800F4328 (--$GetStaticConstantForInputType@M@MPCConstantManager@@QEAAMW4InputType@@PEBG@Z.c)
 * Callees:
 *     <none>
 */

std::bad_variant_access *__fastcall std::bad_variant_access::bad_variant_access(std::bad_variant_access *this)
{
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &std::bad_variant_access::`vftable';
  return this;
}
