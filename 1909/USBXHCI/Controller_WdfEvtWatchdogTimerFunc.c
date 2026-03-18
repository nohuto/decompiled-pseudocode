/*
 * XREFs of Controller_WdfEvtWatchdogTimerFunc @ 0x1C0001890
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_i @ 0x1C0002D84 (WPP_RECORDER_SF_i.c)
 *     RootHub_DetectPortsInComplianceMode @ 0x1C0003BD8 (RootHub_DetectPortsInComplianceMode.c)
 *     Etw_ReportControllerHealthWithPortError @ 0x1C0006820 (Etw_ReportControllerHealthWithPortError.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000E974 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0010108 (Controller_ReportFatalError.c)
 *     Controller_SetControllerGone @ 0x1C00102A4 (Controller_SetControllerGone.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     XilCoreCommonBuffer_FreeUnusedResources @ 0x1C004801C (XilCoreCommonBuffer_FreeUnusedResources.c)
 *     Register_ReadSecureMmio @ 0x1C00683B4 (Register_ReadSecureMmio.c)
 */

__int64 __fastcall Controller_WdfEvtWatchdogTimerFunc(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r15
  _QWORD *v4; // rax
  char v5; // bl
  __int64 v6; // rcx
  int *v7; // rdx
  int v8; // eax
  int v9; // edx
  int v10; // r8d
  __int64 v11; // rcx
  unsigned __int32 v12; // ecx
  __int64 v13; // rsi
  KIRQL v14; // al
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 *v17; // rbx
  unsigned int v18; // r13d
  unsigned int v19; // eax
  unsigned int v20; // r8d
  __int64 *v21; // rax
  __int64 *v22; // rdx
  __int64 **v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  __int64 *v27; // rcx
  __int64 **v28; // rax
  unsigned int v29; // r8d
  __int64 v30; // rbx
  __int64 result; // rax
  char v32; // [rsp+28h] [rbp-50h]
  int v33; // [rsp+88h] [rbp+10h] BYREF
  __int64 v34; // [rsp+90h] [rbp+18h]

  v2 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 2568))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1);
  v3 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v2,
         off_1C0056428);
  ++*(_DWORD *)(v3 + 400);
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                   WPP_MAIN_CB.Dpc.ProcessorHistory,
                   a1,
                   off_1C0056068);
  if ( (__int64)(MEMORY[0xFFFFF78000000014] - *v4) < 864000000000LL )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    *v4 = MEMORY[0xFFFFF78000000014];
  }
  if ( *(_BYTE *)(v3 + 537) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      "Code Path Requires Passive Level",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
      10320LL);
  v6 = *(_QWORD *)(v3 + 88);
  v7 = (int *)(*(_QWORD *)(v6 + 32) + 4LL);
  if ( *(_BYTE *)(*(_QWORD *)(v6 + 8) + 537LL) )
  {
    Register_ReadSecureMmio(v6, (int)v7, 2, 1, &v33);
    v8 = v33;
  }
  else
  {
    v8 = *v7;
  }
  if ( v8 == -1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 3;
      WPP_RECORDER_SF_(*(_QWORD *)(v3 + 72), (_DWORD)v7, 4, 265, (__int64)&Context.Logger + 4);
    }
    LOBYTE(v7) = 1;
    Controller_SetControllerGone(v3, v7);
    goto LABEL_23;
  }
  if ( (v8 & 4) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 1;
      WPP_RECORDER_SF_d(*(_QWORD *)(v3 + 72), (_DWORD)v7, 4, 266, (__int64)&Context.Logger + 4, v8);
    }
    Controller_HwVerifierBreakIfEnabled(v3, 0, 0, 2, (__int64)"Controller reported Host System Error", 0LL, 0LL);
    v10 = 4097;
LABEL_22:
    Controller_ReportFatalError(v3, 2, v10, 0, 0LL, 0LL);
LABEL_23:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 1;
      WPP_RECORDER_SF_(*(_QWORD *)(v3 + 72), v9, 4, 167, (__int64)&Context.Logger + 4);
    }
    goto LABEL_81;
  }
  if ( (v8 & 0x1000) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 1;
      WPP_RECORDER_SF_d(*(_QWORD *)(v3 + 72), (_DWORD)v7, 4, 267, (__int64)&Context.Logger + 4, v8);
    }
    Controller_HwVerifierBreakIfEnabled(v3, 0, 0, 4, (__int64)"Controller reported Host Controller Error", 0LL, 0LL);
    v10 = 4098;
    goto LABEL_22;
  }
  RootHub_DetectPortsInComplianceMode(*(_QWORD *)(v3 + 152));
  if ( v5 && *(_BYTE *)(v3 + 472) )
  {
    Etw_ReportControllerHealthWithPortError(v11, v3, 0LL, 0LL);
    *(_BYTE *)(v3 + 472) = 0;
  }
  v12 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 840), 0, 0);
  if ( !v12 || *(_DWORD *)(v3 + 400) % v12 )
  {
    if ( ++*(_DWORD *)(v3 + 412) == 60 )
    {
      *(_QWORD *)(v3 + 408) = 0LL;
      *(_DWORD *)(v3 + 404) = 0;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(*(_QWORD *)(v3 + 72), 4, 4, 171, (__int64)&Context.Logger + 4);
    }
    v13 = *(_QWORD *)(v3 + 120);
    if ( v13 )
    {
      if ( *(_BYTE *)(*(_QWORD *)v13 + 537LL) && KeGetCurrentIrql() )
        Debug_FreAssertMsg(
          "Code Path Requires Passive Level",
          0LL,
          "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\commonbuffer.c",
          659LL);
      if ( !KeGetCurrentIrql() || *(_QWORD *)(v13 + 72) )
      {
        v34 = v13 + 88;
        v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + 104));
        LODWORD(v15) = 0;
        *(_BYTE *)(v13 + 113) = v14;
        v33 = 0;
        v16 = v13 + 124;
        do
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v32 = v15;
            LOBYTE(v15) = 5;
            WPP_RECORDER_SF_dd(
              *(_QWORD *)(*(_QWORD *)(v13 + 96) + 72LL),
              v15,
              8,
              25,
              (__int64)&WPP_5fc7d39ce5cf31fa9112447a0ca2d111_Traceguids,
              v32,
              *(_DWORD *)(v16 + 24));
          }
          v17 = *(__int64 **)(v16 + 44);
          v18 = *(_DWORD *)(v16 + 16);
          if ( v17 != (__int64 *)(v16 + 44) )
          {
            while ( *(_DWORD *)(v16 + 24) > v18 )
            {
              if ( *((_BYTE *)v17 + 16) )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                  && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  LOBYTE(v15) = 5;
                  WPP_RECORDER_SF_i(
                    *(_QWORD *)(*(_QWORD *)(v13 + 96) + 72LL),
                    v15,
                    8,
                    22,
                    (__int64)&WPP_5fc7d39ce5cf31fa9112447a0ca2d111_Traceguids,
                    (char)v17);
                }
                v19 = *(_DWORD *)v16;
                v20 = 0;
                if ( *(_DWORD *)v16 )
                {
                  while ( 1 )
                  {
                    v21 = &v17[11 * v20 + 4];
                    v22 = (__int64 *)*v21;
                    if ( *(__int64 **)(*v21 + 8) != v21 )
                      break;
                    v23 = (__int64 **)v21[1];
                    if ( *v23 != v21 )
                      break;
                    *v23 = v22;
                    v22[1] = (__int64)v23;
                    v21[1] = (__int64)v21;
                    *v21 = (__int64)v21;
                    v24 = v21 + 6;
                    v25 = *v24;
                    if ( *(_QWORD **)(*v24 + 8LL) != v24 )
                      break;
                    v26 = (_QWORD *)v24[1];
                    if ( (_QWORD *)*v26 != v24 )
                      break;
                    *v26 = v25;
                    ++v20;
                    *(_QWORD *)(v25 + 8) = v26;
                    v24[1] = v24;
                    *v24 = v24;
                    v19 = *(_DWORD *)v16;
                    if ( v20 >= *(_DWORD *)v16 )
                      goto LABEL_58;
                  }
LABEL_79:
                  __fastfail(3u);
                }
LABEL_58:
                *(_DWORD *)(v16 + 24) -= v19;
                *(_DWORD *)(v16 + 20) -= v19;
                v27 = (__int64 *)*v17;
                if ( *(__int64 **)(*v17 + 8) != v17 )
                  goto LABEL_79;
                v28 = (__int64 **)v17[1];
                if ( *v28 != v17 )
                  goto LABEL_79;
                *v28 = v27;
                v27[1] = (__int64)v28;
                v15 = *(_QWORD *)(v13 + 280);
                if ( *(_QWORD *)v15 != v13 + 272 )
                  goto LABEL_79;
                *v17 = v13 + 272;
                v17[1] = v15;
                *(_QWORD *)v15 = v17;
                *(_QWORD *)(v13 + 280) = v17;
                v17 = v27;
                ++*(_DWORD *)(v13 + 264);
              }
              else
              {
                v29 = *(_DWORD *)v16;
                LODWORD(v15) = 0;
                if ( *(_DWORD *)v16 )
                {
                  do
                  {
                    if ( v17[11 * (unsigned int)v15 + 13] )
                      break;
                    LODWORD(v15) = v15 + 1;
                  }
                  while ( (unsigned int)v15 < v29 );
                }
                if ( (_DWORD)v15 == v29 )
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                    && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  {
                    LOBYTE(v15) = 5;
                    WPP_RECORDER_SF_i(
                      *(_QWORD *)(*(_QWORD *)(v13 + 96) + 72LL),
                      v15,
                      8,
                      23,
                      (__int64)&WPP_5fc7d39ce5cf31fa9112447a0ca2d111_Traceguids,
                      (char)v17);
                  }
                  *((_BYTE *)v17 + 16) = 1;
                  --*(_DWORD *)(v13 + 292);
                }
                v17 = (__int64 *)*v17;
              }
              if ( v17 == (__int64 *)(v16 + 44) )
                break;
            }
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v15) = 5;
            WPP_RECORDER_SF_dd(
              *(_QWORD *)(*(_QWORD *)(v13 + 96) + 72LL),
              v15,
              8,
              26,
              (__int64)&WPP_5fc7d39ce5cf31fa9112447a0ca2d111_Traceguids,
              v33,
              *(_DWORD *)(v16 + 24));
          }
          v16 += 64LL;
          LODWORD(v15) = v33 + 1;
          v33 = v15;
        }
        while ( (unsigned int)v15 < 2 );
        v30 = *(_QWORD *)(v13 + 272);
        KeReleaseSpinLock((PKSPIN_LOCK)(v13 + 104), *(_BYTE *)(v13 + 113));
        if ( v30 != v13 + 272 )
        {
          if ( KeGetCurrentIrql() )
            (*(void (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 3040))(
              WPP_MAIN_CB.Dpc.ProcessorHistory,
              *(_QWORD *)(v13 + 72));
          else
            XilCoreCommonBuffer_FreeUnusedResources(v34);
        }
      }
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(v3 + 72), 4, 4, 168, (__int64)&Context.Logger + 4);
    Controller_ReportFatalError(v3, 2, 4159, 0, 0LL, 0LL);
  }
LABEL_81:
  result = KeGetCurrentIrql();
  if ( !(_BYTE)result )
    return (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             *(_QWORD *)(v3 + 360),
             -50000000LL);
  return result;
}
