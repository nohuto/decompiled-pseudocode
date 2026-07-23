/*
 * XREFs of RtlInitializeNtUserPfn @ 0x18008C500
 * Callers:
 *     <none>
 * Callees:
 *     sub_180035F18 @ 0x180035F18 (sub_180035F18.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall RtlInitializeNtUserPfn(void *Src, size_t Size, void *a3, size_t a4, void *Srca, size_t Sizea)
{
  ULONG_PTR v6; // r12
  __int64 v11; // rbp

  v6 = LdrSystemDllInitBlock.MitigationOptionsMap.Map[2];
  v11 = *(_QWORD *)_guard_check_icall_fptr;
  if ( byte_18017A1D8
    || (Size & 7) != 0
    || Size > 0xC0
    || (a4 & 7) != 0
    || a4 > 0xC0
    || (Sizea & 7) != 0
    || Sizea > 0x58 )
  {
    return 3221225485LL;
  }
  sub_180035F18(0);
  memmove(off_18017A000, Src, Size);
  memmove(off_18017A0C0, a3, a4);
  memmove(off_18017A180, Srca, Sizea);
  byte_18017A1D8 = 1;
  sub_180035F18(1);
  if ( v6 != LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] || v11 != *(_QWORD *)_guard_check_icall_fptr )
    __fastfail(0x13u);
  return 0LL;
}
