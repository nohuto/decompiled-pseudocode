/*
 * XREFs of KeCopyContextFromUmsContext @ 0x140847684
 * Callers:
 *     PspGetSetContextInternal @ 0x140620940 (PspGetSetContextInternal.c)
 *     KeFixUserSwitchContext @ 0x140847C68 (KeFixUserSwitchContext.c)
 * Callees:
 *     RtlpSanitizeContextFlags @ 0x1400A1D40 (RtlpSanitizeContextFlags.c)
 *     RtlpCopyLegacyContext @ 0x1400A2114 (RtlpCopyLegacyContext.c)
 *     KiCopyXStateArea @ 0x1402944F0 (KiCopyXStateArea.c)
 */

__int64 __fastcall KeCopyContextFromUmsContext(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  unsigned __int64 v6; // r15
  _OWORD *v7; // rax
  _OWORD *v8; // rcx
  __int64 v9; // rdx
  _QWORD *v11; // [rsp+30h] [rbp-28h]
  int v12; // [rsp+70h] [rbp+18h] BYREF
  int v13; // [rsp+78h] [rbp+20h]

  v4 = *(_DWORD *)(a1 + 48);
  v13 = v4;
  v12 = v4 & 0x100013;
  RtlpSanitizeContextFlags((unsigned int *)&v12);
  LOBYTE(v5) = 1;
  RtlpCopyLegacyContext(v5, a1, v12);
  v6 = (a2 + 1375) & 0xFFFFFFFFFFFFFFC0uLL;
  if ( (v4 & 0x100040) == 0x100040 && MEMORY[0xFFFFF780000003D8] )
  {
    *(_DWORD *)(a1 + 48) |= 0x100040u;
    v11 = (_QWORD *)(a1 + *(int *)(a1 + 1248) + 1232LL);
    if ( (*(_DWORD *)(a2 + 1264) & 4) != 0 )
    {
      v6 = (a2 + 1375) & 0xFFFFFFFFFFFFFFC0uLL;
      KiCopyXStateArea((__int64)(v11 - 64), MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFFFFFCuLL, v6);
    }
    else
    {
      *v11 = 0LL;
      v6 = (a2 + 1375) & 0xFFFFFFFFFFFFFFC0uLL;
    }
  }
  if ( (v13 & 0x100008) == 0x100008 )
  {
    *(_DWORD *)(a1 + 48) |= 0x100008u;
    v7 = (_OWORD *)(a1 + 256);
    v8 = (_OWORD *)v6;
    v9 = 4LL;
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
      --v9;
    }
    while ( v9 );
    *(_DWORD *)(a1 + 52) = *(_DWORD *)(v6 + 24);
    if ( (*(_DWORD *)(a2 + 1264) & 4) == 0 )
    {
      *(_WORD *)(a1 + 258) = 0;
      *(_BYTE *)(a1 + 260) = 0;
    }
  }
  if ( (v13 & 0x40000000) != 0 && (*(_DWORD *)(a2 + 1264) & 2) != 0 )
  {
    *(_DWORD *)(a1 + 48) |= 0x80000000;
    if ( (*(_DWORD *)(a2 + 1264) & 4) == 0 )
      *(_DWORD *)(a1 + 48) |= 0x10000000u;
  }
  return 0LL;
}
