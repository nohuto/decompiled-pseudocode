/*
 * XREFs of IopRaiseInformationalHardError @ 0x14081A770
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     ExRaiseHardError @ 0x1408D6600 (ExRaiseHardError.c)
 */

void __fastcall IopRaiseInformationalHardError(char *P)
{
  void *v2; // rcx
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF
  char *v4; // [rsp+58h] [rbp+20h] BYREF

  v4 = P + 24;
  v2 = (void *)*((_QWORD *)P + 4);
  if ( ExReadyForErrors )
  {
    ExRaiseHardError(
      *((unsigned int *)P + 4),
      v2 != 0LL,
      v2 != 0LL,
      (unsigned __int64)&v4 & -(__int64)(v2 != 0LL),
      7,
      &v3);
    v2 = (void *)*((_QWORD *)P + 4);
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
  _InterlockedDecrement(&dword_140435F3C);
}
