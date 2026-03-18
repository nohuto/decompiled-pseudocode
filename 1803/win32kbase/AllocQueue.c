/*
 * XREFs of AllocQueue @ 0x1C00359C0
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C006F538 (xxxCreateThreadInfo.c)
 * Callees:
 *     Win32AllocateFromPagedLookasideList @ 0x1C0035990 (Win32AllocateFromPagedLookasideList.c)
 *     HMAssignmentLock @ 0x1C00374D0 (HMAssignmentLock.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

__int64 __fastcall AllocQueue(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  int v5; // edi
  unsigned __int8 v6; // si
  char v7; // r10
  unsigned __int64 v8; // r8
  unsigned __int8 v9; // r9
  int v10; // edi
  __int128 v11; // xmm1
  __int64 v12; // rax
  __int128 v13; // [rsp+20h] [rbp-28h]
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF

  v2 = a2;
  if ( a2 )
  {
    v10 = *(_DWORD *)(a2 + 396);
  }
  else
  {
    result = Win32AllocateFromPagedLookasideList((__int64)QLookaside);
    v2 = result;
    if ( !result )
      return result;
    v10 = 0;
    *(_QWORD *)result = 0LL;
    *(_QWORD *)(result + 8) = 0LL;
    *(_DWORD *)(result + 16) = 0;
  }
  memset((void *)(v2 + 24), 0, 0x1D0uLL);
  *(_DWORD *)(v2 + 396) = v10;
  *(_DWORD *)(v2 + 44) = 2;
  *(_DWORD *)(v2 + 416) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( a1 )
  {
    v12 = *(_QWORD *)(a1 + 424);
    *(_OWORD *)(v2 + 228) = *(_OWORD *)(v12 + 228);
    *(_OWORD *)(v2 + 244) = *(_OWORD *)(v12 + 244);
    *(_OWORD *)(v2 + 260) = *(_OWORD *)(v12 + 260);
    v11 = *(_OWORD *)(v12 + 276);
  }
  else
  {
    if ( *((struct tagDESKTOP **)gptiCurrent + 56) != grpdeskRitInput )
    {
      v5 = 0;
      v6 = 0;
      do
      {
        if ( (int)IsIsKeyStateCachedSupported() >= 0 && (unsigned int)IsKeyStateCached((unsigned int)v5) )
        {
          v7 = v6 & 3;
          v8 = (unsigned __int64)v6 >> 2;
          v9 = *((_BYTE *)&gafAsyncKeyState + v8);
          if ( ((unsigned __int8)(1 << (2 * (v6 & 3))) & v9) != 0 )
          {
            *(_BYTE *)(v8 + v2 + 228) |= 1 << (2 * v7);
            v9 = *((_BYTE *)&gafAsyncKeyState + v8);
          }
          if ( ((unsigned __int8)(1 << (2 * v7 + 1)) & v9) != 0 )
            *(_BYTE *)(v8 + v2 + 228) |= 1 << (2 * v7 + 1);
        }
        v6 = ++v5;
      }
      while ( v5 < 256 );
      goto LABEL_7;
    }
    *(_OWORD *)(v2 + 228) = gafAsyncKeyState;
    *(_OWORD *)(v2 + 244) = xmmword_1C01A0A30;
    *(_OWORD *)(v2 + 260) = xmmword_1C01A0A40;
    v11 = xmmword_1C01A0A50;
  }
  *(_OWORD *)(v2 + 276) = v11;
LABEL_7:
  if ( (gdwGTERMFlags & 1) == 0 )
    --*(_DWORD *)(v2 + 384);
  *(_QWORD *)&v13 = v2 + 376;
  *((_QWORD *)&v13 + 1) = qword_1C019F1E8;
  v14 = v13;
  HMAssignmentLock(&v14);
  return v2;
}
