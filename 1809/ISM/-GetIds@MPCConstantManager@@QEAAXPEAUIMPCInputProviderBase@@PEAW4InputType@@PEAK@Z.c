/*
 * XREFs of ?GetIds@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@PEAW4InputType@@PEAK@Z @ 0x180048104
 * Callers:
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z @ 0x1800F3C58 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z.c)
 *     ??$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@PEBG@Z @ 0x1800F3DD4 (--$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@PEBG@Z.c)
 *     ??$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@PEBG@Z @ 0x1800F41BC (--$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@PEBG@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCConstantManager::GetIds(
        MPCConstantManager *this,
        struct IMPCInputProviderBase *a2,
        enum InputType *a3,
        unsigned int *a4)
{
  if ( a4 )
    *a4 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 88LL))(a2);
  if ( a3 )
    *(_DWORD *)a3 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 48LL))(a2);
}
