/*
 * XREFs of ?CreateUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0149320
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C0120C88 (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     ?PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z @ 0x1C0120D80 (-PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z.c)
 *     ?TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0I0@Z @ 0x1C0149468 (-TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0I0@Z.c)
 */

__int64 __fastcall QueryTrueTypeOutlineRequest::CreateUsermodeParameters(
        QueryTrueTypeOutlineRequest *this,
        UmfdUMBuffer **a2,
        void **a3)
{
  __int64 v6; // rdi
  int v7; // ecx
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rdx
  _QWORD *v11; // rax
  char *v12; // rdx
  __int64 v13; // r10
  unsigned int v15; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v16[13]; // [rsp+44h] [rbp-34h] BYREF
  unsigned int v17; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v18; // [rsp+98h] [rbp+20h] BYREF

  if ( !UmfdTls::TryComputeAlignedFieldSizes(
          0x38u,
          v16,
          0x40u,
          &v15,
          *((_QWORD *)this + 8) != 0LL ? 0x40 : 0,
          &v17,
          *((_DWORD *)this + 18),
          &v18) )
    return 3221225495LL;
  v6 = v17;
  v7 = v17 + v18;
  if ( v17 + v18 < v17 )
    return 3221225495LL;
  v8 = v15;
  if ( v7 + v15 < v15 )
    return 3221225495LL;
  v9 = v16[0];
  v10 = v7 + v15 + v16[0];
  if ( (unsigned int)v10 < v16[0] )
    return 3221225495LL;
  v11 = UmfdTls::CommitUMBuffer(a2, v10, 1);
  if ( !v11 )
    return 3221225495LL;
  *((_QWORD *)this + 12) = (char *)v11 + v9;
  v12 = (char *)v11 + v9 + v8;
  *((_QWORD *)this + 13) = v12;
  *((_QWORD *)this + 14) = (unsigned __int64)&v12[v6] & -(__int64)(*((_QWORD *)this + 10) != 0LL);
  *v11 = *((_QWORD *)this + 5);
  FontDriverDdiRequest::PrepareUsermodeFontObj(
    (struct UmfdTls *)a2,
    *((struct _FONTOBJ **)this + 6),
    *((struct _FONTOBJ **)this + 12));
  *(_QWORD *)(v13 + 8) = *((_QWORD *)this + 12);
  *(_DWORD *)(v13 + 16) = *((_DWORD *)this + 14);
  *(_DWORD *)(v13 + 20) = *((_DWORD *)this + 15);
  if ( *((_QWORD *)this + 8) )
    *(_QWORD *)(v13 + 24) = *((_QWORD *)this + 13);
  *(_QWORD *)(v13 + 40) = *((_QWORD *)this + 14);
  *(_DWORD *)(v13 + 32) = *((_DWORD *)this + 18);
  *a3 = (void *)v13;
  return 0LL;
}
