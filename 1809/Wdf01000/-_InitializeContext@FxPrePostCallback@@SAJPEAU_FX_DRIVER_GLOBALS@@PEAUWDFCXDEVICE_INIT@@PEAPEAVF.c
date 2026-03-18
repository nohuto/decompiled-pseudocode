/*
 * XREFs of ?_InitializeContext@FxPrePostCallback@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFCXDEVICE_INIT@@PEAPEAVFxCxPnpPowerCallbackContext@@W4FxCxCallbackType@@@Z @ 0x1C0088A3C
 * Callers:
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0053ED0 (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0007910 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00343B4 (WPP_IFR_SF_.c)
 */

__int64 __fastcall FxPrePostCallback::_InitializeContext(
        _FX_DRIVER_GLOBALS *Globals,
        WDFCXDEVICE_INIT *CxInit,
        FxCxPnpPowerCallbackContext **Context,
        unsigned __int8 CallbackType)
{
  void *EvtCxDevicePreD0EntryFailedCleanup; // rdx
  unsigned int v9; // edi
  void *EvtCxDevicePreSelfManagedIoSuspend; // rax
  void *EvtCxDevicePostSelfManagedIoSuspend; // rcx
  FxCxPnpPowerCallbackContext *v12; // rax
  FxCxPnpPowerCallbackContext *v13; // rcx
  unsigned int v15; // edi
  unsigned int v16; // edi
  unsigned int v17; // edi
  int (__fastcall *EvtCxDevicePostD0Exit)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *); // rax
  void (__fastcall *EvtCxDevicePreSelfManagedIoRestartFailedCleanup)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *); // rax
  unsigned int v20; // edi
  unsigned int v21; // edi
  unsigned int v22; // edi
  void *Caller; // [rsp+38h] [rbp+0h]

  EvtCxDevicePreD0EntryFailedCleanup = 0LL;
  v9 = CallbackType;
  if ( CallbackType > 5u )
  {
    switch ( CallbackType )
    {
      case 6u:
        EvtCxDevicePreSelfManagedIoSuspend = CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePreSelfManagedIoSuspend;
        EvtCxDevicePostSelfManagedIoSuspend = CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePostSelfManagedIoSuspend;
        break;
      case 7u:
        EvtCxDevicePreSelfManagedIoSuspend = CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePreSelfManagedIoFlush;
        EvtCxDevicePostSelfManagedIoSuspend = CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePostSelfManagedIoFlush;
        break;
      case 8u:
        EvtCxDevicePreSelfManagedIoSuspend = CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePreSelfManagedIoCleanup;
        EvtCxDevicePostSelfManagedIoSuspend = CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePostSelfManagedIoCleanup;
        break;
      case 9u:
        EvtCxDevicePreSelfManagedIoSuspend = CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePreSurpriseRemoval;
        EvtCxDevicePostSelfManagedIoSuspend = CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePostSurpriseRemoval;
        break;
      default:
        goto LABEL_24;
    }
  }
  else if ( CallbackType == 5 )
  {
    EvtCxDevicePreSelfManagedIoSuspend = CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePreD0Exit;
    EvtCxDevicePostSelfManagedIoSuspend = CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePostD0Exit;
  }
  else if ( CallbackType )
  {
    switch ( CallbackType )
    {
      case 1u:
        EvtCxDevicePreSelfManagedIoSuspend = CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePreD0Entry;
        EvtCxDevicePostSelfManagedIoSuspend = CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePostD0Entry;
        EvtCxDevicePreD0EntryFailedCleanup = CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePreD0EntryFailedCleanup;
        break;
      case 2u:
        EvtCxDevicePreSelfManagedIoSuspend = CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePreSelfManagedIoInit;
        EvtCxDevicePostSelfManagedIoSuspend = CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePostSelfManagedIoInit;
        EvtCxDevicePreD0EntryFailedCleanup = CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePreSelfManagedIoInitFailedCleanup;
        break;
      case 3u:
        EvtCxDevicePreSelfManagedIoSuspend = CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePreSelfManagedIoRestart;
        EvtCxDevicePostSelfManagedIoSuspend = CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePostSelfManagedIoRestart;
        EvtCxDevicePreD0EntryFailedCleanup = CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePreSelfManagedIoRestartFailedCleanup;
        break;
      case 4u:
        EvtCxDevicePreSelfManagedIoSuspend = CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePreReleaseHardware;
        EvtCxDevicePostSelfManagedIoSuspend = CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePostReleaseHardware;
        break;
      default:
        goto LABEL_24;
    }
  }
  else
  {
    EvtCxDevicePreSelfManagedIoSuspend = CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePrePrepareHardware;
    EvtCxDevicePostSelfManagedIoSuspend = CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePostPrepareHardware;
    EvtCxDevicePreD0EntryFailedCleanup = CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePrePrepareHardwareFailedCleanup;
  }
  if ( EvtCxDevicePreSelfManagedIoSuspend || EvtCxDevicePostSelfManagedIoSuspend )
    goto LABEL_26;
LABEL_24:
  if ( EvtCxDevicePreD0EntryFailedCleanup )
  {
LABEL_26:
    v12 = (FxCxPnpPowerCallbackContext *)FxPoolAllocator(
                                           Globals,
                                           &Globals->FxPoolFrameworks,
                                           ExDefaultNonPagedPoolType,
                                           0x20uLL,
                                           Globals->Tag,
                                           Caller);
    v13 = v12;
    if ( v12 )
    {
      v12->m_CallbackType = CallbackType;
      v12->m_PreCallbackSuccessful = 0;
      v12->u.PrepareHardware.PreCallback = 0LL;
      v12->u.PrepareHardware.PostCallback = 0LL;
      v12->u.PrepareHardware.CleanupCallback = 0LL;
    }
    else
    {
      v13 = 0LL;
    }
    if ( !v13 )
    {
      WPP_IFR_SF_(Globals, 2u, 0x12u, 0xAu, WPP_CxPnpPowerCallbacks_cpp_Traceguids);
      return 3221225626LL;
    }
    if ( v9 <= 5 )
    {
      if ( v9 == 5 )
      {
        v13->u.PrepareHardware.PreCallback = (int (__fastcall *)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *))CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePreD0Exit;
        EvtCxDevicePostD0Exit = (int (__fastcall *)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *))CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePostD0Exit;
        goto LABEL_53;
      }
      if ( v9 )
      {
        v15 = v9 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( v17 )
            {
              if ( v17 == 1 )
              {
                v13->u.PrepareHardware.PreCallback = (int (__fastcall *)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *))CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePreReleaseHardware;
                EvtCxDevicePostD0Exit = (int (__fastcall *)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *))CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePostReleaseHardware;
LABEL_53:
                v13->u.PrepareHardware.PostCallback = EvtCxDevicePostD0Exit;
              }
LABEL_54:
              *Context = v13;
              return 0LL;
            }
            v13->u.PrepareHardware.PreCallback = (int (__fastcall *)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *))CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePreSelfManagedIoRestart;
            v13->u.PrepareHardware.PostCallback = (int (__fastcall *)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *))CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePostSelfManagedIoRestart;
            EvtCxDevicePreSelfManagedIoRestartFailedCleanup = (void (__fastcall *)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *))CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePreSelfManagedIoRestartFailedCleanup;
          }
          else
          {
            v13->u.PrepareHardware.PreCallback = (int (__fastcall *)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *))CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePreSelfManagedIoInit;
            v13->u.PrepareHardware.PostCallback = (int (__fastcall *)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *))CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePostSelfManagedIoInit;
            EvtCxDevicePreSelfManagedIoRestartFailedCleanup = (void (__fastcall *)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *))CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePreSelfManagedIoInitFailedCleanup;
          }
        }
        else
        {
          v13->u.PrepareHardware.PreCallback = (int (__fastcall *)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *))CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePreD0Entry;
          v13->u.PrepareHardware.PostCallback = (int (__fastcall *)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *))CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePostD0Entry;
          EvtCxDevicePreSelfManagedIoRestartFailedCleanup = (void (__fastcall *)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *))CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePreD0EntryFailedCleanup;
        }
      }
      else
      {
        v13->u.PrepareHardware.PreCallback = CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePrePrepareHardware;
        v13->u.PrepareHardware.PostCallback = CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePostPrepareHardware;
        EvtCxDevicePreSelfManagedIoRestartFailedCleanup = CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePrePrepareHardwareFailedCleanup;
      }
      v13->u.PrepareHardware.CleanupCallback = EvtCxDevicePreSelfManagedIoRestartFailedCleanup;
      goto LABEL_54;
    }
    v20 = v9 - 6;
    if ( !v20 )
    {
      v13->u.PrepareHardware.PreCallback = (int (__fastcall *)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *))CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePreSelfManagedIoSuspend;
      EvtCxDevicePostD0Exit = (int (__fastcall *)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *))CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePostSelfManagedIoSuspend;
      goto LABEL_53;
    }
    v21 = v20 - 1;
    if ( !v21 )
    {
      v13->u.PrepareHardware.PreCallback = (int (__fastcall *)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *))CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePreSelfManagedIoFlush;
      EvtCxDevicePostD0Exit = (int (__fastcall *)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *))CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePostSelfManagedIoFlush;
      goto LABEL_53;
    }
    v22 = v21 - 1;
    if ( !v22 )
    {
      v13->u.PrepareHardware.PreCallback = (int (__fastcall *)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *))CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePreSelfManagedIoCleanup;
      EvtCxDevicePostD0Exit = (int (__fastcall *)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *))CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePostSelfManagedIoCleanup;
      goto LABEL_53;
    }
    if ( v22 == 1 )
    {
      v13->u.PrepareHardware.PreCallback = (int (__fastcall *)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *))CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePreSurpriseRemoval;
      EvtCxDevicePostD0Exit = (int (__fastcall *)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *))CxInit->PnpPowerCallbacks.Callbacks.EvtCxDevicePostSurpriseRemoval;
      goto LABEL_53;
    }
    goto LABEL_54;
  }
  *Context = 0LL;
  return 0LL;
}
