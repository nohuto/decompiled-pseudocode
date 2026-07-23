/*
 * XREFs of LdrpHandleUnprotectedDelayLoad @ 0x1800D0A78
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x180041E90 (LdrResolveDelayLoadedAPI.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     LdrpGetDelayloadExportDll @ 0x1800221EC (LdrpGetDelayloadExportDll.c)
 *     LdrpRedirectDelayloadFailure @ 0x1800847EC (LdrpRedirectDelayloadFailure.c)
 *     LdrpResolveDelayloadAddress @ 0x1800D0B9C (LdrpResolveDelayloadAddress.c)
 */

__int64 __fastcall LdrpHandleUnprotectedDelayLoad(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__int64, _QWORD *),
        __int64 (__fastcall *a4)(__int64, const char *),
        __int64 *a5,
        unsigned int a6)
{
  __int64 v10; // rdi
  NTSTATUS Status; // ebx
  __int64 v12; // r8
  int DelayloadExportDll; // [rsp+40h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-20h] BYREF

  v10 = 0LL;
  DelayloadExportDll = LdrpGetDelayloadExportDll(a1, a2, (__int64 *)&BaseAddress, a6, (__int64)a5);
  Status = DelayloadExportDll;
  if ( DelayloadExportDll >= 0 )
  {
    if ( g_ShimsEnabled )
      v12 = MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnSE_GetProcAddressForCaller, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
    else
      v12 = 0LL;
    v10 = LdrpResolveDelayloadAddress(a1, (_DWORD)BaseAddress, a2, (_DWORD)a5, v12, (__int64)&DelayloadExportDll);
    LdrpDereferenceModule((char *)BaseAddress);
    Status = DelayloadExportDll;
  }
  if ( Status >= 0
    || (v10 = LdrpRedirectDelayloadFailure(a1, (__int64)BaseAddress, a2, a3, a4, (__int64)a5, Status)) != 0
    && ((unsigned int)(Status + 1073741512) <= 1 || Status == -1073740671) )
  {
    *a5 = v10;
  }
  return v10;
}
