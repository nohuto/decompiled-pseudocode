/*
 * XREFs of ?bFill@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@Z2@Z @ 0x1C029F418
 * Callers:
 *     ?bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C00EF67C (-bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A51E0 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bFill(
        struct EPATHOBJ *a1,
        struct _RECTL *a2,
        char a3,
        void (*a4)(struct _RECTL *, unsigned int, void *))
{
  int v6; // esi
  unsigned int i; // r14d
  __int64 v8; // r15
  int v10; // esi
  unsigned int j; // r14d
  __int64 v12; // r15
  __int64 v13; // rax
  char *v14; // r14
  int v15; // eax
  int v16; // r15d
  char *v17; // r9
  unsigned int v18; // edi
  unsigned int v19; // esi
  _QWORD *v20; // r8
  _QWORD *v21; // rdi
  int v22; // ecx
  int v23; // eax
  int v24; // edx
  int v25; // ecx
  unsigned int v26; // [rsp+20h] [rbp-648h]
  int *v27; // [rsp+28h] [rbp-640h]
  int v28; // [rsp+48h] [rbp-620h]
  __int128 v29; // [rsp+68h] [rbp-600h]
  _QWORD *v30; // [rsp+88h] [rbp-5E0h] BYREF
  int v31; // [rsp+94h] [rbp-5D4h]
  int v32; // [rsp+98h] [rbp-5D0h]
  _QWORD v33[6]; // [rsp+B8h] [rbp-5B0h] BYREF
  int v34[4]; // [rsp+E8h] [rbp-580h] BYREF
  int v35[4]; // [rsp+F8h] [rbp-570h] BYREF
  char v36; // [rsp+108h] [rbp-560h] BYREF
  int v37; // [rsp+10Ch] [rbp-55Ch]
  int v38; // [rsp+114h] [rbp-554h]
  _BYTE v39[320]; // [rsp+120h] [rbp-548h] BYREF
  char v40; // [rsp+260h] [rbp-408h] BYREF

  if ( (a3 & 1) != 0 && *((_QWORD *)a1 + 6) )
  {
    if ( a2 )
    {
      v6 = 0;
      for ( i = 0; i < *((_DWORD *)a1 + 14); ++i )
      {
        v8 = *((_QWORD *)a1 + 6);
        v34[0] = *(_DWORD *)(v8 + 16LL * i);
        v34[1] = *(_DWORD *)(v8 + 16LL * i + 4);
        v34[2] = *(_DWORD *)(v8 + 16LL * i + 8);
        v34[3] = *(_DWORD *)(v8 + 16LL * i + 12);
        if ( a2->left >= *(_DWORD *)(v8 + 16LL * i)
          || a2->top >= *(_DWORD *)(v8 + 16LL * i + 4)
          || a2->right <= *(_DWORD *)(v8 + 16LL * i + 8)
          || a2->bottom <= *(_DWORD *)(v8 + 16LL * i + 12) )
        {
          ERECTL::operator*=(v34, &a2->left);
          if ( v6 )
          {
            _guard_dispatch_icall_fptr();
            v6 = 0;
          }
          if ( !ERECTL::bEmpty((ERECTL *)v34) )
            _guard_dispatch_icall_fptr();
        }
        else
        {
          ++v6;
        }
      }
      if ( v6 )
        _guard_dispatch_icall_fptr();
      return 1LL;
    }
LABEL_4:
    _guard_dispatch_icall_fptr();
    return 1LL;
  }
  if ( (a3 & 3) == 2 && *((_QWORD *)a1 + 8) )
  {
    if ( a2 )
    {
      v10 = 0;
      for ( j = 0; j < *((_DWORD *)a1 + 15); ++j )
      {
        v12 = *((_QWORD *)a1 + 8);
        if ( a2->left >= *(_DWORD *)(v12 + 16LL * j)
          || a2->top >= *(_DWORD *)(v12 + 16LL * j + 4)
          || a2->right <= *(_DWORD *)(v12 + 16LL * j + 8)
          || a2->bottom <= *(_DWORD *)(v12 + 16LL * j + 12) )
        {
          v35[0] = *(_DWORD *)(v12 + 16LL * j);
          v35[1] = *(_DWORD *)(v12 + 16LL * j + 4);
          v35[2] = *(_DWORD *)(v12 + 16LL * j + 8);
          v35[3] = *(_DWORD *)(v12 + 16LL * j + 12);
          ERECTL::operator*=(v35, &a2->left);
          if ( v10 )
          {
            _guard_dispatch_icall_fptr();
            v10 = 0;
          }
          if ( !ERECTL::bEmpty((ERECTL *)v35) )
            _guard_dispatch_icall_fptr();
        }
        else
        {
          ++v10;
        }
      }
      if ( v10 )
        _guard_dispatch_icall_fptr();
      return 1LL;
    }
    goto LABEL_4;
  }
  v13 = *((unsigned int *)a1 + 1);
  if ( (unsigned int)v13 > 0x14 )
  {
    if ( (unsigned __int64)(48 * v13) > 0xFFFFFFFF )
      return 0LL;
    v14 = (char *)PALLOCMEM2((unsigned int)(48 * v13), 1734632775LL, 0);
    if ( !v14 )
      return 0LL;
    v15 = 1;
  }
  else
  {
    v14 = &v40;
    v15 = 0;
  }
  v28 = v15;
  v27 = (int *)v39;
  v16 = 0;
  v29 = 0uLL;
  if ( a2 )
  {
    v29 = (__int128)*a2;
    v37 = 16 * a2->top;
    v38 = 16 * a2->bottom;
    v17 = &v36;
  }
  else
  {
    v17 = 0LL;
  }
  v18 = bConstructGET(a1, v33, v14, v17);
  v26 = v18;
  if ( v18 )
  {
    v19 = 0x80000000;
    v20 = &v30;
    v30 = &v30;
    v32 = 0;
    v31 = 0x7FFFFFFF;
LABEL_48:
    if ( v20 == &v30 || (vAdvanceAETEdges(&v30), v20 = v30, v30 == &v30) )
    {
      if ( (_QWORD *)v33[0] == v33 )
      {
        if ( v16 )
          _guard_dispatch_icall_fptr();
        v18 = v26;
        goto LABEL_80;
      }
      v19 = *(_DWORD *)(v33[0] + 16LL);
    }
    else if ( (_QWORD **)*v30 != &v30 )
    {
      vXSortAETEdges(&v30);
      v20 = v30;
    }
    if ( *(_DWORD *)(v33[0] + 16LL) == v19 )
    {
      vMoveNewEdges(v33, &v30, v19);
      v20 = v30;
    }
    v21 = v20;
    while ( 1 )
    {
      v22 = *((_DWORD *)v21 + 3);
      if ( (a3 & 2) != 0 )
      {
        v23 = *((_DWORD *)v21 + 10);
        do
        {
          v21 = (_QWORD *)*v21;
          v23 += *((_DWORD *)v21 + 10);
        }
        while ( v23 );
      }
      else
      {
        v21 = (_QWORD *)*v21;
      }
      if ( v22 < *((_DWORD *)v21 + 3) )
        break;
LABEL_77:
      v21 = (_QWORD *)*v21;
      if ( v21 == &v30 )
      {
        ++v19;
        goto LABEL_48;
      }
    }
    if ( a2 )
    {
      v24 = v29;
      if ( v22 >= (int)v29 )
        v24 = v22;
      *v27 = v24;
      v25 = DWORD2(v29);
      if ( *((_DWORD *)v21 + 3) <= SDWORD2(v29) )
        v25 = *((_DWORD *)v21 + 3);
      v27[2] = v25;
      v27[1] = v19;
      v27[3] = v19 + 1;
      if ( v24 >= v25 )
        goto LABEL_75;
    }
    else
    {
      *v27 = v22;
      v27[2] = *((_DWORD *)v21 + 3);
      v27[1] = v19;
      v27[3] = v19 + 1;
    }
    ++v16;
    v27 += 4;
LABEL_75:
    if ( v16 == 20 )
    {
      _guard_dispatch_icall_fptr();
      v27 = (int *)v39;
      v16 = 0;
      v20 = v30;
    }
    goto LABEL_77;
  }
LABEL_80:
  if ( v28 )
    Win32FreePool(v14);
  return v18;
}
