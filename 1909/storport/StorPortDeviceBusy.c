/*
 * XREFs of StorPortDeviceBusy @ 0x1C003C590
 * Callers:
 *     StorPortDeviceBusyVrfy @ 0x1C0078190 (StorPortDeviceBusyVrfy.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x1C0001FA4 (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x1C000211C (DbgLogRequest.c)
 *     RaidAdapterFindUnit @ 0x1C0005FE8 (RaidAdapterFindUnit.c)
 *     WPP_SF_dddd @ 0x1C003F8CC (WPP_SF_dddd.c)
 */

char __fastcall StorPortDeviceBusy(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4, unsigned int a5)
{
  char v6; // r12
  unsigned __int8 v7; // r14
  int v8; // edi
  __int64 v9; // rsi
  __int64 Unit; // rax
  __int64 v11; // rdx
  __int64 retaddr; // [rsp+68h] [rbp+0h]
  int v14; // [rsp+70h] [rbp+8h]

  v6 = a3;
  v7 = a2;
  HIBYTE(v14) = 0;
  v8 = (unsigned __int8)a3;
  v9 = **(_QWORD **)(a1 - 16);
  if ( (qword_1C00622B0 & 0x200) != 0 )
    DbgLogRequest(
      v9,
      20,
      retaddr,
      v9,
      a5,
      a4 | (unsigned __int64)(((unsigned __int8)a3 | ((unsigned __int8)a2 << 8)) << 8),
      0LL);
  if ( !v9 )
    return 0;
  LOBYTE(v14) = v7;
  BYTE1(v14) = v6;
  BYTE2(v14) = a4;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_dddd(WPP_GLOBAL_Control->AttachedDevice, a2, a3, v7, v8, a4, a5);
  }
  Unit = RaidAdapterFindUnit(v9, v14);
  if ( !Unit )
    return 0;
  ++*(_DWORD *)(Unit + 2124);
  v11 = Unit + 1456;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(Unit + 1472), 134684676, 134684677) != 134684677 )
    v11 = 0LL;
  if ( !v11 )
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_1C00622B0 & 0x800) != 0 )
      DbgLogRequest(v9, 22, retaddr, 850LL, 0LL, 0LL, 0LL);
    return 0;
  }
  *(_DWORD *)(v11 + 32) = 9;
  *(_DWORD *)(v11 + 36) = v14;
  *(_DWORD *)(v11 + 40) = a5;
  RaidQueueDeferredItem((char *)(v9 + 1088), (struct _SLIST_ENTRY *)v11);
  return 1;
}
