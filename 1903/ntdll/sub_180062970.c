/*
 * XREFs of sub_180062970 @ 0x180062970
 * Callers:
 *     TpWaitForIoCompletion @ 0x180062640 (TpWaitForIoCompletion.c)
 *     TpCancelAsyncIoOperation @ 0x1800626B0 (TpCancelAsyncIoOperation.c)
 *     TpReleaseIoCompletion @ 0x180062720 (TpReleaseIoCompletion.c)
 * Callees:
 *     sub_180036544 @ 0x180036544 (sub_180036544.c)
 *     sub_18010EFC8 @ 0x18010EFC8 (sub_18010EFC8.c)
 */

__int64 __fastcall sub_180062970(struct _PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3)
{
  int v3; // r10d
  struct _PEB_LDR_DATA *v4; // r9
  int v5; // eax

  v3 = a3;
  v4 = Ldr;
  if ( Ldr )
  {
    LOBYTE(v5) = sub_180036544((__int64)Ldr, a2);
    if ( v5 )
    {
      if ( v4->SsHandle == off_180118410 )
      {
        Ldr = NtCurrentPeb()->Ldr;
        if ( !Ldr->ShutdownInProgress )
          return 1LL;
      }
    }
  }
  if ( v3 || (Ldr = NtCurrentPeb()->Ldr, !Ldr->ShutdownInProgress) )
    sub_18010EFC8(Ldr, a2, a3, v4);
  return 0LL;
}
