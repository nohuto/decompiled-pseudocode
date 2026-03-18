/*
 * XREFs of GreDCSelectPen @ 0x1C0081CC0
 * Callers:
 *     GreRestoreDC @ 0x1C0018550 (GreRestoreDC.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C001D6E0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreSelectPen @ 0x1C0122F20 (GreSelectPen.c)
 * Callees:
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C001BD10 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     HmgShareLockCheck @ 0x1C001C500 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C001D340 (HmgDecrementShareReferenceCountEx.c)
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C002ADD0 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     ?vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C002C260 (-vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     GreSetSolidBrushLight @ 0x1C0081EF0 (GreSetSolidBrushLight.c)
 */

struct HOBJ__ *__fastcall GreDCSelectPen(struct HOBJ__ ***this, struct HOBJ__ *a2)
{
  struct HOBJ__ *v4; // rsi
  int v5; // r12d
  struct HOBJ__ **v6; // rdi
  struct HOBJ__ *v7; // r14
  struct HOBJ__ **v8; // rcx
  __int64 v10; // rax
  float *v11; // [rsp+38h] [rbp-60h] BYREF
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
    v6 = this[18];
    v4 = this[122][21];
    if ( a2 != *v6 )
    {
      v10 = HmgShareLockCheck((unsigned int)a2, 16);
      v6 = (struct HOBJ__ **)v10;
      if ( v10 && (*(_DWORD *)(v10 + 40) & 0x400) != 0 )
      {
        DEC_SHARE_REF_CNT_LAZY0(this[18]);
        *((_DWORD *)this[122] + 38) |= 2u;
        this[18] = v6;
        v5 = 1;
      }
      else
      {
        if ( v10 )
        {
          HmgDecrementShareReferenceCountEx((struct OBJECT *)v10, 0LL);
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
          *((_DWORD *)this[122] + 38) |= 2u;
          *(_DWORD *)v7 &= ~4u;
          v5 = 1;
        }
        if ( v5 )
        {
          v8 = this[122];
          v12 = *((_DWORD *)v8 + 52);
          v13 = *((_DWORD *)v8 + 27) & 1;
          if ( (*((_DWORD *)v8 + 85) & 0x1E000) != 0 )
            EXFORMOBJ::vInit(&v11, (DC **)&v14, 516, 0);
          else
            v11 = (float *)(this + 40);
          DC::vRealizeLineAttrs((DC *)this, (struct EXFORMOBJ *)&v11);
        }
      }
      this[122][21] = a2;
      *((_DWORD *)this[122] + 38) &= ~0x2000u;
    }
  }
  return v4;
}
