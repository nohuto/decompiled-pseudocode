/*
 * XREFs of StorpRequestTimer @ 0x1C000FA98
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000E3C0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAdapterRequestAddtionalTimerDeferred @ 0x1C0025E20 (RaidAdapterRequestAddtionalTimerDeferred.c)
 *     WPP_SF_q @ 0x1C003BA90 (WPP_SF_q.c)
 *     WPP_SF_qqq @ 0x1C003BD14 (WPP_SF_qqq.c)
 */

__int64 __fastcall StorpRequestTimer(
        __int64 a1,
        __int64 a2,
        signed __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6)
{
  unsigned int v6; // ebx
  __int64 v9; // r9
  _DWORD *v10; // rcx
  _DWORD *v11; // rax
  __int64 v12; // r10
  unsigned __int64 v13; // r8
  PDEVICE_OBJECT v15; // rcx
  __int64 v16; // rdx

  v6 = 0;
  v9 = a1;
  if ( !a1 || !a2 || !a3 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qqq(WPP_GLOBAL_Control->AttachedDevice, 72LL, &WPP_890ff0257e5a37fc61b1814295f1a13c_Traceguids, a1, a2, a3);
    }
    return 3238002694LL;
  }
  v10 = **(_DWORD ***)(a1 - 16);
  if ( !v10 || *v10 )
  {
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v16 = 73LL;
    goto LABEL_31;
  }
  v11 = *(_DWORD **)a2;
  if ( !*(_QWORD *)a2 || *v11 )
  {
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v16 = 74LL;
    v9 = a2;
LABEL_31:
    WPP_SF_q(v15->AttachedDevice, v16, &WPP_890ff0257e5a37fc61b1814295f1a13c_Traceguids, v9);
    return 3238002694LL;
  }
  if ( a5 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 136), a3, 0LL) )
    {
      return (unsigned int)-1056964596;
    }
    else
    {
      v12 = -10 * a5;
      *(_QWORD *)(a2 + 144) = a4;
      if ( a6 < 0x7D00 )
      {
        LODWORD(v13) = 0;
      }
      else
      {
        v13 = a6 / 0x3E8;
        if ( a6 != 1000 * (a6 / 0x3E8) )
          LODWORD(v13) = v13 + 1;
      }
      if ( KeGetCurrentIrql() > 2u )
        return (unsigned int)RaidAdapterRequestAddtionalTimerDeferred(v10, a2, v12, (unsigned int)v13);
      else
        KeSetCoalescableTimer((PKTIMER)(a2 + 8), (LARGE_INTEGER)v12, 0, v13, (PKDPC)(a2 + 72));
    }
  }
  else if ( v10 == v11 && a3 == *(_QWORD *)(a2 + 136) )
  {
    _InterlockedExchange64((volatile __int64 *)(a2 + 136), 0LL);
    KeCancelTimer((PKTIMER)(a2 + 8));
  }
  else
  {
    return (unsigned int)-1056964602;
  }
  return v6;
}
