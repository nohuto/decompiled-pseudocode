/*
 * XREFs of MiDeletePartialCloneVads @ 0x14085F728
 * Callers:
 *     MiAllocateChildVads @ 0x14085EC58 (MiAllocateChildVads.c)
 *     MiInsertChildVads @ 0x14085F950 (MiInsertChildVads.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x140042770 (MiGetProtoPteAddress.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     MiVadMapsLargeImage @ 0x140074A00 (MiVadMapsLargeImage.c)
 *     MiFreeVadEvents @ 0x1402B0028 (MiFreeVadEvents.c)
 *     MiDecrementLargeSubsections @ 0x1402B5A04 (MiDecrementLargeSubsections.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiRemoveSharedCommitNode @ 0x1405F1650 (MiRemoveSharedCommitNode.c)
 *     MiDereferencePerSessionProtos @ 0x1406CA250 (MiDereferencePerSessionProtos.c)
 *     MiFreePlaceholderStorage @ 0x1406D1E70 (MiFreePlaceholderStorage.c)
 *     MiFreeVadEventBitmap @ 0x1408506D4 (MiFreeVadEventBitmap.c)
 *     MiFreeLargePageView @ 0x14085E5D4 (MiFreeLargePageView.c)
 *     MiVadHasSharedCommit @ 0x14085FBF4 (MiVadHasSharedCommit.c)
 */

void __fastcall MiDeletePartialCloneVads(_QWORD *P)
{
  _QWORD *v1; // rdi
  _QWORD **v2; // rbx
  _KPROCESS *i; // rbp
  int v4; // eax
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
  v2 = (_QWORD **)P;
  for ( i = KeGetCurrentThread()->ApcState.Process; v1; v2 = (_QWORD **)v1 )
  {
    v1 = (_QWORD *)*v1;
    if ( ((_DWORD)v2[6] & 7) == 4 )
    {
      MiFreeVadEventBitmap(i, (__int64)v2, 4LL);
    }
    else if ( MiVadMapsLargeImage((__int64)v2) || (v4 = (_DWORD)v2[6] & 7, v4 == 5) )
    {
      MiFreeLargePageView((__int64)i, (__int64)v2, 1LL);
    }
    else if ( v4 == 7 )
    {
      if ( *(_QWORD *)(*v2[9] + 64LL) )
      {
        MiGetProtoPteAddress(
          (__int64)v2,
          *((unsigned int *)v2 + 6) | ((unsigned __int64)*((unsigned __int8 *)v2 + 32) << 32),
          0,
          &v13);
        MiGetProtoPteAddress(
          (__int64)v2,
          *((unsigned int *)v2 + 7) | ((unsigned __int64)*((unsigned __int8 *)v2 + 33) << 32),
          0,
          &v12);
        for ( j = v13; ; j = (__int64 *)j[2] )
        {
          MiDecrementLargeSubsections(j, j);
          if ( j == v12 )
            break;
        }
      }
    }
    else if ( v4 == 2 )
    {
      v6 = (__int64 **)v2[9];
      v7 = *v6;
      if ( ((*v6)[7] & 0x4000000) != 0 )
      {
        SessionId = MmGetSessionIdEx((__int64)i);
        MiDereferencePerSessionProtos(v7, SessionId);
      }
    }
    if ( (unsigned int)MiVadHasSharedCommit(v2) )
      MiRemoveSharedCommitNode(*v2[9], (unsigned __int64)i, 0);
    v11 = *((_DWORD *)v2 + 12);
    if ( (v11 & 7) == 2 && (v11 & 0x8000) != 0 )
      --*(_QWORD *)(*(_QWORD *)&i[1].IdealGlobalNode + 336LL);
    MiFreePlaceholderStorage((__int64)v2, v9, v10);
    MiFreeVadEvents((__int64)v2);
    ExFreePoolWithTag(v2, 0);
  }
}
