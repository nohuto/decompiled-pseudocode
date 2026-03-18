/*
 * XREFs of ?CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0081940
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C0082EC4 (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     ?PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z @ 0x1C0082FB8 (-PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

__int64 __fastcall QueryAdvanceWidthsRequest::CreateUsermodeParameters(
        QueryAdvanceWidthsRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  int v6; // eax
  unsigned int v7; // r9d
  unsigned int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  char *v13; // rax
  _QWORD *v14; // rdi
  unsigned int v16; // [rsp+40h] [rbp+8h]
  unsigned int v17; // [rsp+40h] [rbp+8h]

  v6 = *((_DWORD *)this + 20);
  v7 = 2 * v6;
  v8 = 4 * v6;
  v9 = v8 + 7;
  if ( v8 + 7 < v8 )
    v10 = v16;
  else
    v10 = v9 & 0xFFFFFFF8;
  if ( v9 < v8 )
    return 3221225495LL;
  v11 = v7 + 7;
  if ( v7 + 7 < v7 )
    return 3221225495LL;
  v17 = v11 & 0xFFFFFFF8;
  v12 = v10 + (v11 & 0xFFFFFFF8);
  if ( v10 + v17 < v10 )
    return 3221225495LL;
  if ( v12 + 64 < 0x40 )
    return 3221225495LL;
  if ( v12 + 64 >= 0xFFFFFFD0 )
    return 3221225495LL;
  v13 = (char *)UmfdTls::CommitUMBuffer(a2, v12 + 112, 1);
  v14 = v13;
  if ( !v13 )
    return 3221225495LL;
  *((_QWORD *)this + 11) = v13 + 48;
  *((_QWORD *)this + 12) = v13 + 112;
  *((_QWORD *)this + 13) = &v13[v10 + 112];
  FontDriverDdiRequest::PrepareUsermodeFontObj(a2, *((struct _FONTOBJ **)this + 6), *((struct _FONTOBJ **)this + 11));
  v14[1] = *((_QWORD *)this + 11);
  *v14 = *((_QWORD *)this + 5);
  *((_DWORD *)v14 + 4) = *((_DWORD *)this + 14);
  *((_DWORD *)v14 + 10) = *((_DWORD *)this + 20);
  v14[3] = *((_QWORD *)this + 12);
  memmove(*((void **)this + 12), *((const void **)this + 8), 4LL * *((unsigned int *)this + 20));
  v14[4] = *((_QWORD *)this + 13);
  *a3 = v14;
  return 0LL;
}
