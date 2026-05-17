/*
 * XREFs of sub_18000471C @ 0x18000471C
 * Callers:
 *     sub_1800059B8 @ 0x1800059B8 (sub_1800059B8.c)
 * Callees:
 *     sub_180004B28 @ 0x180004B28 (sub_180004B28.c)
 *     RtlQueryPerformanceCounter @ 0x18000BBB0 (RtlQueryPerformanceCounter.c)
 *     RtlFreeUnicodeString @ 0x180029BA0 (RtlFreeUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x18002BE80 (RtlCreateUnicodeString.c)
 *     RtlInitializeCriticalSectionEx @ 0x180035C80 (RtlInitializeCriticalSectionEx.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_180086164 @ 0x180086164 (sub_180086164.c)
 *     sub_1800876E4 @ 0x1800876E4 (sub_1800876E4.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwCreateEvent @ 0x18009CFE0 (ZwCreateEvent.c)
 */

__int64 __fastcall sub_18000471C(__int64 a1, int a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // r12d
  unsigned __int16 v10; // si
  unsigned __int64 v11; // rax
  __int64 Heap; // rbx
  __int64 v13; // rax
  unsigned int v14; // edx
  __int64 v15; // rcx
  unsigned int v16; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  __int64 result; // rax
  unsigned __int16 v21; // r8
  unsigned int i; // ecx
  __int64 v23; // rax
  void *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r8
  int v29; // [rsp+20h] [rbp-30h]
  __int128 v30; // [rsp+30h] [rbp-20h]
  __int128 v31; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v32; // [rsp+80h] [rbp+30h] BYREF

  v5 = a5;
  v10 = 1;
  if ( a4 )
  {
    v21 = 0;
    v10 = 0;
    for ( i = 0; i < a5; i += (*(unsigned __int16 *)(i + a4 + 4) + 7) & 0xFFFFFFF8 )
    {
      ++v10;
      v21 += *(_WORD *)(i + a4 + 44);
    }
    a3 = v21;
  }
  *(_QWORD *)&v30 = MEMORY[0x7FFE0014];
  if ( *(_DWORD *)(a1 + 40) == 2 )
  {
    v11 = MEMORY[0x7FFE0014];
  }
  else if ( *(_DWORD *)(a1 + 40) == 3 )
  {
    v11 = __rdtsc();
  }
  else
  {
    v32 = 0LL;
    RtlQueryPerformanceCounter(&v32);
    v11 = v32;
  }
  *((_QWORD *)&v30 + 1) = v11;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, 8 * a3 + 584);
  if ( !Heap )
    return 0LL;
  v13 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, 4 * a3);
  *(_QWORD *)(Heap + 552) = v13;
  if ( v13 )
  {
    if ( a4 )
    {
      if ( (unsigned int)sub_180086164(Heap, v10, a4, v5) )
        goto LABEL_44;
      v23 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, 12LL * v10);
      *(_QWORD *)(Heap + 512) = v23;
      if ( !v23 )
        goto LABEL_44;
    }
    else
    {
      v14 = 0;
      if ( a3 )
      {
        v15 = 0LL;
        do
        {
          *(_WORD *)(v15 + *(_QWORD *)(Heap + 552)) = 0;
          v15 += 4LL;
          *(_WORD *)(*(_QWORD *)(Heap + 552) + v15 - 2) = v14++;
        }
        while ( v14 < a3 );
      }
    }
    v16 = *(_DWORD *)(a1 + 48);
    if ( v16 )
    {
      if ( v16 > 0x4000 )
      {
        *(_DWORD *)(a1 + 48) = 0x4000;
        v16 = 0x4000;
      }
      v17 = v16 << 10;
    }
    else
    {
      v17 = 4096;
    }
    *(_DWORD *)(Heap + 208) = v17;
    if ( (unsigned __int8)RtlCreateUnicodeString(Heap + 152, *(_QWORD *)(a1 + 152))
      && !(unsigned int)sub_180004B28(a1, *(unsigned int *)(a1 + 96), &v31) )
    {
      if ( (*(_DWORD *)(a1 + 64) & 0x4000) != 0 )
      {
        v24 = &unk_180163520;
      }
      else
      {
        if ( (*(_DWORD *)(a1 + 64) & 0x8000) == 0 )
          goto LABEL_19;
        v24 = (void *)(Heap + 408);
      }
      *(_QWORD *)(Heap + 400) = v24;
LABEL_19:
      v18 = 2048;
      *(_DWORD *)(Heap + 20) = a2;
      *(_DWORD *)(Heap + 324) = 2048;
      *(_DWORD *)(Heap + 204) = a3;
      *(_DWORD *)(Heap + 52) = 0xFFFF;
      *(_DWORD *)(Heap + 48) = -1072889856;
      *(_DWORD *)(Heap + 44) = -1072496640;
      v19 = *(_DWORD *)(a1 + 64);
      if ( (v19 & 0x400) != 0 )
      {
        v18 = 3072;
        goto LABEL_23;
      }
      if ( (v19 & 2) != 0 )
      {
        v18 = 2050;
      }
      else
      {
        if ( (v19 & 8) != 0 )
        {
          v18 = 2056;
          *(_OWORD *)(Heap + 184) = v31;
          goto LABEL_23;
        }
        if ( (v19 & 1) == 0 )
          goto LABEL_24;
        v18 = 2049;
      }
      *(_OWORD *)(Heap + 168) = v31;
LABEL_23:
      *(_DWORD *)(Heap + 324) = v18;
LABEL_24:
      *(_DWORD *)(Heap + 324) = v18 | *(_DWORD *)(a1 + 64) & 0x34133024;
      *(_DWORD *)(Heap + 392) = *(_DWORD *)(a1 + 108);
      *(_DWORD *)(Heap + 228) = *(_DWORD *)(Heap + 224);
      *(_OWORD *)(Heap + 56) = *(_OWORD *)(a1 + 24);
      *(_DWORD *)(Heap + 320) = *(_DWORD *)(a1 + 60);
      *(_DWORD *)(Heap + 216) = *(_DWORD *)(a1 + 56);
      *(_DWORD *)(Heap + 220) = *(_DWORD *)(a1 + 52);
      *(_QWORD *)(Heap + 240) = Heap + 232;
      *(_QWORD *)(Heap + 232) = Heap + 232;
      *(_QWORD *)(Heap + 264) = 0LL;
      *(_QWORD *)(Heap + 248) = Heap + 264;
      *(_QWORD *)(Heap + 256) = Heap + 264;
      *(_QWORD *)(Heap + 288) = 0LL;
      *(_QWORD *)(Heap + 272) = Heap + 288;
      *(_QWORD *)(Heap + 280) = Heap + 288;
      *(_QWORD *)(Heap + 312) = 0LL;
      *(_QWORD *)(Heap + 296) = Heap + 312;
      *(_QWORD *)(Heap + 304) = Heap + 312;
      *(_QWORD *)(Heap + 472) = Heap + 464;
      *(_QWORD *)(Heap + 464) = Heap + 464;
      *(_QWORD *)(Heap + 488) = Heap + 480;
      *(_QWORD *)(Heap + 480) = Heap + 480;
      *(_DWORD *)(Heap + 16) = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(Heap + 72) = *(_DWORD *)(a1 + 96);
      *(_DWORD *)(Heap + 368) = *(_DWORD *)(a1 + 76);
      if ( (int)ZwCreateEvent(Heap + 128, 2031619LL, 0LL, 1LL, 0) >= 0 )
      {
        LOBYTE(v29) = 0;
        if ( (int)ZwCreateEvent(Heap + 136, 2031619LL, 0LL, 1LL, v29) >= 0 )
        {
          RtlInitializeCriticalSectionEx(Heap + 88, 0LL, 0LL);
          *(_QWORD *)(Heap + 80) = 0LL;
          result = Heap;
          *(_DWORD *)(Heap + 328) = 1;
          *(_OWORD *)Heap = v30;
          return result;
        }
      }
    }
  }
LABEL_44:
  v25 = *(_QWORD *)(Heap + 136);
  if ( v25 )
  {
    ZwClose(v25);
    *(_QWORD *)(Heap + 136) = 0LL;
  }
  v26 = *(_QWORD *)(Heap + 128);
  if ( v26 )
  {
    ZwClose(v26);
    *(_QWORD *)(Heap + 128) = 0LL;
  }
  v27 = *(_QWORD *)(Heap + 512);
  if ( v27 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v27);
  v28 = *(_QWORD *)(Heap + 552);
  if ( v28 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v28);
  sub_1800876E4(Heap);
  RtlFreeUnicodeString((PUNICODE_STRING)(Heap + 152));
  RtlFreeUnicodeString((PUNICODE_STRING)(Heap + 168));
  RtlFreeUnicodeString((PUNICODE_STRING)(Heap + 184));
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
  return 0LL;
}
