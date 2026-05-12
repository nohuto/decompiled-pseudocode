/*
 * XREFs of StorPortDeviceReady @ 0x1C003B330
 * Callers:
 *     StorPortDeviceReadyVrfy @ 0x1C00771B0 (StorPortDeviceReadyVrfy.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x1C0001FF4 (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x1C000216C (DbgLogRequest.c)
 *     RaidAdapterFindUnit @ 0x1C0005F98 (RaidAdapterFindUnit.c)
 *     WPP_SF_ddd @ 0x1C00378FC (WPP_SF_ddd.c)
 */

char __fastcall StorPortDeviceReady(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  int v7; // edi
  __int64 v8; // rsi
  __int64 Unit; // rax
  __int64 v10; // rdx
  __int64 v12; // [rsp+20h] [rbp-38h]
  __int64 v13; // [rsp+28h] [rbp-30h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  int v15; // [rsp+60h] [rbp+8h]

  HIBYTE(v15) = 0;
  v7 = a3;
  v8 = **(_QWORD **)(a1 - 16);
  if ( (qword_1C00612B0 & 0x200) != 0 )
    DbgLogRequest(v8, 21, retaddr, v8, 0LL, a4 | (unsigned __int64)((a3 | (a2 << 8)) << 8), 0LL);
  if ( !v8 )
    return 0;
  LOBYTE(v15) = a2;
  BYTE1(v15) = a3;
  BYTE2(v15) = a4;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    LODWORD(v13) = a4;
    LODWORD(v12) = v7;
    WPP_SF_ddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x14u,
      (__int64)&WPP_6f3540a332da34b92ff0af100460ee8b_Traceguids,
      a2,
      v12,
      v13);
  }
  Unit = RaidAdapterFindUnit(v8, v15);
  if ( !Unit )
    return 0;
  v10 = Unit + 1280;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(Unit + 1296), 134684676, 134684677) != 134684677 )
    v10 = 0LL;
  if ( !v10 )
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_1C00612B0 & 0x800) != 0 )
      DbgLogRequest(v8, 22, retaddr, 940LL, 0LL, 0LL, 0LL);
    return 0;
  }
  *(_DWORD *)(v10 + 32) = 10;
  *(_DWORD *)(v10 + 36) = v15;
  RaidQueueDeferredItem((char *)(v8 + 1088), (struct _SLIST_ENTRY *)v10);
  return 1;
}
