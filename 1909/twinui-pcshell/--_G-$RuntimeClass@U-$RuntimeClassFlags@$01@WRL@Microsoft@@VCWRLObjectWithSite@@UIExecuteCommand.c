/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@UIExecuteCommand@@UIObjectWithSelection@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180361C70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008A5F0 (--3@YAXPEAX@Z.c)
 *     ??1OWNERSHIP_CHANGE_INFO@@QEAA@XZ @ 0x1800A9B50 (--1OWNERSHIP_CHANGE_INFO@@QEAA@XZ.c)
 */

OWNERSHIP_CHANGE_INFO *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IExecuteCommand,IObjectWithSelection>::`scalar deleting destructor'(
        OWNERSHIP_CHANGE_INFO *Block,
        char a2)
{
  *((_DWORD *)Block + 11) = -1073741823;
  OWNERSHIP_CHANGE_INFO::~OWNERSHIP_CHANGE_INFO(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
