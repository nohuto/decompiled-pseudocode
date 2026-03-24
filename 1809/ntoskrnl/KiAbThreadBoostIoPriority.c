/*
 * XREFs of KiAbThreadBoostIoPriority @ 0x14010ED14
 * Callers:
 *     KiAbSetMinimumThreadPriority @ 0x1400245F0 (KiAbSetMinimumThreadPriority.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x1400BBF90 (PsBoostThreadIoEx.c)
 *     PsBoostThreadIoQoS @ 0x14010A67C (PsBoostThreadIoQoS.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010EDDC (KiAbQueueAutoBoostDpc.c)
 *     KiAbThreadInsertList @ 0x140128DD8 (KiAbThreadInsertList.c)
 */

__int64 __fastcall KiAbThreadBoostIoPriority(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  __int64 v8; // rdx
  unsigned int v9; // ecx
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( a3 )
  {
    PsBoostThreadIoQoS(a1, 0);
    v8 = 1416LL;
  }
  else
  {
    PsBoostThreadIoEx(a1, 0, 0, 0LL);
    v8 = 1412LL;
  }
  _InterlockedOr(v11, 0);
  if ( *(_DWORD *)(a1 + v8) )
  {
    v9 = 1;
    goto LABEL_12;
  }
  if ( !a2 )
  {
    v9 = 1;
    *a4 |= (a3 != 0) + 1;
LABEL_12:
    _InterlockedAdd((volatile signed __int32 *)(a1 + v8), 1u);
    return v9;
  }
  if ( a3 )
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 1804));
  else
    PsBoostThreadIoEx(a1, 1, 0, 0LL);
  if ( (unsigned int)KiAbThreadInsertList(a1, a2, a1 + 1384) )
    KiAbQueueAutoBoostDpc((PVOID)(a2 - 25712));
  return 0;
}
