/*
 * XREFs of PfpCopyEvent @ 0x14066DA70
 * Callers:
 *     PfpFlushEventBuffers @ 0x14066D960 (PfpFlushEventBuffers.c)
 *     PfpFlushBuffers @ 0x14066DCC0 (PfpFlushBuffers.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     PfpIsProcessInfoPresent @ 0x1400D48D0 (PfpIsProcessInfoPresent.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     PsLookupProcessByProcessId @ 0x1405D0AD0 (PsLookupProcessByProcessId.c)
 *     PfpLogPageAccess @ 0x14066DFD0 (PfpLogPageAccess.c)
 *     PfTReplaceCurrentBuffer @ 0x14066E61C (PfTReplaceCurrentBuffer.c)
 */

__int64 __fastcall PfpCopyEvent(_QWORD *Src)
{
  __int64 v2; // rcx
  unsigned __int8 v3; // al
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rcx
  PEPROCESS v14; // r9
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // [rsp+30h] [rbp-18h] BYREF
  __int64 v17; // [rsp+38h] [rbp-10h]
  PEPROCESS Process; // [rsp+50h] [rbp+8h] BYREF

  if ( (*Src & 0x1F000LL) == 0xA000 )
  {
    v2 = Src[4];
    v16 = 0LL;
    v17 = 0LL;
    v3 = v2;
    if ( (v2 & 0x7FFFFFFFFFFFFFFFuLL) >= 0xFF )
      v3 = -1;
    v4 = 2LL;
    if ( v2 >= 0 )
      v4 = 4098LL;
    v5 = (_DWORD)Src[6] & 0xFF000000;
    LODWORD(v17) = v3 | (*((_DWORD *)Src + 12) << 8);
    v6 = Src[5];
    v7 = Src[3] << 12;
    v16 = v4 & 0xFFFFFFFF00FFFFFFuLL | v5;
    Process = (PEPROCESS)(v7 | 1);
    v8 = PfpLogPageAccess(v6, (unsigned int)&Process, (unsigned int)&v16, (int)Src + 24, 1);
    if ( v8 )
    {
      v9 = ((qword_140467358 + 47) & 0xFFFFFFFFFFFFFFF8uLL)
         + 40LL * (*(unsigned __int16 *)(v8 + 10) - (unsigned int)*(unsigned __int16 *)(qword_140467358 + 36));
      if ( (*(_BYTE *)(v9 + 8) & 4) != 0
        && PsLookupProcessByProcessId((HANDLE)*((unsigned int *)Src + 13), &Process) >= 0 )
      {
        v14 = Process;
        if ( (((__int64)Process[1].Header.WaitListHead.Flink ^ (__int64)Process[1].ThreadListHead.Flink) & 0x1FFFFFFFFFFFFFFFLL) == Src[5]
          && PfpIsProcessInfoPresent((__int64)Process) )
        {
          v15 = *(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF8uLL | 1;
          *(_QWORD *)(v9 + 8) = v15;
          *(_QWORD *)(v9 + 8) = v15 & 7 | (8
                                         * ((__int64)v14[1].Header.WaitListHead.Flink ^ (__int64)v14[1].ThreadListHead.Flink));
          *(_DWORD *)(v9 + 28) = v14[1].ActiveGroupsMask;
          *(_DWORD *)(v9 + 24) = v14[1].Header.WaitListHead.Flink;
          *(_QWORD *)(v9 + 16) = v14;
        }
        ObfDereferenceObjectWithTag(v14, 0x746C6644u);
      }
      return 0LL;
    }
    else
    {
      return 3221225864LL;
    }
  }
  else
  {
    v11 = qword_140467330;
    v12 = (*Src >> 2) & 0x3FFLL;
    if ( (unsigned int)(v12 + *(_DWORD *)(qword_140467330 + 16)) > *(_DWORD *)(qword_140467330 + 20) )
    {
      while ( (unsigned int)PfTReplaceCurrentBuffer(&unk_140467318, v11) != -1073741823 )
      {
        v11 = qword_140467330;
        if ( (unsigned int)(v12 + *(_DWORD *)(qword_140467330 + 16)) <= *(_DWORD *)(qword_140467330 + 20) )
          goto LABEL_10;
      }
      return 3221225626LL;
    }
    else
    {
LABEL_10:
      v13 = *(unsigned int *)(v11 + 16);
      *(_DWORD *)(v11 + 16) = v13 + v12;
      memmove((void *)(((v11 + 31) & 0xFFFFFFFFFFFFFFF8uLL) + 16 * v13), Src, (unsigned int)(16 * v12));
      return 0LL;
    }
  }
}
