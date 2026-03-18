/*
 * XREFs of xxxSendPointerMessageWorker @ 0x1C01B9284
 * Callers:
 *     xxxSendPointerMessage @ 0x1C01B9210 (xxxSendPointerMessage.c)
 *     ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x1C01B9E4C (-xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01B9F2C (-xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     EditionPointerParentNotify @ 0x1C01BA6B0 (EditionPointerParentNotify.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxSendPointerMessageWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  _BYTE *v6; // rax
  __int64 v9; // r8

  v6 = *(_BYTE **)(a1 + 40);
  if ( (char)v6[20] < 0 || (char)v6[19] < 0 || (v6[18] & 4) != 0 )
    return 0LL;
  if ( (_DWORD)a2 == 528 )
    v9 = 582LL;
  else
    v9 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           v9,
           a3,
           a5);
}
