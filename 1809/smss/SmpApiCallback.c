/*
 * XREFs of SmpApiCallback @ 0x140003860
 * Callers:
 *     <none>
 * Callees:
 *     GetVersionExW_Current @ 0x140001010 (GetVersionExW_Current.c)
 *     SmpStopCsr @ 0x140001020 (SmpStopCsr.c)
 *     SmpExecPgm @ 0x140002850 (SmpExecPgm.c)
 *     SmpFinalizeClientContext @ 0x140003CDC (SmpFinalizeClientContext.c)
 *     SmpHandleConnectionRequest @ 0x140003DC0 (SmpHandleConnectionRequest.c)
 *     SmpMarkThreadFree @ 0x140004408 (SmpMarkThreadFree.c)
 *     SmpMarkThreadBusy @ 0x140004464 (SmpMarkThreadBusy.c)
 *     SmpStartCsr @ 0x140004B30 (SmpStartCsr.c)
 *     SmpEstablishClientSecurity @ 0x14000CFC0 (SmpEstablishClientSecurity.c)
 *     __security_check_cookie @ 0x14000D270 (__security_check_cookie.c)
 *     memset_0 @ 0x1400101EF (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x140010400 (_guard_dispatch_icall_nop.c)
 *     SmpUnhandledExceptionFilter @ 0x140016614 (SmpUnhandledExceptionFilter.c)
 */

NTSTATUS __fastcall SmpApiCallback(__int64 a1, __int64 a2)
{
  int v2; // r13d
  __int64 v3; // r15
  _BYTE *v4; // r14
  int v5; // ebx
  _BYTE *v6; // rdi
  int v7; // ecx
  __int64 (__fastcall *v8)(__int64); // rax
  int started; // eax
  __int64 (*v10)(); // rax
  __int64 v11; // r8
  _BYTE *v12; // rdx
  int Version; // eax
  __int64 MessageAttribute; // rax
  __int64 v16; // [rsp+48h] [rbp-1D0h] BYREF
  _BYTE *v17; // [rsp+50h] [rbp-1C8h]
  __int64 v18; // [rsp+58h] [rbp-1C0h]
  _BYTE v19[4]; // [rsp+60h] [rbp-1B8h] BYREF
  int v20; // [rsp+64h] [rbp-1B4h]
  _BYTE v21[4]; // [rsp+90h] [rbp-188h] BYREF
  __int16 v22; // [rsp+94h] [rbp-184h]
  unsigned int v23; // [rsp+B8h] [rbp-160h]
  int v24; // [rsp+BCh] [rbp-15Ch]

  v18 = a2;
  v2 = 0;
  RtlSetThreadIsCritical(1u, 0LL, 1u);
  v3 = SmpApiConnectionPort;
  v4 = 0LL;
  memset_0(v19, 0, 0x28uLL);
  AlpcInitializeMessageAttribute(0x20000000LL, v19, 40LL, &v16);
  do
  {
    v16 = 328LL;
    v20 |= 0x20000000u;
    v5 = NtAlpcSendWaitReceivePort(v3, 0x10000LL, 0LL, 0LL, v21, &v16, v19, 0LL);
  }
  while ( v5 < 0 );
  v6 = *(_BYTE **)AlpcGetMessageAttribute(v19, 0x20000000LL);
  AlpcGetMessageAttribute(v19, 0x20000000LL);
  if ( (unsigned __int8)v22 != 1 )
  {
    if ( (unsigned __int8)v22 != 5 )
    {
      if ( (unsigned __int8)v22 == 10 )
      {
        SmpHandleConnectionRequest(v3, v21, v19, v22 < 0);
      }
      else if ( (v22 & 0x2000) != 0 )
      {
        MessageAttribute = AlpcGetMessageAttribute(v19, 0x20000000LL);
        NtAlpcCancelMessage(v3, 0LL, MessageAttribute);
        v4 = v21;
        v17 = v21;
      }
    }
    goto LABEL_7;
  }
  v4 = v21;
  v17 = v21;
  v7 = v23;
  if ( v23 >= 9 )
  {
    v24 = -1073741822;
    goto LABEL_7;
  }
  if ( *((_DWORD *)&SmpApiDispatch + 4 * (int)v23 + 2) )
  {
    v5 = SmpMarkThreadBusy(v18);
    if ( v5 < 0 )
    {
      v24 = -1073741670;
      goto LABEL_7;
    }
    v2 = 1;
    v7 = v23;
  }
  v24 = 259;
  if ( v7 == 3 )
    goto LABEL_28;
  if ( v7 != 5 )
  {
    if ( (unsigned int)v7 <= 2 )
    {
      if ( (*v6 & 0x10) == 0 )
      {
        v5 = -1073741811;
        goto LABEL_31;
      }
      v10 = *(&SmpApiDispatch + 2 * v7);
      v11 = v3;
      v12 = v6;
      if ( v10 == GetVersionExW_Current )
      {
        Version = GetVersionExW_Current();
        goto LABEL_30;
      }
      goto LABEL_52;
    }
    if ( v7 != 4 )
    {
      if ( v7 <= 5 || v7 > 8 )
        goto LABEL_31;
      goto LABEL_17;
    }
LABEL_28:
    v10 = *(&SmpApiDispatch + 2 * v7);
    v11 = v3;
    v12 = v6;
    if ( (char *)v10 == (char *)SmpExecPgm )
    {
      Version = SmpExecPgm((__int64)v21, (__int64)v6);
LABEL_30:
      v5 = Version;
      goto LABEL_31;
    }
LABEL_52:
    Version = ((__int64 (__fastcall *)(_BYTE *, _BYTE *, __int64))v10)(v21, v12, v11);
    goto LABEL_30;
  }
LABEL_17:
  if ( (*v6 & 6) == 0 )
  {
    v5 = SmpEstablishClientSecurity(v21, v6);
    v7 = v23;
  }
  if ( v5 >= 0 )
  {
    if ( (*v6 & 4) != 0 )
    {
      v8 = (__int64 (__fastcall *)(__int64))*(&SmpApiDispatch + 2 * v7);
      if ( (char *)v8 == (char *)SmpStartCsr )
      {
        started = SmpStartCsr(v21, v6, v3);
      }
      else if ( v8 == SmpStopCsr )
      {
        started = SmpStopCsr((__int64)v21);
      }
      else
      {
        started = ((__int64 (__fastcall *)(_BYTE *, _BYTE *, __int64))v8)(v21, v6, v3);
      }
      v5 = started;
      v7 = v23;
    }
    else
    {
      v5 = -1073741790;
    }
  }
  if ( v5 == 259 && v7 == 5 )
  {
    v4 = 0LL;
    v17 = 0LL;
    goto LABEL_32;
  }
LABEL_31:
  v24 = v5;
LABEL_32:
  if ( v2 )
    SmpMarkThreadFree(v18);
LABEL_7:
  if ( v6 )
    SmpFinalizeClientContext(v6);
  if ( v4 )
    NtAlpcSendWaitReceivePort(v3, 0x10000LL, v4, 0LL, 0LL, 0LL, 0LL, 0LL);
  return RtlSetThreadIsCritical(0, 0LL, 1u);
}
