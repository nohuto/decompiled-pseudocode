/*
 * XREFs of sub_180070A00 @ 0x180070A00
 * Callers:
 *     sub_18007381C @ 0x18007381C (sub_18007381C.c)
 * Callees:
 *     sub_180020AB0 @ 0x180020AB0 (sub_180020AB0.c)
 *     sub_18006F9C8 @ 0x18006F9C8 (sub_18006F9C8.c)
 *     sub_180071970 @ 0x180071970 (sub_180071970.c)
 *     memcmp @ 0x180125AA8 (memcmp.c)
 */

_QWORD *__fastcall sub_180070A00(__int64 ***a1, _QWORD *a2, __int64 *a3, size_t *a4, _QWORD *a5)
{
  __int64 **v9; // rsi
  const void *v10; // rdx
  const void *v11; // rcx
  size_t v12; // rsi
  size_t v13; // rbx
  size_t v14; // r8
  int v15; // r15d
  _QWORD *result; // rax
  __int64 *v17; // rsi
  const void *v18; // rdx
  const void *v19; // rcx
  size_t v20; // rdi
  size_t v21; // rbx
  size_t v22; // r8
  int v23; // r15d
  const void *v24; // rdx
  const void *v25; // rcx
  size_t v26; // r15
  size_t v27; // rbx
  size_t v28; // r8
  int v29; // eax
  __int64 *v30; // rbx
  const void *v31; // rdx
  __int64 *v32; // rcx
  __int64 *v33; // r8
  int v34; // eax
  const void *v35; // rdx
  const void *v36; // rcx
  size_t v37; // r8
  int v38; // eax
  __int64 v39; // rbx
  __int64 *v40; // rax
  __int64 *v41; // rcx
  __int64 *v42; // rcx
  const void *v43; // rdx
  const void *v44; // rcx
  unsigned __int64 v45; // rax
  size_t v46; // rsi
  size_t v47; // r8
  int v48; // eax
  char v49; // [rsp+30h] [rbp-88h]
  __int64 *v50; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v51; // [rsp+48h] [rbp-70h]
  size_t v52; // [rsp+50h] [rbp-68h]
  _QWORD *v53; // [rsp+58h] [rbp-60h]
  _QWORD v54[11]; // [rsp+60h] [rbp-58h] BYREF

  v54[2] = -2LL;
  v54[0] = a1;
  v53 = a5;
  if ( a1[1] )
  {
    v9 = *a1;
    if ( a3 == **a1 )
    {
      v10 = a3 + 4;
      if ( (unsigned __int64)a3[7] >= 0x10 )
        v10 = (const void *)a3[4];
      v11 = a4;
      if ( a4[3] >= 0x10 )
        v11 = (const void *)*a4;
      v12 = a3[6];
      v13 = a4[2];
      v14 = v13;
      if ( v12 < v13 )
        v14 = v12;
      v15 = memcmp(v11, v10, v14);
      if ( !v15 )
      {
        if ( v13 >= v12 )
          v15 = v13 > v12;
        else
          v15 = -1;
      }
      if ( v15 < 0 )
      {
        sub_18006F9C8(a1, a2, 1, a3, (int)a4, a5);
        return a2;
      }
      goto LABEL_91;
    }
    if ( a3 == (__int64 *)v9 )
    {
      v17 = v9[2];
      v18 = a4;
      if ( a4[3] >= 0x10 )
        v18 = (const void *)*a4;
      v19 = v17 + 4;
      if ( (unsigned __int64)v17[7] >= 0x10 )
        v19 = (const void *)v17[4];
      v20 = a4[2];
      v21 = v17[6];
      v22 = v21;
      if ( v20 < v21 )
        v22 = a4[2];
      v23 = memcmp(v19, v18, v22);
      if ( !v23 )
      {
        if ( v21 >= v20 )
          v23 = v21 > v20;
        else
          v23 = -1;
      }
      if ( v23 < 0 )
      {
        sub_18006F9C8(a1, a2, 0, v17, (int)a4, a5);
        return a2;
      }
      goto LABEL_91;
    }
    v24 = a3 + 4;
    v51 = a3[7];
    if ( v51 >= 0x10 )
      v24 = (const void *)a3[4];
    v25 = a4;
    if ( a4[3] >= 0x10 )
      v25 = (const void *)*a4;
    v26 = a3[6];
    v52 = v26;
    v27 = a4[2];
    v28 = v27;
    if ( v26 < v27 )
      v28 = v26;
    v29 = memcmp(v25, v24, v28);
    if ( !v29 )
    {
      if ( v27 >= v26 )
        v29 = v27 > v26;
      else
        v29 = -1;
    }
    if ( v29 < 0 )
    {
      v50 = a3;
      sub_180020AB0(&v50);
      v30 = v50;
      v31 = a4;
      if ( a4[3] >= 0x10 )
        v31 = (const void *)*a4;
      v32 = v50 + 4;
      if ( (unsigned __int64)v50[7] >= 0x10 )
        v32 = (__int64 *)v50[4];
      v50 = (__int64 *)v50[6];
      v33 = v50;
      if ( a4[2] < (unsigned __int64)v50 )
        v33 = (__int64 *)a4[2];
      v34 = memcmp(v32, v31, (size_t)v33);
      if ( !v34 )
      {
        if ( (unsigned __int64)v50 >= a4[2] )
          v34 = (unsigned __int64)v50 > a4[2];
        else
          v34 = -1;
      }
      if ( v34 < 0 )
      {
        if ( *(_BYTE *)(v30[2] + 25) )
          sub_18006F9C8(a1, a2, 0, v30, (int)a4, a5);
        else
          sub_18006F9C8(a1, a2, 1, a3, (int)a4, a5);
        return a2;
      }
      v27 = a4[2];
    }
    v35 = a4;
    if ( a4[3] >= 0x10 )
      v35 = (const void *)*a4;
    if ( v51 < 0x10 )
      v36 = a3 + 4;
    else
      v36 = (const void *)a3[4];
    v37 = v52;
    if ( v27 < v52 )
      v37 = v27;
    v38 = memcmp(v36, v35, v37);
    if ( !v38 )
    {
      if ( v52 >= v27 )
        v38 = v52 > v27;
      else
        v38 = -1;
    }
    if ( v38 >= 0 )
      goto LABEL_91;
    v39 = a3[2];
    v49 = *(_BYTE *)(v39 + 25);
    if ( v49 )
    {
      v39 = a3[1];
      if ( !*(_BYTE *)(v39 + 25) )
      {
        v40 = a3;
        do
        {
          v41 = (__int64 *)v39;
          if ( v40 != *(__int64 **)(v39 + 16) )
            break;
          v39 = *(_QWORD *)(v39 + 8);
          v40 = v41;
        }
        while ( !*(_BYTE *)(v39 + 25) );
      }
    }
    else
    {
      v42 = *(__int64 **)v39;
      if ( !*(_BYTE *)(*(_QWORD *)v39 + 25LL) )
      {
        do
        {
          v39 = (__int64)v42;
          v42 = (__int64 *)*v42;
        }
        while ( !*((_BYTE *)v42 + 25) );
      }
    }
    if ( (__int64 **)v39 != v9 )
    {
      v43 = (const void *)(v39 + 32);
      if ( *(_QWORD *)(v39 + 56) >= 0x10uLL )
        v43 = *(const void **)(v39 + 32);
      v44 = a4;
      if ( a4[3] >= 0x10 )
        v44 = (const void *)*a4;
      v45 = *(_QWORD *)(v39 + 48);
      v51 = v45;
      v46 = a4[2];
      v47 = v46;
      if ( v45 < v46 )
        v47 = v45;
      v48 = memcmp(v44, v43, v47);
      if ( !v48 )
      {
        if ( v46 >= v51 )
          v48 = v46 > v51;
        else
          v48 = -1;
      }
      if ( v48 >= 0 )
      {
LABEL_91:
        *a2 = *(_QWORD *)sub_180071970((_DWORD)a1, (unsigned int)v54, 0, (_DWORD)a4, (__int64)a5);
        return a2;
      }
    }
    if ( v49 )
      sub_18006F9C8(a1, a2, 0, a3, (int)a4, a5);
    else
      sub_18006F9C8(a1, a2, 1, (_QWORD *)v39, (int)a4, a5);
    return a2;
  }
  else
  {
    try
    {
      sub_18006F9C8(a1, a2, 1, *a1, (int)a4, a5);
      result = a2;
    }
    catch ( ... )
    {
      sub_18007DFD0(v54[0], v53);
      throw;
    }
  }
  return result;
}
