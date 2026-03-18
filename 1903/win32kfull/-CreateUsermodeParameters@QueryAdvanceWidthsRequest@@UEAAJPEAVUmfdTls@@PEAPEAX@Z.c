/*
 * XREFs of ?CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C007BBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C007C078 (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 */

__int64 __fastcall QueryAdvanceWidthsRequest::CreateUsermodeParameters(
        QueryAdvanceWidthsRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // eax
  char v11; // cl
  unsigned int v12; // ecx
  _QWORD *v13; // rax
  _QWORD *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned int v18; // [rsp+40h] [rbp+8h]

  v6 = *((_DWORD *)this + 20);
  v7 = 2 * v6;
  v8 = 4 * v6;
  if ( v8 + 7 < v8 )
    return 3221225495LL;
  v9 = (v8 + 7) & 0xFFFFFFF8;
  if ( v7 + 7 < v7 )
  {
    v11 = 0;
    v10 = v18;
  }
  else
  {
    v10 = (v7 + 7) & 0xFFFFFFF8;
    v11 = 1;
  }
  if ( !v11 )
    return 3221225495LL;
  if ( v9 + v10 < v9 )
    return 3221225495LL;
  v12 = v9 + v10 + 64;
  if ( v12 < 0x40 )
    return 3221225495LL;
  if ( v12 >= 0xFFFFFFD0 )
    return 3221225495LL;
  v13 = UmfdTls::CommitUMBuffer(a2, v9 + v10 + 112, 1);
  v14 = v13;
  if ( !v13 )
    return 3221225495LL;
  *((_QWORD *)this + 11) = v13 + 6;
  *((_QWORD *)this + 12) = v13 + 14;
  *((_QWORD *)this + 13) = (char *)v13 + v9 + 112;
  v15 = *((_QWORD *)this + 11);
  v16 = *((_QWORD *)this + 6);
  *(_DWORD *)v15 = *(_DWORD *)v16;
  *(_DWORD *)(v15 + 4) = *(_DWORD *)(v16 + 4);
  *(_DWORD *)(v15 + 8) = *(_DWORD *)(v16 + 8);
  *(_DWORD *)(v15 + 12) = *(_DWORD *)(v16 + 12);
  *(_QWORD *)(v15 + 16) = *(_QWORD *)(v16 + 16);
  *(_QWORD *)(v15 + 24) = **(_QWORD **)(v16 + 24);
  *(_QWORD *)(v15 + 32) = *(_QWORD *)(v16 + 32);
  *(_DWORD *)(v15 + 40) = *(_DWORD *)(v16 + 40);
  *(_QWORD *)(v15 + 48) = 0LL;
  *(_QWORD *)(v15 + 56) = *(_QWORD *)(v16 + 56);
  *((_QWORD *)a2 + 5) = v16;
  v13[1] = *((_QWORD *)this + 11);
  *v13 = *((_QWORD *)this + 5);
  *((_DWORD *)v13 + 4) = *((_DWORD *)this + 14);
  *((_DWORD *)v13 + 10) = *((_DWORD *)this + 20);
  v13[3] = *((_QWORD *)this + 12);
  memmove(*((void **)this + 12), *((const void **)this + 8), 4LL * *((unsigned int *)this + 20));
  v14[4] = *((_QWORD *)this + 13);
  *a3 = v14;
  return 0LL;
}
