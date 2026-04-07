/*
 * XREFs of ??1Mesh2D@@QEAA@XZ @ 0x18009CC84
 * Callers:
 *     ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x18009D620 (-UpdateVisual@CTouchDragVisual@@AEAAJXZ.c)
 *     ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x18009E0C4 (-UpdateInstructions@CTetherVisual@@IEAAJXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180010DBC (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall Mesh2D::~Mesh2D(Mesh2D *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 12);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 8);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 4);
  DynArrayImpl<0>::~DynArrayImpl<0>(this);
}
