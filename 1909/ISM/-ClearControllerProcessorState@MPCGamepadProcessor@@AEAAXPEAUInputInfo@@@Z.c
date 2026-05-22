/*
 * XREFs of ?ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1801374E0
 * Callers:
 *     ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180138A90 (-PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@.c)
 *     ?Process2DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180138C70 (-Process2DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180138CD0 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18003787F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCGamepadProcessor::ClearControllerProcessorState(MPCGamepadProcessor *this, struct InputInfo *a2)
{
  __int64 v3; // rcx
  _OWORD v4[4]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v5; // [rsp+60h] [rbp-A0h]
  _BYTE v6[64]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v7; // [rsp+B0h] [rbp-50h]
  __int128 v8; // [rsp+C0h] [rbp-40h]
  __int128 v9; // [rsp+D0h] [rbp-30h]
  __int128 v10; // [rsp+E0h] [rbp-20h]
  __int64 v11; // [rsp+F0h] [rbp-10h]

  memcpy_0(v6, a2, 0x7F0uLL);
  memset_0(v4, 0, 0x48uLL);
  v3 = *((_QWORD *)this + 580);
  v7 = v4[0];
  v9 = v4[2];
  v8 = v4[1];
  v11 = v5;
  v10 = v4[3];
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v3 + 48LL))(v3, v6);
}
