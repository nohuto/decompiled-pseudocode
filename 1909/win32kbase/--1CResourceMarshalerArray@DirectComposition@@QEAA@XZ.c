/*
 * XREFs of ??1CResourceMarshalerArray@DirectComposition@@QEAA@XZ @ 0x1C0010C3C
 * Callers:
 *     ??_GCTransformGroupMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0005980 (--_GCTransformGroupMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0010C08 (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??_GCSceneNodeMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01A3130 (--_GCSceneNodeMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CResourceMarshalerArray::~CResourceMarshalerArray(
        DirectComposition::CResourceMarshalerArray *this)
{
  unsigned __int64 i; // r8
  __int64 v2; // rdx

  for ( i = 0LL; i < *((_QWORD *)this + 1); --*(_DWORD *)(v2 + 20) )
    v2 = *(_QWORD *)(*(_QWORD *)this + 8 * i++);
}
