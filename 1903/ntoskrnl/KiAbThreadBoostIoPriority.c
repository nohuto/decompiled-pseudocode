/*
 * XREFs of KiAbThreadBoostIoPriority @ 0x14011261C
 * Callers:
 *     KiAbSetMinimumThreadPriority @ 0x14009F06C (KiAbSetMinimumThreadPriority.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x14003DFD0 (PsBoostThreadIoEx.c)
 *     PsBoostThreadIoQoS @ 0x1400B57CC (PsBoostThreadIoQoS.c)
 *     KiAbQueueAutoBoostDpc @ 0x1401126E0 (KiAbQueueAutoBoostDpc.c)
 *     KiAbThreadInsertList @ 0x140133348 (KiAbThreadInsertList.c)
 */

__int64 __fastcall KiAbThreadBoostIoPriority(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  __int64 v8; // r10
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
  if ( *(_DWORD *)(v8 + a1) )
  {
    v9 = 1;
    goto LABEL_12;
  }
  if ( !a2 )
  {
    v9 = 1;
    *a4 |= (a3 != 0) + 1;
LABEL_12:
    _InterlockedAdd((volatile signed __int32 *)(v8 + a1), 1u);
    return v9;
  }
  if ( a3 )
    PsBoostThreadIoQoS(a1, 1);
  else
    PsBoostThreadIoEx(a1, 1, 0, 0LL);
  if ( (unsigned int)KiAbThreadInsertList(a1, a2, a1 + 1384) )
    KiAbQueueAutoBoostDpc((PVOID)(a2 - 25712));
  return 0;
}
