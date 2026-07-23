/*
 * XREFs of MiAdjustPteBins @ 0x1400EFB88
 * Callers:
 *     MiWorkingSetManager @ 0x1400EF634 (MiWorkingSetManager.c)
 * Callees:
 *     MiEmptyPteBins @ 0x1400EFC90 (MiEmptyPteBins.c)
 *     MiPteBinsNeedTrimming @ 0x1400F0480 (MiPteBinsNeedTrimming.c)
 *     MiAttemptCoalesce @ 0x140100B80 (MiAttemptCoalesce.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall MiAdjustPteBins(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  _QWORD **v12; // rbx
  _QWORD v14[3]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 3LL;
  v14[0] = &qword_14043C060;
  v5 = v14;
  v6 = 3LL;
  v14[1] = &unk_14043BCD8;
  v14[2] = &unk_14043BC78;
  do
  {
    v7 = *v5;
    if ( (*(_DWORD *)(*v5 + 24LL) & 1) != 0 )
    {
      MiEmptyPteBins(*v5, 0LL, a3, a4);
      if ( (unsigned int)MiPteBinsNeedTrimming(v7, v8, v9, v10) == 1 )
        MiEmptyPteBins(v7, 1LL, a3, a4);
    }
    ++v5;
    --v6;
  }
  while ( v6 );
  LOBYTE(v11) = byte_14043BD3E + 1;
  byte_14043BD3E = v11;
  if ( (v11 & 0xF) == 0 )
  {
    v12 = (_QWORD **)v14;
    do
    {
      v11 = 0xCCCCCCCCCCCCCCCDuLL * (*v12)[7];
      if ( (*v12)[11] > (*v12)[7] / 0xAuLL )
        LOBYTE(v11) = MiAttemptCoalesce(*v12, 0LL, **v12);
      ++v12;
      --v4;
    }
    while ( v4 );
  }
  return v11;
}
