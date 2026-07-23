/*
 * XREFs of KeCopyContextToUmsContext @ 0x140847AA4
 * Callers:
 *     PspSetUmsThreadContext @ 0x14089055C (PspSetUmsThreadContext.c)
 * Callees:
 *     RtlpSanitizeContextFlags @ 0x1400A1D40 (RtlpSanitizeContextFlags.c)
 *     RtlpCopyLegacyContext @ 0x1400A2114 (RtlpCopyLegacyContext.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     KiCopyXStateArea @ 0x1402944F0 (KiCopyXStateArea.c)
 */

__int64 __fastcall KeCopyContextToUmsContext(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r12
  int v6; // ebx
  _OWORD *v7; // rax
  _OWORD *v8; // rcx
  _WORD *v10; // [rsp+20h] [rbp-38h]
  int v11; // [rsp+70h] [rbp+18h] BYREF
  int v12; // [rsp+78h] [rbp+20h]

  v12 = *(_DWORD *)(a2 + 48);
  v11 = v12 & 0x100013;
  RtlpSanitizeContextFlags((unsigned int *)&v11);
  LOBYTE(v4) = 1;
  RtlpCopyLegacyContext(v4, a1 + 16, v11);
  v10 = (_WORD *)((a1 + 1375) & 0xFFFFFFFFFFFFFFC0uLL);
  v5 = 4LL;
  if ( (*(_DWORD *)(a1 + 1264) & 4) == 0 )
  {
    *(_WORD *)(((a1 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 2) = 0;
    *(_BYTE *)(((a1 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
    if ( MEMORY[0xFFFFF780000003D8] )
    {
      memset(v10 + 256, 0, 0x40uLL);
      *(_QWORD *)(((a1 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0x200) = 3LL;
    }
  }
  *(_DWORD *)(a1 + 1264) |= 4u;
  v6 = v12;
  if ( (v12 & 0x100040) == 0x100040 && MEMORY[0xFFFFF780000003D8] )
    KiCopyXStateArea((__int64)v10, MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFFFFFCuLL, *(int *)(a2 + 1248) + a2 + 720);
  if ( (v6 & 0x100008) == 0x100008 )
  {
    v7 = (_OWORD *)((a1 + 1375) & 0xFFFFFFFFFFFFFFC0uLL);
    v8 = (_OWORD *)(a2 + 256);
    do
    {
      *v7 = *v8;
      v7[1] = v8[1];
      v7[2] = v8[2];
      v7[3] = v8[3];
      v7[4] = v8[4];
      v7[5] = v8[5];
      v7[6] = v8[6];
      v7 += 8;
      *(v7 - 1) = v8[7];
      v8 += 8;
      --v5;
    }
    while ( v5 );
    *v10 = *(_WORD *)(a2 + 256) & 0x1F3F;
    *(_DWORD *)(((a1 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = KiMxCsrMask & *(_DWORD *)(a2 + 52);
  }
  if ( (v6 & 0x100010) == 0x100010 )
  {
    if ( (*(_DWORD *)(a1 + 128) & 0x355LL) != 0 )
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 1264), 4u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1264), 4u);
  }
  return 0LL;
}
