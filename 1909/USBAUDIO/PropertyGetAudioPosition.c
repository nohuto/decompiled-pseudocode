/*
 * XREFs of PropertyGetAudioPosition @ 0x1C00257F0
 * Callers:
 *     <none>
 * Callees:
 *     WmiLogStreamPosition @ 0x1C00025BC (WmiLogStreamPosition.c)
 *     __security_check_cookie @ 0x1C0010C20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00118E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012840 (memset.c)
 */

__int64 __fastcall PropertyGetAudioPosition(PIRP Irp, __int64 a2, __int64 a3)
{
  int v5; // edi
  PKSPIN PinFromIrp; // rax
  _QWORD *Context; // rcx
  _BYTE v9[40]; // [rsp+20h] [rbp-38h] BYREF

  memset(v9, 0, sizeof(v9));
  v5 = -1073741811;
  PinFromIrp = KsGetPinFromIrp(Irp);
  if ( PinFromIrp )
  {
    Context = PinFromIrp->Context;
    *(_QWORD *)(a3 + 8) = Context[10];
    if ( *((_BYTE *)Context + 46) )
    {
      v5 = -1073741130;
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(PKSPIN, _BYTE *))(*(_QWORD *)(Context[18] + 128LL) + 56LL))(PinFromIrp, v9);
      if ( v5 >= 0 )
        *(_OWORD *)a3 = *(_OWORD *)&v9[16];
    }
  }
  WmiLogStreamPosition(v9, v5);
  return (unsigned int)v5;
}
