/*
 * XREFs of ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0059700
 * Callers:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0012950 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1C0012A40 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1C0012C50 (NtDCompositionGetFrameLegacyTokens.c)
 *     NtDCompositionGetConnectionBatch @ 0x1C0058BE0 (NtDCompositionGetConnectionBatch.c)
 *     DCompositionSessionUninitialize @ 0x1C0059620 (DCompositionSessionUninitialize.c)
 *     NtDCompositionConfirmFrame @ 0x1C005A170 (NtDCompositionConfirmFrame.c)
 *     NtDCompositionBeginFrame @ 0x1C005ADD0 (NtDCompositionBeginFrame.c)
 *     NtDCompositionRetireFrame @ 0x1C0063610 (NtDCompositionRetireFrame.c)
 *     NtDCompositionDiscardFrame @ 0x1C00637E0 (NtDCompositionDiscardFrame.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1C0059728 (--1CConnection@DirectComposition@@AEAA@XZ.c)
 */

DirectComposition::CConnection *__fastcall DirectComposition::CConnection::`scalar deleting destructor'(
        DirectComposition::CConnection *this)
{
  DirectComposition::CConnection::~CConnection(this);
  Win32FreePool((__int64)this);
  return this;
}
