/*
 * XREFs of ?CreateUsermodeParameters@EscapeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02AF5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C0082EC4 (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

__int64 __fastcall EscapeRequest::CreateUsermodeParameters(EscapeRequest *this, UmfdUMBuffer **a2, void **a3)
{
  unsigned int v5; // r9d
  unsigned int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // esi
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  char *v11; // rax
  _DWORD *v12; // rdi
  const void *v13; // rdx
  unsigned int v15; // [rsp+30h] [rbp+8h]
  unsigned int v16; // [rsp+30h] [rbp+8h]

  v5 = *((_DWORD *)this + 16);
  v6 = *((_DWORD *)this + 13);
  v7 = v6 + 7;
  if ( v6 + 7 < v6 )
    v8 = v15;
  else
    v8 = v7 & 0xFFFFFFF8;
  if ( v7 < v6 )
    return 3221225495LL;
  v9 = v5 + 7;
  if ( v5 + 7 < v5 )
    return 3221225495LL;
  v16 = v9 & 0xFFFFFFF8;
  v10 = v8 + (v9 & 0xFFFFFFF8);
  if ( v8 + v16 < v8 )
    return 3221225495LL;
  if ( v10 + 48 < 0x30 )
    return 3221225495LL;
  v11 = (char *)UmfdTls::CommitUMBuffer(a2, v10 + 48, 1);
  v12 = v11;
  if ( !v11 )
    return 3221225495LL;
  *((_QWORD *)this + 11) = v11 + 48;
  *((_QWORD *)this + 12) = &v11[v8 + 48];
  v13 = (const void *)*((_QWORD *)this + 7);
  if ( v13 )
    memmove(*((void **)this + 11), v13, *((unsigned int *)this + 13));
  else
    *((_QWORD *)this + 11) = 0LL;
  if ( !*((_QWORD *)this + 9) )
    *((_QWORD *)this + 12) = 0LL;
  *(_QWORD *)v12 = 0LL;
  v12[2] = *((_DWORD *)this + 12);
  v12[3] = *((_DWORD *)this + 13);
  *((_QWORD *)v12 + 2) = *((_QWORD *)this + 11);
  v12[6] = *((_DWORD *)this + 16);
  *((_QWORD *)v12 + 4) = *((_QWORD *)this + 12);
  *a3 = v12;
  return 0LL;
}
