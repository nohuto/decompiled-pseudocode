/*
 * XREFs of xxxShowOwnedWindows @ 0x1C0014CEC
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C00132A4 (xxxMinMaximizeEx.c)
 *     xxxShowOwnedPopups @ 0x1C015ED60 (xxxShowOwnedPopups.c)
 *     xxxMinimizeHungWindow @ 0x1C023C24C (xxxMinimizeHungWindow.c)
 * Callees:
 *     SetVisible @ 0x1C0027330 (SetVisible.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     BuildHwndList @ 0x1C006DEF0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006E0B0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
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
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 i; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 RectRgnIndirect; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v20; // [rsp+20h] [rbp-48h] BYREF
  __int64 v21; // [rsp+28h] [rbp-40h]
  __int64 v22; // [rsp+30h] [rbp-38h]

  v3 = a2;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
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
        v13 = v12;
        if ( v12 )
        {
          v8 = *(_QWORD *)(*(_QWORD *)(v12 + 136) + 8LL);
          if ( (*(_BYTE *)(v8 + 8) & 4) == 0 && v12 != a1 )
          {
            v14 = *(_QWORD *)(v12 + 120);
            if ( v14 )
            {
              for ( i = *(_QWORD *)(v14 + 40); (*(_BYTE *)(i + 31) & 0xC0) != 0; i = *(_QWORD *)(v16 + 40) )
              {
                if ( v14 == a1 )
                  break;
                if ( (*(_BYTE *)(i + 31) & 0xC0) == 0xC0 )
                  break;
                v16 = *(_QWORD *)(v14 + 120);
                if ( !v16 )
                  break;
                v14 = *(_QWORD *)(v14 + 120);
              }
            }
            if ( v10 )
            {
              if ( !v14 || v14 == a1 || (_DWORD)v3 == 4 && (*(_BYTE *)(*(_QWORD *)(v14 + 40) + 31LL) & 0x28) == 0x20 )
                goto LABEL_14;
            }
            else if ( v14 != a1 )
            {
              goto LABEL_14;
            }
            v17 = *(_QWORD *)(v13 + 40);
            if ( (unsigned int)v3 >= 3 )
            {
              if ( (*(_BYTE *)(v17 + 17) & 0x40) == 0 )
                goto LABEL_14;
            }
            else if ( (*(_BYTE *)(v17 + 31) & 0x10) == 0 )
            {
              goto LABEL_14;
            }
            if ( a3 )
            {
              RectRgnIndirect = GreCreateRectRgnIndirect(*(_QWORD *)(v13 + 40) + 88LL);
              GreCombineRgn(a3, a3, RectRgnIndirect, 2LL);
              GreDeleteObject(RectRgnIndirect);
              SetOrClrWF(1LL, v13, 320LL, 1LL);
              SetVisible((struct tagWND *)v13);
            }
            else
            {
              ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
              v20 = *(_QWORD *)(ThreadWin32Thread + 408);
              *(_QWORD *)(ThreadWin32Thread + 408) = &v20;
              v21 = v13;
              HMLockObject(v13);
              xxxSendMessage(v13, 24LL, (unsigned int)v3 >= 3, v3);
              ThreadUnlock1();
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
