/*
 * XREFs of CmpFreezeHive @ 0x140692ECC
 * Callers:
 *     CmpPerformUnloadKey @ 0x140693550 (CmpPerformUnloadKey.c)
 * Callees:
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1405B0FE0 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1405D9ADC (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpSearchForOpenSubKeys @ 0x140692F60 (CmpSearchForOpenSubKeys.c)
 *     CmpRecordUnloadEventForHive @ 0x1406940AC (CmpRecordUnloadEventForHive.c)
 */

__int64 __fastcall CmpFreezeHive(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  char v5; // si
  int v6; // edi

  v2 = *(_QWORD *)(a1 + 24);
  v5 = CmpReferenceKeyControlBlockUnsafe((volatile signed __int32 *)a1);
  if ( v5 )
  {
    if ( !a2 || (v6 = CmpRecordUnloadEventForHive(v2, a2), v6 >= 0) )
    {
      CmpSearchForOpenSubKeys(a1, 2LL);
      *(_WORD *)(a1 + 4) |= 0x20u;
      v5 = 0;
      v6 = 0;
      *(_BYTE *)(v2 + 2936) = 1;
      *(_QWORD *)(v2 + 2928) = a1;
    }
    if ( v5 )
      CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)a1);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v6;
}
