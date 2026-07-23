/*
 * XREFs of RtlpInsertFreeBlock @ 0x18001C380
 * Callers:
 *     RtlpAllocateHeap @ 0x180011AF0 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x180019FC0 (RtlpFreeHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x18001BD18 (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x18001CBEC (RtlpExtendHeap.c)
 *     RtlpCreateSplitBlock @ 0x180020328 (RtlpCreateSplitBlock.c)
 *     RtlpInitializeHeapSegment @ 0x1800617A8 (RtlpInitializeHeapSegment.c)
 *     RtlpCoalesceHeap @ 0x18008C1D4 (RtlpCoalesceHeap.c)
 * Callees:
 *     RtlpHeapFindListLookupEntry @ 0x18001C780 (RtlpHeapFindListLookupEntry.c)
 *     DbgPrint @ 0x18004F300 (DbgPrint.c)
 *     RtlpLogHeapFailure @ 0x18009F7CC (RtlpLogHeapFailure.c)
 *     RtlpHeapHandleError @ 0x180103D1C (RtlpHeapHandleError.c)
 */

void __fastcall RtlpInsertFreeBlock(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // rbx
  __int16 v6; // di
  unsigned __int8 v7; // al
  unsigned __int64 v8; // rbp
  char v9; // al
  unsigned __int64 *v10; // r14
  unsigned __int16 v11; // r11
  __int64 v12; // rdx
  char v13; // di
  unsigned __int64 v14; // r9
  __int64 *v15; // rdi
  __int64 *v16; // rax
  int v17; // ecx
  __int64 ListLookupEntry; // rax
  __int64 *v19; // rax
  unsigned __int64 *v20; // r12
  __int64 *v21; // rdi
  unsigned __int64 v22; // rcx
  __int64 *v23; // rax
  unsigned int v24; // r14d
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // r15
  int v28; // ecx
  int v29; // eax
  unsigned __int16 v30; // ax
  _DWORD *v31; // rdx
  unsigned __int64 v32; // rdx
  __int16 v33; // [rsp+30h] [rbp-78h]
  unsigned __int64 v34; // [rsp+38h] [rbp-70h]
  unsigned __int16 v35; // [rsp+40h] [rbp-68h]
  int v36; // [rsp+50h] [rbp-58h]
  int v37; // [rsp+60h] [rbp-48h]
  unsigned __int64 v38; // [rsp+C0h] [rbp+18h]
  char v39; // [rsp+C8h] [rbp+20h]

  if ( a3 )
  {
    v38 = a3;
    v3 = a3;
    v4 = a2;
    v6 = *(_WORD *)(a1 + 140) ^ *(_WORD *)(a2 + 12);
    if ( !v6
      && RtlpHeapErrorHandlerThreshold >= 1
      && (*(_BYTE *)(a2 + 10) & 8) == 0
      && ((a2 + 4095) & 0xFFFFFFFFFFFFF000uLL) != a2 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint(
        "((FreeBlock->Flags & HEAP_ENTRY_DECOMMITTED) || (ROUND_UP_TO_POWER2(FreeBlock, PAGE_SIZE) == (ULONG_PTR)FreeBlock))");
      RtlpHeapHandleError(1LL);
      v3 = v38;
    }
    v7 = *(_BYTE *)(v4 + 14);
    if ( v7 )
      v8 = (v4 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v7 << 16) + 0x10000;
    else
      v8 = a1;
    v9 = *(_BYTE *)(v4 + 10);
    v10 = (unsigned __int64 *)(a1 + 336);
    v39 = v9;
    while ( 1 )
    {
      if ( v3 > 0xFF00 )
      {
        v11 = -256;
        v33 = -256;
        if ( v3 == 65281 )
        {
          v11 = -272;
          v33 = -272;
        }
        v9 = 0;
      }
      else
      {
        v11 = v3;
        v33 = v3;
      }
      *(_BYTE *)(v4 + 10) = v9;
      *(_WORD *)(v4 + 12) = v6 ^ *(_WORD *)(a1 + 140);
      v12 = *(_QWORD *)(v8 + 40);
      if ( v12 == v8 )
      {
        v13 = 0;
      }
      else
      {
        v13 = ((unsigned int)(v4 - v8) >> 16) + 1;
        if ( ((v4 - v8) >> 16) + 1 >= 0xFE )
        {
          RtlpLogHeapFailure(3, v12, v4, v8, 0LL, 0LL);
          v3 = v38;
          v11 = v33;
        }
      }
      *(_BYTE *)(v4 + 10) &= 0xF0u;
      *(_BYTE *)(v4 + 14) = v13;
      *(_WORD *)(v4 + 8) = v11;
      *(_BYTE *)(v4 + 11) = 0;
      v14 = v11;
      *(_BYTE *)(v4 + 15) = 0;
      v34 = v11;
      if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
      {
        a3 = v4 + 32;
        v32 = (16 * (unsigned __int64)v11 - 32) >> 2;
        if ( v32 )
        {
          if ( (a3 & 4) != 0 )
          {
            --v32;
            *(_DWORD *)a3 = -17891602;
            a3 = v4 + 36;
          }
          memset64((void *)a3, 0xFEEEFEEEFEEEFEEEuLL, v32 >> 1);
          if ( (v32 & 1) != 0 )
            *(_DWORD *)(a3 + 4 * v32 - 4) = -17891602;
        }
        *(_BYTE *)(v4 + 10) |= 4u;
      }
      v15 = *(__int64 **)(a1 + 312);
      if ( v15 )
      {
        if ( v11 < (unsigned __int64)*((unsigned int *)v15 + 2) )
        {
LABEL_44:
          v17 = v11;
        }
        else
        {
          while ( 1 )
          {
            v16 = (__int64 *)*v15;
            if ( !*v15 )
              break;
            v15 = (__int64 *)*v15;
            if ( v11 < (unsigned __int64)*((unsigned int *)v16 + 2) )
              goto LABEL_44;
          }
          v17 = *((_DWORD *)v15 + 2) - 1;
        }
        while ( 1 )
        {
          LOBYTE(a3) = 1;
          ListLookupEntry = RtlpHeapFindListLookupEntry(a1, (_DWORD)v15, a3, v17, v14);
          v14 = v34;
          a3 = ListLookupEntry;
          if ( ListLookupEntry )
            break;
          v15 = (__int64 *)*v15;
          v17 = *((_DWORD *)v15 + 6);
        }
        v3 = v38;
        v11 = v33;
      }
      else
      {
        a3 = *v10;
      }
      if ( v10 != (unsigned __int64 *)a3 )
      {
        v28 = *(_DWORD *)(a1 + 124);
        do
        {
          if ( v28 )
          {
            v29 = *(_DWORD *)(a3 - 8);
            v28 = *(_DWORD *)(a1 + 124);
            LOWORD(v36) = v29;
            if ( (v28 & v29) != 0 )
              v36 = *(_DWORD *)(a1 + 136) ^ v29;
            v30 = v36;
          }
          else
          {
            v30 = *(_WORD *)(a3 - 8);
          }
          if ( v14 <= v30 )
            break;
          a3 = *(_QWORD *)a3;
        }
        while ( v10 != (unsigned __int64 *)a3 );
      }
      v19 = *(__int64 **)(a3 + 8);
      v20 = (unsigned __int64 *)(v4 + 16);
      if ( *v19 == a3 )
      {
        *v20 = a3;
        *(_QWORD *)(v4 + 24) = v19;
        *v19 = (__int64)v20;
        *(_QWORD *)(a3 + 8) = v20;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, a3, 0, *v19, 0LL);
        v14 = v34;
        v3 = v38;
        v11 = v33;
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v4 + 8);
      v21 = *(__int64 **)(a1 + 312);
      if ( v21 )
      {
        v22 = *(unsigned __int16 *)(v4 + 8);
        v35 = *(_WORD *)(v4 + 8);
        if ( v22 >= *((unsigned int *)v21 + 2) )
        {
          while ( 1 )
          {
            v23 = (__int64 *)*v21;
            if ( !*v21 )
              break;
            v21 = (__int64 *)*v21;
            if ( v22 < *((unsigned int *)v23 + 2) )
              goto LABEL_24;
          }
          LODWORD(v22) = *((_DWORD *)v21 + 2) - 1;
        }
LABEL_24:
        v24 = v22 - *((_DWORD *)v21 + 6);
        if ( *((_DWORD *)v21 + 3) )
          v25 = 2 * v24;
        else
          v25 = v24;
        ++*((_DWORD *)v21 + 4);
        v26 = 8 * v25;
        v27 = *(_QWORD *)(v21[6] + 8 * v25);
        if ( (_DWORD)v22 == *((_DWORD *)v21 + 2) - 1 )
          ++*((_DWORD *)v21 + 5);
        if ( !v27 )
          goto LABEL_33;
        LODWORD(a3) = v27 - 16;
        v37 = *(_DWORD *)(v27 - 8);
        if ( *(_DWORD *)(a1 + 124) )
        {
          v37 = *(_DWORD *)(v27 - 8) ^ *(_DWORD *)(a1 + 136);
          if ( HIBYTE(v37) != ((unsigned __int8)v37 ^ (unsigned __int8)(BYTE1(v37) ^ BYTE2(v37))) )
          {
            RtlpLogHeapFailure(3, a1, a3, 0, 0LL, 0LL);
            v14 = v34;
            v3 = v38;
            v11 = v33;
          }
        }
        if ( v35 - (unsigned __int16)v37 <= 0 )
LABEL_33:
          *(_QWORD *)(v21[6] + v26) = v20;
        if ( !v27 )
        {
          v31 = (_DWORD *)(v21[5] + 4 * ((unsigned __int64)v24 >> 5));
          *v31 |= 1 << (v24 & 0x1F);
        }
        v10 = (unsigned __int64 *)(a1 + 336);
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v4 + 11) = *(_BYTE *)(v4 + 8) ^ *(_BYTE *)(v4 + 9) ^ *(_BYTE *)(v4 + 10);
        *(_DWORD *)(v4 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      v3 -= v14;
      v6 = v11;
      v4 += 16 * v14;
      v38 = v3;
      if ( v4 >= *(_QWORD *)(v8 + 72) )
        break;
      v9 = v39;
      if ( !v3 )
      {
        *(_WORD *)(v4 + 12) = v11 ^ *(_WORD *)(a1 + 140);
        if ( !v11 && RtlpHeapErrorHandlerThreshold >= 1 && ((v4 + 4095) & 0xFFFFFFFFFFFFF000uLL) != v4 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("ROUND_UP_TO_POWER2(FreeBlock, PAGE_SIZE) == (ULONG_PTR)FreeBlock");
          RtlpHeapHandleError(1LL);
        }
        return;
      }
    }
  }
}
