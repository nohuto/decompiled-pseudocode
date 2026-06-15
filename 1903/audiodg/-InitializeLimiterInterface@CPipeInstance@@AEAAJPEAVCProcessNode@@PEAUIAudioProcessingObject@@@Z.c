/*
 * XREFs of ?InitializeLimiterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x14000AA94
 * Callers:
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x14000A520 (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     memset_0 @ 0x1400168B6 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14002BF24 (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14003CB48 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPipeInstance::InitializeLimiterInterface(
        CPipeInstance *this,
        struct CProcessNode *a2,
        struct IAudioProcessingObject *a3)
{
  int v6; // ebx
  __int64 v8; // [rsp+28h] [rbp-29h] BYREF
  _QWORD v9[2]; // [rsp+30h] [rbp-21h] BYREF
  int v10; // [rsp+40h] [rbp-11h] BYREF
  GUID v11; // [rsp+44h] [rbp-Dh]
  int v12; // [rsp+54h] [rbp+3h]
  int v13; // [rsp+58h] [rbp+7h]
  BOOL v14; // [rsp+5Ch] [rbp+Bh]
  _BYTE v15[16]; // [rsp+60h] [rbp+Fh] BYREF
  int v16; // [rsp+70h] [rbp+1Fh]
  int v17; // [rsp+7Ch] [rbp+2Bh]

  v9[1] = -2LL;
  v9[0] = 0LL;
  memset_0(&v10, 0, 0x20uLL);
  v8 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, _QWORD *))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_7df8824c_aec7_4119_9425_e6979172a8ae,
         v9) >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(struct CProcessNode *, __int64 *))(*(_QWORD *)a2 + 8LL))(a2, &v8);
    if ( v6 < 0
      || (v6 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v8 + 48LL))(v8, v15), v6 < 0)
      || (v10 = 32,
          v11 = GUID_d69e0717_dd4b_4b25_997a_da813833b8ac,
          v13 = v17,
          v12 = v16,
          v14 = *(_QWORD *)this == 0LL,
          v6 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, int *))a3->lpVtbl->Initialize)(
                 a3,
                 32LL,
                 &v10),
          v6 < 0) )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          50LL,
          &WPP_d4b18a9a07fa3bd0098f681e5ce2fb5d_Traceguids,
          (unsigned int)v6);
      }
      AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeLimiterInterface", 0xEDEu, v6);
    }
  }
  else
  {
    v6 = 0;
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v9[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9[0] + 16LL))(v9[0]);
  return (unsigned int)v6;
}
