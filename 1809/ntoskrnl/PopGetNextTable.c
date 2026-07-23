/*
 * XREFs of PopGetNextTable @ 0x1401442D0
 * Callers:
 *     PopWriteHiberImage @ 0x14056B4C8 (PopWriteHiberImage.c)
 *     PopCompressHiberBlocks @ 0x14056BB70 (PopCompressHiberBlocks.c)
 * Callees:
 *     RtlFindNextForwardRunClearCapped @ 0x14002B750 (RtlFindNextForwardRunClearCapped.c)
 *     MmGetPhysicalAddress @ 0x1401211A0 (MmGetPhysicalAddress.c)
 *     MmMapMemoryDumpMdlEx @ 0x140144520 (MmMapMemoryDumpMdlEx.c)
 */

__int64 PopGetNextTable(__int64 a1, __int64 a2, __int64 a3, __int64 a4, ...)
{
  unsigned __int64 *v4; // r15
  bool v5; // zf
  __int64 v6; // rsi
  __int64 v7; // r14
  _BYTE *v8; // r13
  unsigned __int16 v10; // bp
  unsigned int v11; // edi
  __int64 v12; // r12
  unsigned int v13; // eax
  int NextForwardRunClearCapped; // eax
  int v15; // r9d
  __int64 v16; // rcx
  unsigned __int64 v17; // r10
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rbx
  unsigned int v23; // ecx
  unsigned __int16 v24; // si
  __int64 v25; // r8
  unsigned int v26; // ecx
  __int64 v27; // r9
  unsigned int v28; // ebp
  __int64 v29; // r13
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned int v32; // r14d
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  BOOL v34; // [rsp+20h] [rbp-58h]
  _BYTE *v35; // [rsp+88h] [rbp+10h]
  __int64 v38; // [rsp+A0h] [rbp+28h] BYREF
  va_list va; // [rsp+A0h] [rbp+28h]
  __int64 v40; // [rsp+A8h] [rbp+30h]
  va_list va1; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v38 = va_arg(va1, _QWORD);
  v40 = va_arg(va1, _QWORD);
  v35 = (_BYTE *)a2;
  v4 = (unsigned __int64 *)(a4 + 48);
  v5 = (_BYTE)v38 == 0;
  v6 = a4;
  *(_DWORD *)a2 = 0;
  v7 = a3;
  v34 = v5;
  v8 = (_BYTE *)a2;
  v10 = 0;
  v11 = 0;
  while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 8), 1, 0) )
  {
    do
      _mm_pause();
    while ( *(_DWORD *)(a1 + 8) );
  }
  v12 = a1 + 64;
  if ( *(_QWORD *)(a1 + 104) != a1 + 64 )
  {
    v23 = *(_DWORD *)(a1 + 284);
    if ( v23 )
    {
      v24 = 0;
      do
      {
        a2 = *(_QWORD *)(a1 + 104);
        if ( a2 == v12 )
          break;
        v25 = *(_QWORD *)(a1 + 112);
        v26 = v23 - v11;
        v27 = v25 + *(_QWORD *)(a2 + 24);
        v28 = *(_DWORD *)(a2 + 32) - v27;
        v29 = *(_QWORD *)(a2 + 40) + (v25 << 12);
        if ( v28 > v26 )
        {
          v30 = v25 + v26;
          v28 = v26;
        }
        else
        {
          *(_QWORD *)(a1 + 104) = *(_QWORD *)a2;
          v30 = 0LL;
        }
        *(_QWORD *)(a1 + 112) = v30;
        v31 = v24++;
        *(_QWORD *)(v7 + 8 * v31) = (16 * v27) | ((_BYTE)v28 - 1) & 0xF;
        v32 = 0;
        if ( v28 )
        {
          v11 += v28;
          do
          {
            PhysicalAddress = MmGetPhysicalAddress((PVOID)(v29 + ((unsigned __int64)v32++ << 12)));
            *v4++ = (unsigned __int64)PhysicalAddress.QuadPart >> 12;
            --v28;
          }
          while ( v28 );
          v12 = a1 + 64;
        }
        v23 = *(_DWORD *)(a1 + 284);
        v7 = a3;
      }
      while ( v11 < v23 );
      v8 = v35;
      v10 = v24;
      v6 = a4;
    }
  }
  v13 = *(_DWORD *)(a1 + 284);
  if ( v11 < v13 )
  {
    while ( 1 )
    {
      NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped(
                                    *(_QWORD *)(a1 + 96),
                                    *(_DWORD *)(a1 + 112),
                                    v13 - v11,
                                    (unsigned int *)va);
      v15 = NextForwardRunClearCapped;
      if ( !NextForwardRunClearCapped )
        break;
      v16 = ((_BYTE)NextForwardRunClearCapped - 1) & 0xF;
      v11 += NextForwardRunClearCapped;
      v17 = (unsigned int)v38;
      v18 = (unsigned int)(v38 + NextForwardRunClearCapped);
      v19 = (unsigned int)v38;
      *(_QWORD *)(a1 + 112) = v18;
      a2 = v10++;
      *(_QWORD *)(v7 + 8 * a2) = (16 * v19) | v16;
      do
      {
        *v4++ = v17++;
        --v15;
      }
      while ( v15 );
      v13 = *(_DWORD *)(a1 + 284);
      if ( v11 >= v13 )
        goto LABEL_9;
    }
    *(_QWORD *)(a1 + 112) = **(unsigned int **)(a1 + 96);
  }
LABEL_9:
  *(_DWORD *)(a1 + 8) = 0;
  if ( !v11 )
    return 0LL;
  v20 = v40;
  *v8 = v10;
  v21 = v11;
  *(_QWORD *)v6 = 0LL;
  *(_WORD *)(v6 + 10) = 0;
  *(_QWORD *)(v6 + 32) = 0LL;
  *(_DWORD *)(v6 + 44) = 0;
  *(_WORD *)(v6 + 8) = 8 * (v11 + 6);
  *(_DWORD *)(v6 + 40) = v11 << 12;
  MmMapMemoryDumpMdlEx(v20, a2, v6, v34);
  return v21;
}
