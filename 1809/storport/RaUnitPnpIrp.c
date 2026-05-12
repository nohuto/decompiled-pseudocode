/*
 * XREFs of RaUnitPnpIrp @ 0x1C00082C0
 * Callers:
 *     RaDriverPnpIrp @ 0x1C0008220 (RaDriverPnpIrp.c)
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C0009540 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C0009580 (RaUnitAcquireRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C000CF10 (RaidCompleteRequestEx.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C001652C (RaUnitDeviceUsageNotificationIrp.c)
 *     RaUnitQueryInterfaceIrp @ 0x1C0022A24 (RaUnitQueryInterfaceIrp.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C00252E0 (RaUnitRemoveDeviceIrp.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     McTemplateK0pddp @ 0x1C0036654 (McTemplateK0pddp.c)
 *     WPP_SF_qqD @ 0x1C003BC48 (WPP_SF_qqD.c)
 *     WPP_SF_qqDD @ 0x1C003BCA8 (WPP_SF_qqDD.c)
 *     RaUnitQueryDeviceRelationsIrp @ 0x1C006A270 (RaUnitQueryDeviceRelationsIrp.c)
 *     RaUnitQueryPnpDeviceStateIrp @ 0x1C006A980 (RaUnitQueryPnpDeviceStateIrp.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C006A9D0 (RaUnitQueryCapabilitiesIrp.c)
 *     RaUnitStartDeviceIrp @ 0x1C006D6C8 (RaUnitStartDeviceIrp.c)
 *     RaUnitQueryIdIrp @ 0x1C006DE84 (RaUnitQueryIdIrp.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C006DF9C (RaUnitQueryDeviceTextIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C006E2BC (RaUnitSurpriseRemovalIrp.c)
 *     RaUnitIgnorePnpIrp @ 0x1C00706D4 (RaUnitIgnorePnpIrp.c)
 *     RaUnitSucceedPnpIrp @ 0x1C0070DB8 (RaUnitSucceedPnpIrp.c)
 *     RaUnitCancelStopDeviceIrp @ 0x1C0074BF8 (RaUnitCancelStopDeviceIrp.c)
 *     RaUnitQueryRemoveDeviceIrp @ 0x1C0074C28 (RaUnitQueryRemoveDeviceIrp.c)
 *     RaUnitQueryStopDeviceIrp @ 0x1C0074C74 (RaUnitQueryStopDeviceIrp.c)
 *     RaUnitStopDeviceIrp @ 0x1C0074CAC (RaUnitStopDeviceIrp.c)
 */

__int64 __fastcall RaUnitPnpIrp(__int64 a1, IRP *a2, __int64 a3)
{
  char v3; // r14
  int v6; // edx
  int v7; // edi
  unsigned int MinorFunction; // ebp
  int v9; // ecx
  int v10; // eax
  PDEVICE_OBJECT v11; // rcx
  unsigned int CapabilitiesIrp; // eax
  unsigned int v13; // edi
  _QWORD v15[2]; // [rsp+40h] [rbp-48h] BYREF

  v3 = 1;
  LOBYTE(a3) = 1;
  v15[0] = 0LL;
  v15[1] = 0LL;
  v7 = RaUnitAcquireRemoveLock(a1, a2, a3);
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(a2, v15);
    if ( MinorFunction > 0x16 || (v10 = 4718720, !_bittest(&v10, MinorFunction)) )
    {
      if ( (byte_1C00617E2 & 0x20) != 0 )
        McTemplateK0pddp(v9, v6, (unsigned int)v15, (_DWORD)a2, MinorFunction, 0, *(_QWORD *)(a1 + 8));
    }
  }
  if ( v7 < 0 )
  {
    a2->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(a2);
  }
  v11 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      10LL,
      &WPP_d11a79b88e3f3e003d260997dd6ff069_Traceguids,
      a1,
      a2,
      MinorFunction);
  }
  if ( MinorFunction > 8 )
  {
    if ( MinorFunction == 9 )
    {
      CapabilitiesIrp = RaUnitQueryCapabilitiesIrp(a1, a2);
      goto LABEL_20;
    }
    if ( MinorFunction <= 0xB )
    {
      CapabilitiesIrp = RaUnitSucceedPnpIrp(v11, a2);
      goto LABEL_20;
    }
    switch ( MinorFunction )
    {
      case 0x13u:
        if ( StorEtwLoggingEnabled && (byte_1C00617E2 & 0x20) != 0 )
          McTemplateK0pddp(
            a2->Tail.Overlay.CurrentStackLocation,
            v6,
            (unsigned int)v15,
            (_DWORD)a2,
            19,
            a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length,
            *(_QWORD *)(a1 + 8));
        CapabilitiesIrp = RaUnitQueryIdIrp(a1, a2);
        goto LABEL_20;
      case 0x14u:
        CapabilitiesIrp = RaUnitQueryPnpDeviceStateIrp(a1, a2);
        goto LABEL_20;
      case 0xCu:
        CapabilitiesIrp = RaUnitQueryDeviceTextIrp(a1, a2);
        goto LABEL_20;
      case 0x16u:
        if ( StorEtwLoggingEnabled && (byte_1C00617E2 & 0x20) != 0 )
          McTemplateK0pddp(
            a2->Tail.Overlay.CurrentStackLocation,
            v6,
            (unsigned int)v15,
            (_DWORD)a2,
            22,
            a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options,
            *(_QWORD *)(a1 + 8));
        CapabilitiesIrp = RaUnitDeviceUsageNotificationIrp(a1, a2);
        goto LABEL_20;
    }
    if ( MinorFunction != 23 )
    {
      CapabilitiesIrp = RaUnitIgnorePnpIrp(v11, a2);
      goto LABEL_20;
    }
    CapabilitiesIrp = RaUnitSurpriseRemovalIrp(a1, a2);
    goto LABEL_50;
  }
  switch ( MinorFunction )
  {
    case 8u:
      CapabilitiesIrp = RaUnitQueryInterfaceIrp(a1, a2);
      break;
    case 0u:
      CapabilitiesIrp = RaUnitStartDeviceIrp(a1, a2);
      break;
    case 1u:
      CapabilitiesIrp = RaUnitQueryRemoveDeviceIrp(a1, a2);
      break;
    case 2u:
      CapabilitiesIrp = RaUnitRemoveDeviceIrp(a1, a2);
LABEL_50:
      v3 = 0;
      break;
    case 3u:
LABEL_55:
      CapabilitiesIrp = RaUnitCancelStopDeviceIrp(a1, a2);
      break;
    case 4u:
      CapabilitiesIrp = RaUnitStopDeviceIrp(a1, a2);
      break;
    case 5u:
      CapabilitiesIrp = RaUnitQueryStopDeviceIrp(a1, a2);
      break;
    case 6u:
      goto LABEL_55;
    default:
      if ( StorEtwLoggingEnabled && (byte_1C00617E2 & 0x20) != 0 )
        McTemplateK0pddp(
          a2->Tail.Overlay.CurrentStackLocation,
          v6,
          (unsigned int)v15,
          (_DWORD)a2,
          7,
          a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length,
          *(_QWORD *)(a1 + 8));
      CapabilitiesIrp = RaUnitQueryDeviceRelationsIrp(a1, a2);
      break;
  }
LABEL_20:
  v13 = CapabilitiesIrp;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      11LL,
      &WPP_d11a79b88e3f3e003d260997dd6ff069_Traceguids,
      a1,
      a2,
      MinorFunction,
      CapabilitiesIrp);
  }
  if ( v3 )
    RaUnitReleaseRemoveLock(a1);
  return v13;
}
