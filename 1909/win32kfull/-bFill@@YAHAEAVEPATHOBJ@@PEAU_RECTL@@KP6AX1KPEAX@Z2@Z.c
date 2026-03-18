/*
 * XREFs of ?bFill@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@Z2@Z @ 0x1C00CF204
 * Callers:
 *     ?bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C00CE748 (-bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0095D7C (PALLOCMEM2.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A3D1C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A9DD4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall bFill(
        struct EPATHOBJ *a1,
        struct _RECTL *a2,
        char a3,
        void (*a4)(struct _RECTL *, unsigned int, void *),
        void *a5)
{
  __int64 v9; // rcx
  __int64 v10; // rax
  char *v11; // r14
  int v12; // eax
  unsigned int v13; // r15d
  __int64 *v14; // r9
  unsigned int v15; // edi
  unsigned int v16; // esi
  _QWORD *v17; // r8
  _QWORD *v18; // rdi
  int v19; // ecx
  int v20; // edx
  int v21; // ecx
  int v22; // eax
  __int64 v24; // rcx
  unsigned int v25; // esi
  unsigned int i; // r14d
  unsigned int v27; // eax
  __int64 v28; // r15
  unsigned int v29; // esi
  unsigned int j; // r14d
  unsigned int v31; // eax
  __int64 v32; // r15
  unsigned int v33; // [rsp+20h] [rbp-648h]
  int *v34; // [rsp+28h] [rbp-640h]
  int v35; // [rsp+48h] [rbp-620h]
  __int128 v36; // [rsp+68h] [rbp-600h]
  _QWORD v37[6]; // [rsp+78h] [rbp-5F0h] BYREF
  int v38; // [rsp+A8h] [rbp-5C0h]
  _QWORD *v39; // [rsp+B0h] [rbp-5B8h]
  _QWORD v40[6]; // [rsp+B8h] [rbp-5B0h] BYREF
  int v41[4]; // [rsp+E8h] [rbp-580h] BYREF
  int v42[4]; // [rsp+F8h] [rbp-570h] BYREF
  __int64 v43; // [rsp+108h] [rbp-560h] BYREF
  __int64 v44; // [rsp+110h] [rbp-558h]
  _BYTE v45[320]; // [rsp+120h] [rbp-548h] BYREF
  char v46; // [rsp+260h] [rbp-408h] BYREF

  memset(v37, 0, sizeof(v37));
  memset(v40, 0, sizeof(v40));
  if ( (a3 & 1) != 0 )
  {
    v9 = *((_QWORD *)a1 + 6);
    if ( v9 )
    {
      if ( a2 )
      {
        v25 = 0;
        for ( i = 0; ; ++i )
        {
          v27 = *((_DWORD *)a1 + 14);
          if ( i >= v27 )
            break;
          v28 = *((_QWORD *)a1 + 6);
          v41[0] = *(_DWORD *)(v28 + 16LL * i);
          v41[1] = *(_DWORD *)(v28 + 16LL * i + 4);
          v41[2] = *(_DWORD *)(v28 + 16LL * i + 8);
          v41[3] = *(_DWORD *)(v28 + 16LL * i + 12);
          if ( a2->left >= *(_DWORD *)(v28 + 16LL * i)
            || a2->top >= *(_DWORD *)(v28 + 16LL * i + 4)
            || a2->right <= *(_DWORD *)(v28 + 16LL * i + 8)
            || a2->bottom <= *(_DWORD *)(v28 + 16LL * i + 12) )
          {
            ERECTL::operator*=(v41, &a2->left);
            if ( v25 )
            {
              ((void (__fastcall *)(__int64, _QWORD, void *))a4)(v28 + 16LL * (i - v25), v25, a5);
              v25 = 0;
            }
            if ( !ERECTL::bEmpty((ERECTL *)v41) )
              ((void (__fastcall *)(int *, __int64, void *))a4)(v41, 1LL, a5);
          }
          else
          {
            ++v25;
          }
        }
        if ( v25 )
          ((void (__fastcall *)(__int64, _QWORD, void *))a4)(*((_QWORD *)a1 + 6) + 16LL * (v27 - v25), v25, a5);
      }
      else
      {
        ((void (__fastcall *)(__int64, _QWORD, void *))a4)(v9, *((unsigned int *)a1 + 14), a5);
      }
      return 1LL;
    }
  }
  if ( (a3 & 3) == 2 )
  {
    v24 = *((_QWORD *)a1 + 8);
    if ( v24 )
    {
      if ( a2 )
      {
        v29 = 0;
        for ( j = 0; ; ++j )
        {
          v31 = *((_DWORD *)a1 + 15);
          if ( j >= v31 )
            break;
          v32 = *((_QWORD *)a1 + 8);
          if ( a2->left >= *(_DWORD *)(v32 + 16LL * j)
            || a2->top >= *(_DWORD *)(v32 + 16LL * j + 4)
            || a2->right <= *(_DWORD *)(v32 + 16LL * j + 8)
            || a2->bottom <= *(_DWORD *)(v32 + 16LL * j + 12) )
          {
            v42[0] = *(_DWORD *)(v32 + 16LL * j);
            v42[1] = *(_DWORD *)(v32 + 16LL * j + 4);
            v42[2] = *(_DWORD *)(v32 + 16LL * j + 8);
            v42[3] = *(_DWORD *)(v32 + 16LL * j + 12);
            ERECTL::operator*=(v42, &a2->left);
            if ( v29 )
            {
              ((void (__fastcall *)(__int64, _QWORD, void *))a4)(v32 + 16LL * (j - v29), v29, a5);
              v29 = 0;
            }
            if ( !ERECTL::bEmpty((ERECTL *)v42) )
              ((void (__fastcall *)(int *, __int64, void *))a4)(v42, 1LL, a5);
          }
          else
          {
            ++v29;
          }
        }
        if ( v29 )
          ((void (__fastcall *)(__int64, _QWORD, void *))a4)(*((_QWORD *)a1 + 8) + 16LL * (v31 - v29), v29, a5);
      }
      else
      {
        ((void (__fastcall *)(__int64, _QWORD, void *))a4)(v24, *((unsigned int *)a1 + 15), a5);
      }
      return 1LL;
    }
  }
  v10 = *((unsigned int *)a1 + 1);
  if ( (unsigned int)v10 <= 0x14 )
  {
    v11 = &v46;
    v12 = 0;
  }
  else
  {
    if ( (unsigned __int64)(48 * v10) > 0xFFFFFFFF )
      return 0LL;
    v38 = 48 * v10;
    v11 = (char *)PALLOCMEM2(48 * v10, 1734632775LL, 0);
    if ( !v11 )
      return 0LL;
    v12 = 1;
  }
  v35 = v12;
  v34 = (int *)v45;
  v13 = 0;
  v36 = 0uLL;
  v43 = 0LL;
  v44 = 0LL;
  if ( a2 )
  {
    v36 = (__int128)*a2;
    HIDWORD(v43) = 16 * a2->top;
    HIDWORD(v44) = 16 * a2->bottom;
    v14 = &v43;
  }
  else
  {
    v14 = 0LL;
  }
  v39 = v40;
  v15 = bConstructGET(a1, v40, v11, v14);
  v33 = v15;
  if ( v15 )
  {
    v16 = 0x80000000;
    v17 = v37;
    v37[0] = v37;
    LODWORD(v37[2]) = 0;
    HIDWORD(v37[1]) = 0x7FFFFFFF;
LABEL_12:
    if ( v17 != v37 )
    {
      vAdvanceAETEdges(v37);
      v17 = (_QWORD *)v37[0];
      if ( (_QWORD *)v37[0] != v37 )
      {
        if ( *(_QWORD **)v37[0] != v37 )
        {
          vXSortAETEdges(v37);
          v17 = (_QWORD *)v37[0];
        }
        goto LABEL_16;
      }
    }
    if ( (_QWORD *)v40[0] != v39 )
    {
      v16 = *(_DWORD *)(v40[0] + 16LL);
LABEL_16:
      if ( *(_DWORD *)(v40[0] + 16LL) == v16 )
      {
        vMoveNewEdges(v40, v37, v16);
        v17 = (_QWORD *)v37[0];
      }
      v18 = v17;
      while ( 1 )
      {
        v19 = *((_DWORD *)v18 + 3);
        if ( (a3 & 2) != 0 )
        {
          v22 = *((_DWORD *)v18 + 10);
          do
          {
            v18 = (_QWORD *)*v18;
            v22 += *((_DWORD *)v18 + 10);
          }
          while ( v22 );
        }
        else
        {
          v18 = (_QWORD *)*v18;
        }
        if ( v19 >= *((_DWORD *)v18 + 3) )
          goto LABEL_31;
        if ( a2 )
        {
          v20 = v36;
          if ( v19 >= (int)v36 )
            v20 = v19;
          *v34 = v20;
          v21 = DWORD2(v36);
          if ( *((_DWORD *)v18 + 3) <= SDWORD2(v36) )
            v21 = *((_DWORD *)v18 + 3);
          v34[2] = v21;
          v34[1] = v16;
          v34[3] = v16 + 1;
          if ( v20 >= v21 )
            goto LABEL_29;
        }
        else
        {
          *v34 = v19;
          v34[2] = *((_DWORD *)v18 + 3);
          v34[1] = v16;
          v34[3] = v16 + 1;
        }
        ++v13;
        v34 += 4;
LABEL_29:
        if ( v13 == 20 )
        {
          ((void (__fastcall *)(_BYTE *, __int64, void *))a4)(v45, 20LL, a5);
          v34 = (int *)v45;
          v13 = 0;
          v17 = (_QWORD *)v37[0];
        }
LABEL_31:
        v18 = (_QWORD *)*v18;
        if ( v18 == v37 )
        {
          ++v16;
          goto LABEL_12;
        }
      }
    }
    if ( v13 )
      ((void (__fastcall *)(_BYTE *, _QWORD, void *))a4)(v45, v13, a5);
    v15 = v33;
  }
  if ( v35 )
    Win32FreePool(v11);
  return v15;
}
