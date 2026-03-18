/*
 * XREFs of HUBHTX_GetHubStatusUsingControlTransfer @ 0x1C0003240
 * Callers:
 *     HUBHSM_GettingHubPortStatus @ 0x1C0008070 (HUBHSM_GettingHubPortStatus.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C000A734 (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C002E39C (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBHTX_GetHubStatusUsingControlTransfer(__int64 a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  __int64 v4; // [rsp+28h] [rbp-40h]

  v1 = a1 + 780;
  *(_BYTE *)(a1 + 952) = *(_BYTE *)(a1 + 952) & 0x1C | 0xA0;
  *(_BYTE *)(a1 + 953) = 0;
  *(_DWORD *)(a1 + 954) = 0;
  *(_WORD *)(a1 + 958) = 4;
  *(_DWORD *)(a1 + 784) = *(_DWORD *)(a1 + 780);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 4u, 3u, 0x19u, (__int64)&WPP_74185d68226e30ea568d483797443b73_Traceguids);
  result = HUBMISC_ControlTransfer(
             a1,
             *(_QWORD *)(a1 + 248),
             a1,
             (int)a1 + 800,
             (__int64)HUBHTX_HubControlTransferComplete,
             v1,
             4,
             0,
             *(_BYTE *)(a1 + 2272));
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v4) = result;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        0x1Au,
        (__int64)&WPP_74185d68226e30ea568d483797443b73_Traceguids,
        v4);
    }
    return HUBSM_AddEvent(a1 + 1264, 2004LL);
  }
  return result;
}
