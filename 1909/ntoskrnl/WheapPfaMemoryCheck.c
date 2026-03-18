/*
 * XREFs of WheapPfaMemoryCheck @ 0x14091A858
 * Callers:
 *     WheapPredictiveFailureAnalysis @ 0x14091AB7C (WheapPredictiveFailureAnalysis.c)
 * Callees:
 *     MmGetPageBadStatus @ 0x1402BEA30 (MmGetPageBadStatus.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     WheaAttemptPhysicalPageOffline @ 0x140919600 (WheaAttemptPhysicalPageOffline.c)
 *     WheapPfaLogPageMonitorRemoval @ 0x14091A7C0 (WheapPfaLogPageMonitorRemoval.c)
 *     WheapPfaRetireExpiredMemoryEntries @ 0x14091AACC (WheapPfaRetireExpiredMemoryEntries.c)
 */

void __fastcall WheapPfaMemoryCheck(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  struct _LIST_ENTRY *v3; // rdi
  __int64 v4; // rsi
  char *PoolWithTag; // rbx
  unsigned int v6; // ecx
  PVOID *v7; // rax
  PVOID *v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rcx
  bool v11; // cf
  _QWORD *v12; // rax
  unsigned __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = a1;
  if ( !WheapPolicyMemPfaDisable && (*(_BYTE *)a2 & 2) != 0 )
  {
    v2 = *(_QWORD *)(a2 + 16);
    v13 = v2;
    if ( !(unsigned int)MmGetPageBadStatus(&v13) )
    {
      v3 = (struct _LIST_ENTRY *)(v2 >> 12);
      v4 = MEMORY[0xFFFFF78000000008];
      WheapPfaRetireExpiredMemoryEntries(MEMORY[0xFFFFF78000000008]);
      PoolWithTag = (char *)WheapPfaList;
      v6 = 0;
      if ( WheapPfaList == &WheapPfaList )
      {
LABEL_7:
        if ( v6 >= WheapPolicyMemPfaPageCount )
        {
          PoolWithTag = (char *)qword_140509808;
          v9 = *(_QWORD *)qword_140509808;
          if ( *(_QWORD *)(*(_QWORD *)qword_140509808 + 8LL) != qword_140509808 )
            goto LABEL_21;
          v10 = *(_QWORD **)(qword_140509808 + 8);
          if ( *v10 != qword_140509808 )
            goto LABEL_21;
          *v10 = v9;
          *(_QWORD *)(v9 + 8) = v10;
          WheapPfaLogPageMonitorRemoval((__int64)PoolWithTag, 3, v4);
        }
        else
        {
          PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x61656857u);
          if ( !PoolWithTag )
            return;
        }
        *(_QWORD *)PoolWithTag = 0LL;
        *((_QWORD *)PoolWithTag + 1) = 0LL;
        *(_DWORD *)(PoolWithTag + 18) = 0;
        *((_WORD *)PoolWithTag + 11) = 0;
        *((_WORD *)PoolWithTag + 8) = 0;
        *((_QWORD *)PoolWithTag + 3) = v4;
        *((_QWORD *)PoolWithTag + 5) = v3;
      }
      else
      {
        while ( 1 )
        {
          v7 = *(PVOID **)PoolWithTag;
          if ( *((struct _LIST_ENTRY **)PoolWithTag + 5) == v3 )
            break;
          ++v6;
          PoolWithTag = *(char **)PoolWithTag;
          if ( v7 == &WheapPfaList )
            goto LABEL_7;
        }
        if ( v7[1] != PoolWithTag )
          goto LABEL_21;
        v8 = (PVOID *)*((_QWORD *)PoolWithTag + 1);
        if ( *v8 != PoolWithTag )
          goto LABEL_21;
        *v8 = v7;
        v7[1] = v8;
      }
      v11 = (unsigned __int16)++*((_WORD *)PoolWithTag + 8) < (unsigned int)WheapPolicyMemPfaThreshold;
      *((_QWORD *)PoolWithTag + 4) = v4;
      if ( v11 )
      {
        v12 = WheapPfaList;
        if ( *((PVOID **)WheapPfaList + 1) == &WheapPfaList )
        {
          *(_QWORD *)PoolWithTag = WheapPfaList;
          *((_QWORD *)PoolWithTag + 1) = &WheapPfaList;
          v12[1] = PoolWithTag;
          WheapPfaList = PoolWithTag;
          return;
        }
LABEL_21:
        __fastfail(3u);
      }
      WheapPfaLogPageMonitorRemoval((__int64)PoolWithTag, 1, v4);
      WheaAttemptPhysicalPageOffline(v3, 0, 0);
      ExFreePoolWithTag(PoolWithTag, 0x61656857u);
    }
  }
}
