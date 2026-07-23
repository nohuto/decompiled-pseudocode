/*
 * XREFs of MdlInvariantPostProcessing1 @ 0x14030A83C
 * Callers:
 *     IovpCompleteRequest2 @ 0x140930620 (IovpCompleteRequest2.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14005C0C0 (MmMapLockedPagesSpecifyCache.c)
 *     MmMdlPageContentsState @ 0x14011BBC0 (MmMdlPageContentsState.c)
 *     RtlpComputeCrcInternal @ 0x14015CA3C (RtlpComputeCrcInternal.c)
 *     MdlInvariantFindMdlInfo @ 0x14030A6AC (MdlInvariantFindMdlInfo.c)
 *     VerifierBugCheckIfAppropriate @ 0x140930D84 (VerifierBugCheckIfAppropriate.c)
 */

char __fastcall MdlInvariantPostProcessing1(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  _UNKNOWN **MdlInfo; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  char v9; // dl
  __int64 v10; // rcx
  __int64 v11; // r11
  _UNKNOWN **v12; // rbp
  unsigned __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  __int64 v17; // rbx
  ULONG_PTR v18; // rdx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  MdlInfo = &retaddr;
  v5 = 0LL;
  v6 = *(_QWORD *)(a2 + 8);
  if ( !*(_QWORD *)v6 )
  {
    LOBYTE(MdlInfo) = KeGetCurrentIrql();
    if ( (unsigned __int8)MdlInfo >= 2u || *(_DWORD *)(v6 + 40) != -1 )
    {
      LOBYTE(MdlInfo) = MmVerifierData;
      v9 = *(_BYTE *)(a2 + 67);
      if ( (MmVerifierData & 0x2000) == 0 || (MmVerifierData & 0x4000) != 0 || v9 == *(_BYTE *)(a2 + 66) )
      {
        LODWORD(MdlInfo) = MmMdlPageContentsState(v6, 2u);
        if ( (_DWORD)MdlInfo == 1 )
        {
          v10 = *(_QWORD *)(a1 + 224);
          if ( v10 )
            *(_QWORD *)(v10 + 16) = *(_QWORD *)(a2 + 8);
          MdlInfo = (_UNKNOWN **)MdlInvariantFindMdlInfo(a1, *(_QWORD *)(a2 + 8));
          v12 = MdlInfo;
          if ( MdlInfo || *(_BYTE *)a3 != 4 )
          {
            if ( (*(_BYTE *)(v11 + 10) & 5) != 0 )
            {
              v13 = *(_QWORD *)(v11 + 24);
            }
            else
            {
              MdlInfo = (_UNKNOWN **)MmMapLockedPagesSpecifyCache((PMDL)v11, 0, MmCached, 0LL, 0, 0x40000020u);
              v13 = (unsigned __int64)MdlInfo;
            }
            if ( v13 )
            {
              if ( !v12
                || (v14 = *((unsigned int *)v12 + 6),
                    v15 = *(unsigned int *)(*(_QWORD *)(a2 + 8) + 40LL),
                    (_DWORD)v14 == (_DWORD)v15) )
              {
                LOBYTE(MdlInfo) = *(_BYTE *)a3;
                if ( *(_BYTE *)a3 == 4 )
                {
                  MdlInfo = (_UNKNOWN **)RtlpComputeCrcInternal(
                                           v13,
                                           *(unsigned int *)(*(_QWORD *)(a2 + 8) + 40LL),
                                           0LL,
                                           &Crc64Ctrl);
                  if ( MdlInfo == (_UNKNOWN **)v12[1] )
                    return (char)MdlInfo;
                  v18 = 4112LL;
                  goto LABEL_25;
                }
              }
              else
              {
                v16 = (unsigned __int64)v12[2];
                if ( v13 < v16 || v13 + v15 > v16 + v14 )
                {
                  LOBYTE(v5) = *(_BYTE *)a3 != 4;
                  v18 = v5 + 4112;
                  goto LABEL_25;
                }
                LOBYTE(MdlInfo) = *(_BYTE *)a3;
              }
              if ( (_BYTE)MdlInfo == 3 )
              {
                LOBYTE(MdlInfo) = KeGetCurrentIrql();
                if ( (unsigned __int8)MdlInfo < 2u )
                {
                  v17 = RtlpComputeCrcInternal(v13, *(unsigned int *)(*(_QWORD *)(a2 + 8) + 40LL), 0LL, &Crc64Ctrl);
                  KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&IovMdlInvariant10Milliseconds);
                  MdlInfo = (_UNKNOWN **)RtlpComputeCrcInternal(
                                           v13,
                                           *(unsigned int *)(*(_QWORD *)(a2 + 8) + 40LL),
                                           0LL,
                                           &Crc64Ctrl);
                  if ( (_UNKNOWN **)v17 != MdlInfo )
                  {
                    v18 = 4113LL;
LABEL_25:
                    LOBYTE(MdlInfo) = VerifierBugCheckIfAppropriate(0xC4u, v18, *(_QWORD *)(a3 + 40), a2, v13);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return (char)MdlInfo;
}
