/*
 * XREFs of Endpoint_EvtEndpointCleanupCallback @ 0x1C0015F30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     XilEndpoint_DestroySecureObject @ 0x1C00145CC (XilEndpoint_DestroySecureObject.c)
 *     XilEndpoint_FreeResources @ 0x1C00146F4 (XilEndpoint_FreeResources.c)
 *     WPP_RECORDER_SF_ddqqq @ 0x1C001AAB8 (WPP_RECORDER_SF_ddqqq.c)
 *     UsbDevice_RemoveEndpointFromDeviceEndpointList @ 0x1C00365F0 (UsbDevice_RemoveEndpointFromDeviceEndpointList.c)
 *     Etw_EndpointDelete @ 0x1C00395DC (Etw_EndpointDelete.c)
 */

__int64 __fastcall Endpoint_EvtEndpointCleanupCallback(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct _IO_WORKITEM *v10; // rcx
  __int64 v11; // rcx

  v2 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C004F180);
  v3 = v2;
  v4 = v2 + 1312;
  if ( *(_BYTE *)(v2 + 1336) )
    XilEndpoint_DestroySecureObject((__int64 *)(v2 + 1312));
  result = XilEndpoint_FreeResources(v4);
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 == a1 )
  {
    WPP_RECORDER_SF_ddqqq(*(_QWORD *)(*(_QWORD *)v3 + 72LL), *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL), v6, 21);
    v7 = *(unsigned int *)(v3 + 144);
    if ( (_DWORD)v7 != 1 )
    {
      v8 = *(_QWORD *)(v3 + 16);
      if ( v3 == *(_QWORD *)(v8 + 8 * v7 + 168) )
        *(_QWORD *)(v8 + 8 * v7 + 168) = 0LL;
    }
    v9 = *(_QWORD *)(v3 + 264);
    if ( v9 )
    {
      if ( *(_QWORD *)v9 )
      {
        IoFreeIrp(*(PIRP *)v9);
        **(_QWORD **)(v3 + 264) = 0LL;
        v9 = *(_QWORD *)(v3 + 264);
      }
      if ( *(_QWORD *)(v9 + 144) )
      {
        (*(void (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 1664))(WPP_MAIN_CB.Dpc.ProcessorHistory);
        *(_QWORD *)(*(_QWORD *)(v3 + 264) + 144LL) = 0LL;
        v9 = *(_QWORD *)(v3 + 264);
      }
      ExFreePoolWithTag((PVOID)v9, 0x49434858u);
    }
    v10 = *(struct _IO_WORKITEM **)(v3 + 1272);
    if ( v10 )
    {
      IoFreeWorkItem(v10);
      *(_QWORD *)(v3 + 1272) = 0LL;
    }
    UsbDevice_RemoveEndpointFromDeviceEndpointList(*(_QWORD *)(v3 + 16), *(_QWORD *)(v3 + 24), v3 + 64);
    return Etw_EndpointDelete(v11, v3);
  }
  return result;
}
