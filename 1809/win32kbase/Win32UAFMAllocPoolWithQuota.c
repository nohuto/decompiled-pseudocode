/*
 * XREFs of Win32UAFMAllocPoolWithQuota @ 0x1C00F49B0
 * Callers:
 *     Win32UAFMAllocPoolWithQuotaZInit @ 0x1C00F4A10 (Win32UAFMAllocPoolWithQuotaZInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32UAFMAllocPoolWithQuota(__int64 a1, unsigned int a2, __int64 a3)
{
  if ( (int)IsWin32UAFMAllocPoolWithQuotaImplSupported() < 0 )
    return 0LL;
  else
    return Win32UAFMAllocPoolWithQuotaImpl(41LL, a1, a2, a3);
}
