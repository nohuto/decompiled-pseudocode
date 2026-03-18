/*
 * XREFs of ?CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0082CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C0082EC4 (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

__int64 __fastcall QueryFontDataRequest::CreateUsermodeParameters(
        QueryFontDataRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  __int64 v6; // rcx
  __int64 v7; // r14
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // esi
  unsigned int v11; // eax
  char v12; // cl
  unsigned int v13; // ecx
  _QWORD *v14; // rax
  _QWORD *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  const void *v19; // rdx
  unsigned int v21; // [rsp+40h] [rbp+8h]

  v6 = *((_QWORD *)this + 9);
  if ( !v6 )
  {
    v7 = 0LL;
    *((_DWORD *)this + 20) = 0;
    v8 = 0;
    goto LABEL_3;
  }
  if ( *((_DWORD *)this + 12) == 2 )
  {
    *((_QWORD *)a2 + 5) = v6;
    *((_DWORD *)this + 20) = 8;
    goto LABEL_24;
  }
  if ( *((_DWORD *)this + 12) != 3 )
  {
LABEL_24:
    v8 = *((_DWORD *)this + 20);
    v7 = 0LL;
    goto LABEL_3;
  }
  *((_DWORD *)this + 20) = 124;
  v8 = *((_DWORD *)this + 20);
  v7 = 0LL;
LABEL_3:
  if ( *((_QWORD *)this + 8) )
    v9 = 64;
  else
    v9 = 0;
  if ( v9 + 7 < v9 )
    return 3221225495LL;
  v10 = (v9 + 7) & 0xFFFFFFF8;
  if ( v8 + 7 < v8 )
  {
    v12 = 0;
    v11 = v21;
  }
  else
  {
    v11 = (v8 + 7) & 0xFFFFFFF8;
    v12 = 1;
  }
  if ( !v12 )
    return 3221225495LL;
  if ( v10 + v11 < v10 )
    return 3221225495LL;
  v13 = v10 + v11 + 64;
  if ( v13 < 0x40 )
    return 3221225495LL;
  if ( v13 >= 0xFFFFFFD0 )
    return 3221225495LL;
  v14 = UmfdTls::CommitUMBuffer(a2, v10 + v11 + 112, 1);
  v15 = v14;
  if ( !v14 )
    return 3221225495LL;
  *((_QWORD *)this + 11) = v14 + 6;
  *((_QWORD *)this + 12) = v14 + 14;
  *((_QWORD *)this + 13) = (char *)v14 + v10 + 112;
  v16 = *((_QWORD *)this + 11);
  v17 = *((_QWORD *)this + 7);
  *(_DWORD *)v16 = *(_DWORD *)v17;
  *(_DWORD *)(v16 + 4) = *(_DWORD *)(v17 + 4);
  *(_DWORD *)(v16 + 8) = *(_DWORD *)(v17 + 8);
  *(_DWORD *)(v16 + 12) = *(_DWORD *)(v17 + 12);
  *(_QWORD *)(v16 + 16) = *(_QWORD *)(v17 + 16);
  *(_QWORD *)(v16 + 24) = **(_QWORD **)(v17 + 24);
  *(_QWORD *)(v16 + 32) = *(_QWORD *)(v17 + 32);
  *(_DWORD *)(v16 + 40) = *(_DWORD *)(v17 + 40);
  *(_QWORD *)(v16 + 48) = 0LL;
  *(_QWORD *)(v16 + 56) = *(_QWORD *)(v17 + 56);
  *((_QWORD *)a2 + 4) = v17;
  v14[2] = *((_QWORD *)this + 11);
  *v14 = *((_QWORD *)this + 5);
  *((_DWORD *)v14 + 2) = *((_DWORD *)this + 12);
  *((_DWORD *)v14 + 3) = *((_DWORD *)this + 13);
  if ( *((_QWORD *)this + 8) )
  {
    v18 = *((_QWORD *)this + 12);
  }
  else
  {
    *((_QWORD *)this + 12) = 0LL;
    v18 = 0LL;
  }
  v15[3] = v18;
  v19 = (const void *)*((_QWORD *)this + 9);
  if ( v19 )
  {
    if ( *((_DWORD *)this + 12) == 3 )
      memmove(*((void **)this + 13), v19, *((unsigned int *)this + 20));
    v7 = *((_QWORD *)this + 13);
  }
  else
  {
    *((_QWORD *)this + 13) = 0LL;
  }
  v15[4] = v7;
  *((_DWORD *)v15 + 10) = *((_DWORD *)this + 20);
  *a3 = v15;
  return 0LL;
}
