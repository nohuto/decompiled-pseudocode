/*
 * XREFs of ?bHobbyize@WIDEPENOBJ@@AEAAHQEAVEVECTORFX@@@Z @ 0x1C02B0B84
 * Callers:
 *     ?bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C01436AC (-bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 * Callees:
 *     ?vEndFigure@WIDEPATHOBJ@@QEAAXXZ @ 0x1C0144D64 (-vEndFigure@WIDEPATHOBJ@@QEAAXXZ.c)
 *     ?bBeginFigure@WIDEPATHOBJ@@QEAAHXZ @ 0x1C0144DB4 (-bBeginFigure@WIDEPATHOBJ@@QEAAHXZ.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C02B13BC (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 */

__int64 __fastcall WIDEPENOBJ::bHobbyize(WIDEPENOBJ *this, struct EVECTORFX *const a2)
{
  int v3; // r8d
  struct _POINTFIX **v4; // rbx
  unsigned int *v5; // rdi
  int v6; // r8d
  struct _POINTFIX *v7; // rbx
  struct _POINTFIX *v8; // rdi
  __int64 result; // rax

  v3 = *((_DWORD *)a2 + 1) * *((_DWORD *)a2 + 1) + *(_DWORD *)a2 * *(_DWORD *)a2;
  if ( v3 >= 10816 )
    return 0LL;
  if ( v3 >= 576 )
  {
    if ( v3 >= 1600 )
    {
      if ( v3 >= 3136 )
      {
        if ( v3 >= 5184 )
        {
          if ( v3 >= 7744 )
          {
            v4 = (struct _POINTFIX **)&off_1C030D3F0;
            v5 = (unsigned int *)&unk_1C030D3F8;
          }
          else
          {
            v4 = (struct _POINTFIX **)&off_1C030D3E0;
            v5 = (unsigned int *)&unk_1C030D3E8;
          }
        }
        else
        {
          v4 = (struct _POINTFIX **)&off_1C030D3D0;
          v5 = (unsigned int *)&unk_1C030D3D8;
        }
      }
      else
      {
        v4 = (struct _POINTFIX **)&off_1C030D3C0;
        v5 = (unsigned int *)&unk_1C030D3C8;
      }
    }
    else
    {
      v4 = (struct _POINTFIX **)&off_1C030D3B0;
      v5 = (unsigned int *)&unk_1C030D3B8;
    }
  }
  else
  {
    v4 = (struct _POINTFIX **)&WIDEPENOBJ::ahob;
    v5 = (unsigned int *)&unk_1C030D3A8;
  }
  if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure(this) )
    return 0LL;
  v7 = *v4;
  v8 = &v7[*v5];
  while ( v7 < v8 )
    WIDEPATHOBJ::vAddPoint(this, v7++, v6);
  WIDEPATHOBJ::vEndFigure(this);
  result = 1LL;
  *((_DWORD *)this + 38) = 1;
  return result;
}
