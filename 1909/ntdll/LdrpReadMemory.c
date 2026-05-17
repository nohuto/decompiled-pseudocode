/*
 * XREFs of LdrpReadMemory @ 0x180062694
 * Callers:
 *     LdrpGetModuleName @ 0x1800622B8 (LdrpGetModuleName.c)
 *     LdrQueryNextListEntry @ 0x180062560 (LdrQueryNextListEntry.c)
 *     LdrQueryModuleInfoFromLdrEntry @ 0x180062580 (LdrQueryModuleInfoFromLdrEntry.c)
 *     LdrQueryInLoadOrderModuleList32 @ 0x180082F40 (LdrQueryInLoadOrderModuleList32.c)
 *     LdrQueryModuleInfoFromLdrEntry32 @ 0x1800CE770 (LdrQueryModuleInfoFromLdrEntry32.c)
 *     LdrQueryNextListEntry32 @ 0x1800CE920 (LdrQueryNextListEntry32.c)
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800CE954 (LdrQueryProcessModuleInformationEx2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LdrpReadMemory(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // [rsp+40h] [rbp+8h]

  result = (*(__int64 (__fastcall **)(_QWORD))(a1 + 8))(*(_QWORD *)a1);
  if ( (int)result >= 0 )
    return a4 != v6 ? 0x8000000D : 0;
  return result;
}
