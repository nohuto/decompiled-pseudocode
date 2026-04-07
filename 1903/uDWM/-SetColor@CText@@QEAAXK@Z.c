/*
 * XREFs of ?SetColor@CText@@QEAAXK@Z @ 0x1800370D8
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180017100 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180036EF0 (-CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CText::SetColor(CText *this, int a2)
{
  int v2; // edx
  __int64 v3; // rax

  v2 = a2 & 0xFFFFFF;
  if ( v2 != *((_DWORD *)this + 102) )
  {
    v3 = *(_QWORD *)this;
    *((_DWORD *)this + 102) = v2;
    (*(void (__fastcall **)(CText *, __int64))(v3 + 24))(this, 4096LL);
  }
}
