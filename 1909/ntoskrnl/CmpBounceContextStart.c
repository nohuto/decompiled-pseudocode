/*
 * XREFs of CmpBounceContextStart @ 0x1406002B0
 * Callers:
 *     NtQueryValueKey @ 0x1405FEFD0 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x1406010E0 (NtQueryKey.c)
 *     NtQueryMultipleValueKey @ 0x14063E0F0 (NtQueryMultipleValueKey.c)
 *     NtEnumerateValueKey @ 0x140660AE0 (NtEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x140662B00 (NtEnumerateKey.c)
 * Callees:
 *     _TlgWriteAgg @ 0x14008BAEC (_TlgWriteAgg.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x14008CFF8 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CC570 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpIsBufferGloballyVisible @ 0x140651798 (CmpIsBufferGloballyVisible.c)
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
  if ( !qword_140463548 || !(_DWORD)a4 && (unsigned __int8)CmpIsBufferGloballyVisible(a2) )
  {
LABEL_10:
    *(_QWORD *)(a1 + 8) = TransientPoolWithQuotaTag;
    return 0LL;
  }
  if ( stru_140425BC0.LevelPlus1 > 5
    && (stru_140425BC0.KeywordAny & 4) != 0
    && (stru_140425BC0.KeywordAll & 4) == stru_140425BC0.KeywordAll )
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
    TlgWriteAgg((__int64)&stru_140425BC0, (unsigned __int8 *)dword_14038BE37, a3, a4, 5u, &v14);
  }
  if ( a3 <= 0x40 )
  {
    TransientPoolWithQuotaTag = (void *)(a1 + 17);
LABEL_13:
    memset(TransientPoolWithQuotaTag, 0, a3);
    goto LABEL_10;
  }
  if ( a3 <= 0x1000 )
  {
    ++dword_1404F2D94;
    TransientPoolWithQuotaTag = RtlpInterlockedPopEntrySList(&CmpBounceBufferLookaside);
    if ( TransientPoolWithQuotaTag
      || (++dword_1404F2D98,
          (TransientPoolWithQuotaTag = (void *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _SLIST_HEADER *))qword_1404F2DB0)(
                                                 (unsigned int)dword_1404F2DA4,
                                                 (unsigned int)dword_1404F2DAC,
                                                 (unsigned int)dword_1404F2DA8,
                                                 &CmpBounceBufferLookaside)) != 0LL) )
    {
      memset(TransientPoolWithQuotaTag, 0, a3);
      *(_BYTE *)(a1 + 16) |= 1u;
      goto LABEL_10;
    }
  }
  TransientPoolWithQuotaTag = CmpAllocateTransientPoolWithQuotaTag(a1, a3, 0x42424D43u);
  if ( TransientPoolWithQuotaTag )
    goto LABEL_13;
  return 3221225626LL;
}
