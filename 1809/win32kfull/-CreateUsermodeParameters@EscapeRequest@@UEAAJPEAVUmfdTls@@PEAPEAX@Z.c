/*
 * XREFs of ?CreateUsermodeParameters@EscapeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02C1600
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C00927BC (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 */

__int64 __fastcall EscapeRequest::CreateUsermodeParameters(EscapeRequest *this, UmfdUMBuffer **a2, void **a3)
{
  unsigned int v5; // ecx
  unsigned int v6; // r9d
  unsigned int v7; // esi
  unsigned int v8; // ecx
  char *v9; // rax
  _DWORD *v10; // rdi
  const void *v11; // rdx

  v5 = *((_DWORD *)this + 16);
  v6 = *((_DWORD *)this + 13);
  if ( v6 + 7 < v6 )
    return 3221225495LL;
  v7 = (v6 + 7) & 0xFFFFFFF8;
  if ( v5 + 7 < v5 )
    return 3221225495LL;
  v8 = v7 + ((v5 + 7) & 0xFFFFFFF8);
  if ( v8 < v7 )
    return 3221225495LL;
  if ( v8 + 48 < 0x30 )
    return 3221225495LL;
  v9 = (char *)UmfdTls::CommitUMBuffer(a2, v8 + 48, 1);
  v10 = v9;
  if ( !v9 )
    return 3221225495LL;
  *((_QWORD *)this + 11) = v9 + 48;
  *((_QWORD *)this + 12) = &v9[v7 + 48];
  v11 = (const void *)*((_QWORD *)this + 7);
  if ( v11 )
    memmove(*((void **)this + 11), v11, *((unsigned int *)this + 13));
  else
    *((_QWORD *)this + 11) = 0LL;
  if ( !*((_QWORD *)this + 9) )
    *((_QWORD *)this + 12) = 0LL;
  *(_QWORD *)v10 = 0LL;
  v10[2] = *((_DWORD *)this + 12);
  v10[3] = *((_DWORD *)this + 13);
  *((_QWORD *)v10 + 2) = *((_QWORD *)this + 11);
  v10[6] = *((_DWORD *)this + 16);
  *((_QWORD *)v10 + 4) = *((_QWORD *)this + 12);
  *a3 = v10;
  return 0LL;
}
