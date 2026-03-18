/*
 * XREFs of AllocQueue @ 0x1C002E6F0
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C002EBB4 (xxxCreateThreadInfo.c)
 * Callees:
 *     Win32AllocateFromPagedLookasideList @ 0x1C002C860 (Win32AllocateFromPagedLookasideList.c)
 *     IsKeyStateCached @ 0x1C002E8D0 (IsKeyStateCached.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C002E984 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     ??0?$CLockDomainSharedLeaf@VDLT_ASYNCKEYSTATE@@@@QEAA@XZ @ 0x1C005BA80 (--0-$CLockDomainSharedLeaf@VDLT_ASYNCKEYSTATE@@@@QEAA@XZ.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

__int64 __fastcall AllocQueue(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  int v5; // edi
  unsigned __int64 v6; // rcx
  int i; // edi
  int v8; // r10d
  unsigned __int64 v9; // r8
  unsigned __int8 v10; // r9
  __int128 v11; // xmm1
  __int64 v12; // rax
  char v13[24]; // [rsp+20h] [rbp-38h] BYREF
  char v14[32]; // [rsp+38h] [rbp-20h] BYREF
  char v15; // [rsp+68h] [rbp+10h] BYREF

  v2 = a2;
  if ( a2 )
  {
    CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(v13, a2);
    v5 = *(_DWORD *)(v2 + 404);
  }
  else
  {
    result = Win32AllocateFromPagedLookasideList((__int64)QLookaside);
    v2 = result;
    if ( !result )
      return result;
    v5 = 0;
    *(_QWORD *)result = 0LL;
    *(_QWORD *)(result + 8) = 0LL;
    *(_DWORD *)(result + 16) = 0;
  }
  memset((void *)(v2 + 24), 0, 0x1D8uLL);
  *(_DWORD *)(v2 + 404) = v5;
  *(_DWORD *)(v2 + 44) = 2;
  *(_QWORD *)(v2 + 64) = v2;
  *(_DWORD *)(v2 + 424) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( a1 )
  {
    v12 = *(_QWORD *)(a1 + 424);
    *(_OWORD *)(v2 + 236) = *(_OWORD *)(v12 + 236);
    *(_OWORD *)(v2 + 252) = *(_OWORD *)(v12 + 252);
    *(_OWORD *)(v2 + 268) = *(_OWORD *)(v12 + 268);
    v11 = *(_OWORD *)(v12 + 284);
  }
  else
  {
    v6 = (unsigned __int64)gptiCurrent;
    if ( *((struct tagDESKTOP **)gptiCurrent + 56) != grpdeskRitInput )
    {
      for ( i = 0; i < 256; ++i )
      {
        LOBYTE(v6) = i;
        if ( (unsigned int)IsKeyStateCached(v6) )
        {
          v8 = i & 3;
          v9 = (unsigned __int64)(unsigned __int8)i >> 2;
          v10 = *((_BYTE *)&gafAsyncKeyState + v9);
          if ( ((unsigned __int8)(1 << (2 * v8)) & v10) != 0 )
          {
            *(_BYTE *)(v9 + v2 + 236) |= 1 << (2 * v8);
            v10 = *((_BYTE *)&gafAsyncKeyState + v9);
          }
          v6 = (unsigned int)(2 * v8 + 1);
          if ( ((unsigned __int8)(1 << (2 * v8 + 1)) & v10) != 0 )
            *(_BYTE *)(v9 + v2 + 236) |= 1 << (2 * v8 + 1);
        }
      }
      goto LABEL_9;
    }
    CLockDomainSharedLeaf<DLT_ASYNCKEYSTATE>::CLockDomainSharedLeaf<DLT_ASYNCKEYSTATE>(&v15);
    *(_OWORD *)(v2 + 236) = gafAsyncKeyState;
    *(_OWORD *)(v2 + 252) = xmmword_1C0211330;
    *(_OWORD *)(v2 + 268) = xmmword_1C0211340;
    v11 = xmmword_1C0211350;
  }
  *(_OWORD *)(v2 + 284) = v11;
LABEL_9:
  if ( (gdwGTERMFlags & 1) == 0 )
    --*(_DWORD *)(v2 + 392);
  LockQCursor(v2, qword_1C020DA48);
  CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(v14, v2);
  return v2;
}
