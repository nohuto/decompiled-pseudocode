/*
 * XREFs of Controller_WdfEvtWatchdogTimerFunc @ 0x1C0001870
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_i @ 0x1C00028DC (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000C5B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C000DAAC (Controller_ReportFatalError.c)
 *     Controller_SetControllerGone @ 0x1C000DC30 (Controller_SetControllerGone.c)
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 *     XilCoreCommonBuffer_FreeUnusedResources @ 0x1C00426BC (XilCoreCommonBuffer_FreeUnusedResources.c)
 *     Register_ReadSecureMmio @ 0x1C0060404 (Register_ReadSecureMmio.c)
 */

__int64 __fastcall Controller_WdfEvtWatchdogTimerFunc(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r15
  __int64 v3; // rcx
  int *v4; // rdx
  int v5; // eax
  __int64 v6; // rdx
  int v7; // edx
  int v8; // r8d
  __int64 v9; // rsi
  __int64 v10; // rdx
  unsigned int v11; // r13d
  __int64 v12; // rdi
  __int64 *v13; // rbx
  unsigned int v14; // r12d
  unsigned int v15; // eax
  unsigned int v16; // r8d
  __int64 *v17; // rax
  __int64 *v18; // rdx
  __int64 **v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  __int64 *v23; // rcx
  __int64 **v24; // rax
  unsigned int v25; // r8d
  __int64 v26; // rbx
  __int64 result; // rax
  __int64 v28; // [rsp+78h] [rbp+10h] BYREF

  v1 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 2568))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1);
  v2 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v1,
         off_1C004F400);
  ++*(_DWORD *)(v2 + 336);
  if ( *(_BYTE *)(v2 + 473) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      "Code Path Requires Passive Level",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
      10123LL);
  v3 = *(_QWORD *)(v2 + 88);
  v4 = (int *)(*(_QWORD *)(v3 + 32) + 4LL);
  if ( *(_BYTE *)(*(_QWORD *)(v3 + 8) + 473LL) )
  {
    Register_ReadSecureMmio(v3, (int)v4, 2, 1, &v28);
    v5 = v28;
  }
  else
  {
    v5 = *v4;
  }
  if ( v5 == -1 )
  {
    LOBYTE(v4) = 3;
    WPP_RECORDER_SF_(*(_QWORD *)(v2 + 72), (_DWORD)v4, 4, 262, (__int64)&Context.Logger + 4);
    LOBYTE(v6) = 1;
    Controller_SetControllerGone(v2, v6);
LABEL_14:
    LOBYTE(v7) = 1;
    WPP_RECORDER_SF_(*(_QWORD *)(v2 + 72), v7, 4, 165, (__int64)&Context.Logger + 4);
    goto LABEL_58;
  }
  if ( (v5 & 4) != 0 )
  {
    LOBYTE(v4) = 1;
    WPP_RECORDER_SF_d(*(_QWORD *)(v2 + 72), (_DWORD)v4, 4, 263, (__int64)&Context.Logger + 4, v5);
    Controller_HwVerifierBreakIfEnabled(v2, 0, 0, 2, (__int64)"Controller reported Host System Error", 0LL, 0LL);
    v8 = 4097;
LABEL_13:
    Controller_ReportFatalError(v2, 2, v8, 0, 0LL, 0LL);
    goto LABEL_14;
  }
  if ( (v5 & 0x1000) != 0 )
  {
    LOBYTE(v4) = 1;
    WPP_RECORDER_SF_d(*(_QWORD *)(v2 + 72), (_DWORD)v4, 4, 264, (__int64)&Context.Logger + 4, v5);
    Controller_HwVerifierBreakIfEnabled(v2, 0, 0, 4, (__int64)"Controller reported Host Controller Error", 0LL, 0LL);
    v8 = 4098;
    goto LABEL_13;
  }
  if ( ++*(_DWORD *)(v2 + 344) == 60 )
  {
    *(_QWORD *)(v2 + 340) = 0LL;
    WPP_RECORDER_SF_(*(_QWORD *)(v2 + 72), 4, 4, 169, (__int64)&Context.Logger + 4);
  }
  v9 = *(_QWORD *)(v2 + 120);
  if ( v9 )
  {
    if ( *(_BYTE *)(*(_QWORD *)v9 + 473LL) && KeGetCurrentIrql() )
      Debug_FreAssertMsg(
        "Code Path Requires Passive Level",
        0LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\commonbuffer.c",
        659LL);
    if ( !KeGetCurrentIrql() || *(_QWORD *)(v9 + 72) )
    {
      v28 = v9 + 88;
      *(_BYTE *)(v9 + 113) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 104));
      v11 = 0;
      v12 = v9 + 124;
      do
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v10) = 5;
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(*(_QWORD *)(v9 + 96) + 72LL),
            v10,
            8,
            25,
            (__int64)&WPP_5fc7d39ce5cf31fa9112447a0ca2d111_Traceguids,
            v11,
            *(_DWORD *)(v12 + 24));
        }
        v13 = *(__int64 **)(v12 + 44);
        v14 = *(_DWORD *)(v12 + 16);
        if ( v13 != (__int64 *)(v12 + 44) )
        {
          while ( *(_DWORD *)(v12 + 24) > v14 )
          {
            if ( *((_BYTE *)v13 + 16) )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                LOBYTE(v10) = 5;
                WPP_RECORDER_SF_i(
                  *(_QWORD *)(*(_QWORD *)(v9 + 96) + 72LL),
                  v10,
                  8,
                  22,
                  (__int64)&WPP_5fc7d39ce5cf31fa9112447a0ca2d111_Traceguids,
                  (char)v13);
              }
              v15 = *(_DWORD *)v12;
              v16 = 0;
              if ( *(_DWORD *)v12 )
              {
                while ( 1 )
                {
                  v17 = &v13[11 * v16 + 4];
                  v18 = (__int64 *)*v17;
                  if ( *(__int64 **)(*v17 + 8) != v17 )
                    break;
                  v19 = (__int64 **)v17[1];
                  if ( *v19 != v17 )
                    break;
                  *v19 = v18;
                  v18[1] = (__int64)v19;
                  v17[1] = (__int64)v17;
                  *v17 = (__int64)v17;
                  v20 = v17 + 6;
                  v21 = *v20;
                  if ( *(_QWORD **)(*v20 + 8LL) != v20 )
                    break;
                  v22 = (_QWORD *)v20[1];
                  if ( (_QWORD *)*v22 != v20 )
                    break;
                  *v22 = v21;
                  ++v16;
                  *(_QWORD *)(v21 + 8) = v22;
                  v20[1] = v20;
                  *v20 = v20;
                  v15 = *(_DWORD *)v12;
                  if ( v16 >= *(_DWORD *)v12 )
                    goto LABEL_37;
                }
LABEL_56:
                __fastfail(3u);
              }
LABEL_37:
              *(_DWORD *)(v12 + 24) -= v15;
              *(_DWORD *)(v12 + 20) -= v15;
              v23 = (__int64 *)*v13;
              if ( *(__int64 **)(*v13 + 8) != v13 )
                goto LABEL_56;
              v24 = (__int64 **)v13[1];
              if ( *v24 != v13 )
                goto LABEL_56;
              *v24 = v23;
              v23[1] = (__int64)v24;
              v10 = *(_QWORD *)(v9 + 280);
              if ( *(_QWORD *)v10 != v9 + 272 )
                goto LABEL_56;
              *v13 = v9 + 272;
              v13[1] = v10;
              *(_QWORD *)v10 = v13;
              *(_QWORD *)(v9 + 280) = v13;
              v13 = v23;
              ++*(_DWORD *)(v9 + 264);
            }
            else
            {
              v25 = *(_DWORD *)v12;
              LODWORD(v10) = 0;
              if ( *(_DWORD *)v12 )
              {
                do
                {
                  if ( v13[11 * (unsigned int)v10 + 13] )
                    break;
                  LODWORD(v10) = v10 + 1;
                }
                while ( (unsigned int)v10 < v25 );
              }
              if ( (_DWORD)v10 == v25 )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  LOBYTE(v10) = 5;
                  WPP_RECORDER_SF_i(
                    *(_QWORD *)(*(_QWORD *)(v9 + 96) + 72LL),
                    v10,
                    8,
                    23,
                    (__int64)&WPP_5fc7d39ce5cf31fa9112447a0ca2d111_Traceguids,
                    (char)v13);
                }
                *((_BYTE *)v13 + 16) = 1;
                --*(_DWORD *)(v9 + 292);
              }
              v13 = (__int64 *)*v13;
            }
            if ( v13 == (__int64 *)(v12 + 44) )
              break;
          }
        }
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v10) = 5;
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(*(_QWORD *)(v9 + 96) + 72LL),
            v10,
            8,
            26,
            (__int64)&WPP_5fc7d39ce5cf31fa9112447a0ca2d111_Traceguids,
            v11,
            *(_DWORD *)(v12 + 24));
        }
        ++v11;
        v12 += 64LL;
      }
      while ( v11 < 2 );
      v26 = *(_QWORD *)(v9 + 272);
      KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 104), *(_BYTE *)(v9 + 113));
      if ( v26 != v9 + 272 )
      {
        if ( KeGetCurrentIrql() )
          (*(void (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 3040))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            *(_QWORD *)(v9 + 72));
        else
          XilCoreCommonBuffer_FreeUnusedResources(v28);
      }
    }
  }
LABEL_58:
  result = KeGetCurrentIrql();
  if ( !(_BYTE)result )
    return (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             *(_QWORD *)(v2 + 296),
             -50000000LL);
  return result;
}
