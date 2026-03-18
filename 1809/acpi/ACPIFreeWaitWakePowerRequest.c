/*
 * XREFs of ACPIFreeWaitWakePowerRequest @ 0x1C005F440
 * Callers:
 *     ACPIDereferenceWaitWakePowerRequest @ 0x1C0024ED0 (ACPIDereferenceWaitWakePowerRequest.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1C004ADD8 (ExFreeToNPagedLookasideList.c)
 *     ACPIDelayedFreeWakeInterrupt @ 0x1C005F180 (ACPIDelayedFreeWakeInterrupt.c)
 */

void __fastcall ACPIFreeWaitWakePowerRequest(char **Entry)
{
  unsigned int v1; // edi
  char **v2; // rsi
  char *v4; // rbp
  char *v5; // r14
  __int64 v6; // r15

  v1 = *((_DWORD *)Entry + 29);
  v2 = Entry + 19;
  if ( v1 <= 1 )
    v4 = (char *)(Entry + 19);
  else
    v4 = *v2;
  if ( v1 )
  {
    v5 = v4 + 24;
    v6 = *((unsigned int *)Entry + 29);
    do
    {
      ACPIDelayedFreeWakeInterrupt(*(_DWORD *)v5, *((_QWORD *)v5 + 1));
      v5 += 40;
      --v6;
    }
    while ( v6 );
  }
  if ( v1 > 1 )
  {
    ExFreePoolWithTag(v4, 0x50706341u);
    *v2 = 0LL;
  }
  *((_DWORD *)Entry + 29) = 0;
  ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&RequestLookAsideList, Entry);
}
