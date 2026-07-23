/*
 * XREFs of MiLogStrongCodeDriverLoadFailure @ 0x14084FDEC
 * Callers:
 *     MmLoadSystemImageEx @ 0x1406821B8 (MmLoadSystemImageEx.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x14085CFE4 (MiProcessKernelCfgImageLoadConfig.c)
 * Callees:
 *     _TlgCreateSz @ 0x140003938 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWriteEx @ 0x140100938 (_TlgWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

void __fastcall MiLogStrongCodeDriverLoadFailure(const CHAR *Src, __int64 a2)
{
  __int64 v4; // rax
  ULONG64 v5; // r8
  TraceLoggingHProvider v6; // r9
  __int64 v7; // rdi
  _QWORD *PoolWithTag; // rax
  __int64 v9; // rbx
  void *v10; // rcx
  __int64 *v11; // rax
  const GUID *v12; // [rsp+20h] [rbp-69h]
  const GUID *v13; // [rsp+28h] [rbp-61h]
  int v14; // [rsp+40h] [rbp-49h] BYREF
  int v15; // [rsp+44h] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-19h] BYREF
  _DWORD *v18; // [rsp+80h] [rbp-9h]
  int v19; // [rsp+88h] [rbp-1h]
  int v20; // [rsp+8Ch] [rbp+3h]
  __int64 v21; // [rsp+90h] [rbp+7h]
  _DWORD v22[2]; // [rsp+98h] [rbp+Fh] BYREF
  int *v23; // [rsp+A0h] [rbp+17h]
  int v24; // [rsp+A8h] [rbp+1Fh]
  int v25; // [rsp+ACh] [rbp+23h]
  int *v26; // [rsp+B0h] [rbp+27h]
  int v27; // [rsp+B8h] [rbp+2Fh]
  int v28; // [rsp+BCh] [rbp+33h]

  if ( hProvider )
  {
    if ( hProvider->LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(hProvider, 0x400000000000uLL) )
      {
        v14 = *(_DWORD *)(a2 + 120);
        v15 = *(_DWORD *)(a2 + 156);
        TlgCreateSz(&pDesc, Src);
        v4 = *(_QWORD *)(a2 + 96);
        v20 = 0;
        v22[1] = 0;
        v25 = 0;
        v28 = 0;
        v21 = v4;
        v22[0] = *(unsigned __int16 *)(a2 + 88);
        v23 = &v14;
        v18 = v22;
        v26 = &v15;
        v19 = 2;
        v24 = 4;
        v27 = 4;
        TlgWriteEx(v6, &unk_14036ED91, v5, (ULONG)v6, v12, v13, 7u, &pData);
      }
    }
  }
  else
  {
    v7 = -1LL;
    do
      ++v7;
    while ( Src[v7] );
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v7 + *(unsigned __int16 *)(a2 + 88) + 49LL, 0x46446D4Du);
    v9 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag[2] = PoolWithTag + 6;
      memmove(PoolWithTag + 6, Src, v7 + 1);
      v10 = (void *)(v9 + v7 + 49);
      *(_QWORD *)(v9 + 32) = v10;
      memmove(v10, *(const void **)(a2 + 96), *(unsigned __int16 *)(a2 + 88));
      *(_WORD *)(v9 + 24) = *(_WORD *)(a2 + 88);
      *(_WORD *)(v9 + 26) = *(_WORD *)(a2 + 88);
      *(_DWORD *)(v9 + 40) = *(_DWORD *)(a2 + 120);
      *(_DWORD *)(v9 + 44) = *(_DWORD *)(a2 + 156);
      v11 = (__int64 *)qword_140439FB0;
      if ( *(PVOID **)qword_140439FB0 != &qword_140439FA8 )
        __fastfail(3u);
      *(_QWORD *)v9 = &qword_140439FA8;
      *(_QWORD *)(v9 + 8) = v11;
      *v11 = v9;
      qword_140439FB0 = v9;
    }
  }
}
