/*
 * XREFs of ?MilCompositionEngine_Initialize@@YAJHPEAPEAUHMIL_CONNECTION__@@@Z @ 0x1800E6350
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180066710 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180079254 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?StartCompositionThread@CConnection@@AEAAJH@Z @ 0x1800E63EC (-StartCompositionThread@CConnection@@AEAAJH@Z.c)
 *     ??0CInternalMilCmdConnection@@AEAA@XZ @ 0x1800E64F8 (--0CInternalMilCmdConnection@@AEAA@XZ.c)
 *     ?Disconnect@CConnection@@QEAAXXZ @ 0x18016A1E8 (-Disconnect@CConnection@@QEAAXXZ.c)
 */

__int64 __fastcall MilCompositionEngine_Initialize(__int64 nPriority, struct HMIL_CONNECTION__ **a2)
{
  struct HMIL_CONNECTION__ *v2; // rsi
  int v4; // ebx
  CInternalMilCmdConnection *v5; // rax
  __int64 v6; // rcx
  CConnection *v7; // rdi
  signed int started; // eax
  __int64 v9; // rcx
  signed int v10; // ebx
  __int64 v12; // rcx

  v2 = 0LL;
  v4 = nPriority;
  if ( !a2 )
  {
    v10 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(nPriority, &dword_1802BC148, 1u, 0x80070057, 0x26u, 0LL);
    return (unsigned int)v10;
  }
  v5 = (CInternalMilCmdConnection *)DefaultHeap::AllocClear(0xE0uLL);
  if ( v5 )
    v7 = CInternalMilCmdConnection::CInternalMilCmdConnection(v5);
  else
    v7 = 0LL;
  if ( !v7 )
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, 0x8007000E, 0x17u, 0LL);
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_1802BC148, 1u, v10, 0x2Au, 0LL);
    return (unsigned int)v10;
  }
  started = CConnection::StartCompositionThread(v7, v4);
  v10 = started;
  if ( started < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, started, 0x4Bu, 0LL);
  else
    _InterlockedIncrement(&dword_180339D10);
  if ( v10 < 0 )
  {
    CConnection::Disconnect(v7);
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v10, 0x1Au, 0LL);
    CDirtyRegion::Release(v7);
  }
  else
  {
    v2 = v7;
  }
  if ( v10 < 0 )
    goto LABEL_15;
  *a2 = v2;
  return (unsigned int)v10;
}
