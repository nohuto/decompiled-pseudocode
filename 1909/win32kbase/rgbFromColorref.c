/*
 * XREFs of rgbFromColorref @ 0x1C006AD40
 * Callers:
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C006A930 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rgbFromColorref(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // eax
  unsigned int v5; // r8d
  unsigned int v6; // [rsp+18h] [rbp+18h]

  v6 = a3;
  if ( (a3 & 0x1000000) != 0 )
  {
    v4 = *(_DWORD *)(*(_QWORD *)(a2 + 112) + 4LL * ((unsigned int)(unsigned __int16)a3 < *(_DWORD *)(a2 + 28) ? a3 : 0));
    v6 = v4;
    if ( HIBYTE(v4) == 2 )
    {
      if ( a1 )
      {
        v5 = *(_DWORD *)(a1 + 28);
        if ( v5 )
        {
          v4 = (unsigned __int8)v4;
          if ( (unsigned __int8)v4 >= v5 )
            v4 = (unsigned __int8)v4 % v5;
          v6 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL * v4);
        }
      }
    }
  }
  HIBYTE(v6) = 0;
  return v6;
}
