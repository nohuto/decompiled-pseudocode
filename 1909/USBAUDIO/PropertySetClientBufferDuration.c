/*
 * XREFs of PropertySetClientBufferDuration @ 0x1C00258C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00118E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PropertySetClientBufferDuration(IRP *a1, __int64 a2, unsigned int *a3)
{
  unsigned int v3; // edi
  unsigned int v4; // ebx
  PKSPIN PinFromIrp; // rax
  PKSPIN v6; // r8
  _QWORD *Context; // rax
  unsigned int (__fastcall *v8)(PKSPIN, _QWORD); // rax

  v3 = *a3;
  v4 = -1073741811;
  PinFromIrp = KsGetPinFromIrp(a1);
  v6 = PinFromIrp;
  if ( PinFromIrp )
  {
    Context = PinFromIrp->Context;
    if ( *((_BYTE *)Context + 46) )
    {
      return (unsigned int)-1073741130;
    }
    else
    {
      v8 = *(unsigned int (__fastcall **)(PKSPIN, _QWORD))(*(_QWORD *)(Context[18] + 128LL) + 80LL);
      if ( v8 )
        return v8(v6, v3);
      else
        return (unsigned int)-1073741637;
    }
  }
  return v4;
}
