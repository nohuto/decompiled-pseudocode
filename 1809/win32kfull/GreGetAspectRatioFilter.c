/*
 * XREFs of GreGetAspectRatioFilter @ 0x1C026F730
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00851BC (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0085270 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetAspectRatioFilter(HDC a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdx
  __int64 v6; // rdx
  _QWORD v7[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v8[40]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0;
  if ( a2 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v7, a1);
    if ( v7[0] )
    {
      v9 = *(_QWORD *)(v7[0] + 48LL);
      if ( (*(_DWORD *)(*(_QWORD *)(v7[0] + 976LL) + 236LL) & 1) != 0 )
      {
        *a2 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v9, v5);
        v2 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v9, v6);
      }
      else
      {
        *a2 = 0;
      }
      a2[1] = v2;
      v2 = 1;
    }
    else
    {
      EngSetLastError(6u);
    }
    MDCOBJ::~MDCOBJ((MDCOBJ *)v7);
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v8);
    return v2;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
