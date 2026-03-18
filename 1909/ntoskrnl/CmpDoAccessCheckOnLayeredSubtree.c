/*
 * XREFs of CmpDoAccessCheckOnLayeredSubtree @ 0x14082DA34
 * Callers:
 *     CmRenameKey @ 0x140827C5C (CmRenameKey.c)
 *     CmSaveKey @ 0x14083AA9C (CmSaveKey.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x140635968 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406D5000 (CmpCheckKeySecurityDescriptorAccess.c)
 *     CmpCheckKeyNodeStackAccess @ 0x14082D6FC (CmpCheckKeyNodeStackAccess.c)
 *     CmpInitializeKeyNodeStack @ 0x14083286C (CmpInitializeKeyNodeStack.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140832F94 (CmpSubtreeEnumeratorAdvance.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x140833210 (CmpSubtreeEnumeratorCleanup.c)
 *     CmpSubtreeEnumeratorGetCurrentKeyStacks @ 0x140833290 (CmpSubtreeEnumeratorGetCurrentKeyStacks.c)
 *     CmpSubtreeEnumeratorStartForKcbStack @ 0x14083345C (CmpSubtreeEnumeratorStartForKcbStack.c)
 *     CmpSubtreeEnumeratorStartForKeyNodeStack @ 0x140833498 (CmpSubtreeEnumeratorStartForKeyNodeStack.c)
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

  memset(&v19[1], 0, 0x66uLL);
  v19[0] = -2;
  CmpInitializeKeyNodeStack(&v19[8]);
  v10 = (a6 & 2) != 0;
  if ( (a6 & 1) == 0
    || (!a1
      ? (v12 = CmpCheckKeyNodeStackAccess(a3, a4, a5, (a6 & 2) != 0))
      : (v11 = CmpGetSecurityCacheEntryForKcbStack(a1, a2),
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
        SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(v17, a2);
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
