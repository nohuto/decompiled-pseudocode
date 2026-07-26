/*
 * XREFs of ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C011D50C
 * Callers:
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0104620 (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisIsMiniportStarted @ 0x1C001B528 (ndisIsMiniportStarted.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C0027818 (ndisNotifyWmiBindUnbind.c)
 *     WPP_RECORDER_SF_ZZL @ 0x1C0027994 (WPP_RECORDER_SF_ZZL.c)
 *     ndisDereferenceProtocol @ 0x1C00280F0 (ndisDereferenceProtocol.c)
 *     ndisReferenceProtocol @ 0x1C0028420 (ndisReferenceProtocol.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C0093A48 (ndisOpenAdapterLegacyProtocol.c)
 *     ndisUpdateMinimumStackVersion @ 0x1C0104308 (ndisUpdateMinimumStackVersion.c)
 */

__int64 __fastcall ndisBindLegacyProtocol(
        struct _NDIS_MINIPORT_BLOCK *a1,
        _NDIS_PROTOCOL_BLOCK *this,
        struct NDIS_BIND_PROTOCOL_LINK *a3)
{
  _NDIS_PROTOCOL_BLOCK *v4; // rbx
  int v6; // edx
  _NDIS_PNP_DEVICE_STATE PnPDeviceState; // ecx
  _NDIS_BIND_PATHS *BindPaths; // r14
  UNICODE_STRING *Paths; // r14
  _DEVICE_OBJECT *PhysicalDeviceObject; // r12
  __m128i v11; // xmm0
  __int16 v12; // ax
  SIZE_T v13; // rdx
  wchar_t *PoolWithTag; // rax
  __int64 v15; // rdx
  int v16; // r9d
  __int64 v17; // rdx
  void *m_AdditionalContext; // rsi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  unsigned int v22; // eax
  __int64 v23; // rdx
  int v24; // r9d
  int v26; // edx
  int Timeout; // [rsp+28h] [rbp-E0h]
  char NewIrql; // [rsp+38h] [rbp-D0h]
  char v30; // [rsp+50h] [rbp-B8h]
  int v31; // [rsp+58h] [rbp-B0h]
  _UNICODE_STRING Destination_8; // [rsp+68h] [rbp-A0h] BYREF
  __m128i Source_8; // [rsp+78h] [rbp-90h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v35[4]; // [rsp+98h] [rbp-70h] BYREF
  _UNICODE_STRING v36; // [rsp+B8h] [rbp-50h]
  UNICODE_STRING *v37; // [rsp+C8h] [rbp-40h]
  unsigned int v38; // [rsp+F0h] [rbp-18h]
  struct _KEVENT Event; // [rsp+F8h] [rbp-10h] BYREF
  unsigned int v40; // [rsp+160h] [rbp+58h] BYREF

  v40 = -1073741823;
  *(_QWORD *)&Destination_8.Length = 0LL;
  Destination_8.Buffer = 0LL;
  v4 = this;
  Source_8.m128i_i64[0] = 0LL;
  Source_8.m128i_i64[1] = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    NewIrql = (char)this;
    LOBYTE(this) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)this,
      6,
      10,
      (struct _GUID *)&WPP_9a24f6ed26863a1258e184bd1c2f5497_Traceguids,
      (char)a1,
      NewIrql);
  }
  KeWaitForSingleObject(&v4->Mutex, Executive, 0, 0, 0LL);
  ++v4->MutexOwnerCount;
  v4->MutexOwnerThread = KeGetCurrentThread();
  if ( !ndisIsMiniportStarted(a1)
    || (PnPDeviceState = a1->PnPDeviceState, ((PnPDeviceState - 1) & 0xFFFFFFFC) != 0)
    || PnPDeviceState == NdisPnPDeviceStopped )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 3;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        6,
        11,
        (struct _GUID *)&WPP_9a24f6ed26863a1258e184bd1c2f5497_Traceguids,
        (char)a1,
        (char)v4);
    }
  }
  else if ( a1->EthDB )
  {
    BindPaths = a1->BindPaths;
    v4->BindDeviceName = &a1->MiniportName;
    Paths = BindPaths->Paths;
    v4->RootDeviceName = Paths;
    PhysicalDeviceObject = a1->PhysicalDeviceObject;
    if ( ndisReferenceProtocol((__int64)v4, 7u) )
    {
      RtlInitUnicodeString(&DestinationString, L"\\Parameters\\Adapters\\");
      Source_8 = *(__m128i *)Paths;
      v11 = Source_8;
      Source_8.m128i_i16[1] -= ndisDeviceStr.Length;
      Source_8.m128i_i16[0] = _mm_cvtsi128_si32(v11) - ndisDeviceStr.Length;
      v12 = v4->Name.Length - ndisDeviceStr.Length;
      Source_8.m128i_i64[1] += 2 * ((unsigned __int64)ndisDeviceStr.Length >> 1);
      v13 = (unsigned __int16)(DestinationString.Length + Paths->Length + v12 + 2);
      Destination_8.Length = 0;
      Destination_8.MaximumLength = v13;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x2020444Eu);
      Destination_8.Buffer = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, Destination_8.MaximumLength);
        RtlCopyUnicodeString(&Destination_8, &v4->Name);
        RtlAppendUnicodeStringToString(&Destination_8, &DestinationString);
        RtlAppendUnicodeStringToString(&Destination_8, (PCUNICODE_STRING)&Source_8);
        ndisUpdateMinimumStackVersion(a1, v4->MajorNdisVersion, v4->MinorNdisVersion);
        v35[0] = 0LL;
        v35[1] = v4;
        v35[3] = a1;
        v36 = Destination_8;
        v37 = Paths;
        KeInitializeEvent(&Event, NotificationEvent, 0);
        if ( !v4->Ref.Closing )
        {
          v40 = 0;
          v4->BindingAdapter = a1;
          m_AdditionalContext = a3->BindState.m_AdditionalContext;
          if ( m_AdditionalContext )
          {
            a3->BindState.m_AdditionalContext = 0LL;
            ndisOpenAdapterLegacyProtocol(
              *(unsigned int **)m_AdditionalContext,
              v17,
              *((struct _NDIS_OPEN_BLOCK ***)m_AdditionalContext + 1),
              *((_DWORD **)m_AdditionalContext + 2),
              *((_DWORD **)m_AdditionalContext + 3),
              *((_DWORD *)m_AdditionalContext + 8),
              *((_NDIS_PROTOCOL_BLOCK **)m_AdditionalContext + 5),
              *((void **)m_AdditionalContext + 6),
              *((unsigned __int16 **)m_AdditionalContext + 7),
              v30,
              v31,
              &v40);
            v21 = **((_QWORD **)m_AdditionalContext + 1);
            if ( v21 )
              *(_DWORD *)(v21 + 224) |= 0x20000000u;
          }
          else
          {
            Timeout = (int)PhysicalDeviceObject;
            ((void (__fastcall *)(unsigned int *, _QWORD *, UNICODE_STRING *, _UNICODE_STRING *))v4->BindAdapterHandler)(
              &v40,
              v35,
              Paths,
              &Destination_8);
          }
          v22 = v40;
          if ( v40 == 259 )
          {
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            v22 = v38;
            v40 = v38;
          }
          v4->BindingAdapter = 0LL;
          if ( !v22 )
            ndisNotifyWmiBindUnbind((__int64)a1, (__int64)v4, 1);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_ZZL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v19,
              v20,
              0xCu,
              Timeout,
              &v4->Name.Length,
              (__int64)a1->pAdapterInstanceName);
        }
        ExFreePoolWithTag(Destination_8.Buffer, 0);
        v4->BindDeviceName = 0LL;
        ndisDereferenceProtocol(v4, v23, 7u, v24);
      }
      else
      {
        ndisDereferenceProtocol(v4, v15, 7u, v16);
      }
    }
  }
  if ( v4->MutexOwnerCount-- == 1 )
    v4->MutexOwnerThread = 0LL;
  KeReleaseMutex(&v4->Mutex, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v26) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v26,
      6,
      13,
      (struct _GUID *)&WPP_9a24f6ed26863a1258e184bd1c2f5497_Traceguids,
      (char)a1,
      (char)v4,
      v40);
  }
  return v40;
}
