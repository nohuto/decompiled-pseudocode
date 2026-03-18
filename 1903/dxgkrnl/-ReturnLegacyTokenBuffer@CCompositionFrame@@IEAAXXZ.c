/*
 * XREFs of ?ReturnLegacyTokenBuffer@CCompositionFrame@@IEAAXXZ @ 0x1C0014250
 * Callers:
 *     ?Release@CCompositionFrame@@UEAAJXZ @ 0x1C0013FF0 (-Release@CCompositionFrame@@UEAAJXZ.c)
 * Callees:
 *     ?ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x1C0012D7C (-ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z.c)
 */

void __fastcall CCompositionFrame::ReturnLegacyTokenBuffer(CCompositionFrame *this)
{
  CLegacyTokenBuffer *v1; // rdx

  v1 = (CLegacyTokenBuffer *)*((_QWORD *)this + 13);
  if ( v1 )
  {
    CTokenManager::ReturnLegacyTokenBuffer(*((CTokenManager **)this + 22), v1);
    *((_QWORD *)this + 13) = 0LL;
  }
  *((_BYTE *)this + 112) = 0;
}
