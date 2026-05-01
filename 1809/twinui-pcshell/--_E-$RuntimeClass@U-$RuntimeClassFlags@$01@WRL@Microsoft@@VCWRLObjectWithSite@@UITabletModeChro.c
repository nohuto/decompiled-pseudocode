/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@UITabletModeChrome@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1803549C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180084E20 (--3@YAXPEAX@Z.c)
 *     ??1CWRLObjectWithSite@@QEAA@XZ @ 0x1800925CC (--1CWRLObjectWithSite@@QEAA@XZ.c)
 */

CWRLObjectWithSite *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,ITabletModeChrome>::`vector deleting destructor'(
        CWRLObjectWithSite *Block,
        char a2)
{
  *((_DWORD *)Block + 9) = -1073741823;
  CWRLObjectWithSite::~CWRLObjectWithSite(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
