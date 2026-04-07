/*
 * XREFs of ?SetScalingFactor@CText@@QEAAXN@Z @ 0x18003A820
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180017770 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CText::SetScalingFactor(CText *this, double a2)
{
  double v2; // rax

  if ( *((double *)this + 52) != a2 )
  {
    v2 = *(double *)this;
    *((double *)this + 52) = a2;
    (*(void (__fastcall **)(CText *, __int64))(*(_QWORD *)&v2 + 24LL))(this, 4096LL);
  }
}
