/*
 * XREFs of STR_DIV @ 0x1C00DA15C
 * Callers:
 *     ?vInitStrDDAClip@@YAXPEAU_RECTL@@0000@Z @ 0x1C00D9B80 (-vInitStrDDAClip@@YAXPEAU_RECTL@@0000@Z.c)
 *     ?vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z @ 0x1C00D9F14 (-vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall STR_DIV(_DWORD *a1, int a2, int a3)
{
  int v3; // edx
  __int64 result; // rax
  int v6; // r8d
  int v7; // edx
  int v8; // kr08_4
  int v9; // eax
  __int64 v10; // rt2

  if ( a2 < 0 )
  {
    v8 = ~a2;
    v7 = ~a2 >> 31;
    v10 = __SPAIR64__(v7, v8) % a3;
    v9 = __SPAIR64__(v7, v8) / a3;
    a1[1] = v10;
    v6 = a3 - v10 - 1;
    result = (unsigned int)~v9;
  }
  else
  {
    v3 = a2 >> 31;
    result = (unsigned int)(__SPAIR64__(v3, a2) / a3);
    v6 = __SPAIR64__(v3, a2) % a3;
  }
  *a1 = result;
  a1[1] = v6;
  return result;
}
