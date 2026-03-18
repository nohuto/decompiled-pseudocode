/*
 * XREFs of ?ConfigureInput@CComposition@@QEAA_NXZ @ 0x18002BACC
 * Callers:
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x18002BCCC (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CComposition::ConfigureInput(CComposition *this)
{
  char result; // al

  result = 0;
  if ( CCommonRegistryData::m_fConfigureInput )
  {
    if ( !*((_BYTE *)this + 1261) )
      return 1;
  }
  return result;
}
