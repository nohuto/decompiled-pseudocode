/*
 * XREFs of SetOrCreateRectRgnIndirectPublic @ 0x1C00275A0
 * Callers:
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C0049F9C (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0050C44 (-UpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     HmgSetOwner @ 0x1C0016200 (HmgSetOwner.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0027100 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0027430 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     GreCreateRectRgnIndirect @ 0x1C0028030 (GreCreateRectRgnIndirect.c)
 */

__int64 __fastcall SetOrCreateRectRgnIndirectPublic(HRGN *a1, struct _RECTL *a2)
{
  unsigned int v2; // ebx
  LONG right; // esi
  LONG bottom; // ebp
  LONG top; // r14d
  LONG left; // r15d
  __int64 v8; // rdi
  LONG v9; // edx
  LONG v10; // r9d
  __int64 RectRgnIndirect; // rax
  unsigned int v13; // esi
  bool v14; // zf
  int *v15; // r8
  int v16; // eax
  _DWORD *v17; // r8
  int *v18; // r8
  int v19; // eax
  char *v20; // rcx
  _DWORD *v21; // r8
  char *v22; // r8
  __int128 v23; // [rsp+20h] [rbp-48h]
  _QWORD v24[2]; // [rsp+30h] [rbp-38h] BYREF
  int v25; // [rsp+40h] [rbp-28h]

  v2 = 0;
  if ( *a1 )
  {
    right = a2->right;
    bottom = a2->bottom;
    top = a2->top;
    left = a2->left;
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v24, *a1, 0);
    v8 = v24[0];
    if ( v24[0] )
    {
      *((_QWORD *)&v23 + 1) = __PAIR64__(bottom, right);
      v9 = left;
      *(_QWORD *)&v23 = __PAIR64__(top, left);
      v10 = top;
      if ( ((left & 0xF8000000) == 0 || (left & 0xF8000000) == -134217728)
        && (((bottom & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && ((right & 0xF8000000) == 0 || (right & 0xF8000000) == 0xF8000000)
        && ((top & 0xF8000000) == 0 || (top & 0xF8000000) == 0xF8000000) )
      {
        if ( left > right )
        {
          v9 = right;
          DWORD2(v23) = left;
          LODWORD(v23) = right;
          right = left;
        }
        if ( top > bottom )
        {
          v10 = bottom;
          DWORD1(v23) = bottom;
          bottom = top;
          HIDWORD(v23) = top;
        }
        if ( v9 == right || v10 == bottom )
        {
          *(_QWORD *)(v24[0] + 92LL) = 0LL;
          *(_DWORD *)(v8 + 100) = 0;
          *(_DWORD *)(v8 + 80) = 120;
          *(_QWORD *)(v8 + 84) = 1LL;
          *(_DWORD *)(v8 + 104) = 0;
          v2 = 1;
          *(_DWORD *)(v8 + 108) = 0x80000000;
          *(_QWORD *)(v8 + 112) = 0x7FFFFFFFLL;
          *(_QWORD *)(v8 + 40) = v8 + 120;
        }
        else
        {
          v14 = *(_DWORD *)(v24[0] + 80LL) == 160;
          v15 = (int *)(v24[0] + 104LL);
          *(_OWORD *)(v24[0] + 88LL) = v23;
          if ( v14 )
          {
            v16 = *v15;
            v2 = 1;
            *(_DWORD *)(v8 + 112) = v10;
            v17 = (int *)((char *)v15 + (unsigned int)(4 * v16 + 16));
            v17[1] = v10;
            v17[2] = bottom;
            v17[3] = v9;
            v17[4] = right;
            v18 = (_DWORD *)((char *)v17 + (unsigned int)(4 * *v17 + 16));
            v19 = *v18;
            v18[1] = bottom;
            v20 = (char *)v18 + (unsigned int)(4 * v19 + 16);
          }
          else
          {
            *(_DWORD *)(v8 + 80) = 160;
            *(_DWORD *)(v8 + 84) = 3;
            *v15 = 0;
            *(_DWORD *)(v8 + 108) = 0x80000000;
            *(_DWORD *)(v8 + 112) = v10;
            *(_DWORD *)(v8 + 116) = 0;
            v21 = (int *)((char *)v15 + (unsigned int)(4 * *v15 + 16));
            *v21 = 2;
            v21[1] = v10;
            v21[2] = bottom;
            v21[3] = v9;
            v21[4] = right;
            v21[5] = 2;
            v22 = (char *)v21 + (unsigned int)(4 * *v21 + 16);
            v20 = v22 + 16;
            *(_DWORD *)v22 = 0;
            v2 = 1;
            *((_DWORD *)v22 + 1) = bottom;
            *((_QWORD *)v22 + 1) = 0x7FFFFFFFLL;
          }
          *(_QWORD *)(v8 + 40) = v20;
        }
      }
    }
    if ( !v25 )
      RGNOBJ::UpdateUserRgn((RGNOBJ *)v24);
    if ( v8 )
      _InterlockedDecrement((volatile signed __int32 *)(v8 + 12));
    return v2;
  }
  RectRgnIndirect = GreCreateRectRgnIndirect(a2);
  *a1 = (HRGN)RectRgnIndirect;
  v13 = RectRgnIndirect;
  if ( !RectRgnIndirect )
    return v2;
  PsGetCurrentProcessId();
  HmgSetOwner(v13, 0, 4);
  return 1LL;
}
