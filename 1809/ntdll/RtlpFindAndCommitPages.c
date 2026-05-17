/*
 * XREFs of RtlpFindAndCommitPages @ 0x18001CED8
 * Callers:
 *     RtlpExtendHeap @ 0x18001CBEC (RtlpExtendHeap.c)
 * Callees:
 *     RtlpHeapRemoveListEntry @ 0x1800141C0 (RtlpHeapRemoveListEntry.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlpCreateUCREntry @ 0x18001D2C4 (RtlpCreateUCREntry.c)
 *     RtlpFindUCREntry @ 0x18001D4F8 (RtlpFindUCREntry.c)
 *     DbgPrint @ 0x18004F300 (DbgPrint.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x180060BEC (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpHpHeapValidateProtection @ 0x180060C34 (RtlpHpHeapValidateProtection.c)
 *     RtlpLogHeapFailure @ 0x18009F7AC (RtlpLogHeapFailure.c)
 *     ZwAllocateVirtualMemory @ 0x1800A05E0 (ZwAllocateVirtualMemory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 *     RtlpAnalyzeHeapFailure @ 0x180103934 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapHandleError @ 0x180103D1C (RtlpHeapHandleError.c)
 *     RtlpLogHeapCommit @ 0x180105B44 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x180105DCC (RtlpLogHeapExtendEvent.c)
 */

__int64 *__fastcall RtlpFindAndCommitPages(__int64 a1, unsigned __int64 *a2)
{
  __int64 *UCREntry; // rdi
  __int64 *v5; // rsi
  unsigned __int8 v6; // al
  unsigned __int64 v7; // rbp
  int v8; // eax
  __int64 v9; // r15
  _DWORD *SharedData; // rcx
  __int64 v11; // rcx
  int v12; // edx
  __int64 *v13; // r8
  __int64 v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rdx
  unsigned __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 *v21; // rcx
  __int64 v22; // r9
  __int64 v23; // rdx
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // rdx
  __int64 v26; // rdx
  unsigned __int64 v27; // rdi
  _DWORD *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdi
  _DWORD *v31; // rcx
  __int64 v32; // rcx
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // rdx
  int v36; // r15d
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // [rsp+60h] [rbp+8h] BYREF

  UCREntry = (__int64 *)RtlpFindUCREntry(a1, *a2);
  if ( UCREntry == (__int64 *)(a1 + 240) )
    return 0LL;
  if ( RtlpHeapErrorHandlerThreshold >= 1 && UCREntry[5] < *a2 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("(UCRBlock->Size >= *Size)");
    RtlpHeapHandleError(1LL);
  }
  v5 = UCREntry - 2;
  v6 = *((_BYTE *)UCREntry - 2);
  if ( v6 )
    v7 = ((unsigned __int64)v5 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v6 << 16) + 0x10000;
  else
    v7 = a1;
  v40 = UCREntry[4];
  if ( RtlpHeapKey != *(_QWORD *)(a1 + 360) )
  {
    v8 = ((__int64 (__fastcall *)(__int64, __int64 *, unsigned __int64 *))(RtlpHeapKey ^ *(_QWORD *)(a1 + 360)))(
           a1,
           &v40,
           a2);
  }
  else
  {
    v34 = UCREntry[5];
    v35 = *a2;
    if ( v34 - *a2 <= 16LL * *(_QWORD *)(a1 + 176) && v34 < 16 * (unsigned __int64)*(unsigned int *)(a1 + 148) )
    {
      *a2 = v34;
      v35 = v34;
    }
    *a2 = (v35 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v36 = RtlpHpHeapValidateProtection(a1, (*(_DWORD *)(a1 + 112) & 0x40000) != 0 ? 64 : 4);
    if ( (unsigned int)RtlpHpHeapCheckCommitLimit(*a2, *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664), a1, a1 + 376) )
      v8 = ZwAllocateVirtualMemory(-1LL, &v40, 0LL, a2, 4096, v36);
    else
      v8 = -1073741523;
    ++*(_DWORD *)(a1 + 624);
  }
  if ( v8 < 0 )
  {
    ++*(_DWORD *)(a1 + 632);
    return 0LL;
  }
  v9 = 2147353472LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v11 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v11 = 2147353472LL;
  if ( *(_BYTE *)v11 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapCommit(a1, v40, *a2, 2LL);
  if ( *(_DWORD *)(a1 + 124) )
  {
    v12 = *((_DWORD *)v5 + 2) ^ *(_DWORD *)(a1 + 136);
    *((_DWORD *)v5 + 2) = v12;
    if ( HIBYTE(v12) != ((unsigned __int8)v12 ^ (unsigned __int8)(BYTE1(v12) ^ BYTE2(v12))) )
      RtlpAnalyzeHeapFailure(a1, UCREntry - 2);
  }
  *((_BYTE *)v5 + 10) = 0;
  v13 = UCREntry + 2;
  *((_BYTE *)v5 + 15) = 0;
  v14 = UCREntry[2];
  v15 = (__int64 *)UCREntry[3];
  v16 = *(_QWORD *)(v14 + 8);
  v17 = *v15;
  if ( *v15 == v16 && (__int64 *)v17 == v13 )
  {
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
  }
  else
  {
    RtlpLogHeapFailure(13, 0, (_DWORD)v13, v16, v17, 0LL);
  }
  v18 = UCREntry[5];
  if ( v18 )
  {
    v19 = *(_QWORD *)(a1 + 320);
    if ( v19 )
    {
      v37 = *(unsigned int *)(v19 + 8);
      v38 = v18 >> 12;
      while ( v38 >= v37 )
      {
        v39 = *(_QWORD *)v19;
        if ( !*(_QWORD *)v19 )
        {
          LODWORD(v38) = *(_DWORD *)(v19 + 8) - 1;
          break;
        }
        v19 = *(_QWORD *)v19;
        v37 = *(unsigned int *)(v39 + 8);
      }
      RtlpHeapRemoveListEntry(a1, v19, 0, UCREntry, v38, UCREntry[5]);
    }
    v20 = *UCREntry;
    v21 = (__int64 *)UCREntry[1];
    v22 = *(_QWORD *)(*UCREntry + 8);
    v23 = *v21;
    if ( *v21 == v22 && (__int64 *)v23 == UCREntry )
    {
      *v21 = v20;
      *(_QWORD *)(v20 + 8) = v21;
    }
    else
    {
      RtlpLogHeapFailure(13, 0, (_DWORD)UCREntry, v22, v23, 0LL);
    }
  }
  --*(_DWORD *)(v7 + 84);
  *(_DWORD *)(v7 + 80) -= (unsigned __int64)UCREntry[5] >> 12;
  *(_QWORD *)(a1 + 576) += UCREntry[5];
  ++*(_DWORD *)(a1 + 608);
  --*(_DWORD *)(a1 + 604);
  v24 = UCREntry[5];
  if ( v24 >= 0xFF000 )
  {
    *(_QWORD *)(a1 + 584) -= v24;
    v24 = UCREntry[5];
  }
  v25 = *a2;
  if ( v24 > *a2 || v24 + UCREntry[4] == *(_QWORD *)(v7 + 72) )
  {
    RtlpCreateUCREntry(a1, v7, v25 - 48 + UCREntry[4], v24 - v25, (__int64)(UCREntry - 2), (__int64)a2);
    *a2 *= 16LL;
  }
  else
  {
    *a2 = v25 + 16LL * *((unsigned __int16 *)v5 + 4);
  }
  *((_BYTE *)v5 + 11) = 0;
  v26 = *(_QWORD *)(v7 + 40);
  if ( v26 == v7 )
  {
    LOBYTE(v27) = 0;
  }
  else
  {
    v27 = (((unsigned __int64)v5 - v7) >> 16) + 1;
    if ( v27 >= 0xFE )
      RtlpLogHeapFailure(3, v26, (_DWORD)v5, v7, 0LL, 0LL);
  }
  *((_BYTE *)v5 + 14) = v27;
  v28 = NtCurrentPeb()->SharedData;
  if ( v28 && *v28 )
    v29 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v29 = 2147353472LL;
  if ( *(_BYTE *)v29 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v9 = (__int64)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapExtendEvent(a1, (_DWORD)v5, *a2, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v9);
  }
  v30 = 2147353482LL;
  v31 = NtCurrentPeb()->SharedData;
  if ( v31 && *v31 )
    v32 = (__int64)NtCurrentPeb()->SharedData + 560;
  else
    v32 = 2147353482LL;
  if ( *(_BYTE *)v32 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v30 = (__int64)NtCurrentPeb()->SharedData + 560;
    RtlpLogHeapExtendEvent(a1, (_DWORD)v5, *a2, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v30);
  }
  return v5;
}
