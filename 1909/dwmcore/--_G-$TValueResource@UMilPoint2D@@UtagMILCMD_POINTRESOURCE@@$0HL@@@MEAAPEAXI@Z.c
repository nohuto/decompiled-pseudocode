/*
 * XREFs of ??_G?$TValueResource@UMilPoint2D@@UtagMILCMD_POINTRESOURCE@@$0HL@@@MEAAPEAXI@Z @ 0x18019D280
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800789F0 (--1CResource@@MEAA@XZ.c)
 */

CResource *__fastcall TValueResource<MilPoint2D,tagMILCMD_POINTRESOURCE,123>::`scalar deleting destructor'(
        CResource *a1,
        char a2)
{
  *(_QWORD *)a1 = &TValueResource<MilPoint2D,tagMILCMD_POINTRESOURCE,123>::`vftable';
  CResource::~CResource(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
