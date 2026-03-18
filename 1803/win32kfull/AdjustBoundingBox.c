/*
 * XREFs of AdjustBoundingBox @ 0x1C0004784
 * Callers:
 *     ?vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C0002A3C (-vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AdjustBoundingBox(__int64 a1, __int64 a2, int *a3, _DWORD *a4, int *a5, int *a6)
{
  _DWORD *v6; // r10
  _DWORD *v8; // r11
  int v9; // ecx
  int v10; // edx
  __int64 result; // rax
  int v12; // r8d
  int v13; // ecx
  int v14; // ecx

  v6 = *(_DWORD **)a1;
  v8 = *(_DWORD **)a2;
  v9 = *(_DWORD *)(*(_QWORD *)a1 + 304LL) - *(_DWORD *)(*(_QWORD *)a2 + 304LL);
  v10 = *(_DWORD *)(*(_QWORD *)a2 + 300LL) - v6[75];
  result = (unsigned int)(v10 + v9);
  if ( (_DWORD)result )
  {
    result = 0LL;
    if ( v9 >= 0 )
      result = (unsigned int)v9;
    v12 = 0;
    if ( v10 >= 0 )
      v12 = v10;
    if ( v12 || (_DWORD)result )
    {
      if ( (int)result > *a4 )
      {
        v13 = v8[80] - v6[80];
        *a4 = result;
        *a6 = v13;
        a6[1] = v8[81] - v6[81];
      }
      if ( v12 > *a3 )
      {
        v14 = v8[78] - v6[78];
        *a3 = v12;
        *a5 = v14;
        a5[1] = v8[79] - v6[79];
      }
    }
  }
  return result;
}
