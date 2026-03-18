/*
 * XREFs of FWUPDATE_EvtIoInternalDeviceControl @ 0x1C00387D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Ld @ 0x1C000AA00 (WPP_RECORDER_SF_Ld.c)
 *     McTemplateK0ppqq @ 0x1C001106C (McTemplateK0ppqq.c)
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C003C640 (memmove.c)
 *     memset @ 0x1C003C980 (memset.c)
 */

ULONG __fastcall FWUPDATE_EvtIoInternalDeviceControl(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v7; // edi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rax
  ULONG result; // eax
  unsigned int v14; // eax
  struct _MCGEN_TRACE_CONTEXT *v15; // rcx
  const EVENT_DESCRIPTOR *v16; // rdx
  int v17; // edx
  __int64 v18; // rcx
  PVOID v19; // r14
  unsigned __int16 v20; // r9
  unsigned __int16 v21; // r9
  unsigned __int8 v22; // al
  unsigned int v23; // ebp
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 Priority; // [rsp+28h] [rbp-80h]
  ULONG Prioritya; // [rsp+28h] [rbp-80h]
  __int64 v31; // [rsp+30h] [rbp-78h]
  int v32; // [rsp+30h] [rbp-78h]
  _QWORD v33[5]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v34[2]; // [rsp+68h] [rbp-40h] BYREF

  memset(v33, 0, sizeof(v33));
  v7 = 0;
  LOWORD(v33[0]) = 40;
  v8 = 0LL;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          v9,
          off_1C005F0B8);
  v11 = *(_QWORD *)v10;
  if ( *(_BYTE *)(v10 + 24) == 1 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v11 + 2520), 2u, 3u, 0x15u, (__int64)&WPP_ad94032c158638748c3d0f7b1d777a45_Traceguids);
    v7 = -1073741810;
    goto LABEL_66;
  }
  v34[1] = 0LL;
  v34[0] = 0x800000010LL;
  if ( a5 != 2228227 )
  {
    if ( a5 == 2228243 )
    {
      v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
              WdfDriverGlobals,
              *(_QWORD *)(v11 + 16));
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD *))(WdfFunctions_01015 + 2024))(
                 WdfDriverGlobals,
                 a2,
                 v12,
                 v34);
      if ( (_BYTE)result )
        return result;
      Prioritya = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(
                    WdfDriverGlobals,
                    a2);
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v11 + 2520),
        2u,
        3u,
        0x1Fu,
        (__int64)&WPP_ad94032c158638748c3d0f7b1d777a45_Traceguids,
        Prioritya);
      v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, a2);
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
                 WdfDriverGlobals,
                 a2,
                 v14);
      goto LABEL_8;
    }
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v11 + 2520),
      2u,
      3u,
      0x20u,
      (__int64)&WPP_ad94032c158638748c3d0f7b1d777a45_Traceguids,
      a5);
    goto LABEL_65;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v33);
  v8 = v33[1];
  v17 = *(unsigned __int16 *)(v33[1] + 2LL);
  *(_DWORD *)(v33[1] + 4LL) = 0;
  switch ( v17 )
  {
    case 0:
      if ( *(_WORD *)v8 != 64 )
        goto LABEL_64;
      v28 = *(_QWORD *)(v8 + 24);
      if ( *(_BYTE *)(v28 + 4) != 1 || *(_BYTE *)(v28 + 5) != 1 )
        goto LABEL_64;
      if ( v28 )
      {
        if ( *(_BYTE *)(v8 + 42) || *(_BYTE *)(v8 + 43) || *(_DWORD *)(v8 + 56) )
        {
          v20 = 26;
          goto LABEL_63;
        }
        *(_QWORD *)(v8 + 48) = v10 + 16;
        *(_QWORD *)(v8 + 32) = v10 + 8;
      }
      else
      {
        WPP_RECORDER_SF_(
          *(_QWORD *)(v11 + 2520),
          4u,
          3u,
          0x19u,
          (__int64)&WPP_ad94032c158638748c3d0f7b1d777a45_Traceguids);
      }
      goto LABEL_51;
    case 1:
      if ( *(_WORD *)v8 != 56
        || *(_QWORD *)(v8 + 24) != (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(
                                     WdfDriverGlobals,
                                     a1)
        || *(_BYTE *)(v8 + 34)
        || *(_BYTE *)(v8 + 35)
        || *(_DWORD *)(v8 + 48) )
      {
        v20 = 27;
        goto LABEL_63;
      }
      *(_QWORD *)(v8 + 40) = v10 + 16;
LABEL_51:
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
                 WdfDriverGlobals,
                 a2,
                 0LL);
      goto LABEL_67;
    case 8:
      goto LABEL_41;
    case 11:
      v18 = *(_QWORD *)(v8 + 48);
      if ( v18 )
      {
        if ( (*(_BYTE *)(v18 + 10) & 5) != 0 )
          v19 = *(PVOID *)(v18 + 24);
        else
          v19 = MmMapLockedPagesSpecifyCache((PMDL)v18, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10u);
      }
      else
      {
        v19 = *(PVOID *)(v8 + 40);
      }
      if ( !v19 )
      {
        v20 = 22;
LABEL_63:
        WPP_RECORDER_SF_(
          *(_QWORD *)(v11 + 2520),
          2u,
          3u,
          v20,
          (__int64)&WPP_ad94032c158638748c3d0f7b1d777a45_Traceguids);
        goto LABEL_64;
      }
      if ( *(_BYTE *)(v8 + 131) == 1 )
      {
        v23 = *(_DWORD *)(v8 + 36);
        if ( v23 > 0x12 )
          v23 = 18;
        v24 = v23;
        memmove(v19, &FwUpdateDeviceDescriptor, v23);
        *((_WORD *)v19 + 4) = *(_WORD *)(v11 + 2464);
        *((_WORD *)v19 + 5) = *(_WORD *)(v11 + 2466);
        *((_WORD *)v19 + 6) = *(_WORD *)(v11 + 2468);
        *((_WORD *)v19 + 1) = *(_WORD *)(v11 + 2458);
        *((_BYTE *)v19 + 7) = *(_BYTE *)(v11 + 2463);
      }
      else
      {
        if ( *(_BYTE *)(v8 + 131) != 2 )
        {
          v21 = 24;
          LODWORD(Priority) = *(unsigned __int8 *)(v8 + 131);
LABEL_29:
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v11 + 2520),
            2u,
            3u,
            v21,
            (__int64)&WPP_ad94032c158638748c3d0f7b1d777a45_Traceguids,
            Priority);
          goto LABEL_64;
        }
        v22 = *(_BYTE *)(v8 + 130);
        if ( v22 )
        {
          v21 = 23;
          LODWORD(Priority) = v22;
          goto LABEL_29;
        }
        v23 = *(_DWORD *)(v8 + 36);
        if ( v23 > 0x12 )
          v23 = 18;
        v24 = v23;
        memmove(v19, &FwUpdateConfigurationDescriptor, v23);
      }
      *(_DWORD *)(v8 + 32) |= 1u;
      if ( (*(_DWORD *)(v8 + 32) & 8) != 0 )
        *(_WORD *)(v8 + 2) = 8;
      *(_DWORD *)(v8 + 36) = v23;
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64))(WdfFunctions_01015 + 2120))(
                 WdfDriverGlobals,
                 a2,
                 0LL,
                 v24);
      goto LABEL_67;
    case 19:
      goto LABEL_43;
    case 50:
LABEL_41:
      if ( (*(_BYTE *)(v8 + 128) & 0x60) != 0x40 )
      {
        v7 = -1073741811;
        *(_DWORD *)(v8 + 4) = -2147482880;
        WPP_RECORDER_SF_(
          *(_QWORD *)(v11 + 2520),
          2u,
          3u,
          0x1Cu,
          (__int64)&WPP_ad94032c158638748c3d0f7b1d777a45_Traceguids);
        goto LABEL_66;
      }
LABEL_43:
      *(_QWORD *)(v8 + 8) = *(_QWORD *)(v11 + 248);
      v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
              WdfDriverGlobals,
              *(_QWORD *)(v11 + 16));
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD *))(WdfFunctions_01015 + 2024))(
                 WdfDriverGlobals,
                 a2,
                 v25,
                 v34);
      if ( (_BYTE)result )
        return result;
      v32 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, a2);
      WPP_RECORDER_SF_Ld(
        *(_QWORD *)(v11 + 2520),
        v26,
        3u,
        0x1Du,
        (__int64)&WPP_ad94032c158638748c3d0f7b1d777a45_Traceguids,
        *(unsigned __int16 *)(v8 + 2),
        v32);
      v27 = (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(
              WdfDriverGlobals,
              a2);
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2104))(
                 WdfDriverGlobals,
                 a2,
                 v27);
      goto LABEL_67;
  }
  WPP_RECORDER_SF_d(
    *(_QWORD *)(v11 + 2520),
    2u,
    3u,
    0x1Eu,
    (__int64)&WPP_ad94032c158638748c3d0f7b1d777a45_Traceguids,
    v17);
LABEL_64:
  *(_DWORD *)(v8 + 4) = -2147482880;
LABEL_65:
  v7 = -1073741811;
LABEL_66:
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             a2,
             v7);
  if ( a5 != 2228227 )
  {
LABEL_8:
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) == 0 )
      return result;
    v16 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_FIRMWARE_UPDATE_INTERNAL_IOCTL_COMPLETE;
    LODWORD(v31) = v7;
    LODWORD(Priority) = v33[3];
    return McTemplateK0ppqq(
             v15,
             v16,
             (const GUID *)(v11 + 2276),
             *(_QWORD *)(v11 + 248),
             *(_QWORD *)(v11 + 2616),
             Priority,
             v31);
  }
LABEL_67:
  if ( !v8 )
    goto LABEL_8;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    v15 = (struct _MCGEN_TRACE_CONTEXT *)*(unsigned __int16 *)(v8 + 2);
    v16 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_FIRMWARE_UPDATE_URB_COMPLETE;
    LODWORD(v31) = *(_DWORD *)(v8 + 4);
    LODWORD(Priority) = *(unsigned __int16 *)(v8 + 2);
    return McTemplateK0ppqq(
             v15,
             v16,
             (const GUID *)(v11 + 2276),
             *(_QWORD *)(v11 + 248),
             *(_QWORD *)(v11 + 2616),
             Priority,
             v31);
  }
  return result;
}
