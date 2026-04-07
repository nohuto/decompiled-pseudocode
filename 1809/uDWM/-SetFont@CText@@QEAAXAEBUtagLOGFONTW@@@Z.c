/*
 * XREFs of ?SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z @ 0x180035CEC
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18001C300 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180035A70 (-CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 * Callees:
 *     memcmp_0 @ 0x18004E27E (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CText::SetFont(CText *this, const struct tagLOGFONTW *a2)
{
  char *v2; // rdi

  v2 = (char *)this + 296;
  if ( memcmp_0((char *)this + 296, a2, 0x5CuLL) )
  {
    *((_BYTE *)this + 280) &= ~1u;
    *(_OWORD *)v2 = *(_OWORD *)&a2->lfHeight;
    *((_OWORD *)v2 + 1) = *(_OWORD *)&a2->lfWeight;
    *((_OWORD *)v2 + 2) = *(_OWORD *)&a2->lfFaceName[2];
    *((_OWORD *)v2 + 3) = *(_OWORD *)&a2->lfFaceName[10];
    *((_OWORD *)v2 + 4) = *(_OWORD *)&a2->lfFaceName[18];
    *((_QWORD *)v2 + 10) = *(_QWORD *)&a2->lfFaceName[26];
    *((_DWORD *)v2 + 22) = *(_DWORD *)&a2->lfFaceName[30];
    (*(void (__fastcall **)(CText *, __int64))(*(_QWORD *)this + 24LL))(this, 4096LL);
  }
}
