/*
 * XREFs of ?Add@DXGFIXEDQUEUE@@QEAAJI@Z @ 0x1C0047D44
 * Callers:
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C0287B4C (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 */

__int64 __fastcall DXGFIXEDQUEUE::Add(DXGFIXEDQUEUE *this, __int64 a2, __int64 a3)
{
  char *v3; // rdi
  int v4; // esi
  __int64 v6; // rax
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  SIZE_T v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  int v16; // eax
  int v17; // ecx
  void *v18; // rcx
  int v19; // eax

  v3 = (char *)*((_QWORD *)this + 2);
  v4 = a2;
  if ( !v3 )
  {
    v6 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v6 + 24) = 52LL;
    WdLogEvent5_WdError(v6);
    return 3221225495LL;
  }
  v8 = *((_DWORD *)this + 2);
  v9 = *((_DWORD *)this + 1);
  v10 = v8 + 1;
  if ( v8 + 1 == v9 )
    v10 = 0;
  if ( v10 == *((_DWORD *)this + 3) )
  {
    v11 = 4LL * (unsigned int)(*(_DWORD *)this + v9);
    if ( !is_mul_ok((unsigned int)(*(_DWORD *)this + v9), 4uLL) )
      v11 = -1LL;
    v3 = (char *)operator new[](v11, 0x4B677844u, PagedPool);
    if ( !v3 )
    {
      v15 = WdLogNewEntry5_WdError(v13, v12, v14);
      *(_QWORD *)(v15 + 24) = this;
      WdLogEvent5_WdError(v15);
      return 3221225507LL;
    }
    memmove(
      v3,
      (const void *)(*((_QWORD *)this + 2) + 4LL * *((unsigned int *)this + 3)),
      4LL * (unsigned int)(*((_DWORD *)this + 1) - *((_DWORD *)this + 3)));
    v16 = *((_DWORD *)this + 3);
    v17 = *((_DWORD *)this + 1);
    if ( v16 )
    {
      memmove(&v3[4 * (v17 - v16)], *((const void **)this + 2), 4LL * *((unsigned int *)this + 2));
      v17 = *((_DWORD *)this + 1);
      *((_DWORD *)this + 3) = 0;
      *((_DWORD *)this + 2) = v17 - 1;
    }
    *((_DWORD *)this + 1) = *(_DWORD *)this + v17;
    v18 = (void *)*((_QWORD *)this + 2);
    if ( v18 )
      ExFreePoolWithTag(v18, 0);
    v8 = *((_DWORD *)this + 2);
    *((_QWORD *)this + 2) = v3;
  }
  *(_DWORD *)&v3[4 * v8] = v4;
  v19 = *((_DWORD *)this + 2) + 1;
  if ( v19 == *((_DWORD *)this + 1) )
    v19 = 0;
  *((_DWORD *)this + 2) = v19;
  return 0LL;
}
