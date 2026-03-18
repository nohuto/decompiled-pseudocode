/*
 * XREFs of ?GreDeleteColorTransform@@YAHPEAUHDC__@@PEAX@Z @ 0x1C0299BA4
 * Callers:
 *     NtGdiDeleteColorTransform @ 0x1C029A930 (NtGdiDeleteColorTransform.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x1C02512C4 (--0COLORTRANSFORMOBJ@@QEAA@PEAX@Z.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C027818C (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 */

__int64 __fastcall GreDeleteColorTransform(HDC a1, void *a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  _BYTE v6[32]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v7; // [rsp+40h] [rbp-48h]
  _QWORD v8[8]; // [rsp+48h] [rbp-40h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  if ( v8[0] )
  {
    v4 = *(_DWORD *)(v8[0] + 36LL);
    if ( (v4 & 0x1000) == 0 || (v4 & 0x4000) != 0 )
    {
      COLORTRANSFORMOBJ::COLORTRANSFORMOBJ((COLORTRANSFORMOBJ *)v6, a2);
      if ( v7 )
      {
        v3 = COLORTRANSFORMOBJ::bDelete((COLORTRANSFORMOBJ *)v6, (struct XDCOBJ *)v8, 0);
        if ( v7 )
          DEC_SHARE_REF_CNT(v7);
      }
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v6);
    }
    else
    {
      EngSetLastError(0x57u);
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v8);
  return v3;
}
