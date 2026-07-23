/*
 * XREFs of PfpDeprioritizeOldPagesInWs @ 0x1408650E4
 * Callers:
 *     PfSetSuperfetchInformation @ 0x140666A38 (PfSetSuperfetchInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     MmUpdateOldWorkingSetPages @ 0x1402B4564 (MmUpdateOldWorkingSetPages.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfpDeprioritizeOldPagesInWs(__int64 a1, char a2)
{
  unsigned int v3; // eax
  int updated; // ebx
  unsigned __int64 v5; // rdx
  unsigned int v6; // esi
  int v7; // edi
  char v8; // r8
  int v10; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+48h] [rbp-20h]
  unsigned int v12; // [rsp+50h] [rbp-18h]
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF

  Object = 0LL;
  v3 = 24;
  if ( *(_DWORD *)(a1 + 24) == 24 )
  {
    if ( a2 )
    {
      v5 = *(_QWORD *)(a1 + 16);
      if ( (v5 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v5 + 24 > 0x7FFFFFFF0000LL || v5 + 24 < v5 )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        v3 = *(_DWORD *)(a1 + 24);
      }
    }
    memmove(&v10, *(const void **)(a1 + 16), v3);
    if ( v10 != 3
      || (v12 & 0xFFFFFFC0) != 0
      || (v6 = v12 & 0xF, v6 > 8)
      || (v7 = (v12 >> 4) & 3, v7 == 3)
      || v6 == 8 && !v7 )
    {
      updated = -1073741811;
    }
    else
    {
      updated = ObpReferenceObjectByHandleWithTag(
                  BugCheckParameter1,
                  0x2000,
                  (__int64)PsProcessType,
                  a2,
                  0x73576650u,
                  &Object,
                  0LL,
                  0LL);
      if ( updated >= 0 )
      {
        v8 = 0;
        if ( v7 )
        {
          v8 = 1;
          if ( v7 == 1 )
            v8 = 3;
        }
        updated = MmUpdateOldWorkingSetPages((ULONG_PTR)Object, v6, v8);
      }
    }
  }
  else
  {
    updated = -1073741306;
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x73576650u);
  return (unsigned int)updated;
}
