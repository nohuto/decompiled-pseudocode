/*
 * XREFs of atmfdLoadFontFile @ 0x1C027D860
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     InitializeDriver @ 0x1C027D530 (InitializeDriver.c)
 */

__int64 __fastcall atmfdLoadFontFile(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  if ( (unsigned int)InitializeDriver() )
    return ((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64, __int64, int, int))pAtmfdLoadFontFile)(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7);
  else
    return 0LL;
}
