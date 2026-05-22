/*
 * XREFs of ?ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800FA3DC
 * Callers:
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800F82B0 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process2DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800F84B0 (-Process2DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1800F8510 (-PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@.c)
 * Callees:
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18012DB5F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCGamepadProcessor::ClearControllerProcessorState(MPCGamepadProcessor *this, struct InputInfo *a2)
{
  __int64 v3; // rcx
  _OWORD v4[4]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v5; // [rsp+60h] [rbp-A0h]
  _BYTE v6[520]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v7; // [rsp+278h] [rbp+178h]
  __int128 v8; // [rsp+288h] [rbp+188h]
  __int128 v9; // [rsp+298h] [rbp+198h]
  __int128 v10; // [rsp+2A8h] [rbp+1A8h]
  __int64 v11; // [rsp+2B8h] [rbp+1B8h]

  memcpy_0(v6, a2, 0x640uLL);
  memset_0(v4, 0, 0x48uLL);
  v3 = *((_QWORD *)this + 471);
  v7 = v4[0];
  v9 = v4[2];
  v8 = v4[1];
  v11 = v5;
  v10 = v4[3];
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v3 + 48LL))(v3, v6);
}
