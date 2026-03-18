/*
 * XREFs of UsbhBusIfLocationReference @ 0x1C002AB40
 * Callers:
 *     UsbhPdoPnp_QueryInterface @ 0x1C0027180 (UsbhPdoPnp_QueryInterface.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhBusIfLocationReference(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1184);
  if ( !v1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  result = *(_QWORD *)(v1 + 64);
  if ( !result )
    UsbhTrapFatal_Dbg(v1, 0LL);
  if ( *(_DWORD *)result != 541218120 )
    UsbhTrapFatal_Dbg(v1, *(_QWORD *)(v1 + 64));
  _InterlockedIncrement((volatile signed __int32 *)(result + 3420));
  return result;
}
