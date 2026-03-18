/*
 * XREFs of ?Assign@FxString@@QEAAJPEBG@Z @ 0x1C006432C
 * Callers:
 *     imp_WdfDriverRetrieveVersionString @ 0x1C004DA90 (imp_WdfDriverRetrieveVersionString.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C0060BA0 (imp_WdfRegistryQueryMultiString.c)
 * Callees:
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C0064474 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 */

int __fastcall FxString::Assign(FxString *this, const wchar_t *SourceString)
{
  _UNICODE_STRING string; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&string.Length = 0LL;
  string.Buffer = 0LL;
  RtlInitUnicodeString(&string, SourceString);
  return FxDuplicateUnicodeString(this->m_Globals, &string, &this->m_UnicodeString);
}
