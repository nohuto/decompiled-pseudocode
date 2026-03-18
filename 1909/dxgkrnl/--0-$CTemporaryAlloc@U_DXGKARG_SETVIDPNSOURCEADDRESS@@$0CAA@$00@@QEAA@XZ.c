/*
 * XREFs of ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ @ 0x1C00017BC
 * Callers:
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C00C9660 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00CA174 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0008ADC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

_QWORD *__fastcall CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>(
        _QWORD *a1)
{
  void *v2; // rax
  void *v3; // rbx

  v2 = operator new(0x840uLL, 0x4B677844u, 1, (enum _POOL_TYPE)512);
  v3 = v2;
  if ( v2 )
    memset(v2, 0, 0x840uLL);
  else
    v3 = 0LL;
  *a1 = v3;
  return a1;
}
