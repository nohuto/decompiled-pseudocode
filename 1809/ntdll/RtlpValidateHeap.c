/*
 * XREFs of RtlpValidateHeap @ 0x180108E00
 * Callers:
 *     RtlValidateHeap @ 0x18006D290 (RtlValidateHeap.c)
 *     RtlDebugAllocateHeap @ 0x1801071A0 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x180107568 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x1801079B0 (RtlDebugCreateTagHeap.c)
 *     RtlDebugDestroyHeap @ 0x180107AF4 (RtlDebugDestroyHeap.c)
 *     RtlDebugFreeHeap @ 0x180107BB4 (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x180107EB8 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x18010805C (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1801081A8 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180108744 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x180108910 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x180108AA4 (RtlDebugSizeHeap.c)
 *     RtlDebugWalkHeap @ 0x180108C28 (RtlDebugWalkHeap.c)
 *     RtlDebugZeroHeap @ 0x180108CB4 (RtlDebugZeroHeap.c)
 * Callees:
 *     DbgPrint @ 0x18004F300 (DbgPrint.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x1800611AC (RtlpSecMemFreeVirtualMemory.c)
 *     ZwAllocateVirtualMemory @ 0x1800A05E0 (ZwAllocateVirtualMemory.c)
 *     RtlpCheckBusyBlockTail @ 0x1800F5BF8 (RtlpCheckBusyBlockTail.c)
 *     RtlpAnalyzeHeapFailure @ 0x180103934 (RtlpAnalyzeHeapFailure.c)
 *     RtlpBreakPointHeap @ 0x180108DD8 (RtlpBreakPointHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180109404 (RtlpValidateHeapHeaders.c)
 *     RtlpValidateHeapSegment @ 0x1801095C0 (RtlpValidateHeapSegment.c)
 */

char __fastcall RtlpValidateHeap(__int64 a1, char a2)
{
  unsigned __int16 v3; // r12
  __int64 v4; // r15
  __int64 v6; // r8
  int v7; // r13d
  _QWORD *v8; // rsi
  _QWORD *v9; // rdi
  int v10; // edx
  unsigned __int16 v11; // cx
  __int64 v12; // rdx
  __int64 *v13; // rdi
  int v14; // edx
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // ax
  __int64 v17; // rcx
  int v19; // eax
  _QWORD *v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rsi
  unsigned __int16 v23; // di
  __int64 v24; // rdi
  unsigned __int16 v25; // si
  __int64 v26; // [rsp+40h] [rbp-10h] BYREF
  __int64 v27; // [rsp+48h] [rbp-8h] BYREF
  int v28; // [rsp+90h] [rbp+40h] BYREF
  __int64 v29; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+58h] BYREF

  v27 = a1;
  v3 = 0;
  v4 = 0LL;
  v29 = 0LL;
  if ( !(unsigned __int8)RtlpValidateHeapHeaders((void *)a1) )
    goto LABEL_38;
  v6 = 1LL;
  if ( !a2 && (*(_DWORD *)(a1 + 112) & 0x20000000) == 0 )
    return v6;
  v7 = 0;
  v8 = *(_QWORD **)(a1 + 336);
  while ( (_QWORD *)(a1 + 336) != v8 )
  {
    v9 = v8 - 2;
    if ( *(_DWORD *)(a1 + 124) )
    {
      v10 = *((_DWORD *)v9 + 2) ^ *(_DWORD *)(a1 + 136);
      *((_DWORD *)v9 + 2) = v10;
      if ( HIBYTE(v10) != ((unsigned __int8)v10 ^ (unsigned __int8)(BYTE1(v10) ^ BYTE2(v10))) )
      {
        RtlpAnalyzeHeapFailure(a1, (unsigned __int64)(v8 - 2));
        v6 = 1LL;
      }
    }
    v8 = (_QWORD *)*v8;
    v30 = *((unsigned __int16 *)v9 + 4);
    v27 = (__int64)v9;
    if ( (*((_BYTE *)v9 + 10) & 1) != 0 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("dedicated (%04Ix) free list element %p is marked busy\n", v30, v9);
      goto LABEL_36;
    }
    v11 = *((_WORD *)v9 + 4);
    if ( v11 < v3 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Non-Dedicated free list element %p is out of order\n", v9);
LABEL_36:
      if ( *(_DWORD *)(a1 + 124) )
      {
        *((_BYTE *)v9 + 11) = *((_BYTE *)v9 + 8) ^ *((_BYTE *)v9 + 9) ^ *((_BYTE *)v9 + 10);
        *((_DWORD *)v9 + 2) ^= *(_DWORD *)(a1 + 136);
      }
LABEL_38:
      RtlpBreakPointHeap();
      if ( v29 )
      {
        v30 = 0LL;
        RtlpSecMemFreeVirtualMemory(v17, &v29, &v30, 0x8000LL);
      }
      return 0;
    }
    v3 = *((_WORD *)v9 + 4);
    if ( *(_DWORD *)(a1 + 124) )
    {
      *((_BYTE *)v9 + 11) = *((_BYTE *)v9 + 10) ^ v11 ^ HIBYTE(v11);
      *((_DWORD *)v9 + 2) ^= *(_DWORD *)(a1 + 136);
    }
    ++v7;
  }
  v30 = 8LL * *(unsigned __int16 *)(a1 + 224) + 1040;
  if ( RtlpValidateHeapTagsEnable && *(_QWORD *)(a1 + 328) && (int)ZwAllocateVirtualMemory() >= 0 )
    v4 = v29 + 1032;
  v12 = 129LL;
  v13 = *(__int64 **)(a1 + 272);
  if ( (__int64 *)(a1 + 272) == v13 )
  {
LABEL_52:
    v19 = 0;
    v20 = *(_QWORD **)(a1 + 288);
    v21 = 0LL;
    v28 = 0;
    v26 = 0LL;
    if ( v20 == (_QWORD *)(a1 + 288) )
    {
LABEL_56:
      if ( v7 != v19 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, v6);
        else
          DbgPrint("HEAP: ", v12, v6);
        DbgPrint("Number of free blocks in arena (%ld) does not match number in the free lists (%ld)\n", v28, v7);
        goto LABEL_38;
      }
      if ( *(_QWORD *)(a1 + 192) != v21 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, v6);
        else
          DbgPrint("HEAP: ", v12, v6);
        DbgPrint(
          "Total size of free blocks in arena (%Id) does not match number total in heap header (%Id)\n",
          v26,
          *(_QWORD *)(a1 + 192));
        goto LABEL_38;
      }
      if ( v29 )
      {
        v22 = *(_QWORD *)(a1 + 328);
        if ( v22 )
        {
          v23 = 1;
          v6 = 129LL;
          while ( 1 )
          {
            v22 += 16LL;
            v21 = *(_QWORD *)(v22 + 8);
            if ( *(_QWORD *)(v29 + 8LL * v23) != v21 )
              break;
            if ( ++v23 >= 0x81u )
              goto LABEL_71;
          }
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, 129LL);
          else
            DbgPrint("HEAP: ", 1LL, 129LL);
          DbgPrint(
            "Pseudo Tag %04x size incorrect (%Ix != %Ix) %p\n",
            v23,
            *(_QWORD *)(v22 + 8),
            *(_QWORD *)(v29 + 8LL * v23),
            (const void *)(v29 + 8LL * v23));
          goto LABEL_38;
        }
LABEL_71:
        v24 = *(_QWORD *)(a1 + 232);
        if ( v24 )
        {
          v21 = *(unsigned __int16 *)(a1 + 224);
          v25 = 1;
          if ( (unsigned __int16)v21 > 1u )
          {
            while ( 1 )
            {
              v24 += 72LL;
              if ( *(_QWORD *)(v4 + 8LL * v25) != *(_QWORD *)(v24 + 8) )
                break;
              if ( ++v25 >= (unsigned __int16)v21 )
                goto LABEL_75;
            }
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, v6);
            else
              DbgPrint("HEAP: ", 1LL, v6);
            DbgPrint(
              "Tag %04x (%ws) size incorrect (%Ix != %Ix) %p\n",
              v25,
              v24 + 20,
              *(_QWORD *)(v24 + 8),
              *(_QWORD *)(v4 + 8LL * v25),
              v4 + 8LL * v25);
            goto LABEL_38;
          }
        }
LABEL_75:
        v30 = 0LL;
        RtlpSecMemFreeVirtualMemory(v21, &v29, &v30, 0x8000LL);
      }
      LOBYTE(v6) = 1;
      return v6;
    }
    while ( (unsigned __int8)RtlpValidateHeapSegment(
                               a1,
                               (int)v20 - 24,
                               v6,
                               (unsigned int)&v28,
                               (__int64)&v26,
                               (__int64)&v27,
                               v4,
                               v29) )
    {
      v20 = (_QWORD *)*v20;
      if ( v20 == (_QWORD *)(a1 + 288) )
      {
        v19 = v28;
        v21 = v26;
        goto LABEL_56;
      }
    }
    goto LABEL_38;
  }
  while ( 1 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v14 = *((_DWORD *)v13 + 14) ^ *(_DWORD *)(a1 + 136);
      *((_DWORD *)v13 + 14) = v14;
      if ( HIBYTE(v14) != ((unsigned __int8)v14 ^ (unsigned __int8)(BYTE1(v14) ^ BYTE2(v14))) )
        RtlpAnalyzeHeapFailure(a1, (unsigned __int64)(v13 + 6));
      v12 = 129LL;
    }
    if ( v4 )
    {
      v15 = *((_WORD *)v13 + 9);
      if ( v15 )
      {
        if ( (v15 & 0x8000u) == 0 )
        {
          if ( (v15 & 0x800) == 0 && v15 < *(_WORD *)(a1 + 224) )
            *(_QWORD *)(v4 + 8LL * v15) += (unsigned __int64)v13[4] >> 4;
        }
        else
        {
          v16 = v15 & 0x7FFF;
          if ( v16 < 0x81u )
          {
            v12 = v16;
            *(_QWORD *)(v29 + 8LL * v16) += (unsigned __int64)v13[4] >> 4;
          }
        }
      }
    }
    if ( (*((_BYTE *)v13 + 58) & 4) != 0 && !RtlpCheckBusyBlockTail(a1, (unsigned __int64)(v13 + 6)) )
      break;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *((_BYTE *)v13 + 59) = *((_BYTE *)v13 + 56) ^ *((_BYTE *)v13 + 57) ^ *((_BYTE *)v13 + 58);
      *((_DWORD *)v13 + 14) ^= *(_DWORD *)(a1 + 136);
    }
    v13 = (__int64 *)*v13;
    if ( (__int64 *)(a1 + 272) == v13 )
      goto LABEL_52;
    v12 = 129LL;
  }
  if ( *(_DWORD *)(a1 + 124) )
  {
    *((_BYTE *)v13 + 59) = *((_BYTE *)v13 + 56) ^ *((_BYTE *)v13 + 57) ^ *((_BYTE *)v13 + 58);
    *((_DWORD *)v13 + 14) ^= *(_DWORD *)(a1 + 136);
  }
  return 0;
}
