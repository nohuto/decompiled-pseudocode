/*
 * XREFs of RtlAddAtomToAtomTable_0 @ 0x18005B32C
 * Callers:
 *     RtlAddAtomToAtomTable @ 0x18005B320 (RtlAddAtomToAtomTable.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_18005B680 @ 0x18005B680 (sub_18005B680.c)
 *     RtlGetIntegerAtom @ 0x18005B7B0 (RtlGetIntegerAtom.c)
 *     sub_18005B7E8 @ 0x18005B7E8 (sub_18005B7E8.c)
 *     sub_18005B8BC @ 0x18005B8BC (sub_18005B8BC.c)
 *     sub_18005BB00 @ 0x18005BB00 (sub_18005BB00.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

NTSTATUS __cdecl RtlAddAtomToAtomTable_0(PVOID AtomTableHandle, PWSTR AtomName, PRTL_ATOM Atom)
{
  int v3; // r9d
  __int64 v7; // r8
  NTSTATUS v8; // ebx
  __int64 v9; // rdx
  __int64 *v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  USHORT v14; // ax
  USHORT v15; // ax
  _DWORD Size[3]; // [rsp+44h] [rbp-44h] BYREF
  _WORD *v18; // [rsp+50h] [rbp-38h] BYREF
  __int64 *v19; // [rsp+58h] [rbp-30h] BYREF
  int IntegerAtom; // [rsp+A8h] [rbp+20h] BYREF

  IntegerAtom = v3;
  if ( (unsigned __int8)sub_18005B7E8() )
  {
    if ( RtlGetIntegerAtom(AtomName, (PUSHORT)&IntegerAtom) )
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
      if ( Atom )
        *Atom = v15;
      goto LABEL_26;
    }
    if ( !*AtomName )
    {
      v8 = -1073741773;
      goto LABEL_26;
    }
    v8 = sub_18005B680(AtomTableHandle, AtomName, v7, &v19, Size, &v18, &Size[1]);
    if ( v8 >= 0 )
    {
      v9 = *(_QWORD *)&Size[1];
      if ( *(_QWORD *)&Size[1] )
      {
        if ( *v18 == 0xFFFF )
          v18[1] |= 1u;
        else
          ++*v18;
        if ( !Atom )
          goto LABEL_12;
        v14 = *(_WORD *)(v9 + 10);
LABEL_11:
        *Atom = v14;
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
      v11 = sub_18005BB00(Size[0], &v18);
      v12 = v11;
      *(_QWORD *)&Size[1] = v11;
      if ( v11 )
      {
        v13 = Size[0];
        memmove((void *)(v11 + 18), AtomName, Size[0]);
        v13 >>= 1;
        *(_BYTE *)(v12 + 16) = v13;
        *(_WORD *)(v12 + 2LL * (unsigned __int8)v13 + 18) = 0;
        if ( !(unsigned __int8)sub_18005B8BC(AtomTableHandle, v12) )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *(PVOID *)&Size[1]);
          v8 = -1073741801;
          goto LABEL_26;
        }
        *(_WORD *)(v12 + 10) = *(_WORD *)(v12 + 8) | 0xC000;
        *v10 = v12;
        if ( !Atom )
          goto LABEL_12;
        v14 = *(_WORD *)(v12 + 10);
        goto LABEL_11;
      }
    }
LABEL_26:
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)AtomTableHandle + 1);
    return v8;
  }
  return -1073741811;
}
