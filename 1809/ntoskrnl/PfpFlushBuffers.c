/*
 * XREFs of PfpFlushBuffers @ 0x14066B030
 * Callers:
 *     PfTLoggingWorker @ 0x140740B20 (PfTLoggingWorker.c)
 * Callees:
 *     MmFreeAccessPfnBuffer @ 0x1400E269C (MmFreeAccessPfnBuffer.c)
 *     PfpIsProcessInfoPresent @ 0x1400E26DC (PfpIsProcessInfoPresent.c)
 *     PfpReturnAccessBuffer @ 0x1400E281C (PfpReturnAccessBuffer.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlpInterlockedFlushSList @ 0x1401C55B0 (RtlpInterlockedFlushSList.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     PfpFlushEventBuffers @ 0x14066ACD0 (PfpFlushEventBuffers.c)
 *     PfpCopyEvent @ 0x14066ADE0 (PfpCopyEvent.c)
 *     PfpLogPageAccess @ 0x14066B330 (PfpLogPageAccess.c)
 *     PfTAcquireLogEntry @ 0x1408663C4 (PfTAcquireLogEntry.c)
 */

char PfpFlushBuffers()
{
  _SLIST_ENTRY *v0; // rbx
  _SLIST_ENTRY *v1; // rdi
  void *v2; // r12
  int v3; // r14d
  PSLIST_ENTRY v4; // rax
  _SLIST_ENTRY *v5; // rcx
  _SLIST_ENTRY *v6; // r15
  _SLIST_ENTRY *v7; // rsi
  _SLIST_ENTRY *v8; // r13
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rbp
  _SLIST_ENTRY *v13; // r14
  unsigned __int64 v14; // rdx
  _SLIST_ENTRY *v16; // rcx
  _SLIST_ENTRY *Next; // r14
  unsigned __int64 v18; // rbp
  __int64 v19; // rax
  unsigned __int64 *v20; // rcx
  unsigned __int64 v21; // rax
  int v22; // [rsp+30h] [rbp-88h]
  unsigned int v23; // [rsp+34h] [rbp-84h] BYREF
  _QWORD v24[2]; // [rsp+38h] [rbp-80h] BYREF
  __int64 v25; // [rsp+48h] [rbp-70h] BYREF
  __int64 v26; // [rsp+50h] [rbp-68h]
  _QWORD v27[2]; // [rsp+58h] [rbp-60h] BYREF
  __int64 Src; // [rsp+68h] [rbp-50h] BYREF
  __int64 v29; // [rsp+70h] [rbp-48h]
  __int64 v30; // [rsp+78h] [rbp-40h]

  v0 = 0LL;
  v1 = 0LL;
  v24[1] = 1LL;
  v2 = 0LL;
  v24[0] = 0LL;
  v22 = PfpFlushEventBuffers();
  v3 = v22;
  if ( v22 < 0 )
    return 0;
  v4 = RtlpInterlockedFlushSList(&stru_1404D8600);
  if ( !v4 )
    goto LABEL_20;
  do
  {
    v5 = v4;
    v6 = v0;
    v4 = v4->Next;
    v5->Next = v0;
    v0 = v5;
  }
  while ( v4 );
  while ( 1 )
  {
    v7 = v0;
    v30 = 0LL;
    v29 = 0LL;
    v8 = v0;
    v0 = v6;
    v9 = MEMORY[0xFFFFF78000000004] * (unsigned __int64)(unsigned int)v7[1].Next;
    v10 = (MEMORY[0xFFFFF78000000004] * ((unsigned __int64)v7[1].Next >> 32)) << 8;
    Src = 163851LL;
    v11 = ((MEMORY[0xFFFFF78000000004] * HIDWORD(*((_QWORD *)&v7[1].Next + 1))) << 8)
        + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)(unsigned int)*((_QWORD *)&v7[1].Next + 1)) >> 24);
    LODWORD(v30) = dword_14043D15C + ((v10 + (v9 >> 24)) >> 10);
    HIDWORD(v30) = dword_14043D15C + (v11 >> 10);
    v29 = (unsigned int)v30;
    PfpCopyEvent(&Src);
    if ( *((int *)&v7->Next + 2) > 1
      || (v25 = 94215LL,
          v26 = 0LL,
          LODWORD(v26) = *((_DWORD *)&v7->Next + 3),
          PfpCopyEvent(&v25),
          *((int *)&v7->Next + 2) > 1) )
    {
      Next = v7[2].Next;
      if ( (unsigned __int64)Next <= *((_QWORD *)&v7[2].Next + 1) )
      {
        while ( 1 )
        {
          v18 = (unsigned __int64)Next->Next;
          v19 = PfTAcquireLogEntry(&unk_14043CC18, &v23, 1LL);
          if ( !v19 )
            break;
          v20 = (unsigned __int64 *)(16LL * v23 + ((v19 + 31) & 0xFFFFFFFFFFFFFFF8uLL));
          v21 = *v20 & 0xFFFFFFFFFFFC6007uLL;
          v20[1] = v18;
          *v20 = v21 | 0x6007;
          Next = (_SLIST_ENTRY *)((char *)Next + 8);
          v22 = 0;
          if ( (unsigned __int64)Next > *((_QWORD *)&v7[2].Next + 1) )
          {
            v3 = 0;
            goto LABEL_13;
          }
        }
        v7[2].Next = Next;
        v22 = -1073741670;
      }
      goto LABEL_12;
    }
    v12 = *((_QWORD *)&v7[3].Next + 1);
    v13 = v7[3].Next;
    if ( v12 == 1 )
    {
      LODWORD(v12) = LODWORD(v7[4].Next) + 1;
    }
    else if ( v12 && !PfpIsProcessInfoPresent(*((_QWORD *)&v7[3].Next + 1)) )
    {
      v3 = v22;
      goto LABEL_14;
    }
    v2 = &v7[4].Next + 1;
    v1 = (_SLIST_ENTRY *)((char *)v7 + 72);
    if ( (_SLIST_ENTRY *)(&v7[4].Next + 1) < v7[2].Next )
      break;
LABEL_12:
    v3 = v22;
    if ( v22 < 0 )
      goto LABEL_17;
LABEL_13:
    v14 = *((_QWORD *)&v7[1].Next + 1);
    v27[0] = 147463LL;
    v27[1] = dword_14043D15C
           + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(v14)) << 8)
                           + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)(unsigned int)v14) >> 24)) >> 10);
    PfpCopyEvent(v27);
LABEL_14:
    MmFreeAccessPfnBuffer(v8, 0);
    if ( !v6 )
      goto LABEL_20;
    v6 = v6->Next;
  }
  while ( PfpLogPageAccess(v12, (_DWORD)v1, (unsigned int)v24, (_DWORD)v13, 0) )
  {
    v1 = (_SLIST_ENTRY *)((char *)v1 + 8);
    if ( v1 >= v7[2].Next )
      goto LABEL_12;
  }
  v3 = -1073741432;
LABEL_17:
  if ( *((int *)&v7->Next + 2) <= 1 )
  {
    memmove(v2, v1, ((char *)v7[2].Next - (char *)v1) & 0xFFFFFFFFFFFFFFF8uLL);
    v7[2].Next = (_SLIST_ENTRY *)((char *)v7[2].Next - 8 * (((char *)v1 - (_BYTE *)v2) >> 3));
  }
  PfpReturnAccessBuffer(v7);
LABEL_20:
  if ( v3 >= 0 )
    return 1;
  while ( v0 )
  {
    v16 = v0;
    v0 = v0->Next;
    PfpReturnAccessBuffer(v16);
  }
  return 0;
}
