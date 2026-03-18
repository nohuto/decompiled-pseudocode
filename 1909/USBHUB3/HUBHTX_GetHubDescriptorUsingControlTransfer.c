/*
 * XREFs of HUBHTX_GetHubDescriptorUsingControlTransfer @ 0x1C0002FA8
 * Callers:
 *     HUBHSM_GettingHubDescriptor @ 0x1C0008F10 (HUBHSM_GettingHubDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     HUBHTX_GetDescriptor @ 0x1C0002E7C (HUBHTX_GetDescriptor.c)
 *     HUBSM_AddEvent @ 0x1C000A734 (HUBSM_AddEvent.c)
 */

__int64 __fastcall HUBHTX_GetHubDescriptorUsingControlTransfer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __int64 v6; // r8
  __int64 result; // rax
  int v8; // [rsp+20h] [rbp-18h]
  __int64 v9; // [rsp+28h] [rbp-10h]

  v4 = *(_DWORD *)(a1 + 256);
  if ( v4 > 0 )
  {
    if ( v4 <= 2 )
    {
      LOBYTE(a4) = 41;
      v6 = 71LL;
      goto LABEL_6;
    }
    if ( v4 == 3 )
    {
      LOBYTE(a4) = 42;
      v6 = 12LL;
LABEL_6:
      result = HUBHTX_GetDescriptor(a1, a1 + 1180, v6, a4, v8, 1);
      goto LABEL_8;
    }
  }
  result = 3221225473LL;
LABEL_8:
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v9) = result;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        0x10u,
        (__int64)&WPP_74185d68226e30ea568d483797443b73_Traceguids,
        v9);
    }
    return HUBSM_AddEvent(a1 + 1264, 2004LL);
  }
  return result;
}
