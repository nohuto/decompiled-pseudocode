/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewControllerBase@@UISnapAssistViewController@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18037E0B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008A5F0 (--3@YAXPEAX@Z.c)
 *     ??1CMultitaskingViewControllerBase@@QEAA@XZ @ 0x180377EF8 (--1CMultitaskingViewControllerBase@@QEAA@XZ.c)
 */

CMultitaskingViewControllerBase *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewControllerBase,ISnapAssistViewController>::`vector deleting destructor'(
        CMultitaskingViewControllerBase *Block,
        char a2)
{
  *((_DWORD *)Block + 33) = -1073741823;
  CMultitaskingViewControllerBase::~CMultitaskingViewControllerBase(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
