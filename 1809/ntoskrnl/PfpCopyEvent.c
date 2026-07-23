/*
 * XREFs of PfpCopyEvent @ 0x14066ADE0
 * Callers:
 *     PfpFlushEventBuffers @ 0x14066ACD0 (PfpFlushEventBuffers.c)
 *     PfpFlushBuffers @ 0x14066B030 (PfpFlushBuffers.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     PfpIsProcessInfoPresent @ 0x1400E26DC (PfpIsProcessInfoPresent.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     PsLookupProcessByProcessId @ 0x140647C40 (PsLookupProcessByProcessId.c)
 *     PfpLogPageAccess @ 0x14066B330 (PfpLogPageAccess.c)
 *     PfTReplaceCurrentBuffer @ 0x14066B97C (PfTReplaceCurrentBuffer.c)
 */

__int64 __fastcall PfpCopyEvent(_QWORD *Src)
{
  __int64 v2; // rcx
  unsigned __int8 v3; // al
  _QWORD *v4; // r9
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rcx
  PEPROCESS v15; // r9
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // [rsp+30h] [rbp-18h] BYREF
  __int64 v18; // [rsp+38h] [rbp-10h]
  PEPROCESS Process; // [rsp+50h] [rbp+8h] BYREF

  if ( (*Src & 0x1F000LL) == 0xA000 )
  {
    v2 = Src[4];
    v17 = 0LL;
    v18 = 0LL;
    v3 = v2;
    if ( (v2 & 0x7FFFFFFFFFFFFFFFuLL) >= 0xFF )
      v3 = -1;
    v4 = Src + 3;
    v5 = 2LL;
    if ( v2 >= 0 )
      v5 = 4098LL;
    v6 = (_DWORD)Src[6] & 0xFF000000;
    LODWORD(v18) = v3 | (*((_DWORD *)Src + 12) << 8);
    v7 = Src[5];
    v8 = *v4 << 12;
    v17 = v5 & 0xFFFFFFFF00FFFFFFuLL | v6;
    Process = (PEPROCESS)(v8 | 1);
    v9 = PfpLogPageAccess(v7, (unsigned int)&Process, (unsigned int)&v17, (_DWORD)v4, 1);
    if ( v9 )
    {
      v10 = ((qword_14043CC58 + 47) & 0xFFFFFFFFFFFFFFF8uLL)
          + 40LL * (*(unsigned __int16 *)(v9 + 10) - (unsigned int)*(unsigned __int16 *)(qword_14043CC58 + 36));
      if ( (*(_BYTE *)(v10 + 8) & 4) != 0
        && PsLookupProcessByProcessId((HANDLE)*((unsigned int *)Src + 13), &Process) >= 0 )
      {
        v15 = Process;
        if ( (((__int64)Process[1].Header.WaitListHead.Flink ^ (__int64)Process[1].ThreadListHead.Flink) & 0x1FFFFFFFFFFFFFFFLL) == Src[5]
          && PfpIsProcessInfoPresent((__int64)Process) )
        {
          v16 = *(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF8uLL | 1;
          *(_QWORD *)(v10 + 8) = v16;
          *(_QWORD *)(v10 + 8) = v16 & 7 | (8
                                          * ((__int64)v15[1].Header.WaitListHead.Flink ^ (__int64)v15[1].ThreadListHead.Flink));
          *(_DWORD *)(v10 + 28) = v15[1].ThreadSeed[1];
          *(_DWORD *)(v10 + 24) = v15[1].Header.WaitListHead.Flink;
          *(_QWORD *)(v10 + 16) = v15;
        }
        ObfDereferenceObjectWithTag(v15, 0x746C6644u);
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
    v12 = qword_14043CC30;
    v13 = (*Src >> 2) & 0x3FFLL;
    if ( (unsigned int)(v13 + *(_DWORD *)(qword_14043CC30 + 16)) > *(_DWORD *)(qword_14043CC30 + 20) )
    {
      while ( (unsigned int)PfTReplaceCurrentBuffer(&unk_14043CC18, v12) != -1073741823 )
      {
        v12 = qword_14043CC30;
        if ( (unsigned int)(v13 + *(_DWORD *)(qword_14043CC30 + 16)) <= *(_DWORD *)(qword_14043CC30 + 20) )
          goto LABEL_10;
      }
      return 3221225626LL;
    }
    else
    {
LABEL_10:
      v14 = *(unsigned int *)(v12 + 16);
      *(_DWORD *)(v12 + 16) = v14 + v13;
      memmove((void *)(((v12 + 31) & 0xFFFFFFFFFFFFFFF8uLL) + 16 * v14), Src, (unsigned int)(16 * v13));
      return 0LL;
    }
  }
}
