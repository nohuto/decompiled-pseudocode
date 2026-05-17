/*
 * XREFs of RtlInitializeNtUserPfn @ 0x18008FC10
 * Callers:
 *     <none>
 * Callees:
 *     LdrProtectMrdata @ 0x180060510 (LdrProtectMrdata.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

__int64 __fastcall RtlInitializeNtUserPfn(
        void *Src,
        size_t Size,
        unsigned __int64 *a3,
        size_t a4,
        void *Srca,
        size_t Sizea)
{
  __int64 v6; // r12
  __int64 v11; // rbp
  unsigned __int64 v12; // rdx
  unsigned __int64 *v13; // r8
  __int64 v14; // r9

  v6 = qword_1801783A0;
  v11 = *(_QWORD *)_guard_check_icall_fptr;
  if ( byte_1801781D8
    || (Size & 7) != 0
    || Size > 0xC0
    || (a4 & 7) != 0
    || a4 > 0xC0
    || (Sizea & 7) != 0
    || Sizea > 0x58 )
  {
    return 3221225485LL;
  }
  LdrProtectMrdata(0, Size, a3, a4);
  memmove(NtUserPfn, Src, Size);
  memmove(off_1801780C0, a3, a4);
  memmove(off_180178180, Srca, Sizea);
  byte_1801781D8 = 1;
  LdrProtectMrdata(1, v12, v13, v14);
  if ( v6 != qword_1801783A0 || v11 != *(_QWORD *)_guard_check_icall_fptr )
    __fastfail(0x13u);
  return 0LL;
}
