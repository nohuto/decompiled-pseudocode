/*
 * XREFs of PiPnpRtlObjectEventDispatch @ 0x140595C5C
 * Callers:
 *     PiPnpRtlEndOperation @ 0x140595CA4 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406F1F40 (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     PiDcHandleObjectEvent @ 0x1406EBE74 (PiDcHandleObjectEvent.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x1406F9440 (PiDqObjectManagerHandleObjectEvent.c)
 *     PiDqGetObjectManagerForPnpObjectType @ 0x1406F9530 (PiDqGetObjectManagerForPnpObjectType.c)
 */

__int64 __fastcall PiPnpRtlObjectEventDispatch(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 4);
  if ( (result & 0xB) != 0 || *(_DWORD *)(a1 + 76) )
  {
    PiDcHandleObjectEvent();
    result = PiDqGetObjectManagerForPnpObjectType(*(unsigned int *)(*(_QWORD *)(a1 + 8) + 28LL));
    if ( result )
      return PiDqObjectManagerHandleObjectEvent(result, a1);
  }
  return result;
}
