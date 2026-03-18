/*
 * XREFs of ?WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DW4_PNP_TRANSITION_WAITER@@@Z @ 0x1C00CE7E8
 * Callers:
 *     DxgkWaitForPnPTransitionDone @ 0x1C00CE7A0 (DxgkWaitForPnPTransitionDone.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0002D34 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONMGR::WaitForPnPTransitionDone(
        __int64 a1,
        KWAIT_REASON a2,
        KPROCESSOR_MODE a3,
        unsigned int a4)
{
  unsigned int v8; // edi
  unsigned int v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  void *v13; // rbx
  int *v14; // rsi
  __int64 v15; // rax
  union _LARGE_INTEGER *Timeout; // rax
  NTSTATUS v17; // ebp
  unsigned int v18; // ebx
  __int64 v20; // rax
  _BYTE v21[24]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v22; // [rsp+80h] [rbp+8h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (struct DXGFASTMUTEX *const)(a1 + 80), 0);
  v8 = 0;
  v9 = 0;
  v22 = 0LL;
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
  v13 = *(void **)(a1 + 136);
  if ( v13 )
  {
    ObfReferenceObject(v13);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21);
    v14 = (int *)&unk_1C0070588;
    do
    {
      v15 = *v14;
      v9 += v15;
      v22 = -10000000 * v15;
      Timeout = (union _LARGE_INTEGER *)&v22;
      if ( v8 == 3 )
        Timeout = 0LL;
      v17 = KeWaitForSingleObject(v13, a2, a3, 0, Timeout);
      if ( v17 != 258 )
        break;
      DxgkLogCodePointPacket(0x6Fu, v9, a4, 0, 0LL);
      ++v8;
      ++v14;
    }
    while ( v8 < 4 );
    ObfDereferenceObject(v13);
    v18 = v17;
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v11, v10, v12);
    v18 = -1073741811;
    *(_QWORD *)(v20 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v20);
  }
  if ( v21[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21);
  return v18;
}
