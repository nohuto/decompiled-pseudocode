/*
 * XREFs of RtlAddAtomToAtomTableEx @ 0x18005B3CC
 * Callers:
 *     RtlAddAtomToAtomTable @ 0x18005B3C0 (RtlAddAtomToAtomTable.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlpHashStringToAtom @ 0x18005B720 (RtlpHashStringToAtom.c)
 *     RtlGetIntegerAtom @ 0x18005B850 (RtlGetIntegerAtom.c)
 *     RtlpLockAtomTable @ 0x18005B888 (RtlpLockAtomTable.c)
 *     RtlpInsertStringAtom @ 0x18005B95C (RtlpInsertStringAtom.c)
 *     RtlpAllocateAtomTableEntry @ 0x18005BBA0 (RtlpAllocateAtomTableEntry.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 */

__int64 __fastcall RtlAddAtomToAtomTableEx(_RTL_SRWLOCK *a1, WCHAR *a2, _WORD *a3, int a4)
{
  __int64 v7; // r8
  int v8; // ebx
  __int64 v9; // rdx
  __int64 *v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  __int16 v14; // ax
  __int16 v15; // ax
  _DWORD Size[3]; // [rsp+44h] [rbp-44h] BYREF
  _WORD *v18; // [rsp+50h] [rbp-38h] BYREF
  __int64 *v19; // [rsp+58h] [rbp-30h] BYREF
  int IntegerAtom; // [rsp+A8h] [rbp+20h] BYREF

  IntegerAtom = a4;
  if ( (unsigned __int8)RtlpLockAtomTable() )
  {
    if ( RtlGetIntegerAtom(a2, (PUSHORT)&IntegerAtom) )
    {
      v15 = IntegerAtom;
      if ( (unsigned __int16)IntegerAtom < 0xC000u )
      {
        v8 = 0;
      }
      else
      {
        v15 = 0;
        LOWORD(IntegerAtom) = 0;
        v8 = -1073741811;
      }
      if ( a3 )
        *a3 = v15;
      goto LABEL_26;
    }
    if ( !*a2 )
    {
      v8 = -1073741773;
      goto LABEL_26;
    }
    v8 = RtlpHashStringToAtom(a1, a2, v7, &v19, Size, &v18, &Size[1]);
    if ( v8 >= 0 )
    {
      v9 = *(_QWORD *)&Size[1];
      if ( *(_QWORD *)&Size[1] )
      {
        if ( *v18 == 0xFFFF )
          v18[1] |= 1u;
        else
          ++*v18;
        if ( !a3 )
          goto LABEL_12;
        v14 = *(_WORD *)(v9 + 10);
LABEL_11:
        *a3 = v14;
LABEL_12:
        v8 = 0;
        goto LABEL_26;
      }
      v10 = v19;
      if ( !v19 )
      {
        v8 = -1073741811;
        goto LABEL_26;
      }
      v8 = -1073741801;
      v11 = RtlpAllocateAtomTableEntry(Size[0], &v18);
      v12 = v11;
      *(_QWORD *)&Size[1] = v11;
      if ( v11 )
      {
        v13 = Size[0];
        memmove((void *)(v11 + 18), a2, Size[0]);
        v13 >>= 1;
        *(_BYTE *)(v12 + 16) = v13;
        *(_WORD *)(v12 + 2LL * (unsigned __int8)v13 + 18) = 0;
        if ( !(unsigned __int8)RtlpInsertStringAtom(a1, v12) )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *(PVOID *)&Size[1]);
          v8 = -1073741801;
          goto LABEL_26;
        }
        *(_WORD *)(v12 + 10) = *(_WORD *)(v12 + 8) | 0xC000;
        *v10 = v12;
        if ( !a3 )
          goto LABEL_12;
        v14 = *(_WORD *)(v12 + 10);
        goto LABEL_11;
      }
    }
LABEL_26:
    RtlReleaseSRWLockExclusive(a1 + 1);
    return (unsigned int)v8;
  }
  return 3221225485LL;
}
