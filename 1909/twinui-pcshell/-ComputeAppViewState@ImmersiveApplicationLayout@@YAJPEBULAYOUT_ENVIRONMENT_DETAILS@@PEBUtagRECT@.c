/*
 * XREFs of ?ComputeAppViewState@ImmersiveApplicationLayout@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@PEBUtagRECT@@1PEAW4APPLICATION_VIEW_STATE@@@Z @ 0x18042DEE4
 * Callers:
 *     ?ComputeAppViewData@ImmersiveApplicationLayout@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@PEBUtagRECT@@1PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x18042DE50 (-ComputeAppViewData@ImmersiveApplicationLayout@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@PEBUtagRECT@@.c)
 * Callees:
 *     ?ComputeRectAlignment@ImmersiveApplicationLayout@@YA?AW4RectAlignment@1@PEBUtagRECT@@00@Z @ 0x18042E1A4 (-ComputeRectAlignment@ImmersiveApplicationLayout@@YA-AW4RectAlignment@1@PEBUtagRECT@@00@Z.c)
 */

__int64 __fastcall ImmersiveApplicationLayout::ComputeAppViewState(
        ImmersiveApplicationLayout *this,
        const struct LAYOUT_ENVIRONMENT_DETAILS *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  int v5; // r9d
  int v7; // ebx
  int v8; // r8d
  int v9; // r10d
  int v10; // r9d
  int v11; // eax
  _DWORD *v12; // r11
  _DWORD v14[4]; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v15[6]; // [rsp+30h] [rbp-18h] BYREF

  v5 = *((_DWORD *)a2 + 2);
  v7 = *((_DWORD *)a2 + 1);
  v8 = *((_DWORD *)a2 + 3);
  v9 = *((_DWORD *)this + 4);
  v15[0] = *(_DWORD *)this;
  v15[1] = *((_DWORD *)this + 1);
  v15[2] = *((_DWORD *)this + 2);
  v15[3] = *((_DWORD *)this + 3);
  v14[0] = *(_DWORD *)a2;
  v14[2] = v5;
  v10 = v5 - v14[0];
  v14[1] = v7;
  v14[3] = v8;
  if ( v10 < 320 * v9 / 100 || v10 >= 5 * v9 )
  {
    if ( v10 >= v8 - v7 )
    {
      v11 = ImmersiveApplicationLayout::ComputeRectAlignment(v15, v14, a3);
      *v12 = v11 != 1;
    }
    else
    {
      a4->left = 3;
    }
  }
  else
  {
    a4->left = 2;
  }
  return 0LL;
}
