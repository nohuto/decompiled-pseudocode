/*
 * XREFs of CmpRefreshParent @ 0x140805F80
 * Callers:
 *     <none>
 * Callees:
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1405B0FE0 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1405D9ADC (CmpReferenceKeyControlBlockUnsafe.c)
 */

__int64 __fastcall CmpRefreshParent(__int64 a1, __int64 a2, volatile signed __int32 **a3)
{
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rax

  v3 = *a3;
  v4 = a3[1];
  if ( *(volatile signed __int32 **)(a1 + 64) == *a3 )
  {
    ++*(_QWORD *)(a1 + 296);
    *(_QWORD *)(a1 + 64) = v4;
    if ( *v3 )
    {
      CmpReferenceKeyControlBlockUnsafe(v4);
      CmpDereferenceKeyControlBlockUnsafe(v3);
    }
  }
  return 0LL;
}
