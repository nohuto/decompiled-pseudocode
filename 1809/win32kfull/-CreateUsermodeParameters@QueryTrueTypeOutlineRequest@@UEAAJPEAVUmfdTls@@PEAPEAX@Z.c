/*
 * XREFs of ?CreateUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0146B80
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C00927BC (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     ?PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z @ 0x1C00928B4 (-PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z.c)
 *     ?TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0I0@Z @ 0x1C0146CD8 (-TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0I0@Z.c)
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
  _QWORD *v10; // rax
  char *v11; // rdx
  __int64 v12; // r10
  unsigned int v14; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v15[13]; // [rsp+44h] [rbp-34h] BYREF
  unsigned int v16; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v17; // [rsp+98h] [rbp+20h] BYREF

  if ( !UmfdTls::TryComputeAlignedFieldSizes(
          0x38u,
          v15,
          0x40u,
          &v14,
          *((_QWORD *)this + 8) != 0LL ? 0x40 : 0,
          &v16,
          *((_DWORD *)this + 18),
          &v17) )
    return 3221225495LL;
  v6 = v16;
  v7 = v16 + v17;
  if ( v16 + v17 < v16 )
    return 3221225495LL;
  v8 = v14;
  if ( v14 + v7 < v14 )
    return 3221225495LL;
  v9 = v15[0];
  if ( v14 + v7 + v15[0] < v15[0] )
    return 3221225495LL;
  v10 = UmfdTls::CommitUMBuffer(a2, v14 + v7 + v15[0], 1);
  if ( !v10 )
    return 3221225495LL;
  *((_QWORD *)this + 12) = (char *)v10 + v9;
  v11 = (char *)v10 + v9 + v8;
  *((_QWORD *)this + 13) = v11;
  *((_QWORD *)this + 14) = (unsigned __int64)&v11[v6] & -(__int64)(*((_QWORD *)this + 10) != 0LL);
  *v10 = *((_QWORD *)this + 5);
  FontDriverDdiRequest::PrepareUsermodeFontObj(
    (struct UmfdTls *)a2,
    *((struct _FONTOBJ **)this + 6),
    *((struct _FONTOBJ **)this + 12));
  *(_QWORD *)(v12 + 8) = *((_QWORD *)this + 12);
  *(_DWORD *)(v12 + 16) = *((_DWORD *)this + 14);
  *(_DWORD *)(v12 + 20) = *((_DWORD *)this + 15);
  if ( *((_QWORD *)this + 8) )
    *(_QWORD *)(v12 + 24) = *((_QWORD *)this + 13);
  *(_QWORD *)(v12 + 40) = *((_QWORD *)this + 14);
  *(_DWORD *)(v12 + 32) = *((_DWORD *)this + 18);
  *a3 = (void *)v12;
  return 0LL;
}
