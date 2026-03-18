/*
 * XREFs of MiReplacePfnWithGapMapping @ 0x140186434
 * Callers:
 *     MiPfnRangeIsZero @ 0x14018618C (MiPfnRangeIsZero.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x1401153E4 (MiInsertRecursiveTbFlushEntries.c)
 *     MiInsertLargeTbFlushEntry @ 0x140119668 (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiTransformValidPteInPlace @ 0x140173E44 (MiTransformValidPteInPlace.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void __fastcall MiReplacePfnWithGapMapping(volatile signed __int64 *a1, signed int a2)
{
  char v4; // al
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  bool v8; // zf
  unsigned __int64 ValidPte; // rax
  _QWORD v10[24]; // [rsp+20h] [rbp-D8h] BYREF

  if ( qword_1404668A8 != (PVOID)qword_1404668B0 )
  {
    ValidPte = MiMakeValidPte(
                 (unsigned __int64)a1,
                 (__int64)*(&qword_1404668A8 + a2),
                 a2 != 0 ? -1476395004 : 536870913);
    MiTransformValidPteInPlace(a1, (__int64)a1, ValidPte, a2);
    return;
  }
  memset(v10, 0, 0xB8uLL);
  v4 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
  v10[3] = 0LL;
  LODWORD(v10[1]) = 20;
  if ( a2 && v4 < 0 )
    MiInsertLargeTbFlushEntry((__int64)v10, a2, (unsigned __int64)a1);
  else
    MiInsertRecursiveTbFlushEntries((__int64)v10, a2, (unsigned __int64)a1);
  if ( MiPteInShadowRange((unsigned __int64)a1) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v6 = 1LL;
      if ( !HIBYTE(word_140465BEC) )
      {
        v8 = (v5 & 1) == 0;
        goto LABEL_12;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
    {
      v8 = (v5 & 1) == 0;
LABEL_12:
      if ( !v8 )
        v5 |= 0x8000000000000000uLL;
    }
  }
  *a1 = v5;
  if ( (_DWORD)v6 )
    MiWritePteShadow((__int64)a1);
  MiFlushTbList((int *)v10, v5, v6, v7);
}
