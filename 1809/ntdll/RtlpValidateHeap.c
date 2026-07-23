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
 *     ZwAllocateVirtualMemory @ 0x1800A0600 (ZwAllocateVirtualMemory.c)
 *     RtlpCheckBusyBlockTail @ 0x1800F5BF8 (RtlpCheckBusyBlockTail.c)
 *     RtlpAnalyzeHeapFailure @ 0x180103934 (RtlpAnalyzeHeapFailure.c)
 *     RtlpBreakPointHeap @ 0x180108DD8 (RtlpBreakPointHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180109404 (RtlpValidateHeapHeaders.c)
 *     RtlpValidateHeapSegment @ 0x1801095C0 (RtlpValidateHeapSegment.c)
 */

char __fastcall RtlpValidateHeap(char **BaseAddress, char a2)
{
  unsigned __int16 v3; // r12
  char *v4; // r15
  __int64 v6; // r8
  int v7; // r13d
  char *v8; // rsi
  __int64 v9; // rdi
  int v10; // edx
  unsigned __int16 v11; // cx
  __int64 v12; // rdx
  char *v13; // rdi
  int v14; // edx
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // ax
  __int64 v17; // rcx
  char *v19; // rdi
  __int64 v20; // rcx
  char *v21; // rsi
  unsigned __int16 v22; // di
  char *v23; // rdi
  unsigned __int16 v24; // si
  __int64 v25; // [rsp+40h] [rbp-10h] BYREF
  __int64 v26; // [rsp+48h] [rbp-8h] BYREF
  PVOID BaseAddressa; // [rsp+A0h] [rbp+50h] BYREF
  ULONG_PTR RegionSize; // [rsp+A8h] [rbp+58h] BYREF

  v26 = (__int64)BaseAddress;
  v3 = 0;
  v4 = 0LL;
  BaseAddressa = 0LL;
  if ( !(unsigned __int8)RtlpValidateHeapHeaders(BaseAddress) )
    goto LABEL_38;
  v6 = 1LL;
  if ( !a2 && ((_DWORD)BaseAddress[14] & 0x20000000) == 0 )
    return v6;
  v7 = 0;
  v8 = BaseAddress[42];
  while ( BaseAddress + 42 != (char **)v8 )
  {
    v9 = (__int64)(v8 - 16);
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      v10 = *(_DWORD *)(v9 + 8) ^ *((_DWORD *)BaseAddress + 34);
      *(_DWORD *)(v9 + 8) = v10;
      if ( HIBYTE(v10) != ((unsigned __int8)v10 ^ (unsigned __int8)(BYTE1(v10) ^ BYTE2(v10))) )
      {
        RtlpAnalyzeHeapFailure((__int64)BaseAddress, (unsigned __int64)(v8 - 16));
        v6 = 1LL;
      }
    }
    v8 = *(char **)v8;
    RegionSize = *(unsigned __int16 *)(v9 + 8);
    v26 = v9;
    if ( (*(_BYTE *)(v9 + 10) & 1) != 0 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("dedicated (%04Ix) free list element %p is marked busy\n", RegionSize, (const void *)v9);
      goto LABEL_36;
    }
    v11 = *(_WORD *)(v9 + 8);
    if ( v11 < v3 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Non-Dedicated free list element %p is out of order\n", (const void *)v9);
LABEL_36:
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        *(_BYTE *)(v9 + 11) = *(_BYTE *)(v9 + 8) ^ *(_BYTE *)(v9 + 9) ^ *(_BYTE *)(v9 + 10);
        *(_DWORD *)(v9 + 8) ^= *((_DWORD *)BaseAddress + 34);
      }
LABEL_38:
      RtlpBreakPointHeap();
      if ( BaseAddressa )
      {
        RegionSize = 0LL;
        RtlpSecMemFreeVirtualMemory(v17, &BaseAddressa, &RegionSize, 0x8000u);
      }
      return 0;
    }
    v3 = *(_WORD *)(v9 + 8);
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *(_BYTE *)(v9 + 11) = *(_BYTE *)(v9 + 10) ^ v11 ^ HIBYTE(v11);
      *(_DWORD *)(v9 + 8) ^= *((_DWORD *)BaseAddress + 34);
    }
    ++v7;
  }
  RegionSize = 8LL * *((unsigned __int16 *)BaseAddress + 112) + 1040;
  if ( RtlpValidateHeapTagsEnable
    && BaseAddress[41]
    && ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
  {
    v4 = (char *)BaseAddressa + 1032;
  }
  v12 = 129LL;
  v13 = BaseAddress[34];
  if ( BaseAddress + 34 == (char **)v13 )
  {
LABEL_52:
    v19 = BaseAddress[36];
    v20 = 0LL;
    v25 = 0LL;
    if ( v19 == (char *)(BaseAddress + 36) )
    {
LABEL_56:
      if ( v7 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, v6);
        else
          DbgPrint("HEAP: ", v12, v6);
        DbgPrint("Number of free blocks in arena (%ld) does not match number in the free lists (%ld)\n", 0, v7);
        goto LABEL_38;
      }
      if ( BaseAddress[24] != (char *)v20 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, v6);
        else
          DbgPrint("HEAP: ", v12, v6);
        DbgPrint(
          "Total size of free blocks in arena (%Id) does not match number total in heap header (%Id)\n",
          v25,
          (unsigned int)BaseAddress[24]);
        goto LABEL_38;
      }
      if ( BaseAddressa )
      {
        v21 = BaseAddress[41];
        if ( v21 )
        {
          v22 = 1;
          v6 = 129LL;
          while ( 1 )
          {
            v21 += 16;
            v20 = *((_QWORD *)v21 + 1);
            if ( *((_QWORD *)BaseAddressa + v22) != v20 )
              break;
            if ( ++v22 >= 0x81u )
              goto LABEL_71;
          }
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, 129LL);
          else
            DbgPrint("HEAP: ", 1LL, 129LL);
          DbgPrint(
            "Pseudo Tag %04x size incorrect (%Ix != %Ix) %p\n",
            v22,
            *((_QWORD *)v21 + 1),
            *((_QWORD *)BaseAddressa + v22),
            (char *)BaseAddressa + 8 * v22);
          goto LABEL_38;
        }
LABEL_71:
        v23 = BaseAddress[29];
        if ( v23 )
        {
          v20 = *((unsigned __int16 *)BaseAddress + 112);
          v24 = 1;
          if ( (unsigned __int16)v20 > 1u )
          {
            while ( 1 )
            {
              v23 += 72;
              if ( *(_QWORD *)&v4[8 * v24] != *((_QWORD *)v23 + 1) )
                break;
              if ( ++v24 >= (unsigned __int16)v20 )
                goto LABEL_75;
            }
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, v6);
            else
              DbgPrint("HEAP: ", 1LL, v6);
            DbgPrint(
              "Tag %04x (%ws) size incorrect (%Ix != %Ix) %p\n",
              v24,
              v23 + 20,
              *((_QWORD *)v23 + 1),
              *(_QWORD *)&v4[8 * v24],
              &v4[8 * v24]);
            goto LABEL_38;
          }
        }
LABEL_75:
        RegionSize = 0LL;
        RtlpSecMemFreeVirtualMemory(v20, &BaseAddressa, &RegionSize, 0x8000u);
      }
      LOBYTE(v6) = 1;
      return v6;
    }
    while ( (unsigned __int8)RtlpValidateHeapSegment(
                               BaseAddress,
                               (__int64)&v25,
                               (__int64)&v26,
                               (__int64)v4,
                               (__int64)BaseAddressa) )
    {
      v19 = *(char **)v19;
      if ( v19 == (char *)(BaseAddress + 36) )
      {
        v20 = v25;
        goto LABEL_56;
      }
    }
    goto LABEL_38;
  }
  while ( 1 )
  {
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      v14 = *((_DWORD *)v13 + 14) ^ *((_DWORD *)BaseAddress + 34);
      *((_DWORD *)v13 + 14) = v14;
      if ( HIBYTE(v14) != ((unsigned __int8)v14 ^ (unsigned __int8)(BYTE1(v14) ^ BYTE2(v14))) )
        RtlpAnalyzeHeapFailure((__int64)BaseAddress, (unsigned __int64)(v13 + 48));
      v12 = 129LL;
    }
    if ( v4 )
    {
      v15 = *((_WORD *)v13 + 9);
      if ( v15 )
      {
        if ( (v15 & 0x8000u) == 0 )
        {
          if ( (v15 & 0x800) == 0 && v15 < *((_WORD *)BaseAddress + 112) )
            *(_QWORD *)&v4[8 * v15] += *((_QWORD *)v13 + 4) >> 4;
        }
        else
        {
          v16 = v15 & 0x7FFF;
          if ( v16 < 0x81u )
          {
            v12 = v16;
            *((_QWORD *)BaseAddressa + v16) += *((_QWORD *)v13 + 4) >> 4;
          }
        }
      }
    }
    if ( (v13[58] & 4) != 0 && !RtlpCheckBusyBlockTail((__int64)BaseAddress, (unsigned __int64)(v13 + 48)) )
      break;
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      v13[59] = v13[56] ^ v13[57] ^ v13[58];
      *((_DWORD *)v13 + 14) ^= *((_DWORD *)BaseAddress + 34);
    }
    v13 = *(char **)v13;
    if ( BaseAddress + 34 == (char **)v13 )
      goto LABEL_52;
    v12 = 129LL;
  }
  if ( *((_DWORD *)BaseAddress + 31) )
  {
    v13[59] = v13[56] ^ v13[57] ^ v13[58];
    *((_DWORD *)v13 + 14) ^= *((_DWORD *)BaseAddress + 34);
  }
  return 0;
}
