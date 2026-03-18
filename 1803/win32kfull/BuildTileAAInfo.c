/*
 * XREFs of BuildTileAAInfo @ 0x1C02339F0
 * Callers:
 *     <none>
 * Callees:
 *     _ALIGN_MEM @ 0x1C00D2228 (_ALIGN_MEM.c)
 */

_DWORD *BuildTileAAInfo(__int64 a1, __int64 a2, int *a3, int *a4, int a5, int a6, int a7, int *a8, int *a9, ...)
{
  int v9; // edi
  int v10; // r13d
  int v11; // r15d
  int v12; // ebp
  int v13; // esi
  int v14; // r14d
  int v16; // ebx
  int v17; // r12d
  _DWORD *v18; // rax
  _DWORD *v19; // rdx
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // r13d
  int v25; // [rsp+20h] [rbp-48h]
  int v28; // [rsp+90h] [rbp+28h]
  __int64 v29; // [rsp+B8h] [rbp+50h] BYREF
  va_list va; // [rsp+B8h] [rbp+50h]
  va_list va1; // [rsp+C0h] [rbp+58h] BYREF

  va_start(va1, a9);
  va_start(va, a9);
  v29 = va_arg(va1, _QWORD);
  v25 = 0;
  v9 = 0;
  v10 = 0;
  v11 = *a4;
  v12 = a6;
  if ( *a3 >= 0 )
    v9 = *a3;
  v13 = v9;
  if ( v11 > a5 )
    v11 = a5;
  v14 = a7 - a6;
  if ( v11 - v9 <= 0 )
    return 0LL;
  if ( v14 <= 0 )
    return 0LL;
  v16 = -1;
  v17 = *a8;
  v28 = *a9;
  if ( *a8 >= *a9 || (int)ALIGN_MEM((__int64 *)va, v29) < 0 || (unsigned int)v29 >= 0xFFFFFF10 )
    return 0LL;
  v18 = EngAllocMem(1u, (int)v29 + 240, 0x33355448u);
  v19 = v18;
  if ( v18 )
  {
    *((_QWORD *)v18 + 4) = v18 + 60;
    v20 = a7 - a6;
    do
    {
      --v20;
      if ( v13 < v9 || v13 >= v11 || v12 < v17 || v12 >= v28 )
      {
        if ( v16 != -1 )
          goto LABEL_28;
      }
      else
      {
        v21 = v12;
        v10 = v12;
        if ( v16 != -1 )
          v21 = v25;
        v25 = v21;
        v22 = v13;
        if ( v16 != -1 )
          v22 = v16;
        v16 = v22;
      }
      v23 = v13 + 1;
      ++v12;
      v13 = v9;
      if ( v23 < v11 )
        v13 = v23;
    }
    while ( v20 );
    if ( v16 == -1 )
    {
      EngFreeMem(v19);
      return 0LL;
    }
LABEL_28:
    v19[6] = v16 - v9;
    *a3 = v9;
    v19[30] = v9;
    *a4 = v11 - 1;
    *a8 = v25;
    *a9 = v10;
    v24 = v10 - v25;
    *v19 = v11 - v9;
    v19[31] = v11 - v9;
    v19[29] = v14;
    v19[1] = v24 + 1;
    v19[5] = v24 + 1;
    v19[4] = v24 + 1;
    v19[28] = v11 - v9;
  }
  return v19;
}
