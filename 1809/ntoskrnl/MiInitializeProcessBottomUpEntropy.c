/*
 * XREFs of MiInitializeProcessBottomUpEntropy @ 0x14067B100
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14067AA78 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     ExGenRandom @ 0x1400627E0 (ExGenRandom.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall MiInitializeProcessBottomUpEntropy(__int64 a1)
{
  __int64 v1; // r15
  unsigned int v2; // esi
  bool v4; // bp
  unsigned int v5; // r14d
  __int64 v6; // rax
  unsigned int v7; // ebx
  int v8; // ecx
  int v9; // eax
  unsigned int *v10; // rdx
  _DWORD *v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 result; // rax
  unsigned int v15; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+24h] [rbp-44h]

  v1 = *(_QWORD *)(a1 + 1296);
  v15 = 0;
  v2 = 0;
  v16 = 1LL;
  v4 = 0;
  v5 = 2;
  if ( (*(_DWORD *)(a1 + 2080) & 0x40) != 0 )
    goto LABEL_23;
  v6 = ExGenRandom(1);
  v7 = (unsigned __int8)v6;
  if ( !(_DWORD)InitializationPhase )
    *(_DWORD *)(a1 + 2080) |= 0x20u;
  if ( *(_QWORD *)(a1 + 1152) > 0x100000000uLL )
  {
    v8 = *(_DWORD *)(a1 + 2080) & 0x20;
    if ( v8 )
      v7 = v6 & 0xFFFFFF;
    v4 = v8 != 0;
    if ( v8 )
    {
      v9 = 0x10000;
      if ( v7 > 0x10000 )
        v9 = v7;
      v7 = v9;
    }
  }
  if ( !v7 )
    v7 = 1;
  LODWORD(v16) = v7;
  if ( !v4 )
  {
LABEL_23:
    _InterlockedAnd((volatile signed __int32 *)(a1 + 2080), 0xFFFFFFDF);
    v7 = v16;
  }
  if ( v4 )
    v15 = v7 + (ExGenRandom(1) & 0xFFFFFF) + 0x1000000;
  else
    v15 = v7;
  if ( *(_QWORD *)(a1 + 1152) <= 0x100000000uLL )
  {
    v5 = 3;
    HIDWORD(v16) = (ExGenRandom(1) & 0xFFFFFF) + 0x10000;
  }
  *(_DWORD *)(v1 + 216) = v5;
  v10 = &v15;
  v11 = (_DWORD *)(v1 + 96);
  do
  {
    v12 = *(_QWORD *)(a1 + 1152) - 1LL;
    if ( v2 == 2 )
      v12 = 0x7FFFFFFEFFFFLL;
    ++v2;
    *(v11 - 5) = v12 >> 16;
    v13 = *v10++;
    *v11 = v13;
    v11 += 14;
    result = v13 << 16;
    *((_QWORD *)v11 - 8) = result;
  }
  while ( v2 < v5 );
  return result;
}
