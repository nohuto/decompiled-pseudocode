/*
 * XREFs of XilUsbDevice_QueryAttributes @ 0x1C0004C10
 * Callers:
 *     Etw_DeviceRundown @ 0x1C003E994 (Etw_DeviceRundown.c)
 *     Etw_DeviceUpdate @ 0x1C003EBB4 (Etw_DeviceUpdate.c)
 * Callees:
 *     memset @ 0x1C0008D80 (memset.c)
 */

void __fastcall XilUsbDevice_QueryAttributes(
        __int64 a1,
        _BYTE *a2,
        _BYTE *a3,
        _BYTE *a4,
        _OWORD *a5,
        _BYTE *a6,
        _OWORD *a7)
{
  _OWORD *v9; // rax
  _OWORD *v10; // rax

  if ( a2 )
    *a2 = *(_BYTE *)(a1 + 672);
  if ( a3 )
    *a3 = *(_BYTE *)(a1 + 673);
  if ( a4 )
    *a4 = *(_BYTE *)(a1 + 674);
  if ( a5 )
  {
    memset(a5, 0, 0x20uLL);
    v9 = *(_OWORD **)(a1 + 680);
    if ( v9 )
    {
      *a5 = *v9;
      a5[1] = v9[1];
    }
  }
  if ( a4 )
    *a6 = *(_BYTE *)(a1 + 688);
  if ( a7 )
  {
    memset(a7, 0, 0x20uLL);
    v10 = *(_OWORD **)(a1 + 696);
    if ( v10 )
    {
      *a7 = *v10;
      a7[1] = v10[1];
    }
  }
}
