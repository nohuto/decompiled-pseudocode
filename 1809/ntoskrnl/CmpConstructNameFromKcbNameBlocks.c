/*
 * XREFs of CmpConstructNameFromKcbNameBlocks @ 0x1407F1E34
 * Callers:
 *     CmpConstructNameWithStatus @ 0x1405D83A0 (CmpConstructNameWithStatus.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406D0908 (CmpLogTransactionAbortedWithChildName.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140013040 (CmpAllocateTransientPoolWithTag.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpCopyCompressedName @ 0x1405B0298 (CmpCopyCompressedName.c)
 *     CmpKeyFullNameLength @ 0x1405D8860 (CmpKeyFullNameLength.c)
 */

__int64 __fastcall CmpConstructNameFromKcbNameBlocks(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  unsigned int v4; // eax
  __int64 v5; // rsi
  unsigned int v6; // ebx
  _WORD *TransientPoolWithTag; // rax
  _WORD *v8; // r14
  unsigned __int16 v9; // si
  __int64 v10; // rax
  unsigned __int16 v11; // dx
  unsigned __int16 v12; // si
  unsigned __int8 *v13; // r10
  _WORD *v14; // rcx

  v3 = a1;
  v4 = CmpKeyFullNameLength(a1);
  v5 = v4;
  if ( v4 <= 0xFFFF )
  {
    TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, v4 + 16LL, 0x624E4D43u);
    v6 = 0;
    v8 = TransientPoolWithTag;
    if ( TransientPoolWithTag )
    {
      memset(TransientPoolWithTag, 0, v5 + 16);
      *v8 = v5;
      v8[1] = v5;
      *((_QWORD *)v8 + 1) = v8 + 8;
      v9 = (unsigned __int16)v5 >> 1;
      while ( v3 )
      {
        if ( (*(_DWORD *)(v3 + 176) & 0x40000) != 0 && *(_QWORD *)(v3 + 64) )
        {
          v3 = *(_QWORD *)(v3 + 64);
        }
        else
        {
          v10 = *(_QWORD *)(v3 + 72);
          v11 = *(_WORD *)(v10 + 24);
          if ( (*(_DWORD *)v10 & 1) == 0 )
            v11 >>= 1;
          v12 = v9 - v11;
          v13 = (unsigned __int8 *)(v10 + 26);
          v14 = (_WORD *)(*((_QWORD *)v8 + 1) + 2LL * v12);
          if ( (*(_DWORD *)v10 & 1) != 0 )
            CmpCopyCompressedName(v14, 2 * v11, v13, v11);
          else
            memmove(v14, v13, 2LL * v11);
          v9 = v12 - 1;
          *(_WORD *)(*((_QWORD *)v8 + 1) + 2LL * v9) = 92;
          v3 = *(_QWORD *)(v3 + 64);
        }
      }
      *a2 = v8;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
