/*
 * XREFs of RaidAdapterPnpIrp @ 0x1C0012660
 * Callers:
 *     RaDriverPnpIrp @ 0x1C0006A40 (RaDriverPnpIrp.c)
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x1C0007118 (RaidAcquireAdapterRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C000A830 (RaidCompleteRequestEx.c)
 *     RaidAdapterDeviceUsageNotificationIrp @ 0x1C00121C0 (RaidAdapterDeviceUsageNotificationIrp.c)
 *     RaForwardIrp @ 0x1C00122C4 (RaForwardIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C00128A0 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0019D3C (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterQueryInterfaceIrp @ 0x1C001F2D4 (RaidAdapterQueryInterfaceIrp.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 *     McTemplateK0pd @ 0x1C0031DD4 (McTemplateK0pd.c)
 *     McTemplateK0pddp @ 0x1C0031ED4 (McTemplateK0pddp.c)
 *     RaidAdapterQueryIdIrp @ 0x1C00345D4 (RaidAdapterQueryIdIrp.c)
 *     WPP_SF_qqD @ 0x1C0037B10 (WPP_SF_qqD.c)
 *     WPP_SF_qqDD @ 0x1C0037B70 (WPP_SF_qqDD.c)
 *     RaidAdapterQueryPnpDeviceStateIrp @ 0x1C006A970 (RaidAdapterQueryPnpDeviceStateIrp.c)
 *     RaidAdapterQueryCapabilitiesIrp @ 0x1C006ABD8 (RaidAdapterQueryCapabilitiesIrp.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C006F31C (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterCancelRemoveDeviceIrp @ 0x1C00719A0 (RaidAdapterCancelRemoveDeviceIrp.c)
 *     RaidAdapterQueryRemoveDeviceIrp @ 0x1C007310C (RaidAdapterQueryRemoveDeviceIrp.c)
 *     RaidAdapterQueryStopDeviceIrp @ 0x1C00731B0 (RaidAdapterQueryStopDeviceIrp.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1C00733FC (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C0073524 (RaidAdapterStopDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C00736F4 (RaidAdapterSurpriseRemovalIrp.c)
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
      if ( (byte_1C0061742 & 0x20) != 0 )
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
      &WPP_a09e26a5f087304ee2330933c6b86cea_Traceguids,
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
        if ( StorEtwLoggingEnabled && (byte_1C0061742 & 0x20) != 0 )
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
        if ( StorEtwLoggingEnabled && (byte_1C0061742 & 0x20) != 0 )
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
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 256));
        v9 = 0;
        if ( StorEtwLoggingEnabled )
        {
          v15[0] = 0LL;
          v15[1] = 0LL;
          IoGetActivityIdIrp(Irp, v15);
          if ( (byte_1C0061742 & 0x20) != 0 )
            McTemplateK0pd(v13, &EventPnpRequestComplete, v15, Irp, Irp->IoStatus.Status);
        }
        InterfaceIrp = RaForwardIrp(*(struct _DEVICE_OBJECT **)(Context + 24), Irp);
        break;
    }
    goto LABEL_13;
  }
  switch ( MinorFunction )
  {
    case 7u:
      if ( StorEtwLoggingEnabled && (byte_1C0061742 & 0x20) != 0 )
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
      &WPP_a09e26a5f087304ee2330933c6b86cea_Traceguids,
      Context,
      Irp,
      MinorFunction,
      InterfaceIrp);
  }
  if ( v9 )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 256));
  return v11;
}
