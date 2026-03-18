/*
 * XREFs of NVMeCancelAllCompletionQueueDpc @ 0x1C000A6B0
 * Callers:
 *     NVMeControllerReset @ 0x1C000B7AC (NVMeControllerReset.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeCancelAllCompletionQueueDpc(__int64 a1)
{
  unsigned int v2; // ecx
  unsigned int i; // ebx
  __int64 v4; // r8
  __int64 v5; // rdx

  v2 = 0;
  for ( i = 0; ; ++i )
  {
    v5 = *(_QWORD *)(a1 + 768);
    if ( !v5 || i >= *(unsigned __int16 *)(a1 + 274) )
      break;
    v4 = v5 + 344LL * i;
    if ( *(_BYTE *)(v4 + 200) )
      v2 = StorPortExtendedFunction(95LL, a1, v4 + 216);
  }
  return v2;
}
