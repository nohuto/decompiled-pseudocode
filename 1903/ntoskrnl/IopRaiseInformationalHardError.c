/*
 * XREFs of IopRaiseInformationalHardError @ 0x1408546A0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ExRaiseHardError @ 0x140913EE0 (ExRaiseHardError.c)
 */

void __fastcall IopRaiseInformationalHardError(_QWORD *P)
{
  void *v2; // rcx
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF
  char *v4; // [rsp+58h] [rbp+20h] BYREF

  v4 = (char *)(P + 3);
  v2 = (void *)P[4];
  if ( ExReadyForErrors )
  {
    ExRaiseHardError(
      *((_DWORD *)P + 4),
      v2 != 0LL,
      v2 != 0LL,
      (unsigned __int64)&v4 & -(__int64)(v2 != 0LL),
      7,
      (__int64)&v3);
    v2 = (void *)P[4];
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
  _InterlockedDecrement(&dword_140461ADC);
}
