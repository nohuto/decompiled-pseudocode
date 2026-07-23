/*
 * XREFs of MiMapContiguousMemory @ 0x1400E5E24
 * Callers:
 *     MmMapIoSpaceEx @ 0x1400E5DE0 (MmMapIoSpaceEx.c)
 *     MiAllocateContiguousMemory @ 0x1400E659C (MiAllocateContiguousMemory.c)
 * Callees:
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiFillSystemPtes @ 0x14005C300 (MiFillSystemPtes.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiMappingHasIoReferences @ 0x1400E647C (MiMappingHasIoReferences.c)
 *     MiMapContiguousMemoryLarge @ 0x140183324 (MiMapContiguousMemoryLarge.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiInsertPteTracker @ 0x1402CDCB0 (MiInsertPteTracker.c)
 */

__int64 __fastcall MiMapContiguousMemory(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  unsigned int v5; // esi
  unsigned __int64 v6; // r12
  unsigned __int64 v8; // rax
  int v9; // edx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // r13
  char v13; // r12
  unsigned int v14; // r14d
  int v15; // ebp
  ULONG_PTR v16; // rdi
  char v17; // al
  __int64 v18; // rdi
  unsigned int v19; // r14d
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v25; // [rsp+40h] [rbp-98h]
  _BYTE v26[16]; // [rsp+48h] [rbp-90h] BYREF
  unsigned __int64 v27; // [rsp+58h] [rbp-80h]
  __int64 v28; // [rsp+60h] [rbp-78h]
  unsigned __int64 v29; // [rsp+68h] [rbp-70h]
  int v30; // [rsp+74h] [rbp-64h]
  unsigned __int64 v31; // [rsp+78h] [rbp-60h]

  v25 = a2;
  v5 = a3;
  v6 = a2;
  if ( a3 == -1 )
    return 0LL;
  if ( a3 == 24 )
    return 0LL;
  if ( (a3 & 5) == 5 )
    return 0LL;
  if ( (a3 & 0xFFFFFFF8) == 0x10 )
    return 0LL;
  v8 = a2 + a1;
  v9 = a1;
  if ( v8 <= a1 )
  {
    if ( v8 )
      return 0LL;
  }
  v10 = a1 >> 12;
  v11 = v10 & 0xFFFFFFFFFLL;
  v12 = ((v9 & 0xFFF) + v6 + 4095) >> 12;
  if ( v10 < 0x1000000000LL )
    v11 = v10;
  v24 = v11;
  if ( (a3 & 2) != 0 && (MiFlags & 0x10000) != 0 )
    v5 = a3 & 0xFFFFFFFD;
  v23 = 0;
  if ( (v9 & 0x1FFFFF) == 0 && v6 >= 0x200000 )
  {
    v15 = a4 & 1;
    if ( (a4 & 1) == 0 )
    {
      v18 = MiMapContiguousMemoryLarge(v11, ((v9 & 0xFFF) + v6 + 4095) >> 12, v5, a4, (__int64)&v23);
      if ( v18 )
        goto LABEL_18;
    }
  }
  v13 = 0;
  v14 = v12;
  v15 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    v14 = v12 + 1;
    if ( (_DWORD)v12 == -1 )
      return 0LL;
    v13 = 1;
  }
  v16 = MiReservePtes((__int64)&qword_14043C060, (unsigned __int64 *)v14);
  if ( !v16 )
    return 0LL;
  v17 = v13 | 2;
  if ( (a4 & 2) == 0 )
    v17 = v13;
  if ( (int)MiFillSystemPtes(v16, v12, v24, v5, v17, &v23) < 0 )
  {
    MiReleasePtes((__int64)&qword_14043C060, v16, v14);
    return 0LL;
  }
  v6 = v25;
  v18 = (a1 & 0xFFF) + ((__int64)(v16 << 25) >> 16);
LABEL_18:
  v19 = v23 & 1;
  if ( (v23 & 1) != 0 )
    MiMappingHasIoReferences(v18);
  if ( (dword_14054117C & 1) != 0 )
  {
    v28 = v18;
    v31 = a1 >> 12;
    v21 = v19 | 2;
    v27 = v6;
    v22 = 1LL;
    v29 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v30 = a1 & 0xFFF;
    if ( !v15 )
      v21 = v19;
    if ( v5 >> 3 == 1 )
    {
      v22 = 0LL;
    }
    else if ( v5 >> 3 == 3 && (v5 & 7) != 0 )
    {
      v22 = 2LL;
    }
    MiInsertPteTracker(v26, 1LL, v21, v22);
  }
  return v18;
}
