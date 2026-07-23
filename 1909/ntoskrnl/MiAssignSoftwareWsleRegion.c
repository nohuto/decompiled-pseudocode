/*
 * XREFs of MiAssignSoftwareWsleRegion @ 0x140188508
 * Callers:
 *     MiInitializeSystemVa @ 0x1409EFD10 (MiInitializeSystemVa.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x140085750 (RtlFindClearBitsAndSet.c)
 *     ExGenRandom @ 0x14009C340 (ExGenRandom.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall MiAssignSoftwareWsleRegion(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // r9
  unsigned __int64 v5; // r9
  __int64 v6; // r9
  unsigned int v7; // r10d
  unsigned int v8; // r11d
  unsigned __int64 v9; // rdi
  _QWORD *v10; // rbx
  __int64 v11; // rsi
  __int16 v12; // ax
  __int64 result; // rax
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-49h] BYREF
  _QWORD v15[6]; // [rsp+30h] [rbp-39h] BYREF
  signed __int32 v16[16]; // [rsp+60h] [rbp-9h] BYREF

  *(&BitMapHeader.SizeOfBitMap + 1) = 0;
  memset(v15, 0, sizeof(v15));
  memset(v16, 0, sizeof(v16));
  BitMapHeader.Buffer = (unsigned int *)v16;
  BitMapHeader.SizeOfBitMap = 512;
  if ( (MI_READ_PTE_LOCK_FREE(8 * ((a2 >> 39) & 0x1FF) - 0x90482413000LL) & 1) != 0 )
  {
    v5 = v4 << 25 >> 16;
    do
    {
      if ( MI_READ_PTE_LOCK_FREE(v5) )
        _bittestandset(v16, v7);
      v5 = v6 + 8;
    }
    while ( v7 + 1 < v8 );
  }
  LODWORD(v15[3]) = 1;
  v9 = a2 & 0xFFFFFF8000000000uLL;
  v10 = &v15[1];
  v11 = 2LL;
  v15[2] = 0x1000000000LL;
  v15[5] = 0x80000000LL;
  do
  {
    v12 = ExGenRandom(1);
    *v10 = v9
         + ((unsigned __int64)RtlFindClearBitsAndSet(
                                &BitMapHeader,
                                ((unsigned __int64)(v10[1] + 0x3FFFFFFFLL) >> 30) + 1,
                                v12 & 0x1FF) << 30);
    v10 += 3;
    --v11;
  }
  while ( v11 );
  qword_140465BA8 = v15[1];
  qword_140465BB0 = v15[1];
  qword_140465BB8 = v15[1];
  qword_140465AC8 = v15[5];
  qword_140465AC0 = v15[4];
  *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2912LL) = v15[4];
  result = qword_140465AC8;
  *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2920LL) = qword_140465AC8;
  return result;
}
