/*
 * XREFs of ??_E?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@MEAAPEAXI@Z @ 0x18019D230
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800789F0 (--1CResource@@MEAA@XZ.c)
 */

CResource *__fastcall TValueResource<MilColorTransform,tagMILCMD_COLORTRANSFORMRESOURCE,23>::`vector deleting destructor'(
        CResource *a1,
        char a2)
{
  *(_QWORD *)a1 = &TValueResource<MilColorTransform,tagMILCMD_COLORTRANSFORMRESOURCE,23>::`vftable';
  CResource::~CResource(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
