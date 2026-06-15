/*
 * XREFs of ?InitializeMeterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@I@Z @ 0x14000AE40
 * Callers:
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x14000A510 (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140015E90 (__security_check_cookie.c)
 *     memset_0 @ 0x140016CC6 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14002BE64 (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14003CAE8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPipeInstance::InitializeMeterInterface(
        CPipeInstance *this,
        struct CProcessNode *a2,
        struct IAudioProcessingObject *a3,
        int a4)
{
  int v7; // ebx
  __int64 v9; // [rsp+28h] [rbp-29h] BYREF
  _QWORD v10[2]; // [rsp+30h] [rbp-21h] BYREF
  int v11; // [rsp+40h] [rbp-11h] BYREF
  GUID v12; // [rsp+44h] [rbp-Dh]
  int v13; // [rsp+54h] [rbp+3h]
  int v14; // [rsp+58h] [rbp+7h]
  int v15; // [rsp+5Ch] [rbp+Bh]
  int v16; // [rsp+60h] [rbp+Fh]
  _BYTE v17[16]; // [rsp+68h] [rbp+17h] BYREF
  int v18; // [rsp+78h] [rbp+27h]
  float v19; // [rsp+84h] [rbp+33h]

  v10[1] = -2LL;
  v9 = 0LL;
  memset_0(&v11, 0, 0x24uLL);
  v10[0] = 0LL;
  if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, _QWORD *))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_419b26e3_fa99_4408_83de_cc1276efa489,
         v10) >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(struct CProcessNode *, __int64 *))(*(_QWORD *)a2 + 8LL))(a2, &v9);
    if ( v7 < 0 )
      goto LABEL_13;
    v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v9 + 48LL))(v9, v17);
    if ( v7 < 0
      || (v11 = 36,
          v12 = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba,
          v14 = (int)((float)((float)(v19 * 10.0) / 1000.0) + 0.5),
          v16 = a4,
          v15 = 10,
          v13 = v18,
          v7 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, int *))a3->lpVtbl->Initialize)(
                 a3,
                 36LL,
                 &v11),
          v7 < 0) )
    {
LABEL_13:
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          44LL,
          &WPP_d4b18a9a07fa3bd0098f681e5ce2fb5d_Traceguids,
          (unsigned int)v7);
      }
      AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeMeterInterface", 0xD2Bu, v7);
    }
  }
  else
  {
    v7 = 0;
  }
  if ( v10[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10[0] + 16LL))(v10[0]);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return (unsigned int)v7;
}
