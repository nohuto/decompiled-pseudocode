/*
 * XREFs of ?RemoveMode@MODE_UNION_LIST@@AEAAXI@Z @ 0x1C016E278
 * Callers:
 *     ?AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C016DD3C (-AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0024FC0 (memmove.c)
 */

void __fastcall MODE_UNION_LIST::RemoveMode(MODE_UNION_LIST *this, unsigned int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  unsigned int v5; // eax
  __int64 i; // rcx
  __int64 v7; // r8
  unsigned int v8; // eax

  v3 = a2;
  v4 = *(unsigned int *)(*((_QWORD *)this + 4) + 4LL * a2);
  v5 = *((_DWORD *)this + 4);
  if ( (int)(v5 - v4 - 1) > 0 )
  {
    memmove(
      (void *)(*((_QWORD *)this + 1) + 44 * v4),
      (const void *)(*((_QWORD *)this + 1) + 44 * v4 + 44),
      44LL * (*((_DWORD *)this + 4) - (int)v4 - 1));
    v5 = *((_DWORD *)this + 4);
    for ( i = 0LL; (unsigned int)i < v5; i = (unsigned int)(i + 1) )
    {
      v7 = *((_QWORD *)this + 4);
      v8 = *(_DWORD *)(v7 + 4 * i);
      if ( v8 > (unsigned int)v4 )
        *(_DWORD *)(v7 + 4 * i) = v8 - 1;
      v5 = *((_DWORD *)this + 4);
    }
  }
  if ( (int)(v5 - v3 - 1) > 0 )
  {
    memmove(
      (void *)(*((_QWORD *)this + 4) + 4 * v3),
      (const void *)(*((_QWORD *)this + 4) + 4 * v3 + 4),
      4LL * (int)(v5 - v3 - 1));
    v5 = *((_DWORD *)this + 4);
  }
  *((_DWORD *)this + 4) = v5 - 1;
}
