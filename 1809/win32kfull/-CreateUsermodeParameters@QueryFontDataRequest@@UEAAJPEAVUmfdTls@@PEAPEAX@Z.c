/*
 * XREFs of ?CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0092550
 * Callers:
 *     <none>
 * Callees:
 *     ??$CommitUMBuffer@U_QUERYFONTDATAPARAMETERS@@@UmfdTls@@QEAAXPEAPEAU_QUERYFONTDATAPARAMETERS@@IIII_N@Z @ 0x1C0092754 (--$CommitUMBuffer@U_QUERYFONTDATAPARAMETERS@@@UmfdTls@@QEAAXPEAPEAU_QUERYFONTDATAPARAMETERS@@III.c)
 *     ?TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0I0@Z @ 0x1C0146CD8 (-TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0I0@Z.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 */

__int64 __fastcall QueryFontDataRequest::CreateUsermodeParameters(
        QueryFontDataRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  __int64 v6; // r9
  __int64 v7; // rdi
  int v8; // ecx
  int v9; // ecx
  unsigned int v10; // edx
  __int64 v12; // r15
  _QWORD *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  const void *v20; // rdx
  unsigned int v21; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v22[12]; // [rsp+48h] [rbp-30h] BYREF
  unsigned int v23; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v24; // [rsp+98h] [rbp+20h] BYREF

  v6 = *((_QWORD *)this + 9);
  v7 = 0LL;
  if ( v6 )
  {
    v8 = *((_DWORD *)this + 12) - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 == 1 )
          *((_DWORD *)this + 20) = 124;
      }
      else
      {
        *((_QWORD *)a2 + 6) = v6;
        *((_DWORD *)this + 20) = 8;
      }
    }
    else if ( *((_DWORD *)this + 20) )
    {
      return 3221225659LL;
    }
    v10 = *((_DWORD *)this + 20);
  }
  else
  {
    *((_DWORD *)this + 20) = 0;
    v10 = 0;
  }
  if ( !UmfdTls::TryComputeAlignedFieldSizes(
          0x30u,
          &v24,
          0x50u,
          &v23,
          *((_QWORD *)this + 8) != 0LL ? 0x40 : 0,
          v22,
          v10,
          &v21) )
    return 3221225495LL;
  v12 = v22[0];
  UmfdTls::CommitUMBuffer<_QUERYFONTDATAPARAMETERS>(a2, v22[0], v21);
  v13 = *(_QWORD **)v22;
  if ( !*(_QWORD *)v22 )
    return 3221225495LL;
  v14 = v23;
  v15 = *(_QWORD *)v22 + v24;
  *((_QWORD *)this + 11) = v15;
  v16 = v15 + v14;
  *((_QWORD *)this + 12) = v16;
  *((_QWORD *)this + 13) = v16 + v12;
  v17 = *((_QWORD *)this + 11);
  v18 = *((_QWORD *)this + 7);
  *(_DWORD *)v17 = *(_DWORD *)v18;
  *(_DWORD *)(v17 + 4) = *(_DWORD *)(v18 + 4);
  *(_DWORD *)(v17 + 8) = *(_DWORD *)(v18 + 8);
  *(_DWORD *)(v17 + 12) = *(_DWORD *)(v18 + 12);
  *(_QWORD *)(v17 + 16) = *(_QWORD *)(v18 + 16);
  *(_QWORD *)(v17 + 24) = **(_QWORD **)(v18 + 24);
  *(_QWORD *)(v17 + 32) = *(_QWORD *)(v18 + 32);
  *(_DWORD *)(v17 + 40) = *(_DWORD *)(v18 + 40);
  *(_QWORD *)(v17 + 48) = 0LL;
  *(_QWORD *)(v17 + 56) = *(_QWORD *)(v18 + 56);
  *((_QWORD *)a2 + 5) = v18;
  *(_DWORD *)(*((_QWORD *)this + 11) + 64LL) = 0;
  *(_QWORD *)(*((_QWORD *)this + 11) + 72LL) = 0LL;
  v13[2] = *((_QWORD *)this + 11);
  *v13 = *((_QWORD *)this + 5);
  *((_DWORD *)v13 + 2) = *((_DWORD *)this + 12);
  *((_DWORD *)v13 + 3) = *((_DWORD *)this + 13);
  if ( *((_QWORD *)this + 8) )
  {
    v19 = *((_QWORD *)this + 12);
  }
  else
  {
    *((_QWORD *)this + 12) = 0LL;
    v19 = 0LL;
  }
  v13[3] = v19;
  v20 = (const void *)*((_QWORD *)this + 9);
  if ( v20 )
  {
    if ( *((_DWORD *)this + 12) == 3 )
      memmove(*((void **)this + 13), v20, *((unsigned int *)this + 20));
    v7 = *((_QWORD *)this + 13);
  }
  else
  {
    *((_QWORD *)this + 13) = 0LL;
  }
  v13[4] = v7;
  *((_DWORD *)v13 + 10) = *((_DWORD *)this + 20);
  *a3 = v13;
  return 0LL;
}
