/*
 * XREFs of TransitionResourceBarrier_0 @ 0x18022E3F8
 * Callers:
 *     ?BuildCommandList@CFramebuffer@CComputeScribbleRenderer@@AEAAJPEAVCComputeScribbleStopwatch@@AEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x18022D8EC (-BuildCommandList@CFramebuffer@CComputeScribbleRenderer@@AEAAJPEAVCComputeScribbleStopwatch@@AEA.c)
 * Callees:
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TransitionResourceBarrier_0(__int64 *a1, __int64 a2, int a3)
{
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64 *, __int64, _DWORD *); // rax
  __int64 result; // rax
  _DWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+34h] [rbp-14h]
  int v12; // [rsp+38h] [rbp-10h]

  if ( a3 )
  {
    memset_0(v9, 0, 0x20uLL);
    v6 = *a1;
    v9[0] = 0;
    v9[1] = 0;
    v12 = 0;
    v7 = *(__int64 (__fastcall **)(__int64 *, __int64, _DWORD *))(v6 + 208);
    v10 = a2;
    v11 = a3;
    return v7(a1, 1LL, v9);
  }
  return result;
}
