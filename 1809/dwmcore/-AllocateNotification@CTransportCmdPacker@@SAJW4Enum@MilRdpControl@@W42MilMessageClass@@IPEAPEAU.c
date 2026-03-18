/*
 * XREFs of ?AllocateNotification@CTransportCmdPacker@@SAJW4Enum@MilRdpControl@@W42MilMessageClass@@IPEAPEAUUCE_RDP_HEADER@@PEAPEAUMIL_MESSAGE@@PEAPEAX@Z @ 0x18009CC30
 * Callers:
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x18009CB9C (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 */

__int64 __fastcall CTransportCmdPacker::AllocateNotification(__int64 a1, int a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  unsigned int v7; // edi
  _DWORD *v8; // rax
  unsigned int v9; // ecx
  _DWORD *v10; // rbx

  v7 = 0;
  v8 = HeapAlloc(WPF::g_processHeap, 0, 0x44uLL);
  v10 = v8;
  if ( v8 )
  {
    memset_0(v8, 0, 0x44uLL);
    *v10 = 10;
    v10[1] = 68;
    *a4 = v10;
    *a5 = v10 + 10;
    v10[10] = a2;
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x41u);
  }
  WPF::ProcessHeapImpl::Free(0LL);
  return v7;
}
