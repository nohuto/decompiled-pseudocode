/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@UIDragVisual@@UITemporaryAppVisual@@UIImmersiveApplicationNotification@@UITempAppVisualHost@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1803D4C30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180087AB0 (--3@YAXPEAX@Z.c)
 *     ??1OWNERSHIP_CHANGE_INFO@@QEAA@XZ @ 0x18009CA20 (--1OWNERSHIP_CHANGE_INFO@@QEAA@XZ.c)
 */

OWNERSHIP_CHANGE_INFO *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IDragVisual,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>::`vector deleting destructor'(
        OWNERSHIP_CHANGE_INFO *Block,
        char a2)
{
  *((_DWORD *)Block + 15) = -1073741823;
  OWNERSHIP_CHANGE_INFO::~OWNERSHIP_CHANGE_INFO(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
