/*
 * XREFs of HUBHTX_GetDescriptor @ 0x1C0002D4C
 * Callers:
 *     HUBHTX_GetHubDescriptorUsingControlTransfer @ 0x1C0002E50 (HUBHTX_GetHubDescriptorUsingControlTransfer.c)
 *     HUBHSM_GettingHubConfigurationDescriptorWithDefaultLength @ 0x1C00084D0 (HUBHSM_GettingHubConfigurationDescriptorWithDefaultLength.c)
 *     HUBHSM_GettingHubConfigurationDescriptorWithReturnedLength @ 0x1C00085F0 (HUBHSM_GettingHubConfigurationDescriptorWithReturnedLength.c)
 * Callees:
 *     WPP_RECORDER_SF_c @ 0x1C0002040 (WPP_RECORDER_SF_c.c)
 *     WPP_RECORDER_SF_cd @ 0x1C0002558 (WPP_RECORDER_SF_cd.c)
 *     HUBMISC_ControlTransfer @ 0x1C002BD5C (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBHTX_GetDescriptor(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  int v6; // esi
  char v7; // al
  __int64 v10; // rcx
  int v12; // [rsp+20h] [rbp-38h]

  v6 = a3;
  *(_WORD *)(a1 + 953) = 6;
  *(_BYTE *)(a1 + 955) = a4;
  v7 = *(_BYTE *)(a1 + 952);
  *(_WORD *)(a1 + 958) = a3;
  *(_BYTE *)(a1 + 952) = v7 & 0x9C | (a6 != 0 ? -96 : 0x80);
  *(_WORD *)(a1 + 956) = 0;
  v10 = *(_QWORD *)(a1 + 2520);
  if ( a6 )
    WPP_RECORDER_SF_c(v10, 4u, 3u, 0xFu, (__int64)&WPP_74185d68226e30ea568d483797443b73_Traceguids, a4);
  else
    WPP_RECORDER_SF_cd(v10, a2, a3, a4, v12);
  return HUBMISC_ControlTransfer(
           a1,
           *(_QWORD *)(a1 + 248),
           a1,
           (int)a1 + 800,
           (__int64)HUBHTX_HubControlTransferComplete,
           a2,
           v6,
           1,
           *(_BYTE *)(a1 + 2272));
}
