/*
 * XREFs of sub_1800EFB70 @ 0x1800EFB70
 * Callers:
 *     RtlCreateTagHeap @ 0x18007C500 (RtlCreateTagHeap.c)
 * Callees:
 *     sub_180033C9C @ 0x180033C9C (sub_180033C9C.c)
 *     ZwAllocateVirtualMemory @ 0x18009C9E0 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall sub_1800EFB70(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  __int16 v5; // bp
  __int16 v6; // r15
  __int64 *v7; // r14
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rdx
  __int16 v11; // r8
  __int16 v12; // ax
  __int64 v14; // [rsp+80h] [rbp+18h]

  v2 = qword_180166968;
  v4 = a1;
  if ( !qword_180166968 )
    return 0LL;
  if ( a1 )
  {
    v5 = 0;
  }
  else
  {
    *(_DWORD *)(qword_180166968 + 152) = -285217025;
    v5 = 2048;
    *(_DWORD *)(v2 + 112) = 1;
    v4 = v2;
  }
  v6 = 0;
  if ( (*(_DWORD *)(v4 + 112) & 0x8000000) != 0 )
    v6 = sub_180033C9C(1u);
  v7 = (__int64 *)(v4 + 232);
  if ( !*(_QWORD *)(v4 + 232) )
  {
    if ( (int)ZwAllocateVirtualMemory() < 0 )
      return 0LL;
    *(_DWORD *)(v4 + 224) = 134152192;
    ++a2;
  }
  v8 = *(unsigned __int16 *)(v4 + 224);
  if ( a2 > *(unsigned __int16 *)(v4 + 226) - (unsigned int)v8 )
    return 0LL;
  v9 = *v7;
  v10 = *v7 + 72 * v8;
  v14 = v10;
  if ( (unsigned int)v8 < (unsigned int)v8 + a2 )
  {
    v11 = v10;
    do
    {
      if ( ((v11 + 72) & 0xFFFu) <= 0x48uLL )
      {
        if ( (int)ZwAllocateVirtualMemory() < 0 )
          return 0LL;
        v10 = v14;
      }
      v12 = v8;
      LODWORD(v8) = v8 + 1;
      *(_WORD *)(v10 + 16) = v5 | v12;
      *(_WORD *)(v14 + 18) = v6;
      v10 = v14 + 72;
      v14 = v10;
      v11 = v10;
    }
    while ( (unsigned int)v8 < a2 + *(unsigned __int16 *)(v4 + 224) );
    v9 = *v7;
    LOWORD(v8) = *(_WORD *)(v4 + 224);
  }
  *(_WORD *)(v4 + 224) = a2 + v8;
  return v9 + 72LL * (unsigned __int16)v8;
}
