/*
 * XREFs of RtlAddAtomToAtomTableEx @ 0x1400895B0
 * Callers:
 *     NtAddAtomEx @ 0x1406AC960 (NtAddAtomEx.c)
 *     RtlAddAtomToAtomTable @ 0x1406C9810 (RtlAddAtomToAtomTable.c)
 * Callees:
 *     RtlpReferenceAtom @ 0x140089838 (RtlpReferenceAtom.c)
 *     RtlpAllocateAtomTableEntry @ 0x1400FD1DC (RtlpAllocateAtomTableEntry.c)
 *     memmove @ 0x1401D1540 (memmove.c)
 *     RtlGetIntegerAtom @ 0x1405F53D0 (RtlGetIntegerAtom.c)
 *     RtlpLockAtomTable @ 0x1405F547C (RtlpLockAtomTable.c)
 *     RtlpHashStringToAtom @ 0x1405F54C0 (RtlpHashStringToAtom.c)
 *     RtlpUnlockAtomTable @ 0x1405F6288 (RtlpUnlockAtomTable.c)
 *     RtlpFreeAtom @ 0x1406AD470 (RtlpFreeAtom.c)
 *     RtlpInsertStringAtom @ 0x1406B73FC (RtlpInsertStringAtom.c)
 */

__int64 __fastcall RtlAddAtomToAtomTableEx(__int64 a1, _WORD *a2, _WORD *a3, unsigned int a4)
{
  int v8; // edi
  __int64 v9; // rcx
  __int64 *v10; // r13
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // rbx
  __int64 v14; // rcx
  __int16 v15; // ax
  unsigned int Size; // [rsp+40h] [rbp-48h] BYREF
  int Size_4; // [rsp+44h] [rbp-44h]
  __int64 v19; // [rsp+48h] [rbp-40h] BYREF
  __int64 v20; // [rsp+50h] [rbp-38h] BYREF
  __int64 *v21; // [rsp+58h] [rbp-30h] BYREF

  if ( (unsigned __int8)RtlpLockAtomTable() )
  {
    if ( (unsigned __int8)RtlGetIntegerAtom(a2, &Size) )
    {
      v15 = Size;
      if ( (unsigned __int16)Size >= 0xC000u )
      {
        v15 = 0;
        LOWORD(Size) = 0;
        v8 = -1073741811;
        Size_4 = -1073741811;
      }
      else
      {
        v8 = 0;
        Size_4 = 0;
      }
      if ( a3 )
        *a3 = v15;
      goto LABEL_27;
    }
    if ( *a2 )
    {
      v8 = RtlpHashStringToAtom(a1, a2, 0LL, &v21, &Size, &v19, &v20);
      Size_4 = v8;
      if ( v8 < 0 )
      {
LABEL_27:
        RtlpUnlockAtomTable(a1);
        return (unsigned int)v8;
      }
      if ( v20 )
      {
        RtlpReferenceAtom(v20, v19);
        if ( a3 )
          *a3 = *(_WORD *)(v9 + 10);
        v8 = 0;
        Size_4 = 0;
        goto LABEL_27;
      }
      v10 = v21;
      if ( v21 )
      {
        v8 = -1073741801;
        Size_4 = -1073741801;
        v11 = RtlpAllocateAtomTableEntry(Size, &v19, a4);
        v12 = v11;
        v20 = v11;
        if ( v11 )
        {
          v13 = Size;
          memmove((void *)(v11 + 42), a2, Size);
          v14 = (unsigned __int8)(v13 >> 1);
          *(_BYTE *)(v12 + 40) = v14;
          *(_WORD *)(v12 + 2 * v14 + 42) = 0;
          if ( (unsigned __int8)RtlpInsertStringAtom(a1, v12) )
          {
            *(_WORD *)(v12 + 10) = *(_WORD *)(v12 + 8) | 0xC000;
            *v10 = v12;
            if ( a3 )
              *a3 = *(_WORD *)(v12 + 10);
            v8 = 0;
            Size_4 = 0;
          }
          else
          {
            if ( v19 && v19 != v12 + 16 )
              ((void (*)(void))RtlpFreeAtom)();
            RtlpFreeAtom(v12);
          }
        }
        goto LABEL_27;
      }
      v8 = -1073741811;
    }
    else
    {
      v8 = -1073741773;
    }
    Size_4 = v8;
    goto LABEL_27;
  }
  return 3221225485LL;
}
