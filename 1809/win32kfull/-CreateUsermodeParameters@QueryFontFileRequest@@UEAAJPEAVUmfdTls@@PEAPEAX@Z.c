/*
 * XREFs of ?CreateUsermodeParameters@QueryFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0091EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C00927BC (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 */

__int64 __fastcall QueryFontFileRequest::CreateUsermodeParameters(
        QueryFontFileRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  unsigned int v5; // r9d
  unsigned int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // eax
  _DWORD *v9; // rax

  v5 = *((_DWORD *)this + 13);
  v6 = v5 + 7;
  if ( v5 + 7 < v5 )
    return 3221225495LL;
  v7 = v6 & 0xFFFFFFF8;
  v8 = (v6 & 0xFFFFFFF8) + 32;
  if ( v7 >= 0xFFFFFFE0 )
    return 3221225495LL;
  v9 = UmfdTls::CommitUMBuffer(a2, v8, 1);
  if ( !v9 )
    return 3221225495LL;
  if ( *((_QWORD *)this + 7) )
    *((_QWORD *)this + 9) = v9 + 8;
  *(_QWORD *)v9 = **((_QWORD **)this + 5);
  v9[2] = *((_DWORD *)this + 12);
  v9[3] = *((_DWORD *)this + 13);
  *((_QWORD *)v9 + 2) = *((_QWORD *)this + 9);
  *a3 = v9;
  return 0LL;
}
