/*
 * XREFs of ?CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0091CA0
 * Callers:
 *     <none>
 * Callees:
 *     EngFntCacheLookUp @ 0x1C0091A20 (EngFntCacheLookUp.c)
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C00927BC (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     memset @ 0x1C0163640 (memset.c)
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
  unsigned int v11; // edx
  unsigned int v12; // eax
  _DWORD *v13; // rbx
  unsigned int i; // r8d
  ULONG v15; // eax
  ULONG v16; // eax
  __int64 v17; // rax
  ULONG v19[10]; // [rsp+30h] [rbp-28h] BYREF

  if ( (unsigned int)(*((_DWORD *)this + 10) - 1) > 2 )
    return 3221225495LL;
  v6 = EngFntCacheLookUp(*((_DWORD *)this + 34), v19);
  v7 = v6 != 0LL ? v19[0] : 0;
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
  v10 = v8 + 7;
  if ( v8 + 7 < v8 )
    return 3221225495LL;
  v11 = v10 & 0xFFFFFFF8;
  v12 = (v10 & 0xFFFFFFF8) + 208;
  v13 = v11 >= 0xFFFFFF30 ? 0LL : UmfdTls::CommitUMBuffer(a2, v12, 0);
  if ( !v13 )
    return 3221225495LL;
  *((_QWORD *)v13 + 25) = v13 + 52;
  memset(v13, 0, 0xD0uLL);
  *((_QWORD *)v13 + 1) = v13 + 4;
  *((_QWORD *)v13 + 5) = v13 + 12;
  *((_QWORD *)v13 + 9) = v13 + 20;
  *v13 = *((_DWORD *)this + 10);
  for ( i = 0; i < *((_DWORD *)this + 10); ++i )
  {
    *(_QWORD *)(*((_QWORD *)v13 + 1) + 8LL * i) = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL * i) + 64LL);
    *(_QWORD *)(*((_QWORD *)v13 + 5) + 8LL * i) = *(_QWORD *)(*((_QWORD *)this + 10) + 8LL * i);
    *(_DWORD *)(*((_QWORD *)v13 + 9) + 4LL * i) = *(_DWORD *)(*((_QWORD *)this + 14) + 4LL * i);
  }
  if ( *((_QWORD *)this + 19) )
  {
    *((_QWORD *)v13 + 14) = v13 + 30;
    v17 = *((_QWORD *)this + 19);
    *(_OWORD *)(v13 + 30) = *(_OWORD *)v17;
    *(_OWORD *)(v13 + 34) = *(_OWORD *)(v17 + 16);
    *(_OWORD *)(v13 + 38) = *(_OWORD *)(v17 + 32);
    *(_OWORD *)(v13 + 42) = *(_OWORD *)(v17 + 48);
    *((_QWORD *)v13 + 23) = *(_QWORD *)(v17 + 64);
  }
  v13[23] = *((_DWORD *)this + 33);
  v13[24] = *((_DWORD *)this + 34);
  if ( v7 <= 0x10 )
    v15 = 0;
  else
    v15 = v7 - 16;
  if ( v15 )
  {
    v13[25] = *v6;
    if ( v7 <= 0x10 )
      v16 = 0;
    else
      v16 = v7 - 16;
    v13[48] = v16;
    if ( v7 > 0x10 )
      v9 = v7 - 16;
    memmove(v13 + 50, v6 + 4, v9);
  }
  else
  {
    v13[25] = -1;
  }
  *a3 = v13;
  return 0LL;
}
