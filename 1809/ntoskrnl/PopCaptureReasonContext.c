/*
 * XREFs of PopCaptureReasonContext @ 0x140002318
 * Callers:
 *     PoCaptureReasonContext @ 0x1400020AC (PoCaptureReasonContext.c)
 * Callees:
 *     PopSafeCopyUnicodeString @ 0x140002608 (PopSafeCopyUnicodeString.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400B75B0 (ExAllocatePoolWithQuotaTag.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PopCaptureReasonContext(__int64 a1, char a2, bool *a3, _QWORD *a4)
{
  SIZE_T v8; // rbx
  unsigned int v9; // r15d
  unsigned __int64 v10; // r12
  int v11; // ebp
  unsigned __int64 v12; // rax
  unsigned int v13; // r8d
  unsigned __int16 *v14; // r9
  __int64 v15; // rax
  SIZE_T v16; // rdx
  SIZE_T v17; // rcx
  _QWORD *PoolWithQuotaTag; // rax
  _QWORD *v19; // rsi
  unsigned __int64 v20; // r14
  int v21; // eax
  int v22; // ebx
  unsigned int v23; // ebp
  unsigned __int64 v24; // rcx
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  __int128 v28; // [rsp+20h] [rbp-68h]
  __int128 v29; // [rsp+30h] [rbp-58h] BYREF

  *a4 = 0LL;
  v8 = 56LL;
  if ( a3 )
    *a3 = 0;
  v9 = 0;
  v10 = 0LL;
  if ( !a1 )
  {
    v11 = 0x80000000;
    goto LABEL_16;
  }
  if ( !*(_DWORD *)a1 )
  {
    v11 = *(_DWORD *)(a1 + 4);
    if ( (v11 & 1) != 0 )
    {
      if ( (((unsigned __int8)*(_WORD *)(a1 + 8) + 2) & 1) == 0 )
      {
        v8 = *(unsigned __int16 *)(a1 + 8) + 90LL;
        goto LABEL_16;
      }
    }
    else if ( (v11 & 2) != 0 )
    {
      if ( ((*(_BYTE *)(a1 + 8) + 2) & 1) == 0 )
      {
        v9 = *(_DWORD *)(a1 + 28);
        v8 = *(unsigned __int16 *)(a1 + 8) + 90LL;
        v12 = 16LL * v9;
        if ( v12 <= 0xFFFFFFFF )
        {
          v10 = *(_QWORD *)(a1 + 32);
          if ( a2 && (_DWORD)v12 )
          {
            if ( (v10 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v26 = v10 + (unsigned int)v12;
            if ( v26 > 0x7FFFFFFF0000LL || v26 < v10 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          v13 = 0;
          if ( v9 )
          {
            v14 = (unsigned __int16 *)v10;
            do
            {
              v15 = -1LL;
              v16 = v8;
              v17 = v8 + *v14 + 2LL;
              if ( v17 >= v8 )
                v15 = v8 + *v14 + 2LL;
              v8 = v15;
              if ( v17 < v16 )
                return 3221225485LL;
              ++v13;
              v14 += 8;
            }
            while ( v13 < v9 );
          }
LABEL_16:
          if ( a2 )
            PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v8, 0x78435250u);
          else
            PoolWithQuotaTag = ExAllocatePoolWithTag(PagedPool, v8, 0x78435250u);
          v19 = PoolWithQuotaTag;
          if ( !PoolWithQuotaTag )
            return 3221225626LL;
          memset(PoolWithQuotaTag, 0, v8);
          *a4 = v19;
          if ( v11 < 0 )
          {
            v19[6] = 0LL;
            return 0;
          }
          v20 = ((unsigned __int64)v19 + 63) & 0xFFFFFFFFFFFFFFF8uLL;
          v19[6] = (char *)v19 + v8 - v20;
          *(_DWORD *)v20 = v11;
          *(_QWORD *)(v20 + 8) = 32LL;
          v21 = PopSafeCopyUnicodeString((PCUNICODE_STRING)(a1 + 8));
          v22 = v21;
          v23 = v11 & 1;
          if ( v23 )
          {
            if ( v21 >= 0 )
            {
LABEL_26:
              if ( a3 )
                *a3 = (*(_DWORD *)(a1 + 4) & 4) != 0;
              return 0;
            }
          }
          else if ( v21 >= 0 )
          {
            *(_WORD *)(v20 + 16) = *(_WORD *)(a1 + 24);
            *(_DWORD *)(v20 + 20) = v9;
            *(_QWORD *)(v20 + 24) = 32LL;
            if ( v9 )
            {
              while ( 1 )
              {
                v24 = v10 + 16LL * v23;
                if ( a2 )
                {
                  if ( v24 >= 0x7FFFFFFF0000LL )
                    v24 = 0x7FFFFFFF0000LL;
                  LODWORD(v28) = *(_DWORD *)v24;
                  v27 = *(_QWORD *)(v24 + 8);
                  v24 = (unsigned __int64)&v29;
                  *((_QWORD *)&v28 + 1) = v27;
                  v29 = v28;
                }
                v22 = PopSafeCopyUnicodeString((PCUNICODE_STRING)v24);
                if ( v22 < 0 )
                  goto LABEL_50;
                if ( ++v23 >= v9 )
                  goto LABEL_26;
              }
            }
            goto LABEL_26;
          }
LABEL_50:
          ExFreePoolWithTag(v19, 0x78435250u);
          *a4 = 0LL;
          return (unsigned int)v22;
        }
      }
    }
    else if ( v11 < 0 )
    {
      goto LABEL_16;
    }
  }
  return 3221225485LL;
}
