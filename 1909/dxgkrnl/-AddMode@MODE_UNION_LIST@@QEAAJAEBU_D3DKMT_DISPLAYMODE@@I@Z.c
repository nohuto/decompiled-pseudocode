/*
 * XREFs of ?AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C0171E54
 * Callers:
 *     ?AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C0171B2C (-AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

__int64 __fastcall MODE_UNION_LIST::AddMode(
        MODE_UNION_LIST *this,
        const struct _D3DKMT_DISPLAYMODE *a2,
        unsigned int a3)
{
  unsigned int v4; // eax
  __int64 v5; // r14
  unsigned int v6; // edi
  unsigned int v7; // ecx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // edx
  SIZE_T v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  char *v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  const void *v19; // rdx
  SIZE_T v20; // rax
  char *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  char *v26; // rsi
  const void *v27; // rdx
  __int64 v28; // rax
  void *v29; // rcx
  void *v30; // rcx

  v4 = *((_DWORD *)this + 4) + 1;
  v5 = a3;
  *((_DWORD *)this + 4) = v4;
  v6 = 0;
  v7 = *((_DWORD *)this + 6);
  if ( v4 <= v7 )
  {
LABEL_2:
    v9 = 44LL * (v4 - 1);
    v10 = *((_QWORD *)this + 1);
    *(_OWORD *)(v9 + v10) = *(_OWORD *)&a2->Width;
    *(_OWORD *)(v9 + v10 + 16) = *(_OWORD *)&a2->RefreshRate.Numerator;
    *(_QWORD *)(v9 + v10 + 32) = *(_QWORD *)&a2->DisplayFixedOutput;
    *(_DWORD *)(v9 + v10 + 40) = *((_DWORD *)&a2->Flags + 1);
    if ( *((_BYTE *)this + 28) )
    {
      v11 = *((_DWORD *)this + 4);
      if ( v11 - (int)v5 - 1 > 0 )
      {
        memmove(
          (void *)(*((_QWORD *)this + 4) + 4 * v5 + 4),
          (const void *)(*((_QWORD *)this + 4) + 4 * v5),
          4LL * (*((_DWORD *)this + 4) - (int)v5 - 1));
        v11 = *((_DWORD *)this + 4);
      }
      *(_DWORD *)(*((_QWORD *)this + 4) + 4 * v5) = v11 - 1;
    }
    return v6;
  }
  v13 = 44LL * (v7 + 500);
  if ( !is_mul_ok(v7 + 500, 0x2CuLL) )
    v13 = -1LL;
  v16 = (char *)operator new[](v13, 0x4B677844u, PagedPool);
  if ( v16 )
  {
    v19 = (const void *)*((_QWORD *)this + 1);
    if ( v19 )
    {
      memmove(v16, v19, 44LL * *((unsigned int *)this + 6));
      operator delete[](*((void **)this + 1));
    }
    memset(&v16[44 * *((unsigned int *)this + 6)], 0, 0x55F0uLL);
    *((_QWORD *)this + 1) = v16;
    if ( !*((_BYTE *)this + 28) )
      goto LABEL_19;
    v20 = 4LL * (unsigned int)(*((_DWORD *)this + 6) + 500);
    if ( !is_mul_ok((unsigned int)(*((_DWORD *)this + 6) + 500), 4uLL) )
      v20 = -1LL;
    v21 = (char *)operator new[](v20, 0x4B677844u, PagedPool);
    v26 = v21;
    if ( v21 )
    {
      v27 = (const void *)*((_QWORD *)this + 4);
      if ( v27 )
      {
        memmove(v21, v27, 4LL * *((unsigned int *)this + 6));
        operator delete[](*((void **)this + 4));
      }
      memset(&v26[4 * *((unsigned int *)this + 6)], 0, 0x7D0uLL);
      *((_QWORD *)this + 4) = v26;
LABEL_19:
      *((_DWORD *)this + 6) += 500;
      v4 = *((_DWORD *)this + 4);
      goto LABEL_2;
    }
    v28 = WdLogNewEntry5_WdLowResource(v23, v22, v24, v25);
    *(_QWORD *)(v28 + 24) = 1812LL;
  }
  else
  {
    v28 = WdLogNewEntry5_WdLowResource(v15, v14, v17, v18);
    *(_QWORD *)(v28 + 24) = 1782LL;
  }
  WdLogEvent5_WdLowResource(v28);
  v29 = (void *)*((_QWORD *)this + 4);
  if ( v29 )
  {
    operator delete[](v29);
    *((_QWORD *)this + 4) = 0LL;
  }
  v30 = (void *)*((_QWORD *)this + 1);
  if ( v30 )
  {
    operator delete[](v30);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 6) = 0;
  return (unsigned int)-1073741801;
}
