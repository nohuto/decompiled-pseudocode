/*
 * XREFs of ndisIMCheckDeviceInstance @ 0x1C00EB3C8
 * Callers:
 *     ndisStartDeviceSynchronous @ 0x1C00BC0B8 (ndisStartDeviceSynchronous.c)
 *     NdisIMCancelInitializeDeviceInstance @ 0x1C00EAFD0 (NdisIMCancelInitializeDeviceInstance.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_qZ @ 0x1C0049D60 (WPP_SF_qZ.c)
 *     WPP_SF_qZq @ 0x1C0051BC8 (WPP_SF_qZq.c)
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00C2B20 (ndisDeliverNetPnPEventSynchronously.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00C342C (ndisInitializeNetPnPEvent.c)
 */

char __fastcall ndisIMCheckDeviceInstance(__int64 a1, const UNICODE_STRING *a2, wchar_t **a3)
{
  char v6; // r12
  UNICODE_STRING *v7; // r15
  UNICODE_STRING *i; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  unsigned __int8 v12; // al
  unsigned int (__fastcall *v13)(_QWORD, _QWORD *); // rax
  bool v14; // zf
  int v15; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-D0h] BYREF
  struct _KEVENT v18; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+60h] [rbp-A0h] BYREF
  int v20; // [rsp+68h] [rbp-98h]
  const UNICODE_STRING *v21; // [rsp+70h] [rbp-90h]
  int v22; // [rsp+78h] [rbp-88h]
  _QWORD v23[20]; // [rsp+110h] [rbp+10h] BYREF

  v6 = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qZ(0x29u, &WPP_b87f241b44683114d5775ca3de93698d_Traceguids, a1, &a2->Length);
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
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qZq(v10, v9, a1, &a2->Length, a3);
  if ( !v6 )
  {
    if ( a3 )
    {
      v11 = *(_QWORD *)(a1 + 72);
      if ( v11 )
      {
        v12 = *(_BYTE *)(v11 + 56);
        if ( v12 >= 6u )
          goto LABEL_24;
        if ( *(_QWORD *)(v11 + 128) )
        {
          memset(v23, 0, 0x98uLL);
          KeInitializeEvent(&Event, NotificationEvent, 0);
          LODWORD(v23[0]) = 4;
          v23[3] = &Event;
          KeWaitForSingleObject((PVOID)(v11 + 360), Executive, 0, 0, 0LL);
          ++*(_DWORD *)(v11 + 424);
          *(_QWORD *)(v11 + 416) = KeGetCurrentThread();
          v13 = *(unsigned int (__fastcall **)(_QWORD, _QWORD *))(v11 + 128);
          *(_DWORD *)(v11 + 428) = 263698;
          if ( v13(0LL, v23) == 259 )
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          v14 = (*(_DWORD *)(v11 + 424))-- == 1;
          *(_DWORD *)(v11 + 428) = 0;
          if ( v14 )
            *(_QWORD *)(v11 + 416) = 0LL;
          KeReleaseMutex((PRKMUTEX)(v11 + 360), 0);
          v12 = *(_BYTE *)(v11 + 56);
        }
        if ( v12 >= 6u )
        {
LABEL_24:
          ndisInitializeNetPnPEvent(&v19, &v18);
          v15 = a2->Length + 16;
          v20 = 12;
          v22 = v15;
          v21 = a2;
          KeWaitForSingleObject((PVOID)(v11 + 360), Executive, 0, 0, 0LL);
          ++*(_DWORD *)(v11 + 424);
          *(_QWORD *)(v11 + 416) = KeGetCurrentThread();
          *(_DWORD *)(v11 + 428) = 263731;
          ndisDeliverNetPnPEventSynchronously((_QWORD *)v11, 0LL, (__int64)&v19);
          v14 = (*(_DWORD *)(v11 + 424))-- == 1;
          *(_DWORD *)(v11 + 428) = 0;
          if ( v14 )
            *(_QWORD *)(v11 + 416) = 0LL;
          KeReleaseMutex((PRKMUTEX)(v11 + 360), 0);
        }
      }
    }
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qZ(0x2Bu, &WPP_b87f241b44683114d5775ca3de93698d_Traceguids, a1, &a2->Length);
  return v6;
}
