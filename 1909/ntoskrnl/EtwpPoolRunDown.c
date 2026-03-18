/*
 * XREFs of EtwpPoolRunDown @ 0x1408FB7DC
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14070999C (EtwpKernelTraceRundown.c)
 * Callees:
 *     MmGetSessionId @ 0x14001D880 (MmGetSessionId.c)
 *     MmGetNextSession @ 0x14008CB70 (MmGetNextSession.c)
 *     MmDetachSession @ 0x14008CE30 (MmDetachSession.c)
 *     MmAttachSession @ 0x14008CED0 (MmAttachSession.c)
 *     EtwpLogKernelEvent @ 0x1400A2990 (EtwpLogKernelEvent.c)
 *     ExGetSessionPoolTagInfo @ 0x1400F45A8 (ExGetSessionPoolTagInfo.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExGetBigPoolInfo @ 0x140338D60 (ExGetBigPoolInfo.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ExGetPoolTagInfo @ 0x1406C7CF8 (ExGetPoolTagInfo.c)
 */

void __fastcall EtwpPoolRunDown(__int64 a1, char a2)
{
  char v2; // r12
  unsigned int v4; // edi
  int *v5; // rbx
  int *PoolWithTag; // rax
  int PoolTagInfo; // eax
  unsigned int v8; // edi
  int *v9; // rsi
  unsigned int v10; // r8d
  __int64 v11; // rdx
  int v12; // eax
  unsigned int v13; // edi
  int *v14; // rax
  int BigPoolInfo; // eax
  unsigned int v16; // edi
  int *v17; // r14
  unsigned int v18; // r8d
  __int64 v19; // rdx
  int v20; // eax
  void *j; // rcx
  unsigned int v22; // esi
  unsigned int v23; // r14d
  int *v24; // rax
  int SessionPoolTagInfo; // eax
  unsigned int v26; // esi
  int *v27; // r14
  unsigned int v28; // r8d
  __int64 v29; // rdx
  int v30; // eax
  unsigned int v31; // esi
  int *v32; // rax
  int v33; // eax
  unsigned int v34; // esi
  int *v35; // r15
  unsigned int v36; // r8d
  __int64 v37; // rdx
  int v38; // eax
  ULONG_PTR NextSession; // rax
  __int64 v40; // rdi
  unsigned int v42; // [rsp+3Ch] [rbp-45h] BYREF
  unsigned int i; // [rsp+40h] [rbp-41h] BYREF
  int SessionId; // [rsp+44h] [rbp-3Dh] BYREF
  int v45; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v46[48]; // [rsp+50h] [rbp-31h] BYREF
  unsigned int *v47; // [rsp+80h] [rbp-1h] BYREF
  int v48; // [rsp+88h] [rbp+7h]
  int v49; // [rsp+8Ch] [rbp+Bh]
  int *p_SessionId; // [rsp+90h] [rbp+Fh]
  int v51; // [rsp+98h] [rbp+17h]
  int v52; // [rsp+9Ch] [rbp+1Bh]
  int *v53; // [rsp+A0h] [rbp+1Fh]
  int v54; // [rsp+A8h] [rbp+27h]
  int v55; // [rsp+ACh] [rbp+2Bh]

  v2 = a2;
  v4 = 48;
  memset(v46, 0, sizeof(v46));
  v5 = 0LL;
  v48 = 4;
  v49 = 0;
  v47 = &v42;
  for ( i = 48; ; v4 = i )
  {
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    PoolWithTag = (int *)ExAllocatePoolWithTag(PagedPool, v4, 0x74777445u);
    v5 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    PoolTagInfo = ExGetPoolTagInfo(PoolWithTag, v4, (int *)&i);
    if ( PoolTagInfo != -1073741820 )
    {
      if ( PoolTagInfo >= 0 )
      {
        v8 = *v5;
        v9 = v5 + 2;
        if ( *v5 )
        {
          do
          {
            v10 = *(_DWORD *)a1;
            v11 = *(_QWORD *)(a1 + 1080);
            v12 = v8;
            p_SessionId = v9;
            if ( v8 > 0x64 )
              v12 = 100;
            v52 = 0;
            v42 = v12;
            v51 = 40 * v12;
            EtwpLogKernelEvent((__int64)&v47, v11, v10, 2u, 3625 - (v2 != 0), 0x401802u);
            v9 += 10 * v42;
            v8 -= v42;
          }
          while ( v8 );
          v2 = a2;
        }
      }
      break;
    }
  }
  v13 = 32;
  for ( i = 32; ; v13 = i )
  {
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    v14 = (int *)ExAllocatePoolWithTag(PagedPool, v13, 0x74777445u);
    v5 = v14;
    if ( !v14 )
      break;
    BigPoolInfo = ExGetBigPoolInfo(v14, v13, 1, &i);
    if ( BigPoolInfo != -1073741820 )
    {
      if ( BigPoolInfo >= 0 )
      {
        v16 = *v5;
        v17 = v5 + 2;
        if ( *v5 )
        {
          do
          {
            v18 = *(_DWORD *)a1;
            v19 = *(_QWORD *)(a1 + 1080);
            v20 = v16;
            p_SessionId = v17;
            if ( v16 > 0x64 )
              v20 = 100;
            v52 = 0;
            v42 = v20;
            v51 = 24 * v20;
            EtwpLogKernelEvent((__int64)&v47, v19, v18, 2u, 3627 - (v2 != 0), 0x401802u);
            v17 += 6 * v42;
            v16 -= v42;
          }
          while ( v16 );
          v2 = a2;
        }
      }
      break;
    }
  }
  for ( j = 0LL; ; j = (void *)v40 )
  {
    NextSession = MmGetNextSession(j);
    v40 = NextSession;
    if ( !NextSession )
      break;
    if ( (int)MmAttachSession(NextSession) >= 0 )
    {
      SessionId = MmGetSessionId(v40);
      v22 = 4000;
      v23 = 4000;
      while ( 1 )
      {
        if ( v5 )
          ExFreePoolWithTag(v5, 0);
        v24 = (int *)ExAllocatePoolWithTag(PagedPool, v22, 0x74777445u);
        v5 = v24;
        if ( !v24 )
          break;
        SessionPoolTagInfo = ExGetSessionPoolTagInfo((__int64)v24, v23, &v42, &v45);
        v23 = 40 * v45;
        v22 = 40 * v45;
        if ( SessionPoolTagInfo != -1073741820 )
        {
          if ( SessionPoolTagInfo >= 0 )
          {
            v52 = 0;
            v26 = v42;
            v27 = v5;
            p_SessionId = &SessionId;
            v51 = 4;
            if ( v42 )
            {
              do
              {
                v28 = *(_DWORD *)a1;
                v29 = *(_QWORD *)(a1 + 1080);
                v30 = v26;
                v53 = v27;
                if ( v26 > 0x64 )
                  v30 = 100;
                v55 = 0;
                v42 = v30;
                v54 = 40 * v30;
                EtwpLogKernelEvent((__int64)&v47, v29, v28, 3u, 3629 - (v2 != 0), 0x401802u);
                v27 += 10 * v42;
                v26 -= v42;
              }
              while ( v26 );
              v2 = a2;
            }
          }
          break;
        }
      }
      v31 = 40;
      for ( i = 40; ; v31 = i )
      {
        if ( v5 )
          ExFreePoolWithTag(v5, 0);
        v32 = (int *)ExAllocatePoolWithTag(PagedPool, v31, 0x74777445u);
        v5 = v32;
        if ( !v32 )
          break;
        v33 = ExGetBigPoolInfo(v32, v31, 0, &i);
        if ( v33 != -1073741820 )
        {
          if ( v33 >= 0 )
          {
            v52 = 0;
            v34 = v5[3];
            v35 = v5 + 4;
            p_SessionId = &SessionId;
            v51 = 4;
            if ( v34 )
            {
              do
              {
                v36 = *(_DWORD *)a1;
                v37 = *(_QWORD *)(a1 + 1080);
                v38 = v34;
                v53 = v35;
                if ( v34 > 0x64 )
                  v38 = 100;
                v55 = 0;
                v42 = v38;
                v54 = 24 * v38;
                EtwpLogKernelEvent((__int64)&v47, v37, v36, 3u, 3631 - (v2 != 0), 0x401802u);
                v35 += 6 * v42;
                v34 -= v42;
              }
              while ( v34 );
              v2 = a2;
            }
          }
          break;
        }
      }
      MmDetachSession(v40, (__int64)v46);
    }
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
}
