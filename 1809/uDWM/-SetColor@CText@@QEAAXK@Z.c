/*
 * XREFs of ?SetColor@CText@@QEAAXK@Z @ 0x180035CB4
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18001C300 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180035A70 (-CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
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
