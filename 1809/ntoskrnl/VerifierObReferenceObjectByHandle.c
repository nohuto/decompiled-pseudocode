/*
 * XREFs of VerifierObReferenceObjectByHandle @ 0x1409469A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     VerifierBugCheckIfAppropriate @ 0x140930D84 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierObReferenceObjectByHandle(ULONG_PTR BugCheckParameter2, __int64 a2, ULONG_PTR a3, char a4)
{
  unsigned int v7; // eax
  unsigned int v8; // ebp
  ULONG_PTR v9; // r8
  ULONG_PTR v10; // rdx

  v7 = ((__int64 (__fastcall *)(ULONG_PTR, __int64))pXdvObReferenceObjectByHandle)(BugCheckParameter2, a2);
  v8 = v7;
  if ( (v7 == -1073741816 || v7 == -1073741788)
    && (!a4 || (KeGetCurrentThread()->MiscFlags & 0x400) != 0)
    && (MmVerifierData & 0x800) != 0 )
  {
    if ( !BugCheckParameter2 )
    {
      v9 = 0LL;
      v10 = 245LL;
LABEL_13:
      VerifierBugCheckIfAppropriate(0xC4u, v10, v9, a3, 0LL);
      return v8;
    }
    if ( !a4 || (BugCheckParameter2 & 0xFFFFFFFF80000000uLL) == 0 || BugCheckParameter2 > 0xFFFFFFFFFFFFFFFDuLL )
    {
      v9 = BugCheckParameter2;
      v10 = 60LL;
      goto LABEL_13;
    }
    VerifierBugCheckIfAppropriate(0xC4u, 0xF7uLL, BugCheckParameter2, a3, a4);
  }
  return v8;
}
