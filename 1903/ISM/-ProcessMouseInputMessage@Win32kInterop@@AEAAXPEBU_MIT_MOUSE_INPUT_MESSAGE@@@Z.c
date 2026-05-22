/*
 * XREFs of ?ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800BDF54
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_8dc586343b12ac0222b36aa6f7619d0d__void__MIT_MOUSE_INPUT_MESSAGE_const___::_Do_call @ 0x1800BF230 (std--_Func_impl_no_alloc__lambda_8dc586343b12ac0222b36aa6f7619d0d__void__MIT_MOUSE__ea_1800BF230.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x18001B4C8 (-IsEdition@@YA_N_K@Z.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?ConstructInputInteropMessageFromMouseInputMessageForWheel@@YA?AU_MIT_INPUT_INTEROP_MESSAGE@@AEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800BB7B8 (-ConstructInputInteropMessageFromMouseInputMessageForWheel@@YA-AU_MIT_INPUT_INTEROP_MESSAGE@@AEB.c)
 *     ?ConstructInputNotificationFromMouseInputMessage@@YA?AU_InputMessageNotification@@AEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800BB8C4 (-ConstructInputNotificationFromMouseInputMessage@@YA-AU_InputMessageNotification@@AEBU_MIT_MOUSE.c)
 *     ?DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V?$function@$$A6AXPEAUInputContext@@@Z@std@@V?$function@$$A6AXPEAUInputInfo@@@Z@4@@Z @ 0x1800BC520 (-DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V-$function@$$A6AXPEAUInputCon.c)
 *     ?DropMouseInput@ISM@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800BCB40 (-DropMouseInput@ISM@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x1800BCF24 (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@@_N@Z @ 0x1800BD3C4 (-ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@.c)
 *     ?ReceiveMouseInput@ISM@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800BE930 (-ReceiveMouseInput@ISM@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Win32kInterop::ProcessMouseInputMessage(Win32kInterop *this, const struct _MIT_MOUSE_INPUT_MESSAGE *a2)
{
  unsigned int v3; // edi
  char v4; // bl
  struct _MIT_MOUSE_INPUT_MESSAGE *v5; // rdx
  int v6; // eax
  _OWORD *v7; // rax
  char *v8; // rcx
  __int64 v9; // rdx
  unsigned __int8 v10; // al
  __int64 v11; // rcx
  struct _MIT_MOUSE_INPUT_MESSAGE *v12; // rdx
  _OWORD *v13; // rax
  struct _MIT_MOUSE_INPUT_MESSAGE *v14; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v18; // [rsp+60h] [rbp-A8h]
  __int64 *v19; // [rsp+70h] [rbp-98h]
  __int128 v20; // [rsp+78h] [rbp-90h]
  __int64 v21; // [rsp+88h] [rbp-80h]
  __int64 (__fastcall **v22)(); // [rsp+90h] [rbp-78h] BYREF
  __int128 v23; // [rsp+98h] [rbp-70h]
  __int64 *v24; // [rsp+A8h] [rbp-60h]
  __int64 (__fastcall ***v25)(); // [rsp+C8h] [rbp-40h]
  __int64 (__fastcall **v26)(); // [rsp+D0h] [rbp-38h] BYREF
  __int128 v27; // [rsp+D8h] [rbp-30h]
  __int64 (__fastcall ***v28)(); // [rsp+108h] [rbp+0h]
  _BYTE v29[296]; // [rsp+110h] [rbp+8h] BYREF
  int v30[4]; // [rsp+238h] [rbp+130h] BYREF
  __int64 v31; // [rsp+248h] [rbp+140h]
  int v32; // [rsp+250h] [rbp+148h]
  __int128 v33; // [rsp+298h] [rbp+190h]
  __int64 v34; // [rsp+2A8h] [rbp+1A0h]
  char v35; // [rsp+2BDh] [rbp+1B5h]
  char v36; // [rsp+2BEh] [rbp+1B6h]
  char v37; // [rsp+2C0h] [rbp+1B8h] BYREF
  _OWORD v38[8]; // [rsp+3E8h] [rbp+2E0h] BYREF
  _OWORD v39[7]; // [rsp+468h] [rbp+360h] BYREF
  __int64 v40; // [rsp+4D8h] [rbp+3D0h]

  v21 = -2LL;
  v14 = a2;
  v3 = *(_DWORD *)a2;
  InputTraceLogging::ISM::ReceiveMouseInput(a2);
  v4 = 1;
  if ( v3 )
  {
    if ( v3 != -1 && !Win32kInterop::IsDeviceAttached(this, v3, 1) )
    {
      InputTraceLogging::ISM::DropMouseInput(v14);
      return;
    }
  }
  else
  {
    v3 = -1;
  }
  memset_0(v30, 0, 0x1A8uLL);
  v32 = 424;
  v30[1] = v3;
  v30[0] = 4096;
  v5 = v14;
  v30[2] = *((_DWORD *)v14 + 8);
  v31 = *((_QWORD *)v14 + 5);
  v33 = *(_OWORD *)((char *)v14 + 8);
  v34 = *((_QWORD *)v14 + 3);
  v6 = *((_DWORD *)v14 + 17);
  if ( v6 == 1 || v6 == 2 )
  {
    v35 = 1;
    v6 = *((_DWORD *)v14 + 17);
  }
  if ( v6 == 3 )
  {
    v36 = 1;
    v7 = (_OWORD *)ConstructInputInteropMessageFromMouseInputMessageForWheel((__int64)v29, (__int64)v14);
    v8 = &v37;
    v9 = 2LL;
    do
    {
      *(_OWORD *)v8 = *v7;
      *((_OWORD *)v8 + 1) = v7[1];
      *((_OWORD *)v8 + 2) = v7[2];
      *((_OWORD *)v8 + 3) = v7[3];
      *((_OWORD *)v8 + 4) = v7[4];
      *((_OWORD *)v8 + 5) = v7[5];
      *((_OWORD *)v8 + 6) = v7[6];
      v8 += 128;
      *((_OWORD *)v8 - 1) = v7[7];
      v7 += 8;
      --v9;
    }
    while ( v9 );
    *(_OWORD *)v8 = *v7;
    *((_OWORD *)v8 + 1) = v7[1];
    v5 = v14;
  }
  v15 = 0LL;
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64 *))(**((_QWORD **)this + 6) + 96LL))(
    *((_QWORD *)this + 6),
    (__int64)v5 + 64,
    *((_QWORD *)this + 33),
    &v15);
  v17 = *((_QWORD *)v14 + 20);
  LODWORD(v16) = *((_DWORD *)v14 + 44);
  *(_QWORD *)&v18 = &v15;
  *((_QWORD *)&v18 + 1) = &v17;
  v19 = &v16;
  *(_QWORD *)&v20 = &v14;
  *((_QWORD *)&v20 + 1) = v30;
  v26 = off_180175668;
  v27 = v20;
  v28 = &v26;
  v22 = off_1801756C8;
  v23 = v18;
  v24 = &v16;
  v25 = &v22;
  Win32kInterop::DeliverToContextualProcessing((__int64)this, v30, (__int64)&v22, (__int64)&v26);
  v10 = IsEdition(253345LL);
  v11 = v15;
  v12 = v14;
  if ( !v10
    || *((_DWORD *)v14 + 17) != 1
    || !*((_WORD *)v14 + 90) && !*((_WORD *)v14 + 91)
    || v15 == *((_QWORD *)this + 33) )
  {
    v4 = 0;
  }
  if ( *((_DWORD *)v14 + 17) == 2 || v4 )
  {
    v13 = (_OWORD *)ConstructInputNotificationFromMouseInputMessage((__int64)v29, (__int64)v14);
    v38[0] = *v13;
    v38[1] = v13[1];
    v38[2] = v13[2];
    v38[3] = v13[3];
    v38[4] = v13[4];
    v38[5] = v13[5];
    v38[6] = v13[6];
    v38[7] = v13[7];
    v13 += 8;
    v39[0] = *v13;
    v39[1] = v13[1];
    v39[2] = v13[2];
    v39[3] = v13[3];
    v39[4] = v13[4];
    v39[5] = v13[5];
    v39[6] = v13[6];
    v40 = *((_QWORD *)v13 + 14);
    Win32kInterop::ProcessInputMessage((__int64)this, (__int64)v39, (__int64)v38, v4);
    v11 = v15;
  }
  if ( v11 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64, struct _MIT_MOUSE_INPUT_MESSAGE *))(*(_QWORD *)v11 + 16LL))(v11, v12);
  }
}
