/*
 * XREFs of RaidAdapterPnpIrp @ 0x1C0016FAC
 * Callers:
 *     RaDriverPnpIrp @ 0x1C0008220 (RaDriverPnpIrp.c)
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x1C00062A4 (RaidAcquireAdapterRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C000CF10 (RaidCompleteRequestEx.c)
 *     RaidAdapterDeviceUsageNotificationIrp @ 0x1C0016E3C (RaidAdapterDeviceUsageNotificationIrp.c)
 *     RaForwardIrp @ 0x1C00171EC (RaForwardIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0017234 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C001B7F8 (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterQueryInterfaceIrp @ 0x1C002290C (RaidAdapterQueryInterfaceIrp.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     McTemplateK0pd @ 0x1C0036554 (McTemplateK0pd.c)
 *     McTemplateK0pddp @ 0x1C0036654 (McTemplateK0pddp.c)
 *     RaidAdapterQueryIdIrp @ 0x1C00389F4 (RaidAdapterQueryIdIrp.c)
 *     WPP_SF_qqD @ 0x1C003BC48 (WPP_SF_qqD.c)
 *     WPP_SF_qqDD @ 0x1C003BCA8 (WPP_SF_qqDD.c)
 *     RaidAdapterQueryCapabilitiesIrp @ 0x1C006B3E8 (RaidAdapterQueryCapabilitiesIrp.c)
 *     RaidAdapterQueryPnpDeviceStateIrp @ 0x1C006B478 (RaidAdapterQueryPnpDeviceStateIrp.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C0070B50 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterCancelRemoveDeviceIrp @ 0x1C0072554 (RaidAdapterCancelRemoveDeviceIrp.c)
 *     RaidAdapterQueryRemoveDeviceIrp @ 0x1C0073C58 (RaidAdapterQueryRemoveDeviceIrp.c)
 *     RaidAdapterQueryStopDeviceIrp @ 0x1C0073CFC (RaidAdapterQueryStopDeviceIrp.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1C0073F5C (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C0074084 (RaidAdapterStopDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C0074244 (RaidAdapterSurpriseRemovalIrp.c)
 */

__int64 __fastcall RaidAdapterPnpIrp(__int64 Context, PIRP Irp)
{
  int v4; // edx
  signed int v5; // esi
  unsigned int MinorFunction; // ebp
  int v7; // ecx
  int v8; // eax
  char v9; // r14
  unsigned int InterfaceIrp; // eax
  unsigned int v11; // esi
  __int64 v13; // rcx
  _QWORD v14[2]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v15[2]; // [rsp+50h] [rbp-48h] BYREF

  v14[0] = 0LL;
  v14[1] = 0LL;
  v5 = RaidAcquireAdapterRemoveLock(Context);
  MinorFunction = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(Irp, v14);
    if ( MinorFunction > 0x16 || (v8 = 4718720, !_bittest(&v8, MinorFunction)) )
    {
      if ( (byte_1C00617E2 & 0x20) != 0 )
        McTemplateK0pddp(v7, v4, (unsigned int)v14, (_DWORD)Irp, MinorFunction, 0, *(_QWORD *)(Context + 8));
    }
  }
  if ( v5 < 0 && (v5 != -1073741738 || MinorFunction != 2 || *(_DWORD *)(Context + 88) != 5) )
  {
    Irp->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(Irp, 0, v5);
  }
  v9 = 1;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      12LL,
      &WPP_2427d071e20036a288b852fd33055616_Traceguids,
      Context,
      Irp,
      MinorFunction);
  }
  if ( MinorFunction > 7 )
  {
    switch ( MinorFunction )
    {
      case 8u:
        InterfaceIrp = RaidAdapterQueryInterfaceIrp(Context, Irp);
        break;
      case 9u:
        InterfaceIrp = RaidAdapterQueryCapabilitiesIrp(Context, Irp);
        break;
      case 0xDu:
        InterfaceIrp = RaidAdapterFilterResourceRequirementsIrp(Context, Irp);
        break;
      case 0x13u:
        if ( StorEtwLoggingEnabled && (byte_1C00617E2 & 0x20) != 0 )
          McTemplateK0pddp(
            Irp->Tail.Overlay.CurrentStackLocation,
            v4,
            (unsigned int)v14,
            (_DWORD)Irp,
            19,
            Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length,
            *(_QWORD *)(Context + 8));
        InterfaceIrp = RaidAdapterQueryIdIrp(Context, Irp);
        break;
      case 0x14u:
        InterfaceIrp = RaidAdapterQueryPnpDeviceStateIrp(Context, Irp);
        break;
      case 0x16u:
        if ( StorEtwLoggingEnabled && (byte_1C00617E2 & 0x20) != 0 )
          McTemplateK0pddp(
            Irp->Tail.Overlay.CurrentStackLocation,
            v4,
            (unsigned int)v14,
            (_DWORD)Irp,
            22,
            Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options,
            *(_QWORD *)(Context + 8));
        InterfaceIrp = RaidAdapterDeviceUsageNotificationIrp(Context, Irp);
        break;
      case 0x17u:
        v9 = 0;
        InterfaceIrp = RaidAdapterSurpriseRemovalIrp(Context, Irp);
        break;
      default:
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 272));
        v9 = 0;
        if ( StorEtwLoggingEnabled )
        {
          v15[0] = 0LL;
          v15[1] = 0LL;
          IoGetActivityIdIrp(Irp, v15);
          if ( (byte_1C00617E2 & 0x20) != 0 )
            McTemplateK0pd(v13, &EventPnpRequestComplete, v15, Irp, Irp->IoStatus.Status);
        }
        InterfaceIrp = RaForwardIrp(*(_QWORD *)(Context + 24), Irp);
        break;
    }
    goto LABEL_13;
  }
  switch ( MinorFunction )
  {
    case 7u:
      if ( StorEtwLoggingEnabled && (byte_1C00617E2 & 0x20) != 0 )
        McTemplateK0pddp(
          Irp->Tail.Overlay.CurrentStackLocation,
          v4,
          (unsigned int)v14,
          (_DWORD)Irp,
          7,
          Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length,
          *(_QWORD *)(Context + 8));
      InterfaceIrp = RaidAdapterQueryDeviceRelationsIrp(Context, Irp);
      break;
    case 0u:
      InterfaceIrp = RaidAdapterStartDeviceIrp((PVOID)Context, Irp);
      break;
    case 1u:
      InterfaceIrp = RaidAdapterQueryRemoveDeviceIrp(Context, Irp);
      break;
    case 2u:
      v9 = 0;
      InterfaceIrp = RaidAdapterRemoveDeviceIrp(Context, Irp);
      break;
    case 3u:
      goto LABEL_52;
    case 4u:
      InterfaceIrp = RaidAdapterStopDeviceIrp(Context, Irp);
      break;
    case 5u:
      InterfaceIrp = RaidAdapterQueryStopDeviceIrp(Context, Irp);
      break;
    default:
LABEL_52:
      InterfaceIrp = RaidAdapterCancelRemoveDeviceIrp(Context, Irp);
      break;
  }
LABEL_13:
  v11 = InterfaceIrp;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      13LL,
      &WPP_2427d071e20036a288b852fd33055616_Traceguids,
      Context,
      Irp,
      MinorFunction,
      InterfaceIrp);
  }
  if ( v9 )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 272));
  return v11;
}
