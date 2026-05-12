/*
 * XREFs of RaidUnitHandleReportLunsDataChanged @ 0x1C0049DA0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAllocatePool @ 0x1C00081B4 (RaidAllocatePool.c)
 *     McTemplateK0pqquuuqpp @ 0x1C003DAA4 (McTemplateK0pqquuuqpp.c)
 */

void __fastcall RaidUnitHandleReportLunsDataChanged(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  _WORD *Pool; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // [rsp+20h] [rbp-58h]
  int v9; // [rsp+28h] [rbp-50h]
  char v10; // [rsp+30h] [rbp-48h]
  char v11; // [rsp+38h] [rbp-40h]
  char v12; // [rsp+40h] [rbp-38h]
  int v13; // [rsp+48h] [rbp-30h]

  if ( *(_QWORD *)(a2 + 216) )
  {
    if ( !*(_BYTE *)(*(_QWORD *)(a1 + 24) + 419LL) )
    {
      Pool = RaidAllocatePool(NonPagedPoolNx, 0x10uLL, 0x53546152u, *(_QWORD *)(a1 + 8));
      if ( Pool )
      {
        v6 = *(_QWORD *)(a2 + 168);
        if ( *(_BYTE *)(v6 + 2) == 40 )
        {
          *(_OWORD *)Pool = *(_OWORD *)(*(unsigned int *)(v6 + 52) + v6);
        }
        else
        {
          *Pool = 1;
          Pool[1] = *(unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 56LL);
          *((_DWORD *)Pool + 1) = 4;
          *((_BYTE *)Pool + 8) = *(_BYTE *)(a1 + 96);
          *((_BYTE *)Pool + 9) = *(_BYTE *)(a1 + 97);
          *((_BYTE *)Pool + 10) = *(_BYTE *)(a1 + 98);
          *((_BYTE *)Pool + 11) = 0;
        }
        if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
        {
          v7 = *(_QWORD *)(a1 + 24);
          v13 = 0;
          v12 = *(_BYTE *)(a1 + 98);
          v11 = *(_BYTE *)(a1 + 97);
          v10 = *(_BYTE *)(a1 + 96);
          v9 = 1;
          v8 = *(_DWORD *)(v7 + 56);
          McTemplateK0pqquuuqpp(
            (struct _MCGEN_TRACE_CONTEXT *)v7,
            v4,
            (const GUID *)(a2 + 728),
            a1,
            v8,
            v9,
            v10,
            v11,
            v12,
            v13,
            &RaidUnitHandleReportLunsDataChangedCompletion,
            Pool);
        }
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 4984LL), 1, 0) )
        {
          *(_DWORD *)(*(_QWORD *)(a2 + 216) + 4988LL) = 2;
          *(_QWORD *)(*(_QWORD *)(a2 + 216) + 5000LL) = Pool;
          *(_DWORD *)(*(_QWORD *)(a2 + 216) + 4992LL) = 0;
          *(_QWORD *)(*(_QWORD *)(a2 + 216) + 5008LL) = &RaidUnitHandleReportLunsDataChangedCompletion;
          *(_QWORD *)(*(_QWORD *)(a2 + 216) + 5016LL) = 0LL;
          *(_BYTE *)(*(_QWORD *)(a2 + 216) + 104LL) |= 0x40u;
LABEL_13:
          *(_BYTE *)(*(_QWORD *)(a2 + 216) + 105LL) = 1;
          KeInsertQueueDpc((PRKDPC)(*(_QWORD *)(a2 + 216) + 2056LL), 0LL, 0LL);
          return;
        }
        ExFreePoolWithTag(Pool, 0x53546152u);
      }
    }
    *(_BYTE *)(*(_QWORD *)(a2 + 216) + 106LL) = 1;
    goto LABEL_13;
  }
}
