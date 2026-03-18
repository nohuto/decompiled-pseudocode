/*
 * XREFs of ?CreateFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01F4958
 * Callers:
 *     ?EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z @ 0x1C01F5134 (-EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::CreateFormattingBuffer(ADAPTER_RENDER *this, __int64 a2)
{
  __int64 v3; // rax

  if ( !*((_QWORD *)this + 124)
    || (v3 = WdLogNewEntry5_WdAssertion(this, a2),
        *(_QWORD *)(v3 + 24) = 4204LL,
        WdLogEvent5_WdAssertion(v3),
        !*((_QWORD *)this + 124)) )
  {
    *((_QWORD *)this + 124) = operator new[](0xFC00uLL, 0x4B677844u, (POOL_TYPE)512);
  }
}
