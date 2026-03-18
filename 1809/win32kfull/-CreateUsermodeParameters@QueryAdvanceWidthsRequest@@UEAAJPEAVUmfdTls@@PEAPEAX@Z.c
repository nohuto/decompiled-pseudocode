/*
 * XREFs of ?CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0092410
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C00927BC (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     ?PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z @ 0x1C00928B4 (-PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 */

__int64 __fastcall QueryAdvanceWidthsRequest::CreateUsermodeParameters(
        QueryAdvanceWidthsRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  unsigned int v6; // r10d
  unsigned int v7; // r9d
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  char *v11; // rax
  _QWORD *v12; // rdi
  unsigned int v14; // [rsp+40h] [rbp+8h]

  v6 = 2 * *((_DWORD *)this + 20);
  v7 = 4 * *((_DWORD *)this + 20);
  if ( v7 + 7 < v7 )
    return 3221225495LL;
  v8 = (v7 + 7) & 0xFFFFFFF8;
  v9 = v6 + 7;
  if ( v6 + 7 < v6 )
    return 3221225495LL;
  v14 = v9 & 0xFFFFFFF8;
  v10 = v8 + (v9 & 0xFFFFFFF8);
  if ( v8 + v14 < v8 )
    return 3221225495LL;
  if ( v10 + 64 < 0x40 )
    return 3221225495LL;
  if ( v10 + 64 >= 0xFFFFFFD0 )
    return 3221225495LL;
  v11 = (char *)UmfdTls::CommitUMBuffer(a2, v10 + 112, 1);
  v12 = v11;
  if ( !v11 )
    return 3221225495LL;
  *((_QWORD *)this + 11) = v11 + 48;
  *((_QWORD *)this + 12) = v11 + 112;
  *((_QWORD *)this + 13) = &v11[v8 + 112];
  FontDriverDdiRequest::PrepareUsermodeFontObj(a2, *((struct _FONTOBJ **)this + 6), *((struct _FONTOBJ **)this + 11));
  v12[1] = *((_QWORD *)this + 11);
  *v12 = *((_QWORD *)this + 5);
  *((_DWORD *)v12 + 4) = *((_DWORD *)this + 14);
  *((_DWORD *)v12 + 10) = *((_DWORD *)this + 20);
  v12[3] = *((_QWORD *)this + 12);
  memmove(*((void **)this + 12), *((const void **)this + 8), 4LL * *((unsigned int *)this + 20));
  v12[4] = *((_QWORD *)this + 13);
  *a3 = v12;
  return 0LL;
}
