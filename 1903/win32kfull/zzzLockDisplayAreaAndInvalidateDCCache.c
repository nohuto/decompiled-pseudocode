/*
 * XREFs of zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00C3604
 * Callers:
 *     zzzLockWindowUpdate2 @ 0x1C00139B8 (zzzLockWindowUpdate2.c)
 *     xxxScrollWindowEx @ 0x1C0028484 (xxxScrollWindowEx.c)
 *     UnsetLayeredWindow @ 0x1C0044CD4 (UnsetLayeredWindow.c)
 *     xxxSetLayeredWindow @ 0x1C0048844 (xxxSetLayeredWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C008E698 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 *     xxxSetWindowStyle @ 0x1C009B250 (xxxSetWindowStyle.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00CD04C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     zzzResetSharedDesktops @ 0x1C00EC900 (zzzResetSharedDesktops.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00ED094 (zzzUpdateWindowsAfterModeChange.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C01023E0 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     xxxMinimizeHungWindow @ 0x1C023C86C (xxxMinimizeHungWindow.c)
 * Callees:
 *     GreUpdateSpriteVisRgn @ 0x1C00C4520 (GreUpdateSpriteVisRgn.c)
 *     GreClientRgnUpdated @ 0x1C00C6368 (GreClientRgnUpdated.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     InvalidateDCE @ 0x1C00EEB44 (InvalidateDCE.c)
 *     SpbCheckDce @ 0x1C00EEE80 (SpbCheckDce.c)
 *     InvalidateGDIWindows @ 0x1C01EA0F0 (InvalidateGDIWindows.c)
 *     GreLockDisplayArea @ 0x1C0282698 (GreLockDisplayArea.c)
 */

__int64 __fastcall zzzLockDisplayAreaAndInvalidateDCCache(__int64 a1, char a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *i; // rbx
  __int64 v10; // rax
  int v11; // ecx
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // edx
  __int64 v16; // r10
  __int64 v17; // r9
  int v18; // ecx
  bool v19; // zf
  int v20; // esi
  unsigned int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // r9
  unsigned __int8 v27; // cl
  __int64 v28; // [rsp+20h] [rbp-28h] BYREF
  __int64 v29; // [rsp+28h] [rbp-20h]
  __int64 v30; // [rsp+30h] [rbp-18h]

  v5 = a1;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v28 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v28;
  v29 = a1;
  HMLockObject(a1);
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x8000) == 0 && (a2 & 0x10) == 0 )
    GenerateMouseMove(0LL);
  if ( (a2 & 1) == 0 )
    goto LABEL_4;
  v6 = *(_QWORD *)(v5 + 104);
  a2 = 0;
  if ( !v6 || v5 == GetDesktopWindow(v5) )
    goto LABEL_4;
  if ( (*(_BYTE *)(*(_QWORD *)(v6 + 40) + 31LL) & 2) != 0 )
  {
    a2 = 4;
  }
  else
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 4) == 0 )
      goto LABEL_4;
    a2 = 2;
  }
  v5 = v6;
LABEL_4:
  if ( a3 )
    GreLockDisplayArea(*(_QWORD *)(gpDispInfo + 40LL), a3);
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL), v6, v7, v8);
  GreLockVisRgnPublish(*(_QWORD *)(gpDispInfo + 40LL));
  for ( i = *(__int64 **)(gpDispInfo + 24LL); i; i = (__int64 *)*i )
  {
    v11 = *((_DWORD *)i + 16);
    if ( (v11 & 0x400800) == 0 )
    {
      if ( (v11 & 3) == 0 )
      {
        v13 = i[2];
        v14 = *(_QWORD *)(v13 + 40);
        if ( (*(_BYTE *)(v14 + 31) & 2) != 0 )
        {
          v11 |= 8u;
          *((_DWORD *)i + 16) = v11;
          v14 = *(_QWORD *)(v13 + 40);
        }
        if ( (*(_BYTE *)(v14 + 31) & 0x20) != 0 )
          *((_DWORD *)i + 16) = v11 & 0xFFFFFFF7;
      }
      v12 = i[2];
      v10 = v12;
      if ( v12 )
      {
        while ( v10 != v5 )
        {
          v10 = *(_QWORD *)(v10 + 104);
          if ( !v10 )
            goto LABEL_9;
        }
        if ( v5 != v12 || (a2 & 2) == 0 && ((i[8] & 1) == 0 || (a2 & 4) == 0) )
        {
          v15 = *((_DWORD *)i + 16);
          if ( (v15 & 0x1000) != 0 )
          {
            v16 = i[3];
            if ( v15 >= 0 )
            {
              v15 &= 0xFFFFFFE7;
              *((_DWORD *)i + 16) = v15;
              if ( *(char *)(*(_QWORD *)(*(_QWORD *)(v12 + 136) + 8LL) + 8LL) >= 0
                || (v26 = *(_QWORD *)(v12 + 40), (*(_BYTE *)(v26 + 21) & 1) == 0)
                && (*(_BYTE *)(*(_QWORD *)(v16 + 40) + 31LL) & 2) != 0
                || (v27 = *(_BYTE *)(*(_QWORD *)(v16 + 40) + 31LL), ((v27 ^ *(_BYTE *)(v26 + 31)) & 0x10) != 0) )
              {
                v17 = *(_QWORD *)(v12 + 40);
                v18 = v15;
                if ( (*(_BYTE *)(v17 + 31) & 0x22) == 2 )
                {
                  v18 = v15 | 8;
                  *((_DWORD *)i + 16) = v15 | 8;
                  v17 = *(_QWORD *)(v12 + 40);
                }
                v19 = (*(_BYTE *)(v17 + 31) & 4) == 0;
                v15 = v18;
              }
              else
              {
                v19 = (v27 & 4) == 0;
              }
              if ( !v19 )
                v15 |= 0x10u;
            }
            *((_DWORD *)i + 16) = v15 | 0x2000;
            UserSetDCVisRgn(i);
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
  v20 = a2 & 8;
  v21 = v20 != 0 ? 2 : 0;
  if ( gcountPWO )
  {
    InvalidateGDIWindows(v5);
    v21 |= 1u;
  }
  GreClientRgnUpdated(v21);
  GreUpdateSpriteVisRgn(*(_QWORD *)(gpDispInfo + 40LL), v20 != 0 ? 4 : 0);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  ThreadUnlock1(v23, v22, v24);
  return 1LL;
}
