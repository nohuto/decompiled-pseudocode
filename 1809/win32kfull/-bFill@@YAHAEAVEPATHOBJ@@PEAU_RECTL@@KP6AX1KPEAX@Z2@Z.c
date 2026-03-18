/*
 * XREFs of ?bFill@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@Z2@Z @ 0x1C013FD38
 * Callers:
 *     ?bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C013F3C4 (-bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00539F4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bFill(
        struct EPATHOBJ *a1,
        struct _RECTL *a2,
        char a3,
        void (*a4)(struct _RECTL *, unsigned int, void *),
        void *a5)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  size_t v11; // rcx
  char *v12; // r14
  int v13; // eax
  unsigned int v14; // r15d
  char *v15; // r9
  unsigned int v16; // edi
  unsigned int v17; // esi
  _QWORD *v18; // r8
  _QWORD *v19; // rdi
  int v20; // ecx
  unsigned int v22; // esi
  unsigned int i; // r14d
  unsigned int v24; // eax
  __int64 v25; // r15
  __int64 v26; // rcx
  unsigned int v27; // esi
  unsigned int j; // r14d
  unsigned int v29; // eax
  __int64 v30; // r15
  int v31; // eax
  int v32; // edx
  int v33; // ecx
  unsigned int v34; // [rsp+20h] [rbp-648h]
  int *v35; // [rsp+28h] [rbp-640h]
  int v36; // [rsp+48h] [rbp-620h]
  __int128 v37; // [rsp+68h] [rbp-600h]
  _QWORD *v38; // [rsp+88h] [rbp-5E0h] BYREF
  int v39; // [rsp+94h] [rbp-5D4h]
  int v40; // [rsp+98h] [rbp-5D0h]
  _QWORD v41[6]; // [rsp+B8h] [rbp-5B0h] BYREF
  int v42[4]; // [rsp+E8h] [rbp-580h] BYREF
  int v43[4]; // [rsp+F8h] [rbp-570h] BYREF
  char v44; // [rsp+108h] [rbp-560h] BYREF
  int v45; // [rsp+10Ch] [rbp-55Ch]
  int v46; // [rsp+114h] [rbp-554h]
  _BYTE v47[320]; // [rsp+120h] [rbp-548h] BYREF
  char v48; // [rsp+260h] [rbp-408h] BYREF

  if ( (a3 & 1) != 0 )
  {
    v8 = *((_QWORD *)a1 + 6);
    if ( v8 )
    {
      if ( a2 )
      {
        v22 = 0;
        for ( i = 0; ; ++i )
        {
          v24 = *((_DWORD *)a1 + 14);
          if ( i >= v24 )
            break;
          v25 = *((_QWORD *)a1 + 6);
          v42[0] = *(_DWORD *)(v25 + 16LL * i);
          v42[1] = *(_DWORD *)(v25 + 16LL * i + 4);
          v42[2] = *(_DWORD *)(v25 + 16LL * i + 8);
          v42[3] = *(_DWORD *)(v25 + 16LL * i + 12);
          if ( a2->left >= *(_DWORD *)(v25 + 16LL * i)
            || a2->top >= *(_DWORD *)(v25 + 16LL * i + 4)
            || a2->right <= *(_DWORD *)(v25 + 16LL * i + 8)
            || a2->bottom <= *(_DWORD *)(v25 + 16LL * i + 12) )
          {
            ERECTL::operator*=(v42, &a2->left);
            if ( v22 )
            {
              ((void (__fastcall *)(__int64, _QWORD, void *))a4)(v25 + 16LL * (i - v22), v22, a5);
              v22 = 0;
            }
            if ( !ERECTL::bEmpty((ERECTL *)v42) )
              ((void (__fastcall *)(int *, __int64, void *))a4)(v42, 1LL, a5);
          }
          else
          {
            ++v22;
          }
        }
        if ( v22 )
          ((void (__fastcall *)(__int64, _QWORD, void *))a4)(*((_QWORD *)a1 + 6) + 16LL * (v24 - v22), v22, a5);
      }
      else
      {
        ((void (__fastcall *)(__int64, _QWORD, void *))a4)(v8, *((unsigned int *)a1 + 14), a5);
      }
      return 1LL;
    }
  }
  if ( (a3 & 1) == 0 && (a3 & 2) != 0 )
  {
    v26 = *((_QWORD *)a1 + 8);
    if ( v26 )
    {
      if ( a2 )
      {
        v27 = 0;
        for ( j = 0; ; ++j )
        {
          v29 = *((_DWORD *)a1 + 15);
          if ( j >= v29 )
            break;
          v30 = *((_QWORD *)a1 + 8);
          if ( a2->left >= *(_DWORD *)(v30 + 16LL * j)
            || a2->top >= *(_DWORD *)(v30 + 16LL * j + 4)
            || a2->right <= *(_DWORD *)(v30 + 16LL * j + 8)
            || a2->bottom <= *(_DWORD *)(v30 + 16LL * j + 12) )
          {
            v43[0] = *(_DWORD *)(v30 + 16LL * j);
            v43[1] = *(_DWORD *)(v30 + 16LL * j + 4);
            v43[2] = *(_DWORD *)(v30 + 16LL * j + 8);
            v43[3] = *(_DWORD *)(v30 + 16LL * j + 12);
            ERECTL::operator*=(v43, &a2->left);
            if ( v27 )
            {
              ((void (__fastcall *)(__int64, _QWORD, void *))a4)(v30 + 16LL * (j - v27), v27, a5);
              v27 = 0;
            }
            if ( !ERECTL::bEmpty((ERECTL *)v43) )
              ((void (__fastcall *)(int *, __int64, void *))a4)(v43, 1LL, a5);
          }
          else
          {
            ++v27;
          }
        }
        if ( v27 )
          ((void (__fastcall *)(__int64, _QWORD, void *))a4)(*((_QWORD *)a1 + 8) + 16LL * (v29 - v27), v27, a5);
      }
      else
      {
        ((void (__fastcall *)(__int64, _QWORD, void *))a4)(v26, *((unsigned int *)a1 + 15), a5);
      }
      return 1LL;
    }
  }
  v9 = *((unsigned int *)a1 + 1);
  if ( (unsigned int)v9 <= 0x14 )
  {
    v12 = &v48;
    v13 = 0;
  }
  else
  {
    v10 = 48 * v9;
    v11 = 0xFFFFFFFFLL;
    if ( (unsigned __int64)(48 * v9) <= 0xFFFFFFFF )
      v11 = (unsigned int)v10;
    if ( v10 > 0xFFFFFFFF )
      return 0LL;
    v12 = (char *)PALLOCMEM2(v11, 1734632775LL, 0);
    if ( !v12 )
      return 0LL;
    v13 = 1;
  }
  v36 = v13;
  v35 = (int *)v47;
  v14 = 0;
  v37 = 0uLL;
  if ( a2 )
  {
    v37 = (__int128)*a2;
    v45 = 16 * a2->top;
    v46 = 16 * a2->bottom;
    v15 = &v44;
  }
  else
  {
    v15 = 0LL;
  }
  v16 = bConstructGET(a1, v41, v12, v15);
  v34 = v16;
  if ( v16 )
  {
    v17 = 0x80000000;
    v18 = &v38;
    v38 = &v38;
    v40 = 0;
    v39 = 0x7FFFFFFF;
LABEL_14:
    if ( v18 != &v38 )
    {
      vAdvanceAETEdges(&v38);
      v18 = v38;
      if ( v38 != &v38 )
      {
        if ( (_QWORD **)*v38 != &v38 )
        {
          vXSortAETEdges(&v38);
          v18 = v38;
        }
        goto LABEL_18;
      }
    }
    if ( (_QWORD *)v41[0] != v41 )
    {
      v17 = *(_DWORD *)(v41[0] + 16LL);
LABEL_18:
      if ( *(_DWORD *)(v41[0] + 16LL) == v17 )
      {
        vMoveNewEdges(v41, &v38, v17);
        v18 = v38;
      }
      v19 = v18;
      while ( 1 )
      {
        v20 = *((_DWORD *)v19 + 3);
        if ( (a3 & 2) != 0 )
        {
          v31 = *((_DWORD *)v19 + 10);
          do
          {
            v19 = (_QWORD *)*v19;
            v31 += *((_DWORD *)v19 + 10);
          }
          while ( v31 );
        }
        else
        {
          v19 = (_QWORD *)*v19;
        }
        if ( v20 >= *((_DWORD *)v19 + 3) )
          goto LABEL_29;
        if ( a2 )
        {
          v32 = v37;
          if ( v20 >= (int)v37 )
            v32 = v20;
          *v35 = v32;
          v33 = DWORD2(v37);
          if ( *((_DWORD *)v19 + 3) <= SDWORD2(v37) )
            v33 = *((_DWORD *)v19 + 3);
          v35[2] = v33;
          v35[1] = v17;
          v35[3] = v17 + 1;
          if ( v32 >= v33 )
            goto LABEL_27;
        }
        else
        {
          *v35 = v20;
          v35[2] = *((_DWORD *)v19 + 3);
          v35[1] = v17;
          v35[3] = v17 + 1;
        }
        ++v14;
        v35 += 4;
LABEL_27:
        if ( v14 == 20 )
        {
          ((void (__fastcall *)(_BYTE *, __int64, void *))a4)(v47, 20LL, a5);
          v35 = (int *)v47;
          v14 = 0;
          v18 = v38;
        }
LABEL_29:
        v19 = (_QWORD *)*v19;
        if ( v19 == &v38 )
        {
          ++v17;
          goto LABEL_14;
        }
      }
    }
    if ( v14 )
      ((void (__fastcall *)(_BYTE *, _QWORD, void *))a4)(v47, v14, a5);
    v16 = v34;
  }
  if ( v36 )
    Win32FreePool(v12);
  return v16;
}
