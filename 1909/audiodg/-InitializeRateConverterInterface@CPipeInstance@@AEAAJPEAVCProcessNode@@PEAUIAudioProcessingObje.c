/*
 * XREFs of ?InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x14000ACB8
 * Callers:
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x14000A510 (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140015E90 (__security_check_cookie.c)
 *     memset_0 @ 0x140016CC6 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14002BE64 (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14003CAE8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPipeInstance::InitializeRateConverterInterface(
        CPipeInstance *this,
        struct CProcessNode *a2,
        struct IAudioProcessingObject *a3)
{
  int v6; // ebx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // [rsp+20h] [rbp-39h] BYREF
  __int64 v11; // [rsp+28h] [rbp-31h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-29h] BYREF
  int v13; // [rsp+40h] [rbp-19h] BYREF
  GUID v14; // [rsp+44h] [rbp-15h]
  float v15; // [rsp+54h] [rbp-5h]
  float v16; // [rsp+58h] [rbp-1h]
  float v17; // [rsp+5Ch] [rbp+3h]
  float v18; // [rsp+60h] [rbp+7h]
  float v19; // [rsp+64h] [rbp+Bh]
  float v20; // [rsp+68h] [rbp+Fh]
  int v21; // [rsp+6Ch] [rbp+13h]
  BOOL v22; // [rsp+70h] [rbp+17h]
  int v23; // [rsp+74h] [rbp+1Bh]
  int v24; // [rsp+78h] [rbp+1Fh]

  v12[1] = -2LL;
  v12[0] = 0LL;
  memset_0(&v13, 0, 0x3CuLL);
  v10 = 0LL;
  v11 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, _QWORD *))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_788f7be2_9c40_41c0_af05_4393fbf409f9,
         v12) < 0 )
  {
    v6 = 0;
    goto LABEL_3;
  }
  v8 = *(_QWORD *)a2;
  if ( *((_DWORD *)a2 + 6) )
  {
    v6 = (*(__int64 (__fastcall **)(struct CProcessNode *, __int64 *))(v8 + 16))(a2, &v10);
    if ( v6 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(struct CProcessNode *, __int64 *))(*(_QWORD *)a2 + 8LL))(a2, &v11);
      goto LABEL_15;
    }
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(struct CProcessNode *, __int64 *))(v8 + 8))(a2, &v10);
    if ( v6 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(struct CProcessNode *, __int64 *))(*(_QWORD *)a2 + 16LL))(a2, &v11);
LABEL_15:
      v6 = v9;
      if ( v9 >= 0 )
      {
        v13 = 60;
        v14 = GUID_27c98999_2895_4829_b080_5a8b65bd3db0;
        v15 = (float)*(int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 40LL))(v10) + 4);
        v16 = (float)*(int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 40LL))(v11) + 4);
        v17 = (float)((float)(1.0 - *((float *)this + 50))
                    * (float)*(int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 40LL))(v10) + 4)) >= 10.0
            ? (float)(1.0 - *((float *)this + 50))
            * (float)*(int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 40LL))(v10) + 4)
            : 10.0;
        v18 = (float)((float)(*((float *)this + 51) + 1.0)
                    * (float)*(int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 40LL))(v10) + 4)) <= 384000.0
            ? (float)(*((float *)this + 51) + 1.0)
            * (float)*(int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 40LL))(v10) + 4)
            : 384000.0;
        v19 = (float)*(int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 40LL))(v11) + 4);
        v20 = (float)*(int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 40LL))(v11) + 4);
        v21 = *((_DWORD *)this + 52);
        v23 = *(unsigned __int16 *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 40LL))(v10) + 2);
        v24 = 0;
        v22 = *((_DWORD *)this + 3) != 0;
        v6 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, int *))a3->lpVtbl->Initialize)(
               a3,
               60LL,
               &v13);
        if ( v6 >= 0 )
          goto LABEL_3;
      }
    }
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      46LL,
      &WPP_d4b18a9a07fa3bd0098f681e5ce2fb5d_Traceguids,
      (unsigned int)v6);
  }
  AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeRateConverterInterface", 0xDD0u, v6);
LABEL_3:
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v12[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12[0] + 16LL))(v12[0]);
  return (unsigned int)v6;
}
