/*
 * XREFs of MiReduceUnusedSubsectionCount @ 0x14007BC44
 * Callers:
 *     MiRemoveUnusedSubsection @ 0x14007BBB8 (MiRemoveUnusedSubsection.c)
 *     MiDeleteEmptySubsections @ 0x140093868 (MiDeleteEmptySubsections.c)
 *     MiDeleteCachedSubsection @ 0x1402A1C08 (MiDeleteCachedSubsection.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiReduceUnusedSubsectionCount(_DWORD *a1)
{
  __int64 v1; // r8
  unsigned int v2; // eax
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  signed __int64 result; // rax

  v1 = *(_QWORD *)(qword_14043B808 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  v2 = a1[11];
  v3 = 8LL * v2;
  if ( v3 <= 0xFE0 )
  {
    v4 = v3 + 31;
    goto LABEL_7;
  }
  if ( ((8 * (_WORD)v2) & 0xFFFu) <= 0xFC0 && v3 < 0x10000 )
  {
    v4 = v3 + 15;
LABEL_7:
    v5 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
    goto LABEL_8;
  }
  v5 = (v3 + 4095) & 0xFFFFFFFFFFFFF000uLL;
LABEL_8:
  result = _InterlockedExchangeAdd64(&qword_140439C98, -(__int64)v5);
  *(_QWORD *)(v1 + 1632) -= v5;
  return result;
}
