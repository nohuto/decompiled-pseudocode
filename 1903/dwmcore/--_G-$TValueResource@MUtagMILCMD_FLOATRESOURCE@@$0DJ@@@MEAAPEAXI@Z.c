/*
 * XREFs of ??_G?$TValueResource@MUtagMILCMD_FLOATRESOURCE@@$0DJ@@@MEAAPEAXI@Z @ 0x18019EA50
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x18008AB10 (--1CResource@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

CResource *__fastcall TValueResource<float,tagMILCMD_FLOATRESOURCE,57>::`scalar deleting destructor'(
        CResource *a1,
        char a2)
{
  *(_QWORD *)a1 = &TValueResource<float,tagMILCMD_FLOATRESOURCE,57>::`vftable';
  CResource::~CResource(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
