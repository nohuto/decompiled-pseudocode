/*
 * XREFs of sub_18007874C @ 0x18007874C
 * Callers:
 *     TpAlpcUnregisterCompletionList @ 0x1800785A0 (TpAlpcUnregisterCompletionList.c)
 *     TpAlpcRegisterCompletionList @ 0x1800785E0 (TpAlpcRegisterCompletionList.c)
 *     TpWaitForAlpcCompletion @ 0x180078640 (TpWaitForAlpcCompletion.c)
 *     TpReleaseAlpcCompletion @ 0x1800786E0 (TpReleaseAlpcCompletion.c)
 * Callees:
 *     sub_180036544 @ 0x180036544 (sub_180036544.c)
 *     sub_18010EFC8 @ 0x18010EFC8 (sub_18010EFC8.c)
 */

__int64 __fastcall sub_18007874C(PPEB_LDR_DATA Ldr, __int64 a2, __int64 a3)
{
  int v3; // r10d
  int v4; // eax
  __int64 v5; // r9

  v3 = a3;
  if ( Ldr )
  {
    LOBYTE(v4) = sub_180036544((__int64)&Ldr->ShutdownInProgress, a2);
    if ( v4 )
    {
      if ( *(__int64 (__fastcall ***)())(v5 + 80) == off_1801187B8 )
      {
        Ldr = NtCurrentPeb()->Ldr;
        if ( !Ldr->ShutdownInProgress )
          return 1LL;
      }
    }
  }
  if ( v3 || (Ldr = NtCurrentPeb()->Ldr, !Ldr->ShutdownInProgress) )
    sub_18010EFC8(Ldr, a2, a3);
  return 0LL;
}
