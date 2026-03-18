/*
 * XREFs of PiPnpRtlObjectEventDispatch @ 0x1405BB8DC
 * Callers:
 *     PiPnpRtlEndOperation @ 0x1405BB924 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406FBDA0 (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     PiDqObjectManagerHandleObjectEvent @ 0x140716F5C (PiDqObjectManagerHandleObjectEvent.c)
 *     PiDqGetObjectManagerForPnpObjectType @ 0x14071704C (PiDqGetObjectManagerForPnpObjectType.c)
 *     PiDcHandleObjectEvent @ 0x140725594 (PiDcHandleObjectEvent.c)
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
