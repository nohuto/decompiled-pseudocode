/*
 * XREFs of ?CreateUsermodeParameters@QueryTrueTypeTableRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0080650
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C0082EC4 (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 */

__int64 __fastcall QueryTrueTypeTableRequest::CreateUsermodeParameters(
        QueryTrueTypeTableRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  unsigned int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // edi
  char *v8; // rax
  _DWORD *v9; // r8
  __int64 v10; // rax
  unsigned int v12; // [rsp+30h] [rbp+8h]

  v5 = *((_DWORD *)this + 15);
  v6 = v5 + 7;
  if ( v5 + 7 < v5 )
    v7 = v12;
  else
    v7 = v6 & 0xFFFFFFF8;
  if ( v6 < v5 )
    return 3221225495LL;
  if ( v7 + 16 < v7 )
    return 3221225495LL;
  if ( v7 + 16 >= 0xFFFFFFC8 )
    return 3221225495LL;
  v8 = (char *)UmfdTls::CommitUMBuffer(a2, v7 + 72, 1);
  v9 = v8;
  if ( !v8 )
    return 3221225495LL;
  *((_QWORD *)this + 12) = v8 + 56;
  v10 = (__int64)&v8[v7 + 56];
  *((_QWORD *)this + 13) = v10;
  *((_QWORD *)this + 14) = v10 + 8;
  if ( !*((_QWORD *)this + 8) )
    *((_QWORD *)this + 12) = 0LL;
  *(_QWORD *)v9 = **((_QWORD **)this + 5);
  v9[2] = *((_DWORD *)this + 12);
  v9[3] = *((_DWORD *)this + 13);
  v9[4] = *((_DWORD *)this + 14);
  *((_QWORD *)v9 + 3) = *((_QWORD *)this + 12);
  v9[5] = *((_DWORD *)this + 15);
  if ( *((_QWORD *)this + 9) )
    *((_QWORD *)v9 + 4) = *((_QWORD *)this + 13);
  if ( *((_QWORD *)this + 10) )
    *((_QWORD *)v9 + 5) = *((_QWORD *)this + 14);
  *a3 = v9;
  return 0LL;
}
