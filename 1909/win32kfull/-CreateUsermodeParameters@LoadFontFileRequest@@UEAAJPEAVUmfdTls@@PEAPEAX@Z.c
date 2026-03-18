/*
 * XREFs of ?CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C01201A0
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C0120C88 (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     EngFntCacheLookUp @ 0x1C0121020 (EngFntCacheLookUp.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall LoadFontFileRequest::CreateUsermodeParameters(
        LoadFontFileRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  _DWORD *v6; // r15
  ULONG v7; // esi
  unsigned int v8; // ecx
  ULONG v9; // edi
  unsigned int v10; // eax
  char *v11; // rax
  char *v12; // rbx
  unsigned int i; // r8d
  ULONG v14; // eax
  ULONG v15; // eax
  __int64 v16; // rax
  ULONG v18[10]; // [rsp+30h] [rbp-28h] BYREF

  if ( (unsigned int)(*((_DWORD *)this + 10) - 1) > 2 )
    return 3221225495LL;
  v6 = EngFntCacheLookUp(*((_DWORD *)this + 34), v18);
  v7 = v6 != 0LL ? v18[0] : 0;
  if ( v7 <= 0x10 )
  {
    v9 = 0;
    v8 = 0;
  }
  else
  {
    v8 = v7 - 16;
    v9 = 0;
  }
  if ( v8 + 7 < v8 )
    return 3221225495LL;
  v10 = (v8 + 7) & 0xFFFFFFF8;
  if ( v10 >= 0xFFFFFF30 )
    return 3221225495LL;
  v11 = (char *)UmfdTls::CommitUMBuffer(a2, v10 + 208, 0);
  v12 = v11;
  if ( !v11 )
    return 3221225495LL;
  *((_QWORD *)v11 + 25) = v11 + 208;
  memset(v11, 0, 0xD0uLL);
  *((_QWORD *)v12 + 1) = v12 + 16;
  *((_QWORD *)v12 + 5) = v12 + 48;
  *((_QWORD *)v12 + 9) = v12 + 80;
  *(_DWORD *)v12 = *((_DWORD *)this + 10);
  for ( i = 0; i < *((_DWORD *)this + 10); ++i )
  {
    *(_QWORD *)(*((_QWORD *)v12 + 1) + 8LL * i) = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL * i) + 64LL);
    *(_QWORD *)(*((_QWORD *)v12 + 5) + 8LL * i) = *(_QWORD *)(*((_QWORD *)this + 10) + 8LL * i);
    *(_DWORD *)(*((_QWORD *)v12 + 9) + 4LL * i) = *(_DWORD *)(*((_QWORD *)this + 14) + 4LL * i);
  }
  if ( *((_QWORD *)this + 19) )
  {
    *((_QWORD *)v12 + 14) = v12 + 120;
    v16 = *((_QWORD *)this + 19);
    *(_OWORD *)(v12 + 120) = *(_OWORD *)v16;
    *(_OWORD *)(v12 + 136) = *(_OWORD *)(v16 + 16);
    *(_OWORD *)(v12 + 152) = *(_OWORD *)(v16 + 32);
    *(_OWORD *)(v12 + 168) = *(_OWORD *)(v16 + 48);
    *((_QWORD *)v12 + 23) = *(_QWORD *)(v16 + 64);
  }
  *((_DWORD *)v12 + 23) = *((_DWORD *)this + 33);
  *((_DWORD *)v12 + 24) = *((_DWORD *)this + 34);
  if ( v7 <= 0x10 )
    v14 = 0;
  else
    v14 = v7 - 16;
  if ( v14 )
  {
    *((_DWORD *)v12 + 25) = *v6;
    if ( v7 <= 0x10 )
      v15 = 0;
    else
      v15 = v7 - 16;
    *((_DWORD *)v12 + 48) = v15;
    if ( v7 > 0x10 )
      v9 = v7 - 16;
    memmove(v12 + 200, v6 + 4, v9);
  }
  else
  {
    *((_DWORD *)v12 + 25) = -1;
  }
  *a3 = v12;
  return 0LL;
}
