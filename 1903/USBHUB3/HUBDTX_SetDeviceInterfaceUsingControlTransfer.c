/*
 * XREFs of HUBDTX_SetDeviceInterfaceUsingControlTransfer @ 0x1C0027BAC
 * Callers:
 *     HUBDSM_SettingDeviceInterfaceInSettingInterfaceOnFailureForCompat @ 0x1C0020520 (HUBDSM_SettingDeviceInterfaceInSettingInterfaceOnFailureForCompat.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C000A734 (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C002E39C (HUBMISC_ControlTransfer.c)
 */

void __fastcall HUBDTX_SetDeviceInterfaceUsingControlTransfer(__int64 *a1)
{
  __int64 v1; // rdi
  int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // [rsp+28h] [rbp-30h]
  char v9; // [rsp+40h] [rbp-18h]

  v1 = (__int64)(a1 + 63);
  if ( a1[8] )
  {
    *((_BYTE *)a1 + 400) = a1[50] & 0x1C | 1;
    v4 = *(_QWORD *)(a1[8] + 32);
    *((_BYTE *)a1 + 401) = 11;
    *((_WORD *)a1 + 201) = *(unsigned __int8 *)(v4 + 3);
    *((_WORD *)a1 + 202) = *(unsigned __int8 *)(v4 + 2);
    *((_WORD *)a1 + 203) = 0;
    _InterlockedAnd((volatile signed __int32 *)(a1[8] + 28), 0xFFFFFFFD);
    v5 = a1[3];
    v6 = *a1;
    v9 = *((_BYTE *)a1 + 1512);
    a1[8] = 0LL;
    v7 = HUBMISC_ControlTransfer(
           v6,
           v5,
           (_DWORD)a1,
           (int)a1 + 248,
           (__int64)HUBDTX_ControlTransferComplete,
           0LL,
           0,
           0,
           v9);
    if ( v7 >= 0 )
      return;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v8) = v7;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432),
        2u,
        5u,
        0x44u,
        (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids,
        v8);
    }
    v3 = 4004;
  }
  else
  {
    v3 = 4012;
  }
  HUBSM_AddEvent(v1, v3);
}
