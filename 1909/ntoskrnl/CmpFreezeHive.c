/*
 * XREFs of CmpFreezeHive @ 0x1406B8BBC
 * Callers:
 *     CmpPerformUnloadKey @ 0x1406B91E4 (CmpPerformUnloadKey.c)
 * Callees:
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x140635944 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x140669828 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpSearchForOpenSubKeys @ 0x1406B8C30 (CmpSearchForOpenSubKeys.c)
 *     CmpRecordUnloadEventForHive @ 0x1406BAC5C (CmpRecordUnloadEventForHive.c)
 */

__int64 __fastcall CmpFreezeHive(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v5; // edi

  v2 = *(_QWORD *)(a1 + 32);
  CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)a1);
  if ( a2 && (v5 = CmpRecordUnloadEventForHive(v2, a2), v5 < 0) )
  {
    CmpDereferenceKeyControlBlockUnsafe((volatile signed __int64 *)a1);
  }
  else
  {
    CmpSearchForOpenSubKeys(a1, 2LL);
    *(_WORD *)(a1 + 8) |= 0x20u;
    v5 = 0;
    *(_BYTE *)(v2 + 2936) = 1;
    *(_QWORD *)(v2 + 2928) = a1;
  }
  return (unsigned int)v5;
}
