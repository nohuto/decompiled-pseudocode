/*
 * XREFs of DCompHitTest @ 0x1C002F760
 * Callers:
 *     <none>
 * Callees:
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAHPEAI@Z @ 0x1C001A108 (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAHPEAI@.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

_OWORD *__fastcall DCompHitTest(
        _OWORD *a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        unsigned __int64 a5,
        int a6,
        _DWORD *a7,
        _DWORD *a8)
{
  struct _LIST_ENTRY *Blink; // rax
  __int128 *v13; // rax
  _OWORD *result; // rax
  __int128 v15; // [rsp+50h] [rbp-B0h]
  __int128 v16; // [rsp+60h] [rbp-A0h]
  __int128 v17; // [rsp+70h] [rbp-90h]
  __int128 v18; // [rsp+80h] [rbp-80h]
  __int128 v19; // [rsp+90h] [rbp-70h]
  __int128 v20; // [rsp+A0h] [rbp-60h]
  __int128 v21; // [rsp+B0h] [rbp-50h]
  __int128 v22; // [rsp+C0h] [rbp-40h]
  __int128 v23; // [rsp+D0h] [rbp-30h]
  __int128 v24; // [rsp+E0h] [rbp-20h]
  __int128 v25; // [rsp+F0h] [rbp-10h]
  _BYTE v26[192]; // [rsp+100h] [rbp+0h] BYREF

  if ( !a2 )
    goto LABEL_4;
  if ( a2 > 3 )
  {
    if ( a2 == 4 )
    {
LABEL_4:
      Blink = (struct _LIST_ENTRY *)(*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C01C3018 + 8LL))(qword_1C01C3018);
      goto LABEL_5;
    }
    if ( a2 != 5 )
    {
      if ( a2 != 6 )
      {
        MicrosoftTelemetryAssertTriggeredMsgKM("Are we missing PT_XXX");
        goto LABEL_11;
      }
      goto LABEL_4;
    }
  }
  Blink = WPP_MAIN_CB.Queue.ListEntry.Blink;
LABEL_5:
  if ( !Blink )
  {
LABEL_11:
    memset(v26, 0, 0xB8uLL);
    v13 = (__int128 *)v26;
    v26[176] = 0;
    goto LABEL_7;
  }
  v13 = (__int128 *)CSpatialProcessor::HitTest((__int64)Blink, v26, a2, a3, a4, a5, a6, a7, a8);
LABEL_7:
  v15 = *v13;
  v16 = v13[1];
  v17 = v13[2];
  v18 = v13[3];
  v19 = v13[4];
  v20 = v13[5];
  v21 = v13[6];
  v22 = v13[7];
  v23 = v13[8];
  v24 = v13[9];
  v25 = v13[10];
  CInputDest::SetEmpty((CInputDest *)v26);
  *a1 = v15;
  a1[1] = v16;
  a1[2] = v17;
  a1[3] = v18;
  a1[4] = v19;
  a1[5] = v20;
  a1[6] = v21;
  a1[7] = v22;
  a1[8] = v23;
  result = a1;
  a1[9] = v24;
  a1[10] = v25;
  return result;
}
