/*
 * XREFs of ?ConfigureInput@CComposition@@QEAA_NXZ @ 0x1800A9E84
 * Callers:
 *     ?s_HitTestRequest@CGlobalInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x1800A91FC (-s_HitTestRequest@CGlobalInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CComposition::ConfigureInput(CComposition *this)
{
  char result; // al

  result = 0;
  if ( CCommonRegistryData::m_fConfigureInput )
  {
    if ( !*((_BYTE *)this + 1278) )
      return 1;
  }
  return result;
}
