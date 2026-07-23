/*
 * XREFs of EtwpPoolRunDown @ 0x1408C02F4
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140727414 (EtwpKernelTraceRundown.c)
 * Callees:
 *     MmGetNextSession @ 0x140012740 (MmGetNextSession.c)
 *     MmGetSessionId @ 0x1400897A0 (MmGetSessionId.c)
 *     EtwpLogKernelEvent @ 0x1400C7110 (EtwpLogKernelEvent.c)
 *     ExGetSessionPoolTagInfo @ 0x14011A2A4 (ExGetSessionPoolTagInfo.c)
 *     MmDetachSession @ 0x14011A630 (MmDetachSession.c)
 *     MmAttachSession @ 0x14011A6C0 (MmAttachSession.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExGetBigPoolInfo @ 0x14031A744 (ExGetBigPoolInfo.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExGetPoolTagInfo @ 0x1406A5C1C (ExGetPoolTagInfo.c)
 */

void __fastcall EtwpPoolRunDown(__int64 a1, char a2)
{
  struct _SINGLE_LIST_ENTRY *v2; // rbx
  char v3; // r12
  unsigned int v4; // edi
  unsigned __int16 v6; // si
  struct _SINGLE_LIST_ENTRY *PoolWithTag; // rax
  int PoolTagInfo; // eax
  unsigned int Next; // edi
  struct _SINGLE_LIST_ENTRY *v10; // r14
  unsigned int v11; // r8d
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // edi
  struct _SINGLE_LIST_ENTRY *v15; // rax
  int BigPoolInfo; // eax
  unsigned int v17; // edi
  struct _SINGLE_LIST_ENTRY *v18; // r14
  unsigned int v19; // r8d
  __int64 v20; // rdx
  int v21; // eax
  void *j; // rcx
  unsigned int v23; // esi
  unsigned int v24; // r14d
  struct _SINGLE_LIST_ENTRY *v25; // rax
  int SessionPoolTagInfo; // eax
  unsigned int v27; // esi
  struct _SINGLE_LIST_ENTRY *v28; // r14
  unsigned int v29; // r8d
  __int64 v30; // rdx
  int v31; // eax
  unsigned int v32; // esi
  struct _SINGLE_LIST_ENTRY *v33; // rax
  int v34; // eax
  unsigned int Next_high; // esi
  struct _SINGLE_LIST_ENTRY *v36; // r15
  unsigned int v37; // r8d
  __int64 v38; // rdx
  int v39; // eax
  _KPROCESS *NextSession; // rax
  __int64 v41; // rdi
  unsigned int v43; // [rsp+3Ch] [rbp-45h] BYREF
  unsigned int i; // [rsp+40h] [rbp-41h] BYREF
  int SessionId; // [rsp+44h] [rbp-3Dh] BYREF
  int v46; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v47[48]; // [rsp+50h] [rbp-31h] BYREF
  unsigned int *v48; // [rsp+80h] [rbp-1h] BYREF
  int v49; // [rsp+88h] [rbp+7h]
  int v50; // [rsp+8Ch] [rbp+Bh]
  struct _SINGLE_LIST_ENTRY *p_SessionId; // [rsp+90h] [rbp+Fh]
  int v52; // [rsp+98h] [rbp+17h]
  int v53; // [rsp+9Ch] [rbp+1Bh]
  struct _SINGLE_LIST_ENTRY *v54; // [rsp+A0h] [rbp+1Fh]
  int v55; // [rsp+A8h] [rbp+27h]
  int v56; // [rsp+ACh] [rbp+2Bh]

  v2 = 0LL;
  v50 = 0;
  v48 = &v43;
  v3 = a2;
  v49 = 4;
  v4 = 48;
  i = 48;
  v6 = 3625 - (a2 != 0);
  while ( 1 )
  {
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    PoolWithTag = (struct _SINGLE_LIST_ENTRY *)ExAllocatePoolWithTag(PagedPool, v4, 0x74777445u);
    v2 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    PoolTagInfo = ExGetPoolTagInfo(PoolWithTag, v4, (int *)&i);
    if ( PoolTagInfo != -1073741820 )
    {
      if ( PoolTagInfo >= 0 )
      {
        Next = (unsigned int)v2->Next;
        v10 = v2 + 1;
        if ( LODWORD(v2->Next) )
        {
          do
          {
            v11 = *(_DWORD *)a1;
            v12 = *(_QWORD *)(a1 + 1080);
            v13 = Next;
            p_SessionId = v10;
            if ( Next > 0x64 )
              v13 = 100;
            v53 = 0;
            v43 = v13;
            v52 = 40 * v13;
            EtwpLogKernelEvent((__int64)&v48, v12, v11, 2u, v6, 0x401802u);
            v10 += 5 * v43;
            Next -= v43;
          }
          while ( Next );
          v3 = a2;
        }
      }
      break;
    }
    v4 = i;
  }
  v14 = 32;
  for ( i = 32; ; v14 = i )
  {
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    v15 = (struct _SINGLE_LIST_ENTRY *)ExAllocatePoolWithTag(PagedPool, v14, 0x74777445u);
    v2 = v15;
    if ( !v15 )
      break;
    BigPoolInfo = ExGetBigPoolInfo(v15, v14, 1, &i);
    if ( BigPoolInfo != -1073741820 )
    {
      if ( BigPoolInfo >= 0 )
      {
        v17 = (unsigned int)v2->Next;
        v18 = v2 + 1;
        if ( LODWORD(v2->Next) )
        {
          do
          {
            v19 = *(_DWORD *)a1;
            v20 = *(_QWORD *)(a1 + 1080);
            v21 = v17;
            p_SessionId = v18;
            if ( v17 > 0x64 )
              v21 = 100;
            v53 = 0;
            v43 = v21;
            v52 = 24 * v21;
            EtwpLogKernelEvent((__int64)&v48, v20, v19, 2u, 3627 - (v3 != 0), 0x401802u);
            v18 += 3 * v43;
            v17 -= v43;
          }
          while ( v17 );
          v3 = a2;
        }
      }
      break;
    }
  }
  for ( j = 0LL; ; j = (void *)v41 )
  {
    NextSession = (_KPROCESS *)MmGetNextSession(j);
    v41 = (__int64)NextSession;
    if ( !NextSession )
      break;
    if ( (int)MmAttachSession(NextSession, (__int64)v47) >= 0 )
    {
      SessionId = MmGetSessionId(v41);
      v23 = 4000;
      v24 = 4000;
      while ( 1 )
      {
        if ( v2 )
          ExFreePoolWithTag(v2, 0);
        v25 = (struct _SINGLE_LIST_ENTRY *)ExAllocatePoolWithTag(PagedPool, v23, 0x74777445u);
        v2 = v25;
        if ( !v25 )
          break;
        SessionPoolTagInfo = ExGetSessionPoolTagInfo((__int64)v25, v24, &v43, &v46);
        v24 = 40 * v46;
        v23 = 40 * v46;
        if ( SessionPoolTagInfo != -1073741820 )
        {
          if ( SessionPoolTagInfo >= 0 )
          {
            v53 = 0;
            v27 = v43;
            v28 = v2;
            p_SessionId = (struct _SINGLE_LIST_ENTRY *)&SessionId;
            v52 = 4;
            if ( v43 )
            {
              do
              {
                v29 = *(_DWORD *)a1;
                v30 = *(_QWORD *)(a1 + 1080);
                v31 = v27;
                v54 = v28;
                if ( v27 > 0x64 )
                  v31 = 100;
                v56 = 0;
                v43 = v31;
                v55 = 40 * v31;
                EtwpLogKernelEvent((__int64)&v48, v30, v29, 3u, 3629 - (v3 != 0), 0x401802u);
                v28 += 5 * v43;
                v27 -= v43;
              }
              while ( v27 );
              v3 = a2;
            }
          }
          break;
        }
      }
      v32 = 40;
      for ( i = 40; ; v32 = i )
      {
        if ( v2 )
          ExFreePoolWithTag(v2, 0);
        v33 = (struct _SINGLE_LIST_ENTRY *)ExAllocatePoolWithTag(PagedPool, v32, 0x74777445u);
        v2 = v33;
        if ( !v33 )
          break;
        v34 = ExGetBigPoolInfo(v33, v32, 0, &i);
        if ( v34 != -1073741820 )
        {
          if ( v34 >= 0 )
          {
            v53 = 0;
            Next_high = HIDWORD(v2[1].Next);
            v36 = v2 + 2;
            p_SessionId = (struct _SINGLE_LIST_ENTRY *)&SessionId;
            v52 = 4;
            if ( Next_high )
            {
              do
              {
                v37 = *(_DWORD *)a1;
                v38 = *(_QWORD *)(a1 + 1080);
                v39 = Next_high;
                v54 = v36;
                if ( Next_high > 0x64 )
                  v39 = 100;
                v56 = 0;
                v43 = v39;
                v55 = 24 * v39;
                EtwpLogKernelEvent((__int64)&v48, v38, v37, 3u, 3631 - (v3 != 0), 0x401802u);
                v36 += 3 * v43;
                Next_high -= v43;
              }
              while ( Next_high );
              v3 = a2;
            }
          }
          break;
        }
      }
      MmDetachSession(v41, (__int64)v47);
    }
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
