/*
 * XREFs of xxxEnsureMonitorCursors @ 0x1C0008198
 * Callers:
 *     ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C000ACAC (-HandlePointerCursorSideOp@@YAXXZ.c)
 * Callees:
 *     _DestroyCursor @ 0x1C0015010 (_DestroyCursor.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxSetMonitorIcoCurIndex @ 0x1C006B19C (xxxSetMonitorIcoCurIndex.c)
 *     GetCursorForDim @ 0x1C006B2A4 (GetCursorForDim.c)
 *     xxxClientCopyImage @ 0x1C006C42C (xxxClientCopyImage.c)
 */

__int64 xxxEnsureMonitorCursors()
{
  unsigned int v0; // ebx
  _QWORD *v1; // rdi
  char *v2; // rsi
  unsigned __int64 v3; // rsi
  __int64 result; // rax
  unsigned __int64 v5; // rbp
  __int64 *v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD *v12; // rcx
  unsigned int v13; // r14d
  _DWORD *v14; // r12
  unsigned int v15; // edi
  __int64 v16; // rax
  __int64 v17; // rdx
  _QWORD v18[4]; // [rsp+30h] [rbp-48h] BYREF

  v0 = 0;
  v1 = &unk_1C0322668;
  v2 = (char *)&gastrSystemCursorPaths;
  do
  {
    xxxSetMonitorIcoCurIndex(v2, (*v1 & 0xFFFFFFFFFFFF0000uLL) != 0 ? 33040 : 33024, v0++, 0LL);
    v1 += 2;
    v2 += 16;
  }
  while ( v0 < 0x13 );
  v3 = *((_QWORD *)&gSharedInfo + 1);
  result = gpKernelHandleTable;
  v5 = v3 + 32LL * giheLast;
  v6 = (__int64 *)gpKernelHandleTable;
  while ( v3 <= v5 )
  {
    if ( *(_BYTE *)(v3 + 24) == 3 )
    {
      v7 = *v6;
      if ( *(_WORD *)(*v6 + 74) == 1 )
      {
        result = *(_DWORD *)(v7 + 80) & 0x5240;
        if ( (_DWORD)result == 0x4000 )
        {
          v8 = *(_QWORD *)(v7 + 24);
          if ( !v8 || (result = *(unsigned int *)(v8 + 812), (result & 0x400000) == 0) )
          {
            ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
            v18[0] = *(_QWORD *)(ThreadWin32Thread + 408);
            v12 = v18;
            *(_QWORD *)(ThreadWin32Thread + 408) = v18;
            v18[1] = v7;
            _InterlockedAdd((volatile signed __int32 *)(v7 + 8), 1u);
            v13 = 0;
            v14 = &gfCursorSizeNeeded;
            do
            {
              if ( *v14 )
              {
                if ( v13 )
                {
                  if ( v13 == 1 )
                  {
                    v15 = 48;
                  }
                  else if ( v13 == 2 )
                  {
                    v15 = 64;
                  }
                  else
                  {
                    v15 = v13 == 3 ? 96 : 128;
                  }
                }
                else
                {
                  v15 = 32;
                }
                if ( !GetCursorForDim(v7, v15) )
                {
                  v11 = xxxClientCopyImage(
                          *(_QWORD *)v7,
                          2,
                          v15 * *(_DWORD *)(v7 + 140) / *(_DWORD *)(v7 + 76),
                          (v15 * *(_DWORD *)(v7 + 144) / *(_DWORD *)(v7 + 76)) >> 1,
                          0x40000);
                  if ( v11 )
                  {
                    v16 = *(_QWORD *)(v7 + 24);
                    if ( v16
                      && *(_QWORD *)(v16 + 320)
                      && (*(_DWORD *)(v11 + 80) & 0x1000) != 0
                      && *(_QWORD *)(v11 + 48) == v11 )
                    {
                      *(_DWORD *)(v11 + 76) = v15;
                      *(_QWORD *)(v11 + 48) = v7;
                      *(_QWORD *)(v11 + 40) = *(_QWORD *)(v7 + 40);
                      v17 = *(_QWORD *)(v7 + 24);
                      *(_QWORD *)(v7 + 40) = v11;
                      HMChangeOwnerPheProcess(
                        *((_QWORD *)&gSharedInfo + 1)
                      + *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)v11,
                        *(_QWORD *)(v17 + 320));
                    }
                    else
                    {
                      DestroyCursor((struct tagCURSOR *)v11);
                    }
                  }
                }
              }
              ++v13;
              ++v14;
            }
            while ( v13 < 5 );
            result = ThreadUnlock1(v12, v10, v11);
          }
        }
      }
    }
    v3 += 32LL;
    v6 += 3;
  }
  return result;
}
