/*
 * XREFs of ndisIMCheckDeviceInstance @ 0x1C0080108
 * Callers:
 *     ndisStartDeviceSynchronous @ 0x1C002F158 (ndisStartDeviceSynchronous.c)
 *     NdisIMCancelInitializeDeviceInstance @ 0x1C007FA10 (NdisIMCancelInitializeDeviceInstance.c)
 * Callees:
 *     WPP_RECORDER_SF_qZ @ 0x1C0019620 (WPP_RECORDER_SF_qZ.c)
 *     ndisInitializeNetPnPEvent @ 0x1C001BF38 (ndisInitializeNetPnPEvent.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     WPP_RECORDER_SF_qZq @ 0x1C007FF90 (WPP_RECORDER_SF_qZq.c)
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00FC974 (ndisDeliverNetPnPEventSynchronously.c)
 */

char __fastcall ndisIMCheckDeviceInstance(__int64 a1, UNICODE_STRING *a2, wchar_t **a3)
{
  char v6; // r12
  UNICODE_STRING *v7; // r15
  UNICODE_STRING *i; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  unsigned __int8 v13; // al
  bool v14; // zf
  int v15; // eax
  int Timeout; // [rsp+20h] [rbp-E0h]
  struct _KEVENT Event; // [rsp+40h] [rbp-C0h] BYREF
  struct _KEVENT v19; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v20[22]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v21[20]; // [rsp+120h] [rbp+20h] BYREF

  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      1u,
      0x33u,
      &WPP_a3868331fe073391203672ef2b551460_Traceguids,
      a1,
      &a2->Length);
  KeWaitForSingleObject((PVOID)(a1 + 416), Executive, 0, 0, 0LL);
  v7 = (UNICODE_STRING *)(a1 + 96);
  *(_QWORD *)(a1 + 472) = KeGetCurrentThread();
  for ( i = *(UNICODE_STRING **)(a1 + 96); i; i = *(UNICODE_STRING **)&i->Length )
  {
    if ( RtlEqualUnicodeString(i + 1, a2, 1u) )
    {
      if ( a3 )
        *a3 = i->Buffer;
      *(_QWORD *)&v7->Length = *(_QWORD *)&i->Length;
      ExFreePoolWithTag(i, 0);
      v6 = 1;
      break;
    }
    v7 = i;
  }
  *(_QWORD *)(a1 + 472) = 0LL;
  KeReleaseMutex((PRKMUTEX)(a1 + 416), 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZq(*((_QWORD *)WPP_GLOBAL_Control + 8), v9, v10, v11, Timeout);
  if ( !v6 )
  {
    if ( a3 )
    {
      v12 = *(_QWORD *)(a1 + 72);
      if ( v12 )
      {
        v13 = *(_BYTE *)(v12 + 56);
        if ( v13 >= 6u )
          goto LABEL_24;
        if ( *(_QWORD *)(v12 + 128) )
        {
          memset(v21, 0, 0x98uLL);
          KeInitializeEvent(&Event, NotificationEvent, 0);
          LODWORD(v21[0]) = 4;
          v21[3] = &Event;
          KeWaitForSingleObject((PVOID)(v12 + 360), Executive, 0, 0, 0LL);
          ++*(_DWORD *)(v12 + 424);
          *(_QWORD *)(v12 + 416) = KeGetCurrentThread();
          if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD *))(v12 + 128))(0LL, v21) == 259 )
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          v14 = (*(_DWORD *)(v12 + 424))-- == 1;
          if ( v14 )
            *(_QWORD *)(v12 + 416) = 0LL;
          KeReleaseMutex((PRKMUTEX)(v12 + 360), 0);
          v13 = *(_BYTE *)(v12 + 56);
        }
        if ( v13 >= 6u )
        {
LABEL_24:
          memset(v20, 0, sizeof(v20));
          ndisInitializeNetPnPEvent(v20, &v19);
          v15 = a2->Length + 16;
          LODWORD(v20[1]) = 12;
          LODWORD(v20[3]) = v15;
          v20[2] = a2;
          KeWaitForSingleObject((PVOID)(v12 + 360), Executive, 0, 0, 0LL);
          ++*(_DWORD *)(v12 + 424);
          *(_QWORD *)(v12 + 416) = KeGetCurrentThread();
          ndisDeliverNetPnPEventSynchronously(v12, 0);
          v14 = (*(_DWORD *)(v12 + 424))-- == 1;
          if ( v14 )
            *(_QWORD *)(v12 + 416) = 0LL;
          KeReleaseMutex((PRKMUTEX)(v12 + 360), 0);
        }
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      1u,
      0x35u,
      &WPP_a3868331fe073391203672ef2b551460_Traceguids,
      a1,
      &a2->Length);
  return v6;
}
