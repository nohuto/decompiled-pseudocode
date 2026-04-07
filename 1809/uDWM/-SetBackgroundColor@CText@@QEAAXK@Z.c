/*
 * XREFs of ?SetBackgroundColor@CText@@QEAAXK@Z @ 0x180035C84
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180016B10 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18001C300 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180035A70 (-CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z @ 0x180035C30 (-ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CText::SetBackgroundColor(CText *this, int a2)
{
  int v2; // edx
  __int64 v3; // rax

  v2 = a2 & 0xFFFFFF;
  if ( *((_DWORD *)this + 103) != v2 )
  {
    v3 = *(_QWORD *)this;
    *((_DWORD *)this + 103) = v2;
    (*(void (__fastcall **)(CText *, __int64))(v3 + 24))(this, 4096LL);
  }
}
