/*
 * XREFs of ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C00B4C20
 * Callers:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C000C60C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     NtDCompositionRetireFrame @ 0x1C000C7E0 (NtDCompositionRetireFrame.c)
 *     NtDCompositionConfirmFrame @ 0x1C006E680 (NtDCompositionConfirmFrame.c)
 *     NtDCompositionBeginFrame @ 0x1C006EEA0 (NtDCompositionBeginFrame.c)
 *     NtDCompositionGetConnectionBatch @ 0x1C0070E50 (NtDCompositionGetConnectionBatch.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1C0072320 (NtDCompositionGetFrameLegacyTokens.c)
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1C00725C0 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     NtDCompositionDiscardFrame @ 0x1C0076630 (NtDCompositionDiscardFrame.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00B2090 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1C00B4C48 (--1CConnection@DirectComposition@@AEAA@XZ.c)
 */

DirectComposition::CConnection *__fastcall DirectComposition::CConnection::`scalar deleting destructor'(
        DirectComposition::CConnection *this)
{
  DirectComposition::CConnection::~CConnection(this);
  Win32FreePool((__int64)this);
  return this;
}
