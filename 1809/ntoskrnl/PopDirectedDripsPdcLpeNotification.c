/*
 * XREFs of PopDirectedDripsPdcLpeNotification @ 0x140869620
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueDirectedDripsWork @ 0x1402D6D58 (PopQueueDirectedDripsWork.c)
 */

__int64 __fastcall PopDirectedDripsPdcLpeNotification(__int64 a1, int a2)
{
  unsigned int v2; // r8d
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx

  v2 = 0;
  if ( _InterlockedExchangeAdd(&PopDirectedDripsEngaged, 0) )
  {
    *(_BYTE *)(a1 + 212) = a2 == 1;
    v4 = 16842752LL;
    if ( a2 != 1 )
      v4 = 0x201010000LL;
    v5 = v4 & 0xFFFFFFFDFFFFFFFFuLL;
    if ( !PopDirectedDripsEnableV2 )
      v5 = v4;
    PopQueueDirectedDripsWork((struct _KEVENT *)a1, v5);
    return 259;
  }
  return v2;
}
