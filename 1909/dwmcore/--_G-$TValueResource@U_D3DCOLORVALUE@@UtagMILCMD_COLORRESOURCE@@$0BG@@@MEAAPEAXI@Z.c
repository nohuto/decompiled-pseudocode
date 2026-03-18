/*
 * XREFs of ??_G?$TValueResource@U_D3DCOLORVALUE@@UtagMILCMD_COLORRESOURCE@@$0BG@@@MEAAPEAXI@Z @ 0x18019D320
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800789F0 (--1CResource@@MEAA@XZ.c)
 */

CResource *__fastcall TValueResource<_D3DCOLORVALUE,tagMILCMD_COLORRESOURCE,22>::`scalar deleting destructor'(
        CResource *a1,
        char a2)
{
  *(_QWORD *)a1 = &TValueResource<_D3DCOLORVALUE,tagMILCMD_COLORRESOURCE,22>::`vftable';
  CResource::~CResource(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
