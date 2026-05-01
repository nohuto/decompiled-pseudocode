/*
 * XREFs of ??_ESwitchItemFilteredCollection@@UEAAPEAXI@Z @ 0x180355A60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180087AB0 (--3@YAXPEAX@Z.c)
 *     ??1SwitchItemFilteredCollection@@UEAA@XZ @ 0x1803557C8 (--1SwitchItemFilteredCollection@@UEAA@XZ.c)
 */

SwitchItemFilteredCollection *__fastcall SwitchItemFilteredCollection::`vector deleting destructor'(
        SwitchItemFilteredCollection *this,
        char a2)
{
  SwitchItemFilteredCollection::~SwitchItemFilteredCollection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
