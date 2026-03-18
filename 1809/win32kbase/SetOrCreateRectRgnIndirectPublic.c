/*
 * XREFs of SetOrCreateRectRgnIndirectPublic @ 0x1C001F480
 * Callers:
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C003A6F0 (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0044B64 (-UpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     HmgSetOwner @ 0x1C001E160 (HmgSetOwner.c)
 *     GreCreateRectRgnIndirect @ 0x1C001EC80 (GreCreateRectRgnIndirect.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C001F7F0 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00A9FE0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall SetOrCreateRectRgnIndirectPublic(HRGN *a1, struct _RECTL *a2)
{
  unsigned int v2; // ebx
  LONG bottom; // esi
  LONG right; // edi
  LONG top; // ebp
  LONG left; // r14d
  __int64 v8; // r8
  LONG v9; // r9d
  LONG v10; // r10d
  struct HOBJ__ *RectRgnIndirect; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  bool v15; // zf
  int *v16; // rdx
  int v17; // eax
  _DWORD *v18; // rdx
  int *v19; // rdx
  int v20; // eax
  _DWORD *v21; // rdx
  __int128 v22; // [rsp+20h] [rbp-58h]
  _QWORD v23[8]; // [rsp+30h] [rbp-48h] BYREF

  v2 = 0;
  if ( *a1 )
  {
    bottom = a2->bottom;
    right = a2->right;
    top = a2->top;
    left = a2->left;
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v23, *a1, 0, 0);
    v8 = v23[0];
    if ( !v23[0] )
      goto LABEL_4;
    *(_QWORD *)&v22 = __PAIR64__(top, left);
    v9 = left;
    *((_QWORD *)&v22 + 1) = __PAIR64__(bottom, right);
    v10 = top;
    if ( (left & 0xF8000000) != 0 && (left & 0xF8000000) != -134217728
      || (((bottom & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (right & 0xF8000000) != 0 && (right & 0xF8000000) != 0xF8000000 )
    {
      goto LABEL_4;
    }
    if ( (top & 0xF8000000) != 0 && (top & 0xF8000000) != 0xF8000000 )
      goto LABEL_4;
    if ( left > right )
    {
      v9 = right;
      LODWORD(v22) = right;
      right = left;
      DWORD2(v22) = left;
    }
    if ( top > bottom )
    {
      v10 = bottom;
      DWORD1(v22) = bottom;
      bottom = top;
      HIDWORD(v22) = top;
    }
    if ( v9 == right || v10 == bottom )
    {
      v14 = v23[0] + 104LL;
      *(_DWORD *)(v23[0] + 80LL) = 120;
      *(_QWORD *)(v8 + 84) = 1LL;
      *(_QWORD *)(v8 + 92) = 0LL;
      *(_DWORD *)(v8 + 100) = 0;
      *(_DWORD *)(v8 + 108) = 0x80000000;
    }
    else
    {
      v15 = *(_DWORD *)(v23[0] + 80LL) == 160;
      v16 = (int *)(v23[0] + 104LL);
      *(_OWORD *)(v23[0] + 88LL) = v22;
      if ( v15 )
      {
        v17 = *v16;
        v2 = 1;
        *(_DWORD *)(v8 + 112) = v10;
        v18 = (int *)((char *)v16 + (unsigned int)(4 * v17 + 16));
        v18[1] = v10;
        v18[2] = bottom;
        v18[3] = v9;
        v18[4] = right;
        v19 = (_DWORD *)((char *)v18 + (unsigned int)(4 * *v18 + 16));
        v20 = *v19;
        v19[1] = bottom;
        *(_QWORD *)(v8 + 40) = (char *)v19 + (unsigned int)(4 * v20 + 16);
        goto LABEL_4;
      }
      *(_DWORD *)(v8 + 80) = 160;
      *(_DWORD *)(v8 + 84) = 3;
      *v16 = 0;
      *(_DWORD *)(v8 + 108) = 0x80000000;
      *(_DWORD *)(v8 + 112) = v10;
      *(_DWORD *)(v8 + 116) = 0;
      v21 = (int *)((char *)v16 + (unsigned int)(4 * *v16 + 16));
      *v21 = 2;
      v21[1] = v10;
      v21[2] = bottom;
      v21[3] = v9;
      v21[4] = right;
      v21[5] = 2;
      v14 = (__int64)v21 + (unsigned int)(4 * *v21 + 16);
      *(_DWORD *)(v14 + 4) = bottom;
    }
    *(_QWORD *)(v14 + 8) = 0x7FFFFFFFLL;
    *(_DWORD *)v14 = 0;
    *(_QWORD *)(v8 + 40) = v14 + 16;
    v2 = 1;
LABEL_4:
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v23);
    return v2;
  }
  RectRgnIndirect = GreCreateRectRgnIndirect(a2);
  *a1 = (HRGN)RectRgnIndirect;
  v13 = (__int64)RectRgnIndirect;
  if ( !RectRgnIndirect )
    return v2;
  PsGetCurrentProcessId();
  HmgSetOwner(v13, 0, 4);
  return 1LL;
}
