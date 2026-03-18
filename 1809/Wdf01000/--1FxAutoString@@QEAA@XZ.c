/*
 * XREFs of ??1FxAutoString@@QEAA@XZ @ 0x1C004860C
 * Callers:
 *     imp_WdfDeviceCreateSymbolicLink @ 0x1C00497E0 (imp_WdfDeviceCreateSymbolicLink.c)
 *     imp_WdfDriverCreate @ 0x1C004D9C0 (imp_WdfDriverCreate.c)
 *     ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0052120 (-CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     LogDriverInfoStream @ 0x1C006255C (LogDriverInfoStream.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00054C8 (-FxPoolFree@@YAXPEAX@Z.c)
 */

void __fastcall FxAutoString::~FxAutoString(FxAutoString *this)
{
  wchar_t *Buffer; // rcx

  Buffer = this->m_UnicodeString.Buffer;
  if ( Buffer )
  {
    FxPoolFree((FX_POOL_TRACKER *)Buffer);
    *(_QWORD *)&this->m_UnicodeString.Length = 0LL;
    this->m_UnicodeString.Buffer = 0LL;
  }
}
