/*
 * XREFs of CmpBounceContextStart @ 0x1405D3F60
 * Callers:
 *     NtQueryMultipleValueKey @ 0x1405B8130 (NtQueryMultipleValueKey.c)
 *     NtEnumerateKey @ 0x1405D32F0 (NtEnumerateKey.c)
 *     NtEnumerateValueKey @ 0x1405D4890 (NtEnumerateValueKey.c)
 *     NtQueryKey @ 0x140640BB0 (NtQueryKey.c)
 * Callees:
 *     _TlgWriteAgg @ 0x140012A30 (_TlgWriteAgg.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140013018 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C5530 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpIsBufferGloballyVisible @ 0x1405E0288 (CmpIsBufferGloballyVisible.c)
 */

__int64 __fastcall CmpBounceContextStart(__int64 a1, void *a2, size_t a3, __int64 a4, char a5)
{
  void *TransientPoolWithQuotaTag; // rdi
  unsigned int v9; // edx
  char v10; // cl
  char v11; // [rsp+30h] [rbp-98h] BYREF
  __int64 v12; // [rsp+38h] [rbp-90h] BYREF
  __int64 v13; // [rsp+40h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+50h] [rbp-78h] BYREF
  __int64 *v15; // [rsp+70h] [rbp-58h]
  __int64 v16; // [rsp+78h] [rbp-50h]
  char *v17; // [rsp+80h] [rbp-48h]
  __int64 v18; // [rsp+88h] [rbp-40h]
  __int64 *v19; // [rsp+90h] [rbp-38h]
  __int64 v20; // [rsp+98h] [rbp-30h]

  *(_QWORD *)a1 = a2;
  TransientPoolWithQuotaTag = a2;
  if ( !a3 )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    return 0LL;
  }
  if ( !qword_140438CE8 || !(_DWORD)a4 && (unsigned __int8)CmpIsBufferGloballyVisible(a2) )
  {
LABEL_9:
    *(_QWORD *)(a1 + 8) = TransientPoolWithQuotaTag;
    return 0LL;
  }
  if ( stru_140400AA0.LevelPlus1 > 5
    && (stru_140400AA0.KeywordAny & 4) != 0
    && (stru_140400AA0.KeywordAll & 4) == stru_140400AA0.KeywordAll )
  {
    v9 = a3;
    v11 = a5;
    v12 = 1LL;
    if ( (((_DWORD)a3 - 1) & (unsigned int)a3) != 0 )
    {
      v10 = -1;
      if ( (_DWORD)a3 )
      {
        do
        {
          ++v10;
          v9 >>= 1;
        }
        while ( v9 );
      }
      v9 = 1 << (v10 + 1);
    }
    v13 = v9;
    v15 = &v12;
    v17 = &v11;
    v19 = &v13;
    v16 = 8LL;
    v18 = 1LL;
    v20 = 8LL;
    TlgWriteAgg((__int64)&stru_140400AA0, (unsigned __int8 *)dword_14036D110, a3, a4, 5u, &v14);
  }
  if ( a3 <= 0x40 )
  {
    TransientPoolWithQuotaTag = (void *)(a1 + 17);
LABEL_14:
    memset(TransientPoolWithQuotaTag, 0, a3);
    goto LABEL_9;
  }
  if ( a3 <= 0x1000 )
  {
    ++dword_1404C7BD4;
    TransientPoolWithQuotaTag = RtlpInterlockedPopEntrySList(&CmpBounceBufferLookaside);
    if ( TransientPoolWithQuotaTag
      || (++dword_1404C7BD8,
          (TransientPoolWithQuotaTag = (void *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _SLIST_HEADER *))qword_1404C7BF0)(
                                                 (unsigned int)dword_1404C7BE4,
                                                 (unsigned int)dword_1404C7BEC,
                                                 (unsigned int)dword_1404C7BE8,
                                                 &CmpBounceBufferLookaside)) != 0LL) )
    {
      memset(TransientPoolWithQuotaTag, 0, a3);
      *(_BYTE *)(a1 + 16) |= 1u;
      goto LABEL_9;
    }
  }
  TransientPoolWithQuotaTag = CmpAllocateTransientPoolWithQuotaTag(a1, a3, 0x42424D43u);
  if ( TransientPoolWithQuotaTag )
    goto LABEL_14;
  return 3221225626LL;
}
