/*
 * XREFs of ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C00B7700
 * Callers:
 *     NtDCompositionConfirmFrame @ 0x1C0007B60 (NtDCompositionConfirmFrame.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C000F54C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     NtDCompositionRetireFrame @ 0x1C000F720 (NtDCompositionRetireFrame.c)
 *     NtDCompositionBeginFrame @ 0x1C00552F0 (NtDCompositionBeginFrame.c)
 *     NtDCompositionGetConnectionBatch @ 0x1C0077B30 (NtDCompositionGetConnectionBatch.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1C0078C70 (NtDCompositionGetFrameLegacyTokens.c)
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1C0078F10 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     NtDCompositionDiscardFrame @ 0x1C007A1C0 (NtDCompositionDiscardFrame.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00B4B70 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1C00B7728 (--1CConnection@DirectComposition@@AEAA@XZ.c)
 */

DirectComposition::CConnection *__fastcall DirectComposition::CConnection::`scalar deleting destructor'(
        DirectComposition::CConnection *this)
{
  DirectComposition::CConnection::~CConnection(this);
  Win32FreePool((__int64)this);
  return this;
}
