/*
 * XREFs of ?CloneSaDeviceParams@@YAJPEBUSaDeviceParams@@PEAPEAU1@@Z @ 0x18003E8D0
 * Callers:
 *     ?GetSaDeviceParams@CSaDeviceProxy@@UEAAJPEAPEAUSaDeviceParams@@@Z @ 0x18003E8C0 (-GetSaDeviceParams@CSaDeviceProxy@@UEAAJPEAPEAUSaDeviceParams@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800652FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     memcpy_0 @ 0x18006C963 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800EDBCC (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CloneSaDeviceParams(const struct SaDeviceParams *a1, struct SaDeviceParams **a2)
{
  unsigned __int128 v4; // rax
  __int64 v5; // r14
  SaDeviceParams *v6; // rbx
  _WORD *v7; // rsi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r15
  __int64 v10; // r9
  int v11; // ebp
  int v12; // r10d
  __int64 v13; // r8
  unsigned __int64 v14; // rdi
  char *v15; // rsi
  __int16 v16; // cx
  unsigned __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rdi
  LPVOID v20; // rsi
  size_t v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rdi
  LPVOID v24; // rsi
  size_t v25; // rbx
  LPMALLOC ppMalloc; // [rsp+70h] [rbp+8h] BYREF
  __int64 v28; // [rsp+80h] [rbp+18h]

  *(_QWORD *)&v4 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( (_QWORD)v4 )
    memset_0((void *)v4, 0, 0x60uLL);
  else
    v5 = 0LL;
  v6 = (SaDeviceParams *)v5;
  v28 = v5;
  v7 = *(_WORD **)a1;
  v8 = -1LL;
  do
    ++v8;
  while ( v7[v8] );
  *(_QWORD *)v5 = 0LL;
  v9 = v8 + 1;
  if ( v8 + 1 >= v8 )
  {
    v4 = v9 * (unsigned __int128)2uLL;
    if ( is_mul_ok(v9, 2uLL) )
    {
      *(_QWORD *)&v4 = CoTaskMemAlloc(2 * v9);
      v10 = v4;
      *(_QWORD *)v5 = v4;
      if ( !(_QWORD)v4 )
        goto LABEL_43;
      v11 = 0;
      if ( v9 > 0x7FFFFFFF )
      {
        if ( v8 != -1LL )
LABEL_42:
          *(_WORD *)v4 = 0;
      }
      else
      {
        if ( v8 < 0x7FFFFFFF )
        {
          if ( !v7 )
          {
            v7 = &unk_180161DC4;
            v8 = 0LL;
          }
          if ( v9 )
          {
            *(_QWORD *)&v4 = v9;
            *((_QWORD *)&v4 + 1) = v10;
            v12 = 0;
            v13 = 0LL;
            v14 = v8 - v9;
            v15 = (char *)v7 - v10;
            while ( v14 + (_QWORD)v4 )
            {
              v16 = *(_WORD *)&v15[*((_QWORD *)&v4 + 1)];
              if ( !v16 )
                break;
              **((_WORD **)&v4 + 1) = v16;
              *((_QWORD *)&v4 + 1) += 2LL;
              ++v13;
              *(_QWORD *)&v4 = v4 - 1;
              if ( !(_QWORD)v4 )
              {
                *((_QWORD *)&v4 + 1) -= 2LL;
                --v13;
                v12 = -2147024774;
                break;
              }
            }
            **((_WORD **)&v4 + 1) = 0;
            v17 = v9 - v13;
            if ( v12 >= 0 && v17 > 1 && 2 * v17 > 2 )
              memset_0((void *)(v10 + 2 * (v13 + 1)), 0, 2 * v17 - 2);
          }
          goto LABEL_20;
        }
        if ( v8 != -1LL )
          goto LABEL_42;
      }
    }
    else
    {
      v11 = -2147024362;
    }
LABEL_20:
    if ( v11 < 0 )
      goto LABEL_32;
    v18 = *((_QWORD *)a1 + 2);
    if ( !v18 )
      goto LABEL_26;
    v19 = *(unsigned __int16 *)(v18 + 16);
    v20 = CoTaskMemAlloc(v19 + 18);
    *(_QWORD *)(v5 + 16) = v20;
    if ( v20 )
    {
      v21 = 0LL;
      if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
      {
        v21 = ((__int64 (__fastcall *)(LPMALLOC, LPVOID))ppMalloc->lpVtbl->GetSize)(ppMalloc, v20);
        ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
      }
      memset_0(*(void **)(v5 + 16), 0, v21);
      v11 = 0;
      memcpy_0(*(void **)(v5 + 16), *((const void **)a1 + 2), v19 + 18);
LABEL_26:
      v22 = *((_QWORD *)a1 + 3);
      if ( !v22 )
      {
LABEL_31:
        *(_OWORD *)(v5 + 64) = *((_OWORD *)a1 + 4);
        *(_OWORD *)(v5 + 48) = *((_OWORD *)a1 + 3);
        *(_DWORD *)(v5 + 8) = *((_DWORD *)a1 + 2);
        *(_QWORD *)(v5 + 32) = *((_QWORD *)a1 + 4);
        *(_QWORD *)(v5 + 40) = *((_QWORD *)a1 + 5);
        *(_OWORD *)(v5 + 80) = *((_OWORD *)a1 + 5);
        v6 = 0LL;
        *a2 = (struct SaDeviceParams *)v5;
        goto LABEL_32;
      }
      v23 = *(unsigned __int16 *)(v22 + 16);
      v24 = CoTaskMemAlloc(v23 + 18);
      *(_QWORD *)(v5 + 24) = v24;
      if ( v24 )
      {
        v25 = 0LL;
        if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
        {
          v25 = ((__int64 (__fastcall *)(LPMALLOC, LPVOID))ppMalloc->lpVtbl->GetSize)(ppMalloc, v24);
          ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
        }
        memset_0(*(void **)(v5 + 24), 0, v25);
        v11 = 0;
        memcpy_0(*(void **)(v5 + 24), *((const void **)a1 + 3), v23 + 18);
        goto LABEL_31;
      }
    }
LABEL_43:
    v11 = -2147024882;
    goto LABEL_32;
  }
  v11 = -2147024362;
LABEL_32:
  if ( v6 )
    SaDeviceParams::`scalar deleting destructor'(v6, DWORD2(v4));
  return (unsigned int)v11;
}
