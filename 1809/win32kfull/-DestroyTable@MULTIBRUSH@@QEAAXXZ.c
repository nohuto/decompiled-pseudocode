/*
 * XREFs of ?DestroyTable@MULTIBRUSH@@QEAAXXZ @ 0x1C0283E9C
 * Callers:
 *     MulDestroyBrushInternal @ 0x1C028A280 (MulDestroyBrushInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall MULTIBRUSH::DestroyTable(MULTIBRUSH *this)
{
  unsigned int *v2; // rax
  unsigned int v3; // esi
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // rax
  volatile signed __int32 *v9; // rcx

  if ( *((_QWORD *)this + 1) )
  {
    v2 = (unsigned int *)*((_QWORD *)this + 4);
    if ( v2 )
    {
      v3 = *v2;
      if ( *v2 )
      {
        v4 = 16LL * v3;
        do
        {
          v5 = *((_QWORD *)this + 4);
          v6 = v4;
          v7 = v4;
          --v3;
          v4 -= 16LL;
          v8 = *(_QWORD *)(v4 + v5 + 8);
          if ( v8 )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 - 16), 0xFFFFFFFF) == 1 )
              RBRUSH::vFreeOrCacheRBrush(v8 - 16, 0LL);
            *(_QWORD *)(v4 + *((_QWORD *)this + 4) + 8) = 0LL;
            v5 = *((_QWORD *)this + 4);
          }
          v9 = *(volatile signed __int32 **)(v7 + v5);
          if ( v9 )
          {
            if ( _InterlockedExchangeAdd(v9, 0xFFFFFFFF) == 1 )
              RBRUSH::vFreeOrCacheRBrush(v9, 1LL);
            *(_QWORD *)(v6 + *((_QWORD *)this + 4)) = 0LL;
          }
        }
        while ( v3 );
      }
    }
  }
}
