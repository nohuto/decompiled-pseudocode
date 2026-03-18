/*
 * XREFs of ??1FxAutoRegKey@@QEAA@XZ @ 0x1C003B80C
 * Callers:
 *     ?IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z @ 0x1C001B6E4 (-IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxAutoRegKey::~FxAutoRegKey(FxAutoRegKey *this)
{
  void *m_Key; // rcx

  m_Key = this->m_Key;
  if ( m_Key )
    ZwClose(m_Key);
}
