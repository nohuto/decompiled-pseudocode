/*
 * XREFs of AllocQueue @ 0x1C005F060
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C002C1CC (xxxCreateThreadInfo.c)
 * Callees:
 *     Win32AllocateFromPagedLookasideList @ 0x1C00256F0 (Win32AllocateFromPagedLookasideList.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 __fastcall AllocQueue(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 result; // rax
  int v5; // ebx
  unsigned __int64 v6; // r9
  char v7; // r8
  unsigned __int8 v8; // r10
  int v9; // esi
  __int128 v10; // xmm1
  __int64 v11; // rax

  v2 = a2;
  if ( a2 )
  {
    v9 = *(_DWORD *)(a2 + 396);
    v5 = 0;
  }
  else
  {
    result = Win32AllocateFromPagedLookasideList((__int64)QLookaside);
    v2 = result;
    if ( !result )
      return result;
    v5 = 0;
    v9 = 0;
    *(_QWORD *)result = 0LL;
    *(_QWORD *)(result + 8) = 0LL;
    *(_DWORD *)(result + 16) = 0;
  }
  memset((void *)(v2 + 24), 0, 0x1D0uLL);
  *(_DWORD *)(v2 + 396) = v9;
  *(_DWORD *)(v2 + 44) = 2;
  *(_DWORD *)(v2 + 416) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( a1 )
  {
    v11 = *(_QWORD *)(a1 + 432);
    *(_OWORD *)(v2 + 228) = *(_OWORD *)(v11 + 228);
    *(_OWORD *)(v2 + 244) = *(_OWORD *)(v11 + 244);
    *(_OWORD *)(v2 + 260) = *(_OWORD *)(v11 + 260);
    v10 = *(_OWORD *)(v11 + 276);
  }
  else
  {
    if ( *((struct tagDESKTOP **)gptiCurrent + 57) != grpdeskRitInput )
    {
      do
      {
        if ( (int)IsIsKeyStateCachedSupported() >= 0 && (unsigned int)IsKeyStateCached((unsigned int)v5) )
        {
          v6 = (unsigned __int64)(unsigned __int8)v5 >> 2;
          v7 = v5 & 3;
          v8 = *((_BYTE *)&gafAsyncKeyState + v6);
          if ( ((unsigned __int8)(1 << (2 * (v5 & 3))) & v8) != 0 )
          {
            *(_BYTE *)(v6 + v2 + 228) |= 1 << (2 * v7);
            v8 = *((_BYTE *)&gafAsyncKeyState + v6);
          }
          if ( ((unsigned __int8)(1 << (2 * v7 + 1)) & v8) != 0 )
            *(_BYTE *)(v6 + v2 + 228) |= 1 << (2 * v7 + 1);
        }
        ++v5;
      }
      while ( v5 < 256 );
      goto LABEL_7;
    }
    *(_OWORD *)(v2 + 228) = gafAsyncKeyState;
    *(_OWORD *)(v2 + 244) = xmmword_1C01CC680;
    *(_OWORD *)(v2 + 260) = xmmword_1C01CC690;
    v10 = xmmword_1C01CC6A0;
  }
  *(_OWORD *)(v2 + 276) = v10;
LABEL_7:
  if ( (gdwGTERMFlags & 1) == 0 )
    --*(_DWORD *)(v2 + 384);
  LockQCursor(v2, qword_1C01C8D28);
  return v2;
}
