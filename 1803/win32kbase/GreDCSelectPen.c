/*
 * XREFs of GreDCSelectPen @ 0x1C0059C10
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0029780 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreSelectPenInternal @ 0x1C0075ED0 (GreSelectPenInternal.c)
 *     GreRestoreDCInternal @ 0x1C0077D70 (GreRestoreDCInternal.c)
 * Callees:
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C001A750 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     ?vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C00276C4 (-vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0028CD0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C002AC00 (HmgDecrementShareReferenceCountEx.c)
 *     HmgShareLockCheck @ 0x1C002CA80 (HmgShareLockCheck.c)
 *     GreSetSolidBrushLight @ 0x1C0059F50 (GreSetSolidBrushLight.c)
 */

struct HOBJ__ *__fastcall GreDCSelectPen(struct HOBJ__ ***this, struct HOBJ__ *a2)
{
  struct HOBJ__ *v4; // rsi
  int v5; // r12d
  struct HOBJ__ **v6; // rdi
  struct HOBJ__ *v7; // r14
  __int64 v9; // rax
  struct HOBJ__ **v10; // rcx
  char *v11; // [rsp+38h] [rbp-60h] BYREF
  int v12; // [rsp+40h] [rbp-58h]
  int v13; // [rsp+44h] [rbp-54h]
  struct HOBJ__ ***v14; // [rsp+48h] [rbp-50h] BYREF
  int v15; // [rsp+50h] [rbp-48h]
  int v16; // [rsp+54h] [rbp-44h]

  v4 = 0LL;
  v15 = 0;
  v16 = 0;
  v14 = this;
  if ( this )
  {
    v5 = 0;
    v6 = this[19];
    v4 = this[10][3];
    if ( a2 != *v6 )
    {
      v9 = HmgShareLockCheck((unsigned int)a2, 16);
      v6 = (struct HOBJ__ **)v9;
      if ( v9 && (*(_DWORD *)(v9 + 40) & 0x400) != 0 )
      {
        DEC_SHARE_REF_CNT_LAZY0(this[19]);
        *((_DWORD *)this[10] + 2) |= 2u;
        this[19] = v6;
        v5 = 1;
      }
      else
      {
        if ( v9 )
        {
          HmgDecrementShareReferenceCountEx((struct OBJECT *)v9, 0LL);
          v6 = 0LL;
        }
        v4 = 0LL;
      }
    }
    if ( v6 )
    {
      if ( v4 )
      {
        v7 = v6[6];
        if ( v7 != (struct HOBJ__ *)(v6 + 9) && (*(_DWORD *)v7 & 4) != 0 )
        {
          GreSetSolidBrushLight((struct OBJECT *)v6);
          *((_DWORD *)this[10] + 2) |= 2u;
          *(_DWORD *)v7 &= ~4u;
          v5 = 1;
        }
        if ( v5 )
        {
          v10 = this[10];
          v12 = *((_DWORD *)v10 + 17);
          v13 = (_DWORD)v10[39] & 1;
          if ( ((_DWORD)v10[44] & 0x1E000) != 0 )
            EXFORMOBJ::vInit((EXFORMOBJ *)&v11, (DC **)&v14, 516, 0);
          else
            v11 = (char *)(this + 41);
          DC::vRealizeLineAttrs((DC *)this, (struct EXFORMOBJ *)&v11);
        }
      }
      this[10][3] = a2;
      *((_DWORD *)this[10] + 2) &= ~0x2000u;
    }
  }
  return v4;
}
