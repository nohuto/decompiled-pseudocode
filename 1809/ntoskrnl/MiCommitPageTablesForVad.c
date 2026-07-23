/*
 * XREFs of MiCommitPageTablesForVad @ 0x1405EDBB0
 * Callers:
 *     MiCommitExistingVad @ 0x140071460 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140071E70 (MiSetProtectionOnSection.c)
 *     MiSplitPrivatePage @ 0x140083B60 (MiSplitPrivatePage.c)
 *     MiCommitPageTableRangesForVad @ 0x1402BA34C (MiCommitPageTableRangesForVad.c)
 *     MiInsertVadCharges @ 0x1405F2E60 (MiInsertVadCharges.c)
 * Callees:
 *     RtlAreBitsClear @ 0x14000F1D0 (RtlAreBitsClear.c)
 *     MiMakeHyperRangeAccessible @ 0x14006E3C0 (MiMakeHyperRangeAccessible.c)
 *     MiVadPureReserve @ 0x140070D20 (MiVadPureReserve.c)
 *     MiIsVadLarge @ 0x140070D80 (MiIsVadLarge.c)
 *     MiCreateSystemWsles @ 0x1400F3224 (MiCreateSystemWsles.c)
 *     MiUpdateChargedWsles @ 0x1402CB87C (MiUpdateChargedWsles.c)
 *     MiChargeFullProcessCommitment @ 0x1405E1510 (MiChargeFullProcessCommitment.c)
 *     MiGetAweVadPageSize @ 0x140851164 (MiGetAweVadPageSize.c)
 */

__int64 __fastcall MiCommitPageTablesForVad(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // r8
  _KPROCESS *Process; // r15
  unsigned __int64 v8; // r12
  unsigned int v9; // esi
  unsigned int v10; // ebp
  unsigned int v11; // ebx
  __int64 v12; // rdi
  __int64 v13; // r14
  __int64 v14; // r8
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r10
  int v19; // r9d
  int v20; // r11d
  int v21; // edx
  unsigned int v22; // ebp
  int v23; // r15d
  int v24; // r14d
  unsigned int v25; // esi
  unsigned int i; // edi
  int v27; // ecx
  int v28; // r12d
  __int64 v29; // r13
  unsigned int v30; // ebx
  unsigned __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // rcx
  BOOLEAN v35; // al
  unsigned int IsVadLarge; // [rsp+20h] [rbp-68h]
  int v37; // [rsp+24h] [rbp-64h]
  int v38; // [rsp+28h] [rbp-60h]
  __int64 v39; // [rsp+30h] [rbp-58h]
  __int64 v40; // [rsp+38h] [rbp-50h]
  unsigned int v42; // [rsp+98h] [rbp+10h]
  int v43; // [rsp+A0h] [rbp+18h]
  __int64 v44; // [rsp+A8h] [rbp+20h] BYREF

  v5 = a2;
  Process = KeGetCurrentThread()->ApcState.Process;
  v40 = (__int64)Process;
  if ( *(_QWORD *)(a1 + 16) == -2LL && (unsigned int)MiVadPureReserve(a1) )
  {
    v32 = *(unsigned int *)(a1 + 52);
    LODWORD(v32) = v32 & 0x7FFFFFFF;
    if ( !(v32 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31)) )
      return 0LL;
    result = MiChargeFullProcessCommitment(
               (__int64)Process,
               v32 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31));
    if ( (int)result >= 0 )
      return 0LL;
  }
  else
  {
    v8 = a3 >> 21;
    v9 = v5 >> 21;
    v42 = v9;
    v10 = v8;
    v11 = 0;
    v43 = v8;
    v12 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
    while ( 1 )
    {
      v13 = 2 - v11;
      v14 = *(_QWORD *)(v12 + 16 * (v13 + 28) + 48);
      result = MiMakeHyperRangeAccessible(
                 v14 + ((unsigned __int64)v9 >> 3),
                 v14 + ((unsigned __int64)v10 >> 3),
                 &v44,
                 a4);
      if ( (int)result < 0 )
        break;
      ++v11;
      *(_DWORD *)(v12 + 4 * v13 + 536) += v44;
      v9 >>= 9;
      v10 >>= 9;
      if ( v11 >= 2 )
      {
        v39 = *(_QWORD *)&Process[1].IdealGlobalNode + 48LL;
        IsVadLarge = MiIsVadLarge(a1);
        v19 = IsVadLarge;
        v20 = 1;
        if ( !IsVadLarge && (*(_BYTE *)(a1 + 48) & 7) == 3 )
        {
          if ( (int)MiGetAweVadPageSize(a1, v16, v17, IsVadLarge) > 0 )
            v19 = v20;
          IsVadLarge = v19;
        }
        v21 = 0;
        v38 = 0;
        while ( 1 )
        {
          v37 = v21;
          v22 = v42;
          v23 = 0;
          v24 = 0;
          v25 = v8;
          for ( i = 0; i < 3; ++i )
          {
            v27 = 0;
            LODWORD(v44) = 0;
            v28 = 0;
            v29 = v18 + 16LL * (2 - i);
            v30 = v22;
            if ( v22 <= v25 )
            {
              do
              {
                if ( !_bittest(*(const signed __int32 **)(v29 + 448), v30) )
                {
                  ++v28;
                  if ( v21 == 1 )
                  {
                    _bittestandset(*(signed __int32 **)(v29 + 448), v30);
                  }
                  else
                  {
                    v38 = v20;
                    if ( !(unsigned int)MiCreateSystemWsles() && (v30 == v22 || (v30 & 7) == 0) )
                    {
                      v35 = RtlAreBitsClear((PRTL_BITMAP)(v29 + 440), v30 & 0xFFFFFFF8, 8u);
                      v27 = v44;
                      v20 = 1;
                      v21 = v37;
                      if ( v35 == 1 )
                      {
                        v27 = v44 + 1;
                        LODWORD(v44) = v44 + 1;
                      }
                    }
                  }
                }
                ++v30;
              }
              while ( v30 <= v25 );
              v19 = IsVadLarge;
              v18 = v39;
            }
            if ( !v19 || i )
              v23 += v28;
            v24 += v27;
            v22 >>= 9;
            v25 >>= 9;
          }
          if ( v21 )
            break;
          v31 = (unsigned int)(v24 + v23);
          if ( !v19 && !(unsigned int)MiVadPureReserve(a1) )
          {
            v33 = *(unsigned int *)(a1 + 52);
            LODWORD(v33) = v33 & 0x7FFFFFFF;
            v34 = v33 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31);
            if ( v34 != 0x7FFFFFFFELL )
              v31 += v34;
          }
          if ( v31 )
          {
            result = MiChargeFullProcessCommitment(v40, v31);
            if ( (int)result < 0 )
              return result;
            v19 = IsVadLarge;
            v20 = 1;
            v18 = v39;
          }
          if ( v38 != 1 )
            return 0LL;
          *(_DWORD *)(v18 + 180) += v23;
          if ( v24 )
            MiUpdateChargedWsles(v40 + 1280);
          LODWORD(v8) = v43;
          v21 = v20;
        }
        return 0LL;
      }
    }
  }
  return result;
}
