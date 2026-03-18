/*
 * XREFs of xxxShowOwnedWindows @ 0x1C0084C90
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C00841D4 (xxxMinMaximizeEx.c)
 *     xxxShowOwnedPopups @ 0x1C015DDB0 (xxxShowOwnedPopups.c)
 *     xxxMinimizeHungWindow @ 0x1C023C86C (xxxMinimizeHungWindow.c)
 * Callees:
 *     SetVisible @ 0x1C002CDA0 (SetVisible.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     BuildHwndList @ 0x1C00CC820 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00CC9E0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall xxxShowOwnedWindows(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 result; // rax
  __int64 DesktopWindow; // rax
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 v10; // r14
  _QWORD *v11; // r15
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 RectRgnIndirect; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // [rsp+20h] [rbp-48h] BYREF
  __int64 v26; // [rsp+28h] [rbp-40h]
  __int64 v27; // [rsp+30h] [rbp-38h]

  v3 = a2;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  result = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(result + 31) & 0xC0) != 0x40 )
  {
    DesktopWindow = GetDesktopWindow(a1);
    result = BuildHwndList(*(struct tagWND **)(DesktopWindow + 112));
    v9 = result;
    if ( result )
    {
      v10 = 4LL;
      if ( (_DWORD)v3 != 2 )
        v10 = 0LL;
      v11 = (_QWORD *)(result + 32);
      if ( (_DWORD)v3 == 4 )
        v10 = 3LL;
      while ( 1 )
      {
        if ( *v11 == 1LL )
          return FreeHwndList(v9);
        LOBYTE(v8) = 1;
        v12 = HMValidateHandleNoSecure(*v11, v8);
        v15 = v12;
        if ( v12 )
        {
          v8 = *(_QWORD *)(*(_QWORD *)(v12 + 136) + 8LL);
          if ( (*(_BYTE *)(v8 + 8) & 4) == 0 && v12 != a1 )
          {
            v16 = *(_QWORD *)(v12 + 120);
            if ( v16 )
            {
              v17 = *(_QWORD *)(v16 + 40);
              LOBYTE(v13) = -64;
              while ( 1 )
              {
                LOBYTE(v8) = *(_BYTE *)(v17 + 31) & 0xC0;
                if ( !(_BYTE)v8 )
                  break;
                if ( v16 == a1 )
                  break;
                if ( (_BYTE)v8 == 0xC0 )
                  break;
                v18 = *(_QWORD *)(v16 + 120);
                if ( !v18 )
                  break;
                v16 = *(_QWORD *)(v16 + 120);
                v17 = *(_QWORD *)(v18 + 40);
              }
            }
            if ( v10 )
            {
              if ( !v16 || v16 == a1 || (_DWORD)v3 == 4 && (*(_BYTE *)(*(_QWORD *)(v16 + 40) + 31LL) & 0x28) == 0x20 )
                goto LABEL_14;
            }
            else if ( v16 != a1 )
            {
              goto LABEL_14;
            }
            v19 = *(_QWORD *)(v15 + 40);
            if ( (unsigned int)v3 >= 3 )
            {
              if ( (*(_BYTE *)(v19 + 17) & 0x40) == 0 )
                goto LABEL_14;
            }
            else if ( (*(_BYTE *)(v19 + 31) & 0x10) == 0 )
            {
              goto LABEL_14;
            }
            if ( a3 )
            {
              RectRgnIndirect = GreCreateRectRgnIndirect(*(_QWORD *)(v15 + 40) + 88LL);
              GreCombineRgn(a3, a3, RectRgnIndirect, 2LL);
              GreDeleteObject(RectRgnIndirect);
              SetOrClrWF(1, v15, 0x140u, 1);
              SetVisible((struct tagWND *)v15, 0);
            }
            else
            {
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v13, v14);
              v25 = *(_QWORD *)(ThreadWin32Thread + 408);
              *(_QWORD *)(ThreadWin32Thread + 408) = &v25;
              v26 = v15;
              HMLockObject(v15);
              xxxSendMessage(v15, 24LL, (unsigned int)v3 >= 3, v3);
              ThreadUnlock1(v23, v22, v24);
            }
          }
        }
LABEL_14:
        ++v11;
      }
    }
  }
  return result;
}
