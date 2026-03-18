/*
 * XREFs of ?Create@CInputQueue@@SAJW4CompositionInputQueueType@@PEAUHWND__@@UtagMsgRoutingInfo@@W4CompositionInputFlags@@PEAPEAV1@@Z @ 0x1C00BE468
 * Callers:
 *     ?CreateInputQueue@CInputSink@@CAJAEBUCOMPOSITION_INPUT_QUEUE@@AEBW4CompositionInputFlags@@PEAPEAVIInputQueue@@@Z @ 0x1C00BE3C4 (-CreateInputQueue@CInputSink@@CAJAEBUCOMPOSITION_INPUT_QUEUE@@AEBW4CompositionInputFlags@@PEAPEA.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0013080 (Win32AllocPool.c)
 *     ?Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z @ 0x1C008DCBC (-Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

__int64 __fastcall CInputQueue::Create(int a1, __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  __int64 v9; // rax
  __int64 v10; // rbx
  __int128 v11; // xmm1
  __int64 v12; // xmm0_8
  __int128 v13; // xmm1
  int v14; // edi
  _OWORD v16[3]; // [rsp+20h] [rbp-48h] BYREF

  *a5 = 0LL;
  v9 = Win32AllocPool(88LL, 0x71684D49u);
  v10 = v9;
  if ( v9 )
  {
    *(_QWORD *)(v9 + 16) = 0LL;
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_QWORD *)(v9 + 32) = 0LL;
    *(_QWORD *)v9 = &CInputQueue::`vftable';
    *(_DWORD *)(v9 + 8) = 1;
    *(_DWORD *)(v9 + 12) = a1;
    *(_DWORD *)(v9 + 80) = a4;
    memset(v16, 0, 0x28uLL);
    v11 = v16[1];
    *(_OWORD *)(v10 + 40) = v16[0];
    v12 = *(_QWORD *)&v16[2];
    *(_OWORD *)(v10 + 56) = v11;
    *(_QWORD *)(v10 + 72) = v12;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    v13 = *(_OWORD *)(a3 + 16);
    v16[0] = *(_OWORD *)a3;
    *(_QWORD *)&v16[2] = *(_QWORD *)(a3 + 32);
    v16[1] = v13;
    v14 = CInputQueue::Initialize(v10, a2, (__int64)v16);
    if ( v14 < 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    else
      *a5 = v10;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v14;
}
