/*
 * XREFs of zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C003AB88
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C000C2E4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     UnsetLayeredWindow @ 0x1C000D7F8 (UnsetLayeredWindow.c)
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 *     xxxSetWindowStyle @ 0x1C002C580 (xxxSetWindowStyle.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0043B34 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxScrollWindowEx @ 0x1C0079188 (xxxScrollWindowEx.c)
 *     xxxSetLayeredWindow @ 0x1C007BECC (xxxSetLayeredWindow.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C00B689C (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C00D817C (zzzLockWindowUpdate2.c)
 *     zzzResetSharedDesktops @ 0x1C0104B90 (zzzResetSharedDesktops.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C0104F04 (zzzUpdateWindowsAfterModeChange.c)
 *     xxxMinimizeHungWindow @ 0x1C02243EC (xxxMinimizeHungWindow.c)
 * Callees:
 *     InvalidateDCE @ 0x1C000EDA4 (InvalidateDCE.c)
 *     SpbCheckDce @ 0x1C000EE10 (SpbCheckDce.c)
 *     GreUpdateSpriteVisRgn @ 0x1C003C0E0 (GreUpdateSpriteVisRgn.c)
 *     GreClientRgnUpdated @ 0x1C003DCB4 (GreClientRgnUpdated.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     InvalidateGDIWindows @ 0x1C01D48E4 (InvalidateGDIWindows.c)
 *     GreLockDisplayArea @ 0x1C02694E8 (GreLockDisplayArea.c)
 */

__int64 __fastcall zzzLockDisplayAreaAndInvalidateDCCache(__int64 a1, char a2, __int64 a3)
{
  char v4; // si
  __int64 v5; // rdi
  __int64 i; // rbx
  __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r10
  __int64 v14; // r9
  unsigned int v15; // ecx
  bool v16; // zf
  int v17; // esi
  unsigned int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v22; // r9
  unsigned __int8 v23; // cl
  __int64 v24; // rdx
  _QWORD v25[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2;
  v5 = a1;
  v25[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v25;
  v25[1] = a1;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x8000) == 0 && (a2 & 0x10) == 0 )
    GenerateMouseMove(0LL);
  if ( (v4 & 1) == 0 )
    goto LABEL_4;
  v4 = 0;
  if ( !*(_QWORD *)(v5 + 80) || v5 == GetDesktopWindow(v5) )
    goto LABEL_4;
  if ( (*(_BYTE *)(*(_QWORD *)(v24 + 40) + 31LL) & 2) != 0 )
  {
    v4 = 4;
  }
  else
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 4) == 0 )
      goto LABEL_4;
    v4 = 2;
  }
  v5 = v24;
LABEL_4:
  if ( a3 )
    GreLockDisplayArea(*(_QWORD *)(gpDispInfo + 40LL), a3);
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  GreLockVisRgnPublish(*(_QWORD *)(gpDispInfo + 40LL));
  for ( i = *(_QWORD *)(gpDispInfo + 24LL); i; i = *(_QWORD *)i )
  {
    v8 = *(_DWORD *)(i + 64);
    if ( (v8 & 0x400800) == 0 )
    {
      if ( (v8 & 3) == 0 )
      {
        v10 = *(_QWORD *)(i + 16);
        v11 = *(_QWORD *)(v10 + 40);
        if ( (*(_BYTE *)(v11 + 31) & 2) != 0 )
        {
          v8 |= 8u;
          *(_DWORD *)(i + 64) = v8;
          v11 = *(_QWORD *)(v10 + 40);
        }
        if ( (*(_BYTE *)(v11 + 31) & 0x20) != 0 )
          *(_DWORD *)(i + 64) = v8 & 0xFFFFFFF7;
      }
      v9 = *(_QWORD *)(i + 16);
      v7 = v9;
      if ( v9 )
      {
        while ( v7 != v5 )
        {
          v7 = *(_QWORD *)(v7 + 80);
          if ( !v7 )
            goto LABEL_9;
        }
        if ( v5 != v9 || (v4 & 2) == 0 && ((*(_BYTE *)(i + 64) & 1) == 0 || (v4 & 4) == 0) )
        {
          v12 = *(unsigned int *)(i + 64);
          if ( (v12 & 0x1000) != 0 )
          {
            v13 = *(_QWORD *)(i + 24);
            if ( (int)v12 >= 0 )
            {
              v12 = (unsigned int)v12 & 0xFFFFFFE7;
              *(_DWORD *)(i + 64) = v12;
              if ( *(char *)(*(_QWORD *)(*(_QWORD *)(v9 + 112) + 8LL) + 8LL) >= 0
                || (v22 = *(_QWORD *)(v9 + 40), (*(_BYTE *)(v22 + 21) & 1) == 0)
                && (*(_BYTE *)(*(_QWORD *)(v13 + 40) + 31LL) & 2) != 0
                || (v23 = *(_BYTE *)(*(_QWORD *)(v13 + 40) + 31LL), ((v23 ^ *(_BYTE *)(v22 + 31)) & 0x10) != 0) )
              {
                v14 = *(_QWORD *)(v9 + 40);
                v15 = v12;
                if ( (*(_BYTE *)(v14 + 31) & 0x22) == 2 )
                {
                  v15 = v12 | 8;
                  *(_DWORD *)(i + 64) = v12 | 8;
                  v14 = *(_QWORD *)(v9 + 40);
                }
                v16 = (*(_BYTE *)(v14 + 31) & 4) == 0;
                v12 = v15;
              }
              else
              {
                v16 = (v23 & 4) == 0;
              }
              if ( !v16 )
              {
                v12 = (unsigned int)v12 | 0x10;
                *(_DWORD *)(i + 64) = v12;
              }
            }
            LODWORD(v12) = v12 | 0x2000;
            *(_DWORD *)(i + 64) = v12;
            UserSetDCVisRgn(i, v12, v9);
          }
          else
          {
            SpbCheckDce(i);
            InvalidateDCE(i);
          }
        }
      }
    }
LABEL_9:
    ;
  }
  GreUnlockVisRgnPublish(*(_QWORD *)(gpDispInfo + 40LL));
  v17 = v4 & 8;
  v18 = v17 != 0 ? 2 : 0;
  if ( gcountPWO )
  {
    InvalidateGDIWindows(v5);
    v18 |= 1u;
  }
  GreClientRgnUpdated(v18);
  GreUpdateSpriteVisRgn(*(_QWORD *)(gpDispInfo + 40LL), v17 != 0 ? 4 : 0);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  ThreadUnlock1(v20, v19);
  return 1LL;
}
