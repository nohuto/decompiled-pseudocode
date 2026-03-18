/*
 * XREFs of ?CreateUsermodeParameters@EscapeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02D4700
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C007C078 (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 */

__int64 __fastcall EscapeRequest::CreateUsermodeParameters(EscapeRequest *this, UmfdUMBuffer **a2, void **a3)
{
  unsigned int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // esi
  unsigned int v8; // eax
  char v9; // cl
  unsigned int v10; // ecx
  char *v11; // rax
  _DWORD *v12; // rdi
  const void *v13; // rdx
  unsigned int v15; // [rsp+30h] [rbp+8h]

  v5 = *((_DWORD *)this + 16);
  v6 = *((_DWORD *)this + 13);
  if ( v6 + 7 < v6 )
    return 3221225495LL;
  v7 = (v6 + 7) & 0xFFFFFFF8;
  if ( v5 + 7 < v5 )
  {
    v9 = 0;
    v8 = v15;
  }
  else
  {
    v8 = (v5 + 7) & 0xFFFFFFF8;
    v9 = 1;
  }
  if ( !v9 )
    return 3221225495LL;
  v10 = v7 + v8;
  if ( v7 + v8 < v7 )
    return 3221225495LL;
  if ( v10 >= 0xFFFFFFD0 )
    return 3221225495LL;
  v11 = (char *)UmfdTls::CommitUMBuffer(a2, v10 + 48, 1);
  v12 = v11;
  if ( !v11 )
    return 3221225495LL;
  *((_QWORD *)this + 11) = v11 + 48;
  *((_QWORD *)this + 12) = &v11[v7 + 48];
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
