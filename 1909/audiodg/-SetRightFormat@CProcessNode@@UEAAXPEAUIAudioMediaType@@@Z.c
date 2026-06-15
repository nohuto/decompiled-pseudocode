/*
 * XREFs of ?SetRightFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x140009CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ @ 0x140002104 (--1-$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140009D34 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

void __fastcall CProcessNode::SetRightFormat(CProcessNode *this, struct IUnknown *a2)
{
  struct IUnknown **v2; // rsi

  v2 = (struct IUnknown **)((char *)this + 8);
  Microsoft::WRL::ComPtr<CCPAudioHistoryControl>::~ComPtr<CCPAudioHistoryControl>((_QWORD *)this + 1);
  Microsoft::WRL::ComPtr<CCPAudioHistoryControl>::~ComPtr<CCPAudioHistoryControl>((_QWORD *)this + 2);
  if ( *v2 != a2 )
    ATL::AtlComPtrAssign(v2, a2);
  if ( *((struct IUnknown **)this + 2) != a2 )
    ATL::AtlComPtrAssign((struct IUnknown **)this + 2, a2);
}
