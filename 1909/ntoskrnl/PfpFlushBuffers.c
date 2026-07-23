/*
 * XREFs of PfpFlushBuffers @ 0x14066DCC0
 * Callers:
 *     PfTLoggingWorker @ 0x14075FE90 (PfTLoggingWorker.c)
 * Callees:
 *     MmFreeAccessPfnBuffer @ 0x1400D4890 (MmFreeAccessPfnBuffer.c)
 *     PfpIsProcessInfoPresent @ 0x1400D48D0 (PfpIsProcessInfoPresent.c)
 *     PfpReturnAccessBuffer @ 0x1400D4A10 (PfpReturnAccessBuffer.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     RtlpInterlockedFlushSList @ 0x1401CC5F0 (RtlpInterlockedFlushSList.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     PfpFlushEventBuffers @ 0x14066D960 (PfpFlushEventBuffers.c)
 *     PfpCopyEvent @ 0x14066DA70 (PfpCopyEvent.c)
 *     PfpLogPageAccess @ 0x14066DFD0 (PfpLogPageAccess.c)
 *     PfTAcquireLogEntry @ 0x1408A0EA8 (PfTAcquireLogEntry.c)
 */

char PfpFlushBuffers()
{
  _SLIST_ENTRY *v0; // rbx
  _SLIST_ENTRY *v1; // rdi
  void *v2; // r13
  PSLIST_ENTRY v3; // rax
  _SLIST_ENTRY *v4; // rcx
  _SLIST_ENTRY *v5; // r12
  _SLIST_ENTRY *v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // r14
  _SLIST_ENTRY *v10; // r15
  int v11; // r14d
  __int64 v12; // r8
  __int64 v13; // rdx
  _SLIST_ENTRY *v15; // rcx
  _SLIST_ENTRY *Next; // r14
  unsigned __int64 v17; // r15
  __int64 v18; // rax
  unsigned __int64 *v19; // rcx
  unsigned __int64 v20; // rax
  int v21; // [rsp+30h] [rbp-29h]
  unsigned int v22[3]; // [rsp+34h] [rbp-25h] BYREF
  _QWORD v23[2]; // [rsp+40h] [rbp-19h] BYREF
  __int64 v24; // [rsp+50h] [rbp-9h] BYREF
  __int64 v25; // [rsp+58h] [rbp-1h]
  __int64 v26; // [rsp+60h] [rbp+7h] BYREF
  __int64 v27; // [rsp+68h] [rbp+Fh]
  __int64 Src; // [rsp+70h] [rbp+17h] BYREF
  int v29; // [rsp+78h] [rbp+1Fh]
  __int64 v30; // [rsp+7Ch] [rbp+23h]
  int v31; // [rsp+84h] [rbp+2Bh]

  v0 = 0LL;
  v1 = 0LL;
  v23[1] = 1LL;
  v2 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v23[0] = 0LL;
  v21 = PfpFlushEventBuffers();
  if ( v21 < 0 )
    return 0;
  v3 = RtlpInterlockedFlushSList(&ListHead);
  if ( !v3 )
  {
    v11 = v21;
    goto LABEL_17;
  }
  do
  {
    v4 = v3;
    v5 = v0;
    v3 = v3->Next;
    v4->Next = v0;
    v0 = v4;
  }
  while ( v3 );
  while ( 1 )
  {
    v6 = v0;
    v30 = 0LL;
    v0 = v5;
    v7 = MEMORY[0xFFFFF78000000004] * HIDWORD(*((_QWORD *)&v6[1].Next + 1));
    v8 = (MEMORY[0xFFFFF78000000004] * (unsigned __int64)(unsigned int)*((_QWORD *)&v6[1].Next + 1)) >> 24;
    HIDWORD(v30) = dword_14046785C
                 + ((((MEMORY[0xFFFFF78000000004] * ((unsigned __int64)v6[1].Next >> 32)) << 8)
                   + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)(unsigned int)v6[1].Next) >> 24)) >> 10);
    v29 = HIDWORD(v30);
    v31 = dword_14046785C + (((v7 << 8) + v8) >> 10);
    Src = 163851LL;
    PfpCopyEvent(&Src);
    if ( *((int *)&v6->Next + 2) > 1
      || (v25 = *((unsigned int *)&v6->Next + 3), v24 = 94215LL, PfpCopyEvent(&v24), *((int *)&v6->Next + 2) > 1) )
    {
      Next = v6[2].Next;
      if ( (unsigned __int64)Next <= *((_QWORD *)&v6[2].Next + 1) )
      {
        while ( 1 )
        {
          v17 = (unsigned __int64)Next->Next;
          v18 = PfTAcquireLogEntry(&unk_140467318, v22, 1LL);
          if ( !v18 )
            break;
          v19 = (unsigned __int64 *)(16LL * v22[0] + ((v18 + 31) & 0xFFFFFFFFFFFFFFF8uLL));
          v20 = *v19 & 0xFFFFFFFFFFFC6007uLL;
          v19[1] = v17;
          *v19 = v20 | 0x6007;
          Next = (_SLIST_ENTRY *)((char *)Next + 8);
          v21 = 0;
          if ( (unsigned __int64)Next > *((_QWORD *)&v6[2].Next + 1) )
          {
            v11 = 0;
            goto LABEL_13;
          }
        }
        v21 = -1073741670;
        v6[2].Next = Next;
      }
      goto LABEL_12;
    }
    v9 = *((_QWORD *)&v6[3].Next + 1);
    v10 = v6[3].Next;
    if ( v9 == 1 )
    {
      LODWORD(v9) = LODWORD(v6[4].Next) + 1;
    }
    else if ( v9 && !PfpIsProcessInfoPresent(*((_QWORD *)&v6[3].Next + 1)) )
    {
      v11 = v21;
      goto LABEL_14;
    }
    v2 = &v6[4].Next + 1;
    v1 = (_SLIST_ENTRY *)((char *)v6 + 72);
    if ( (_SLIST_ENTRY *)(&v6[4].Next + 1) < v6[2].Next )
      break;
LABEL_12:
    v11 = v21;
    if ( v21 < 0 )
      goto LABEL_24;
LABEL_13:
    v12 = (unsigned int)*((_QWORD *)&v6[1].Next + 1);
    v13 = HIDWORD(*((_QWORD *)&v6[1].Next + 1));
    v26 = 147463LL;
    v27 = dword_14046785C
        + (unsigned int)((((MEMORY[0xFFFFF78000000004] * v13) << 8)
                        + (((unsigned __int64)MEMORY[0xFFFFF78000000004] * v12) >> 24)) >> 10);
    PfpCopyEvent(&v26);
LABEL_14:
    MmFreeAccessPfnBuffer(v6, 0);
    if ( !v5 )
      goto LABEL_17;
    v5 = v5->Next;
  }
  while ( PfpLogPageAccess(v9, (_DWORD)v1, (unsigned int)v23, (_DWORD)v10, 0) )
  {
    v1 = (_SLIST_ENTRY *)((char *)v1 + 8);
    if ( v1 >= v6[2].Next )
      goto LABEL_12;
  }
  v11 = -1073741432;
LABEL_24:
  if ( *((int *)&v6->Next + 2) <= 1 )
  {
    memmove(v2, v1, ((char *)v6[2].Next - (char *)v1) & 0xFFFFFFFFFFFFFFF8uLL);
    v6[2].Next = (_SLIST_ENTRY *)((char *)v6[2].Next - 8 * (((char *)v1 - (_BYTE *)v2) >> 3));
  }
  PfpReturnAccessBuffer(v6);
LABEL_17:
  if ( v11 >= 0 )
    return 1;
  while ( v0 )
  {
    v15 = v0;
    v0 = v0->Next;
    PfpReturnAccessBuffer(v15);
  }
  return 0;
}
