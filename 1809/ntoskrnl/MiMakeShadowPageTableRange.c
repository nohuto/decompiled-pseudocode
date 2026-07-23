/*
 * XREFs of MiMakeShadowPageTableRange @ 0x14072B4F4
 * Callers:
 *     MmCreateShadowMapping @ 0x14072B348 (MmCreateShadowMapping.c)
 *     MiMakeShadowPageTableRange @ 0x14072B4F4 (MiMakeShadowPageTableRange.c)
 * Callees:
 *     MiGetPfnLink @ 0x1400E10E0 (MiGetPfnLink.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x14012B3CC (MiReadWriteAnyLevelShadowPte.c)
 *     MiMakeShadowPageTableRange @ 0x14072B4F4 (MiMakeShadowPageTableRange.c)
 *     MiInitializeShadowPageTable @ 0x14072B5E4 (MiInitializeShadowPageTable.c)
 */

ULONG_PTR __fastcall MiMakeShadowPageTableRange(unsigned __int64 a1, ULONG_PTR a2, __int64 a3, int a4, __int64 a5)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  int v8; // r14d
  ULONG_PTR result; // rax
  __int64 v10; // rcx
  __int64 PfnLink; // rax

  v6 = a1;
  v7 = a2;
  v8 = a3;
  if ( a1 < *(_QWORD *)(a3 + 16LL * a4) )
    v6 = *(_QWORD *)(a3 + 16LL * a4);
  result = *(_QWORD *)(a3 + 16LL * a4 + 8);
  if ( a2 > result )
    v7 = *(_QWORD *)(a3 + 16LL * a4 + 8);
  for ( ; v6 <= v7; v6 += 8LL )
  {
    result = MiReadWriteAnyLevelShadowPte(v6, a4, 0, ZeroPte);
    if ( (result & 1) == 0 )
    {
      if ( a4 )
      {
        PfnLink = MiGetPfnLink(*(_QWORD *)(a5 + 16));
        ++*(_QWORD *)(a5 + 40);
        *(_QWORD *)(a5 + 16) = PfnLink;
      }
      else
      {
        v10 = 0LL;
      }
      result = MiInitializeShadowPageTable(v6, v10, (unsigned int)a4);
    }
    if ( a4 > *(_DWORD *)(a5 + 60) )
      result = MiMakeShadowPageTableRange(
                 (__int64)(v6 << 25) >> 16,
                 (unsigned int)((__int64)(v6 << 25) >> 16) + 4088,
                 v8,
                 a4 - 1,
                 a5);
  }
  return result;
}
