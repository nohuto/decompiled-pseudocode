/*
 * XREFs of EtwEventRegister @ 0x18000A640
 * Callers:
 *     sub_180007DE8 @ 0x180007DE8 (sub_180007DE8.c)
 *     sub_1800098D0 @ 0x1800098D0 (sub_1800098D0.c)
 *     SbSelectProcedure @ 0x18002CE20 (SbSelectProcedure.c)
 *     sub_18007CDAC @ 0x18007CDAC (sub_18007CDAC.c)
 *     sub_18007D76C @ 0x18007D76C (sub_18007D76C.c)
 *     sub_1800CC190 @ 0x1800CC190 (sub_1800CC190.c)
 *     sub_1800CC218 @ 0x1800CC218 (sub_1800CC218.c)
 *     sub_1800CFBE0 @ 0x1800CFBE0 (sub_1800CFBE0.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     EtwNotificationRegister @ 0x18000A800 (EtwNotificationRegister.c)
 *     RtlSetLastWin32Error @ 0x180053B90 (RtlSetLastWin32Error.c)
 */

__int64 __fastcall EtwEventRegister(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx

  if ( !a2 && a3 )
    return 87LL;
  v4 = EtwNotificationRegister(a1, 3, a2, a3, a4);
  v5 = v4;
  if ( v4 )
    RtlSetLastWin32Error(v4);
  return v5;
}
