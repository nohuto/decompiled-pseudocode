/*
 * XREFs of ?InitializeVolumeInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x14000AFC4
 * Callers:
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x14000A510 (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140015E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14002BE64 (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14003CAE8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPipeInstance::InitializeVolumeInterface(
        CPipeInstance *this,
        struct CProcessNode *a2,
        struct IAudioProcessingObject *a3)
{
  int v5; // ebx
  __int64 v7; // [rsp+28h] [rbp-19h] BYREF
  _QWORD v8[2]; // [rsp+30h] [rbp-11h] BYREF
  _BYTE v9[24]; // [rsp+40h] [rbp-1h] BYREF
  int v10; // [rsp+58h] [rbp+17h]
  _BYTE v11[16]; // [rsp+60h] [rbp+1Fh] BYREF
  int v12; // [rsp+70h] [rbp+2Fh]
  int v13; // [rsp+7Ch] [rbp+3Bh]

  v8[1] = -2LL;
  v7 = 0LL;
  memset(v9, 0, sizeof(v9));
  v10 = 0;
  v8[0] = 0LL;
  if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, _QWORD *))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60,
         v8) >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(struct CProcessNode *, __int64 *))(*(_QWORD *)a2 + 8LL))(a2, &v7);
    if ( v5 < 0
      || (v5 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v7 + 48LL))(v7, v11), v5 < 0)
      || (*(_DWORD *)v9 = 28,
          *(GUID *)&v9[4] = GUID_06587e71_f043_403a_bf49_cb591ba6e103,
          v10 = v13,
          *(_DWORD *)&v9[20] = v12,
          v5 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _BYTE *))a3->lpVtbl->Initialize)(
                 a3,
                 28LL,
                 v9),
          v5 < 0) )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          43LL,
          &WPP_d4b18a9a07fa3bd0098f681e5ce2fb5d_Traceguids,
          (unsigned int)v5);
      }
      AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeVolumeInterface", 0xCE2u, v5);
    }
  }
  else
  {
    v5 = 0;
  }
  if ( v8[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8[0] + 16LL))(v8[0]);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v5;
}
