/*
 * XREFs of ?GetFirstEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ @ 0x180007D50
 * Callers:
 *     ??1?$DefaultModule@$00@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800057C0 (--1-$DefaultModule@$00@Details@WRL@Microsoft@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

const struct Microsoft::WRL::Details::CreatorMap **__fastcall Microsoft::WRL::Details::ModuleBase::GetFirstEntryPointer(
        Microsoft::WRL::Details::ModuleBase *this)
{
  return (const struct Microsoft::WRL::Details::CreatorMap **)&_pobjectentryfirst;
}
