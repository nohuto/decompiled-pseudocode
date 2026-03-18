/*
 * XREFs of RIMRemoveHoldingFrame @ 0x1C00727BC
 * Callers:
 *     RIMFreeSpecificDev @ 0x1C0071C64 (RIMFreeSpecificDev.c)
 *     RIMIDEAdoptOrphanedRimDevs @ 0x1C00A05D0 (RIMIDEAdoptOrphanedRimDevs.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     rimFindHoldingFrame @ 0x1C0072814 (rimFindHoldingFrame.c)
 *     rimReclaimHoldingFrame @ 0x1C01503F4 (rimReclaimHoldingFrame.c)
 */

void __fastcall RIMRemoveHoldingFrame(__int64 a1, __int64 a2)
{
  char v4; // di
  __int64 HoldingFrame; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // rax

  v4 = 1;
  do
  {
    HoldingFrame = rimFindHoldingFrame(a1, a2);
    v8 = (_QWORD *)HoldingFrame;
    if ( HoldingFrame )
    {
      rimReclaimHoldingFrame(v7, v6, HoldingFrame);
      v9 = *v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v10 = (_QWORD *)v8[1], (_QWORD *)*v10 != v8) )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      Win32FreePool((__int64)v8);
    }
    else
    {
      v4 = 0;
    }
  }
  while ( v4 );
}
