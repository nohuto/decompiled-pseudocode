/*
 * XREFs of CmpDoAccessCheckOnLayeredSubtree @ 0x1407F6014
 * Callers:
 *     CmRenameKey @ 0x1407EECF4 (CmRenameKey.c)
 *     CmSaveKey @ 0x140803130 (CmSaveKey.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1405D9920 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406CB250 (CmpCheckKeySecurityDescriptorAccess.c)
 *     CmpCheckKeyNodeStackAccess @ 0x1407F5CA0 (CmpCheckKeyNodeStackAccess.c)
 *     CmpInitializeKeyNodeStack @ 0x1407FB128 (CmpInitializeKeyNodeStack.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x1407FB7AC (CmpSubtreeEnumeratorAdvance.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x1407FBA24 (CmpSubtreeEnumeratorCleanup.c)
 *     CmpSubtreeEnumeratorGetCurrentKeyStacks @ 0x1407FBAA4 (CmpSubtreeEnumeratorGetCurrentKeyStacks.c)
 *     CmpSubtreeEnumeratorStartForKcbStack @ 0x1407FBC48 (CmpSubtreeEnumeratorStartForKcbStack.c)
 *     CmpSubtreeEnumeratorStartForKeyNodeStack @ 0x1407FBC84 (CmpSubtreeEnumeratorStartForKeyNodeStack.c)
 */

__int64 __fastcall CmpDoAccessCheckOnLayeredSubtree(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        KPROCESSOR_MODE a4,
        ACCESS_MASK a5,
        char a6)
{
  char v10; // si
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  __int64 SecurityCacheEntryForKcbStack; // rax
  __int64 v17; // [rsp+20h] [rbp-79h] BYREF
  __int64 v18; // [rsp+28h] [rbp-71h] BYREF
  _WORD v19[56]; // [rsp+30h] [rbp-69h] BYREF

  memset(v19, 0, 0x68uLL);
  v19[0] = -2;
  CmpInitializeKeyNodeStack(&v19[8]);
  v10 = (a6 & 2) != 0;
  if ( (a6 & 1) == 0
    || (!a1
      ? (v12 = CmpCheckKeyNodeStackAccess(a3, a4, a5, (a6 & 2) != 0))
      : (v11 = CmpGetSecurityCacheEntryForKcbStack(a1, a2, 0LL),
         v12 = CmpCheckKeySecurityDescriptorAccess((PSECURITY_DESCRIPTOR)(v11 + 32), a4, a5, v10)),
        v13 = v12,
        v12 >= 0) )
  {
    if ( a1 )
      v14 = CmpSubtreeEnumeratorStartForKcbStack(v19, a1);
    else
      v14 = CmpSubtreeEnumeratorStartForKeyNodeStack(v19, a3);
    while ( 1 )
    {
      v13 = v14;
      if ( v14 < 0 )
        break;
      if ( (unsigned int)CmpSubtreeEnumeratorAdvance(v19) == -2147483622 )
      {
        v13 = 0;
        break;
      }
      CmpSubtreeEnumeratorGetCurrentKeyStacks(v19, &v17, &v18);
      if ( v17 )
      {
        SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(v17, a2, 0LL);
        v14 = CmpCheckKeySecurityDescriptorAccess(
                (PSECURITY_DESCRIPTOR)(SecurityCacheEntryForKcbStack + 32),
                a4,
                a5,
                v10);
      }
      else
      {
        v14 = CmpCheckKeyNodeStackAccess(v18, a4, a5, v10);
      }
    }
  }
  CmpSubtreeEnumeratorCleanup(v19);
  return v13;
}
