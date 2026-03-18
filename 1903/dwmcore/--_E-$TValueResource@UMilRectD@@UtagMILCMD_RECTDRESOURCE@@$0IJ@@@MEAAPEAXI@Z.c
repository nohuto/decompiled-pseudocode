/*
 * XREFs of ??_E?$TValueResource@UMilRectD@@UtagMILCMD_RECTDRESOURCE@@$0IJ@@@MEAAPEAXI@Z @ 0x18019EB90
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x18008AB10 (--1CResource@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

CResource *__fastcall TValueResource<MilRectD,tagMILCMD_RECTDRESOURCE,137>::`vector deleting destructor'(
        CResource *a1,
        char a2)
{
  *(_QWORD *)a1 = &TValueResource<MilRectD,tagMILCMD_RECTDRESOURCE,137>::`vftable';
  CResource::~CResource(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
