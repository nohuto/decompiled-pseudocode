/*
 * XREFs of GreSetBitmapOwnerEx @ 0x1C0043FFC
 * Callers:
 *     GreSetBrushOwner @ 0x1C0042FF0 (GreSetBrushOwner.c)
 * Callees:
 *     HmgSetOwner @ 0x1C001E160 (HmgSetOwner.c)
 *     HmgShareLockCheck @ 0x1C0021790 (HmgShareLockCheck.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0023B70 (--1SURFREF@@QEAA@XZ.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C004407C (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C00FEFEC (--0SURFREF@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetBitmapOwnerEx(__int64 a1, int a2)
{
  unsigned int v4; // ebx
  SURFACE *v5; // rax
  _BYTE v7[32]; // [rsp+20h] [rbp-38h] BYREF
  SURFACE *v8; // [rsp+40h] [rbp-18h]

  v4 = 0;
  SURFREF::SURFREF((SURFREF *)v7);
  v5 = (SURFACE *)HmgShareLockCheck(a1, 5);
  v8 = v5;
  if ( v5 && (!(unsigned int)SURFACE::bDIBSection(v5) || a2) && (a1 & 0x800000) == 0 )
    v4 = HmgSetOwner(a1, a2, 5);
  SURFREF::~SURFREF((SURFREF *)v7);
  return v4;
}
