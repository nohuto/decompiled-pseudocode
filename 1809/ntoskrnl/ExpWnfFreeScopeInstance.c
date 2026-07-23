/*
 * XREFs of ExpWnfFreeScopeInstance @ 0x1406CD260
 * Callers:
 *     ExpWnfDeleteScopeById @ 0x140609860 (ExpWnfDeleteScopeById.c)
 *     ExpWnfResolveScopeInstance @ 0x1406109EC (ExpWnfResolveScopeInstance.c)
 *     ExpWnfDeleteScopeInstances @ 0x1408DC8C0 (ExpWnfDeleteScopeInstances.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140089880 (ExWaitForRundownProtectionRelease.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExpWnfDeleteNameInstanceCallback @ 0x1406AC540 (ExpWnfDeleteNameInstanceCallback.c)
 */

void __fastcall ExpWnfFreeScopeInstance(struct _EX_RUNDOWN_REF *P, char a2)
{
  _QWORD *Count; // rcx
  __int64 v4; // rdi
  unsigned __int64 v5; // rdi
  _QWORD *v6; // rax
  void *Ptr; // rcx
  void *v8; // rcx
  _QWORD *v9; // rax

  if ( a2 )
  {
    ExWaitForRundownProtectionRelease(P + 1);
    Count = (_QWORD *)P[7].Count;
    if ( Count )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( *Count )
          {
            v9 = Count;
            Count = (_QWORD *)*Count;
            *v9 = 0LL;
          }
          if ( !Count[1] )
            break;
          v6 = Count;
          Count = (_QWORD *)Count[1];
          v6[1] = 0LL;
        }
        v4 = Count[2];
        ExpWnfDeleteNameInstanceCallback((__int64)Count, (__int64)P);
        v5 = v4 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v5 )
          break;
        Count = (_QWORD *)v5;
      }
    }
    P[7].Count = 0LL;
  }
  Ptr = P[8].Ptr;
  if ( Ptr )
    ZwClose(Ptr);
  v8 = P[9].Ptr;
  if ( v8 )
    ZwClose(v8);
  ExFreePoolWithTag(P, 0x20666E57u);
}
