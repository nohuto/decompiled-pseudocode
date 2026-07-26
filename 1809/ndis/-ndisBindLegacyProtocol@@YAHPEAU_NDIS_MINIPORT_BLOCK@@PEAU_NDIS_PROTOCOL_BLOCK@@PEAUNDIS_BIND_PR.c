/*
 * XREFs of ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00FDA58
 * Callers:
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00C34A0 (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 * Callees:
 *     ndisDereferenceProtocol @ 0x1C0017C5C (ndisDereferenceProtocol.c)
 *     ndisIsMiniportStarted @ 0x1C001A37C (ndisIsMiniportStarted.c)
 *     ndisReferenceProtocol @ 0x1C001A488 (ndisReferenceProtocol.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005EBE8 (ndisOpenAdapterLegacyProtocol.c)
 *     WPP_SF_ZZL @ 0x1C007A46C (WPP_SF_ZZL.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C00BEB5C (ndisNotifyWmiBindUnbind.c)
 *     ndisUpdateMinimumStackVersion @ 0x1C00C3140 (ndisUpdateMinimumStackVersion.c)
 */

__int64 __fastcall ndisBindLegacyProtocol(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_PROTOCOL_BLOCK *a2,
        struct NDIS_BIND_PROTOCOL_LINK *a3)
{
  _NDIS_PNP_DEVICE_STATE PnPDeviceState; // ecx
  _NDIS_BIND_PATHS *BindPaths; // r14
  _UNICODE_STRING *Paths; // r14
  _DEVICE_OBJECT *PhysicalDeviceObject; // r12
  __m128i v10; // xmm0
  SIZE_T v11; // rdx
  wchar_t *PoolWithTag; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  void *m_AdditionalContext; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  bool v19; // zf
  PLARGE_INTEGER Timeout; // [rsp+28h] [rbp-E0h]
  char v22; // [rsp+50h] [rbp-B8h]
  KIRQL v23; // [rsp+58h] [rbp-B0h]
  _UNICODE_STRING Destination_8; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING Source_8; // [rsp+78h] [rbp-90h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v27[4]; // [rsp+98h] [rbp-70h] BYREF
  _UNICODE_STRING v28; // [rsp+B8h] [rbp-50h]
  _UNICODE_STRING *v29; // [rsp+C8h] [rbp-40h]
  int v30; // [rsp+F0h] [rbp-18h]
  struct _KEVENT Event; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v32; // [rsp+160h] [rbp+58h] BYREF

  LODWORD(v32) = -1073741823;
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_qq(0xAu, &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids, a1, a2);
  KeWaitForSingleObject(&a2->Mutex, Executive, 0, 0, 0LL);
  ++a2->MutexOwnerCount;
  a2->MutexOwnerThread = KeGetCurrentThread();
  a2->MutexOwner = 3932189;
  if ( !ndisIsMiniportStarted(a1)
    || (PnPDeviceState = a1->PnPDeviceState, ((PnPDeviceState - 1) & 0xFFFFFFFC) != 0)
    || PnPDeviceState == NdisPnPDeviceStopped )
  {
    if ( (unsigned __int8)byte_1C00A0255 >= 3u )
      WPP_SF_qq(0xBu, &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids, a1, a2);
  }
  else if ( a1->EthDB )
  {
    BindPaths = a1->BindPaths;
    a2->BindDeviceName = &a1->MiniportName;
    Paths = BindPaths->Paths;
    a2->RootDeviceName = Paths;
    PhysicalDeviceObject = a1->PhysicalDeviceObject;
    if ( ndisReferenceProtocol((__int64)a2, 7u) )
    {
      RtlInitUnicodeString(&DestinationString, L"\\Parameters\\Adapters\\");
      Source_8 = *Paths;
      v10 = (__m128i)Source_8;
      Source_8.MaximumLength -= ndisDeviceStr.Length;
      Source_8.Length = _mm_cvtsi128_si32(v10) - ndisDeviceStr.Length;
      Source_8.Buffer += (unsigned __int64)ndisDeviceStr.Length >> 1;
      v11 = (unsigned __int16)(DestinationString.Length + a2->Name.Length + Paths->Length - ndisDeviceStr.Length + 2);
      Destination_8.Length = 0;
      Destination_8.MaximumLength = v11;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x2020444Eu);
      Destination_8.Buffer = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, Destination_8.MaximumLength);
        RtlCopyUnicodeString(&Destination_8, &a2->Name);
        RtlAppendUnicodeStringToString(&Destination_8, &DestinationString);
        RtlAppendUnicodeStringToString(&Destination_8, &Source_8);
        ndisUpdateMinimumStackVersion(a1, a2->MajorNdisVersion, a2->MinorNdisVersion);
        v27[0] = 0LL;
        v27[1] = a2;
        v27[3] = a1;
        v28 = Destination_8;
        v29 = Paths;
        KeInitializeEvent(&Event, NotificationEvent, 0);
        if ( !a2->Ref.Closing )
        {
          LODWORD(v32) = 0;
          a2->BindingAdapter = a1;
          m_AdditionalContext = a3->BindState.m_AdditionalContext;
          if ( m_AdditionalContext )
          {
            a3->BindState.m_AdditionalContext = 0LL;
            ndisOpenAdapterLegacyProtocol(
              *(int **)m_AdditionalContext,
              v14,
              *((struct _NDIS_OPEN_BLOCK ***)m_AdditionalContext + 1),
              *((_DWORD **)m_AdditionalContext + 2),
              *((_DWORD **)m_AdditionalContext + 3),
              *((_DWORD *)m_AdditionalContext + 8),
              *((_NDIS_PROTOCOL_BLOCK **)m_AdditionalContext + 5),
              *((void **)m_AdditionalContext + 6),
              *((PCUNICODE_STRING *)m_AdditionalContext + 7),
              v22,
              v23,
              (int *)&v32);
            v17 = **((_QWORD **)m_AdditionalContext + 1);
            if ( v17 )
              *(_DWORD *)(v17 + 224) |= 0x20000000u;
          }
          else
          {
            a2->BindAdapterHandler((int *)&v32, v27, Paths, &Destination_8, PhysicalDeviceObject);
          }
          v18 = v32;
          if ( (_DWORD)v32 == 259 )
          {
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            v18 = v30;
            LODWORD(v32) = v30;
          }
          a2->BindingAdapter = 0LL;
          if ( !v18 )
          {
            ndisNotifyWmiBindUnbind((__int64)a1, (__int64)a2, 1u);
            v18 = v32;
          }
          if ( (unsigned __int8)byte_1C00A0255 >= 4u )
          {
            LODWORD(Timeout) = v18;
            WPP_SF_ZZL(0xCu, v16, &a2->Name.Length, &a1->pAdapterInstanceName->Length, Timeout);
          }
        }
        ExFreePoolWithTag(Destination_8.Buffer, 0);
        a2->BindDeviceName = 0LL;
      }
      ndisDereferenceProtocol(a2, v13, 7u);
    }
  }
  v19 = a2->MutexOwnerCount-- == 1;
  a2->MutexOwner = 0;
  if ( v19 )
    a2->MutexOwnerThread = 0LL;
  KeReleaseMutex(&a2->Mutex, 0);
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
  {
    LODWORD(Timeout) = v32;
    WPP_SF_qqd(0xDu, &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids, a1, a2, Timeout);
  }
  return (unsigned int)v32;
}
