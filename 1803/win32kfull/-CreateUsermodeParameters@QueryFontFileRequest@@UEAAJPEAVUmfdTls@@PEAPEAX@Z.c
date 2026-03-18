/*
 * XREFs of ?CreateUsermodeParameters@QueryFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C00FA020
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C0082EC4 (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 */

__int64 __fastcall QueryFontFileRequest::CreateUsermodeParameters(
        QueryFontFileRequest *this,
        UmfdUMBuffer **a2,
        void **a3)
{
  unsigned int v5; // ecx
  unsigned int v6; // eax
  _DWORD *v7; // rax

  v5 = *((_DWORD *)this + 13);
  if ( v5 + 7 < v5 )
    return 3221225495LL;
  v6 = ((v5 + 7) & 0xFFFFFFF8) + 32;
  if ( v6 < 0x20 )
    return 3221225495LL;
  v7 = UmfdTls::CommitUMBuffer(a2, v6, 1);
  if ( !v7 )
    return 3221225495LL;
  if ( *((_QWORD *)this + 7) )
    *((_QWORD *)this + 9) = v7 + 8;
  *(_QWORD *)v7 = **((_QWORD **)this + 5);
  v7[2] = *((_DWORD *)this + 12);
  v7[3] = *((_DWORD *)this + 13);
  *((_QWORD *)v7 + 2) = *((_QWORD *)this + 9);
  *a3 = v7;
  return 0LL;
}
