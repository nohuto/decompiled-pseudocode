/*
 * XREFs of MiGetPageFromSlabEntry @ 0x1402C2A38
 * Callers:
 *     MiGetPageFromSlabAllocator @ 0x1402C2870 (MiGetPageFromSlabAllocator.c)
 * Callees:
 *     RtlInterlockedSetClearRun @ 0x140014CE0 (RtlInterlockedSetClearRun.c)
 */

__int64 __fastcall MiGetPageFromSlabEntry(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  unsigned int v5; // ebp
  unsigned int v6; // r13d
  unsigned int v7; // r9d
  unsigned int v8; // edx
  int v9; // r10d
  __int64 v10; // rbx
  unsigned int v11; // r11d
  unsigned int v12; // edx
  __int64 *v13; // rdx
  __int64 i; // r8
  unsigned __int64 v15; // rax
  unsigned int v16; // edx
  unsigned int v17; // eax

  if ( *(_DWORD *)(a1 + 120) )
  {
    v4 = *(_DWORD *)(a1 + 124) & (unsigned int)-(*(_DWORD *)(a1 + 124) < 0x200u);
    if ( !_bittest64(*(const signed __int64 **)(a1 + 48), v4)
      && (unsigned int)RtlInterlockedSetClearRun(a1 + 40, v4, 1u) )
    {
LABEL_21:
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 120));
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 32));
      *(_DWORD *)(a1 + 124) = v4 + 1;
      return *(_QWORD *)(a1 + 24) + (unsigned int)v4;
    }
    while ( 1 )
    {
      v5 = *(_DWORD *)(a1 + 40);
      v6 = v4 + 1;
      v7 = v6 < v5 ? v6 : 0;
      v8 = v5 - 1;
      v9 = (*(_DWORD *)(a1 + 48) & 4) != 0LL ? 0x20 : 0;
      v10 = *(_QWORD *)(a1 + 48) - ((*(_QWORD *)(a1 + 48) & 4LL) != 0 ? 4 : 0);
      while ( 1 )
      {
        v11 = v9 + v8;
        if ( v8 - v7 == -1 )
          goto LABEL_6;
        v13 = (__int64 *)(v10 + 8 * ((unsigned __int64)(v9 + v7) >> 6));
        for ( i = *v13 | ((1LL << ((v9 + v7) & 0x3F)) - 1); i == -1; i = *v13 )
        {
          if ( (unsigned __int64)++v13 > v10 + 8 * ((unsigned __int64)v11 >> 6) )
            goto LABEL_6;
        }
        _BitScanForward64(&v15, ~i);
        v12 = v15 + ((unsigned int)(((__int64)v13 - v10) >> 3) << 6);
        if ( v12 > v11 )
        {
LABEL_6:
          v12 = -1;
        }
        else if ( v12 != -1 )
        {
          break;
        }
        if ( !v7 )
          break;
        v16 = v6 + 1;
        if ( v6 + 1 > v5 )
          v16 = *(_DWORD *)(a1 + 40);
        v8 = v16 - 1;
        v7 = 0;
      }
      v17 = v12 - v9;
      if ( v12 == -1 )
        v17 = -1;
      LODWORD(v4) = v17;
      if ( v17 == -1 )
        break;
      if ( (unsigned int)RtlInterlockedSetClearRun(a1 + 40, v17, 1u) )
        goto LABEL_21;
    }
  }
  return -1LL;
}
