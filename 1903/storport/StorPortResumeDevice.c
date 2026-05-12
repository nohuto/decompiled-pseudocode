/*
 * XREFs of StorPortResumeDevice @ 0x1C0001EC0
 * Callers:
 *     StorPortResumeDeviceVrfy @ 0x1C0077730 (StorPortResumeDeviceVrfy.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x1C0001FF4 (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x1C000216C (DbgLogRequest.c)
 *     RaidAdapterFindUnit @ 0x1C0005F98 (RaidAdapterFindUnit.c)
 *     WPP_SF_ddd @ 0x1C00378FC (WPP_SF_ddd.c)
 *     McTemplateK0pquuu @ 0x1C0039D2C (McTemplateK0pquuu.c)
 */

char __fastcall StorPortResumeDevice(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  int v7; // r15d
  __int64 v8; // rsi
  int v9; // ecx
  __int64 Unit; // rax
  __int64 v11; // rdx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v14; // [rsp+60h] [rbp+8h]

  HIBYTE(v14) = 0;
  v7 = a1;
  v8 = **(_QWORD **)(a1 - 16);
  if ( (qword_1C00612B0 & 0x200) != 0 )
    DbgLogRequest(v8, 17, (_DWORD)retaddr, v8, 0LL, a4 | (unsigned __int64)((a3 | (a2 << 8)) << 8), 0LL);
  v9 = 255;
  if ( v8 )
    v9 = *(_DWORD *)(v8 + 56);
  if ( (Microsoft_Windows_StorPortEnableBits & 4) != 0 )
    McTemplateK0pquuu(v9, a2, a3, v7, v9, a2, a3, a4);
  if ( v8 )
  {
    LOBYTE(v14) = a2;
    BYTE1(v14) = a3;
    BYTE2(v14) = a4;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_ddd(WPP_GLOBAL_Control->AttachedDevice, 18LL, &WPP_6f3540a332da34b92ff0af100460ee8b_Traceguids, a2, a3, a4);
    }
    Unit = RaidAdapterFindUnit(v8, v14);
    if ( Unit )
    {
      v11 = Unit + 1120;
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(Unit + 1136), 134684676, 134684677) != 134684677 )
        v11 = 0LL;
      if ( v11 )
      {
        *(_DWORD *)(v11 + 32) = 6;
        *(_DWORD *)(v11 + 36) = v14;
        RaidQueueDeferredItem((PVOID)(v8 + 1088));
        return 1;
      }
      _InterlockedIncrement(&RaidUnloggedErrors);
      if ( (qword_1C00612B0 & 0x800) != 0 )
        DbgLogRequest(v8, 22, (_DWORD)retaddr, 645, 0LL, 0LL, 0LL);
    }
  }
  return 0;
}
