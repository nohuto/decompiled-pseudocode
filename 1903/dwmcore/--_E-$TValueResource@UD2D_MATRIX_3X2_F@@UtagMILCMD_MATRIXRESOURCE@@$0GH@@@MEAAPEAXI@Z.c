/*
 * XREFs of ??_E?$TValueResource@UD2D_MATRIX_3X2_F@@UtagMILCMD_MATRIXRESOURCE@@$0GH@@@MEAAPEAXI@Z @ 0x18019EAA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x18008AB10 (--1CResource@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

CResource *__fastcall TValueResource<D2D_MATRIX_3X2_F,tagMILCMD_MATRIXRESOURCE,103>::`vector deleting destructor'(
        CResource *a1,
        char a2)
{
  *(_QWORD *)a1 = &TValueResource<D2D_MATRIX_3X2_F,tagMILCMD_MATRIXRESOURCE,103>::`vftable';
  CResource::~CResource(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
