/*
 * XREFs of MiCommitPageTablesForVad @ 0x140603C50
 * Callers:
 *     MiSplitPrivatePage @ 0x140020160 (MiSplitPrivatePage.c)
 *     MiSetProtectionOnSection @ 0x14004E5E0 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x1400509A0 (MiCommitExistingVad.c)
 *     MiCommitPageTableRangesForVad @ 0x1402D036C (MiCommitPageTableRangesForVad.c)
 *     MiInsertVadCharges @ 0x14060A180 (MiInsertVadCharges.c)
 * Callees:
 *     MiMakeHyperRangeAccessible @ 0x1400524E0 (MiMakeHyperRangeAccessible.c)
 *     MiVadPureReserve @ 0x140052A40 (MiVadPureReserve.c)
 *     MiVadLeafPagesPrecharged @ 0x140052AB0 (MiVadLeafPagesPrecharged.c)
 *     MiVadPageTableChargeLevel @ 0x140052AF0 (MiVadPageTableChargeLevel.c)
 *     MiCreateSystemWsles @ 0x1400E5550 (MiCreateSystemWsles.c)
 *     RtlAreBitsClearEx @ 0x1401159D0 (RtlAreBitsClearEx.c)
 *     MiUpdateChargedWsles @ 0x1402E5BF4 (MiUpdateChargedWsles.c)
 *     MiChargeFullProcessCommitment @ 0x140603B80 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiCommitPageTablesForVad(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r9
  _KPROCESS *Process; // r15
  unsigned int v6; // ebx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // r14
  __int64 v11; // r8
  __int64 result; // rax
  BOOL v13; // eax
  __int64 v14; // r8
  int v15; // r9d
  __int64 v16; // r11
  __int64 v17; // rax
  unsigned __int64 v18; // rbp
  __int64 v19; // r13
  unsigned __int64 v20; // rsi
  __int64 v21; // r15
  __int64 v22; // rdi
  __int64 v23; // r14
  __int64 v24; // rdx
  __int64 v25; // r12
  unsigned __int64 v26; // rbx
  int v27; // r10d
  unsigned __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  char v32; // al
  int v33; // [rsp+20h] [rbp-78h]
  BOOL v34; // [rsp+24h] [rbp-74h]
  __int64 v35; // [rsp+28h] [rbp-70h]
  ULONG_PTR v36; // [rsp+30h] [rbp-68h]
  __int64 v37; // [rsp+38h] [rbp-60h]
  unsigned __int64 v38; // [rsp+40h] [rbp-58h]
  unsigned __int64 v39; // [rsp+48h] [rbp-50h]
  __int64 v40; // [rsp+50h] [rbp-48h]
  __int64 i; // [rsp+58h] [rbp-40h]
  __int64 v43; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a2;
  Process = KeGetCurrentThread()->ApcState.Process;
  v36 = (ULONG_PTR)Process;
  if ( *(_QWORD *)(a1 + 16) != -2LL || !(unsigned int)MiVadPureReserve(a1) )
  {
    v6 = 0;
    v38 = (unsigned int)(v3 >> 21);
    v39 = (unsigned int)(a3 >> 21);
    v7 = v38;
    v8 = v39;
    v9 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[14];
    do
    {
      v10 = 2 - v6;
      v11 = *(_QWORD *)(v9 + 16 * (v10 + 31) + 48);
      result = MiMakeHyperRangeAccessible(v11 + (v7 >> 3), v11 + (v8 >> 3), &v43);
      if ( (int)result < 0 )
        return result;
      ++v6;
      *(_QWORD *)(v9 + 8 * v10 + 584) += v43;
      v7 >>= 9;
      v8 >>= 9;
    }
    while ( v6 < 2 );
    v40 = *(_QWORD *)&Process[1].IdealNode[14];
    MiVadPageTableChargeLevel(a1);
    v13 = MiVadLeafPagesPrecharged(a1);
    v15 = 0;
    v34 = v13;
    v37 = v14;
    v17 = v16 + 568;
    LODWORD(v43) = 0;
    for ( i = v16 + 568; ; v17 = i )
    {
      v33 = v15;
      v18 = v38;
      v19 = 0LL;
      v20 = v39;
      v21 = 0LL;
      v22 = 0LL;
      v23 = v17;
      do
      {
        v24 = 0LL;
        v25 = 0LL;
        v35 = 0LL;
        v26 = v18;
        if ( v18 <= v20 )
        {
          while ( 1 )
          {
            if ( !_bittest64(*(const signed __int64 **)(v23 + 8), v26) )
            {
              ++v25;
              if ( v15 != 1 )
              {
                LODWORD(v43) = 1;
                if ( !(unsigned int)MiCreateSystemWsles() && (v26 == v18 || (v26 & 7) == 0) )
                {
                  v32 = RtlAreBitsClearEx(v23, v26 & 0xFFFFFFFFFFFFFFF8uLL, 8uLL);
                  v24 = v35;
                  v15 = v33;
                  v27 = v43;
                  if ( v32 == 1 )
                    v24 = ++v35;
                }
                goto LABEL_10;
              }
              _bittestandset64(*(signed __int64 **)(v23 + 8), v26);
            }
            v27 = v43;
LABEL_10:
            if ( ++v26 > v20 )
            {
              v14 = v37;
              goto LABEL_12;
            }
          }
        }
        v27 = v43;
LABEL_12:
        if ( v22 >= v14 )
          v19 += v25;
        v21 += v24;
        v18 >>= 9;
        v20 >>= 9;
        ++v22;
        v23 -= 16LL;
      }
      while ( v22 < 3 );
      if ( v15 )
        return 0LL;
      v28 = v21 + v19;
      if ( !v34 && !(unsigned int)MiVadPureReserve(a1) )
      {
        v30 = *(unsigned int *)(a1 + 52);
        LODWORD(v30) = v30 & 0x7FFFFFFF;
        v31 = v30 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31);
        if ( v31 != 0x7FFFFFFFELL )
          v28 += v31;
      }
      if ( v28 )
      {
        result = MiChargeFullProcessCommitment(v36, v28);
        if ( (int)result < 0 )
          return result;
        v27 = v43;
      }
      if ( v27 != 1 )
        return 0LL;
      *(_QWORD *)(v40 + 288) += v19;
      if ( v21 )
        MiUpdateChargedWsles(v36 + 1280);
      v14 = v37;
      v15 = 1;
    }
  }
  v29 = *(unsigned int *)(a1 + 52);
  LODWORD(v29) = v29 & 0x7FFFFFFF;
  if ( !(v29 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31)) )
    return 0LL;
  result = MiChargeFullProcessCommitment(
             (ULONG_PTR)Process,
             v29 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31));
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
