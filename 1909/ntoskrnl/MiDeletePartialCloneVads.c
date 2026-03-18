/*
 * XREFs of MiDeletePartialCloneVads @ 0x14089ABC0
 * Callers:
 *     MiAllocateChildVads @ 0x14089A0E0 (MiAllocateChildVads.c)
 *     MiInsertChildVads @ 0x14089ADD0 (MiInsertChildVads.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     MiIsVadLargePrivate @ 0x1400731FC (MiIsVadLargePrivate.c)
 *     MiGetProtoPteAddress @ 0x1400A7E70 (MiGetProtoPteAddress.c)
 *     MiFreeVadEvents @ 0x1402C79E0 (MiFreeVadEvents.c)
 *     MiDecrementLargeSubsections @ 0x1402CB278 (MiDecrementLargeSubsections.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiRemoveSharedCommitNode @ 0x14060A200 (MiRemoveSharedCommitNode.c)
 *     MiDereferencePerSessionProtos @ 0x1406E9B08 (MiDereferencePerSessionProtos.c)
 *     MiFreePlaceholderStorage @ 0x1406F1C80 (MiFreePlaceholderStorage.c)
 *     MiFreeVadEventBitmap @ 0x14088AC28 (MiFreeVadEventBitmap.c)
 *     MiFreeLargePageView @ 0x140899728 (MiFreeLargePageView.c)
 *     MiVadHasSharedCommit @ 0x14089B074 (MiVadHasSharedCommit.c)
 */

void __fastcall MiDeletePartialCloneVads(_QWORD *P)
{
  _QWORD *v1; // rdi
  _DWORD *v2; // rbx
  _KPROCESS *i; // rbp
  int v4; // edx
  __int64 *j; // rsi
  __int64 **v6; // rax
  __int64 *v7; // rsi
  unsigned int SessionId; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // ecx
  __int64 *v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v13; // [rsp+48h] [rbp+10h] BYREF

  v1 = P;
  v2 = P;
  for ( i = KeGetCurrentThread()->ApcState.Process; v1; v2 = v1 )
  {
    v1 = (_QWORD *)*v1;
    MiFreeVadEventBitmap(i, (__int64)v2, 4LL);
    if ( MiIsVadLargePrivate((__int64)v2) )
    {
      MiFreeLargePageView((__int64)i, (__int64)v2, 1LL);
    }
    else
    {
      v4 = v2[12] & 0x70;
      if ( v4 == 80 && *(_QWORD *)(**((_QWORD **)v2 + 9) + 64LL) )
      {
        MiGetProtoPteAddress(
          (__int64)v2,
          (unsigned int)v2[6] | ((unsigned __int64)*((unsigned __int8 *)v2 + 32) << 32),
          0,
          &v13);
        MiGetProtoPteAddress(
          (__int64)v2,
          (unsigned int)v2[7] | ((unsigned __int64)*((unsigned __int8 *)v2 + 33) << 32),
          0,
          &v12);
        for ( j = v13; ; j = (__int64 *)j[2] )
        {
          MiDecrementLargeSubsections(j, j);
          if ( j == v12 )
            break;
        }
      }
      else if ( v4 == 32 )
      {
        v6 = (__int64 **)*((_QWORD *)v2 + 9);
        v7 = *v6;
        if ( ((*v6)[7] & 0x4000000) != 0 )
        {
          SessionId = MmGetSessionIdEx((__int64)i);
          MiDereferencePerSessionProtos(v7, SessionId);
        }
      }
    }
    if ( (unsigned int)MiVadHasSharedCommit(v2) )
      MiRemoveSharedCommitNode(**((_QWORD ***)v2 + 9), (unsigned __int64)i, 0);
    v11 = v2[12];
    if ( (v11 & 0x100000) == 0 && (v11 & 0x70) == 0x20 && (v11 & 0x200000) != 0 )
      --*(_QWORD *)(*(_QWORD *)&i[1].IdealNode[14] + 384LL);
    MiFreePlaceholderStorage((__int64)v2, v9, v10);
    MiFreeVadEvents((__int64)v2);
    ExFreePoolWithTag(v2, 0);
  }
}
