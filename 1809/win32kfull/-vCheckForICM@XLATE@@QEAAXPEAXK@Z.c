/*
 * XREFs of ?vCheckForICM@XLATE@@QEAAXPEAXK@Z @ 0x1C02A1770
 * Callers:
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C011440C (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 * Callees:
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x1C02512C4 (--0COLORTRANSFORMOBJ@@QEAA@PEAX@Z.c)
 */

void __fastcall XLATE::vCheckForICM(XLATE *this, void *a2, int a3)
{
  __int64 v4; // rcx
  int v5; // eax
  _BYTE v6[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 8) = 0LL;
  if ( (a3 & 7) != 0 )
  {
    if ( (a3 & 3) != 0 )
    {
      *((_DWORD *)this + 18) = a3;
      *((_QWORD *)this + 8) = a2;
      if ( (a3 & 2) != 0 )
      {
        COLORTRANSFORMOBJ::COLORTRANSFORMOBJ((COLORTRANSFORMOBJ *)v6, a2);
        v4 = v7;
        if ( v7 )
        {
          *((_DWORD *)this + 1) |= 0x10u;
          DEC_SHARE_REF_CNT(v4);
        }
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v6);
      }
      else if ( (a3 & 1) != 0 )
      {
        v5 = *((_DWORD *)this + 1) | 0x20;
        *((_DWORD *)this + 1) = v5;
        if ( (a3 & 0x10000000) != 0 )
        {
          if ( a2 )
            *((_DWORD *)this + 1) = v5 | 8;
        }
      }
    }
    else if ( (a3 & 4) != 0 )
    {
      *((_QWORD *)this + 8) = 0LL;
      *((_DWORD *)this + 1) |= 0x20u;
      *((_DWORD *)this + 18) = a3;
    }
  }
}
