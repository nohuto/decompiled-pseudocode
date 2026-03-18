/*
 * XREFs of rimEndPointerDeviceStaleContacts @ 0x1C0101028
 * Callers:
 *     RIMEndAllStaleContacts @ 0x1C00FFC38 (RIMEndAllStaleContacts.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     RIMCmActiveContactsBegin @ 0x1C00586E4 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C0058818 (RIMCmActiveContactsEnd.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C00588C0 (RIMAbandonPointerDeviceFrame.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C00E7940 (RIMAbArbitratePointerDeviceFrame.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C00E8014 (WPP_RECORDER_SF_dDD.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C00F8C64 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C00F9344 (RIMStartPointerDeviceFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C00FFD24 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMCmActiveContactsNext @ 0x1C0106840 (RIMCmActiveContactsNext.c)
 *     RIMCmDeactivateContact @ 0x1C0106B18 (RIMCmDeactivateContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C0106D24 (RIMCmIsContactDeliveringPointerData.c)
 *     ?_ResetTelemetryData@PalmTelemetry@@AEAAXXZ @ 0x1C0108040 (-_ResetTelemetryData@PalmTelemetry@@AEAAXXZ.c)
 */

void __fastcall rimEndPointerDeviceStaleContacts(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r15
  int v7; // r12d
  int v8; // edi
  __int64 active; // rax
  __int64 v11; // xmm1_8
  __int64 v12; // rax
  __int128 v13; // xmm2
  __int64 v14; // xmm1_8
  __int64 v15; // rax
  _DWORD *v17; // rbx
  int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rbx
  __int64 v22; // [rsp+30h] [rbp-31h]
  __int64 v23; // [rsp+38h] [rbp-29h]
  __int64 v24; // [rsp+40h] [rbp-21h]
  __int128 v25; // [rsp+48h] [rbp-19h] BYREF
  __int64 v26; // [rsp+58h] [rbp-9h]
  __int128 v27; // [rsp+60h] [rbp-1h] BYREF
  __int64 v28; // [rsp+70h] [rbp+Fh]
  _BYTE v29[32]; // [rsp+78h] [rbp+17h] BYREF

  v4 = *(_QWORD *)(a2 + 480);
  v7 = 0;
  v8 = 0;
  active = RIMCmActiveContactsBegin((__int64)&v27, v4);
  v11 = *(_QWORD *)(active + 16);
  v25 = *(_OWORD *)active;
  v26 = v11;
  while ( 1 )
  {
    v12 = RIMCmActiveContactsEnd((__int64)v29, v4);
    v13 = *(_OWORD *)v12;
    v14 = *(_QWORD *)(v12 + 16);
    v15 = *(_QWORD *)v12;
    v28 = v14;
    v27 = v13;
    if ( (_QWORD)v25 == v15 && DWORD2(v25) == DWORD2(v27) && v26 == v28 )
      break;
    v17 = (_DWORD *)(v26 - 16);
    if ( (*(_DWORD *)(v26 + 16) & 2) == 0 )
      __int2c();
    RIMCmActiveContactsNext(v4, &v25);
    if ( a4 > v17[11] + *(_DWORD *)(v4 + 704) )
    {
      v18 = *(_DWORD *)(v4 + 24);
      if ( (unsigned int)(v18 - 5) > 1 )
      {
        if ( (unsigned int)(v18 - 1) <= 3 )
          v8 = 1;
      }
      else
      {
        v8 = 2;
      }
      if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v17) )
      {
        if ( !v7 )
        {
          RIMAbandonPointerDeviceFrame(a1, a2);
          if ( !(unsigned int)RIMStartPointerDeviceFrame(a1, a2, a3) )
          {
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              0x14u,
              0x2Cu,
              (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids);
            break;
          }
          v7 = 1;
        }
        LODWORD(v24) = v17[655];
        LODWORD(v23) = v17[2];
        LODWORD(v22) = *v17;
        WPP_RECORDER_SF_dDD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v19,
          v20,
          0x2Du,
          (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids,
          v22,
          v23,
          v24);
        v17[580] |= 4u;
        RIMInsertSimulatedContactEndStateInFrame(a1, a2, v17, a3, a4, 0);
      }
      else
      {
        LODWORD(v24) = v17[655];
        LODWORD(v23) = v17[2];
        LODWORD(v22) = *v17;
        WPP_RECORDER_SF_dDD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v19,
          v20,
          0x2Bu,
          (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids,
          v22,
          v23,
          v24);
        RIMCmDeactivateContact(v4, v17);
      }
    }
  }
  if ( v7 )
  {
    RIMAbArbitratePointerDeviceFrame(a1, a2);
    RIMCompletePointerDeviceFrame(a1, a2);
  }
  v21 = *(_QWORD *)(a1 + 840);
  if ( v21 )
  {
    if ( v8 )
    {
      PalmTelemetry::_ResetTelemetryData(*(PalmTelemetry **)(a1 + 840));
      if ( *(_DWORD *)v21 )
      {
        if ( v8 == 1 )
          *(_DWORD *)(v21 + 4) = 1;
        else
          *(_QWORD *)v21 = 0LL;
      }
    }
  }
}
