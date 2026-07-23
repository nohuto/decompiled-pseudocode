/*
 * XREFs of PspAssignSiloSystemRootPath @ 0x140887DD0
 * Callers:
 *     NtSetInformationJobObject @ 0x140601B10 (NtSetInformationJobObject.c)
 * Callees:
 *     PsDereferenceSiloContext @ 0x14012C170 (PsDereferenceSiloContext.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     PsCreateSiloContext @ 0x140731E90 (PsCreateSiloContext.c)
 *     PsInsertSiloContext @ 0x1408879C0 (PsInsertSiloContext.c)
 */

__int64 __fastcall PspAssignSiloSystemRootPath(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int16 v4; // dx
  _WORD *v5; // r8
  __int64 result; // rax
  _WORD *v7; // rdi
  void *v8; // rcx
  unsigned int inserted; // ebx
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v4 = *a2;
  if ( v4 < 8u )
    return 3221225485LL;
  if ( (unsigned __int64)v4 - 2 > 0x208 )
    return 3221225485LL;
  v5 = (_WORD *)*((_QWORD *)a2 + 1);
  if ( (unsigned __int16)(*v5 - 65) > 0x19u || v5[1] != 58 || v5[2] != 92 || v5[((unsigned __int64)v4 >> 1) - 1] == 92 )
    return 3221225485LL;
  result = PsCreateSiloContext(a1, (unsigned int)v4 + 16, 1, 0LL, &v10);
  if ( (int)result >= 0 )
  {
    v7 = (_WORD *)v10;
    v8 = (void *)(v10 + 16);
    *(_QWORD *)(v10 + 8) = v10 + 16;
    *v7 = *a2;
    v7[1] = *a2;
    memmove(v8, *((const void **)a2 + 1), *a2);
    inserted = PsInsertSiloContext(a1, PsSystemRootSiloContextSlot, (__int64)v7);
    PsDereferenceSiloContext(v7);
    return inserted;
  }
  return result;
}
