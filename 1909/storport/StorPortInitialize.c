/*
 * XREFs of StorPortInitialize @ 0x1C001AF20
 * Callers:
 *     StorPortInitializeVrfy @ 0x1C0075A70 (StorPortInitializeVrfy.c)
 * Callees:
 *     RaidGetPortData @ 0x1C0010158 (RaidGetPortData.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024A40 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0dqddddddiiiii @ 0x1C003A06C (McTemplateK0dqddddddiiiii.c)
 *     WPP_SF_qqqq @ 0x1C003A898 (WPP_SF_qqqq.c)
 *     RaSaveDriverInitData @ 0x1C006E7C8 (RaSaveDriverInitData.c)
 *     RaInitializeDriver @ 0x1C006E864 (RaInitializeDriver.c)
 *     RaCreateDriver @ 0x1C006E97C (RaCreateDriver.c)
 *     WppLoadTracingSupport @ 0x1C0070C98 (WppLoadTracingSupport.c)
 *     WppInitKm @ 0x1C0070F00 (WppInitKm.c)
 *     RaDeleteDriver @ 0x1C007482C (RaDeleteDriver.c)
 *     __security_init_cookie @ 0x1C007A044 (__security_init_cookie.c)
 */

__int64 __fastcall StorPortInitialize(PDRIVER_OBJECT DriverObject, __int64 a2, __int64 a3, __int64 a4)
{
  char v8; // r14
  int v9; // eax
  void (__fastcall *v10)(PDRIVER_OBJECT, __int64); // rax
  char *PortData; // r15
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  NTSTATUS v15; // edi
  int v16; // r9d
  int inited; // eax
  void (__fastcall *v19)(PDRIVER_OBJECT); // rax
  __int64 v20; // [rsp+58h] [rbp-50h]
  __int64 v21; // [rsp+60h] [rbp-48h]
  __int64 v22; // [rsp+68h] [rbp-40h]
  __int64 v23; // [rsp+70h] [rbp-38h]
  __int64 v24; // [rsp+78h] [rbp-30h]
  PVOID DriverObjectExtension; // [rsp+B0h] [rbp+8h] BYREF

  v8 = 0;
  if ( !InitSecurityCookie )
  {
    _security_init_cookie();
    InitSecurityCookie = 1;
  }
  if ( _InterlockedIncrement(&WPPInitCount) == 1 && DriverObject && a2 )
  {
    *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
    WPP_MAIN_CB.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_wppCtlGuid;
    WPP_MAIN_CB.NextDevice = 0LL;
    WPP_MAIN_CB.CurrentIrp = 0LL;
    WPP_MAIN_CB.Timer = (struct _IO_TIMER *)1;
    WppLoadTracingSupport();
    WPP_MAIN_CB.CurrentIrp = 0LL;
    WppInitKm();
  }
  DriverObjectExtension = 0LL;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqqq(
      WPP_GLOBAL_Control->AttachedDevice,
      10LL,
      &WPP_760fb2a55d753c7eb04ef3bbbe223500_Traceguids,
      DriverObject,
      a2,
      a3,
      a4);
  }
  if ( !DriverObject || !a2 || !a3 )
    return 3221225485LL;
  v9 = *(_DWORD *)a3;
  if ( (*(_DWORD *)a3 == 208 || v9 == 176 || v9 == 136)
    && *(_QWORD *)(a3 + 8)
    && *(_QWORD *)(a3 + 32)
    && *(_QWORD *)(a3 + 16)
    && *(_QWORD *)(a3 + 40) )
  {
    if ( v9 == 176 || v9 == 208 && (*(_DWORD *)(a3 + 184) & 1) != 0 )
    {
      v10 = *(void (__fastcall **)(PDRIVER_OBJECT, __int64))(a3 + 160);
      if ( v10 )
      {
        v10(DriverObject, a2);
        v8 = 1;
      }
    }
    PortData = RaidGetPortData();
    if ( PortData )
    {
      DriverObjectExtension = IoGetDriverObjectExtension(DriverObject, DriverEntry);
      if ( DriverObjectExtension
        || (v15 = IoAllocateDriverObjectExtension(DriverObject, DriverEntry, 0x70u, &DriverObjectExtension), v15 >= 0)
        && (RaCreateDriver(DriverObjectExtension),
            v15 = RaInitializeDriver(DriverObjectExtension, DriverObject, PortData, a2),
            v15 >= 0) )
      {
        v16 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 == 208 )
        {
          if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
            McTemplateK0dqddddddiiiii(
              v13,
              v12,
              v14,
              208,
              *(_DWORD *)(a3 + 4),
              *(_DWORD *)(a3 + 64),
              *(_DWORD *)(a3 + 68),
              *(_DWORD *)(a3 + 72),
              *(_DWORD *)(a3 + 184),
              *(_DWORD *)(a3 + 188),
              *(_DWORD *)(a3 + 192),
              *(_QWORD *)(a3 + 136),
              *(_QWORD *)(a3 + 144),
              *(_QWORD *)(a3 + 152),
              *(_QWORD *)(a3 + 160),
              *(_QWORD *)(a3 + 168));
        }
        else
        {
          if ( v16 == 176 )
          {
            if ( (Microsoft_Windows_StorPortEnableBits & 0x10) == 0 )
              goto LABEL_26;
            v16 = 176;
            v24 = *(_QWORD *)(a3 + 168);
            v23 = *(_QWORD *)(a3 + 160);
            v22 = *(_QWORD *)(a3 + 152);
            v21 = *(_QWORD *)(a3 + 144);
            v20 = *(_QWORD *)(a3 + 136);
          }
          else
          {
            if ( (Microsoft_Windows_StorPortEnableBits & 0x10) == 0 )
              goto LABEL_26;
            LOBYTE(v24) = 0;
            LOBYTE(v23) = 0;
            LOBYTE(v22) = 0;
            LOBYTE(v21) = 0;
            LOBYTE(v20) = 0;
          }
          McTemplateK0dqddddddiiiii(
            v13,
            v12,
            v14,
            v16,
            *(_DWORD *)(a3 + 4),
            *(_DWORD *)(a3 + 64),
            *(_DWORD *)(a3 + 68),
            *(_DWORD *)(a3 + 72),
            0,
            0,
            0,
            v20,
            v21,
            v22,
            v23,
            v24);
        }
LABEL_26:
        inited = RaSaveDriverInitData(DriverObjectExtension, a3);
        v15 = inited;
        if ( inited >= 0 )
          v8 = 0;
        *(_WORD *)(a3 + 104) |= 0x10u;
        if ( inited >= 0 )
          return (unsigned int)v15;
      }
    }
    else
    {
      v15 = -1073741801;
    }
    if ( DriverObjectExtension )
      RaDeleteDriver();
    DriverObjectExtension = 0LL;
    if ( v8 )
    {
      v19 = *(void (__fastcall **)(PDRIVER_OBJECT))(a3 + 168);
      if ( v19 )
        v19(DriverObject);
    }
    return (unsigned int)v15;
  }
  return 3221225561LL;
}
