/*
 * XREFs of BuildWindowListWithDpiBoundaryInfo @ 0x1C006F6AC
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C000C2E4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C006F3B0 (xxxInheritWindowMonitor.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C01051A8 (UpdateMonitorForWindowAndChildren.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C0041300 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C0041428 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     IsDpiBoundaryBetweenWindows @ 0x1C006F2D8 (IsDpiBoundaryBetweenWindows.c)
 *     FreeHwndList @ 0x1C0070D10 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0070DA0 (BuildHwndList.c)
 */

__int64 __fastcall BuildWindowListWithDpiBoundaryInfo(struct tagWND *a1, __int64 a2, __int64 a3, int *a4)
{
  __int64 v4; // rbx
  int v5; // r12d
  int v6; // r13d
  int *v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rbp
  unsigned __int64 *v10; // r14
  unsigned __int64 v11; // rax
  __int64 *v12; // r12
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 DesktopWindow; // rax
  __int16 v16; // r8
  _QWORD *v18; // rax
  _DWORD *v19; // rbx
  int v20; // eax
  __int64 v21; // r10
  __int64 v22; // rax
  struct tagWND *v23; // r10
  int v24; // eax
  __int64 v25; // [rsp+20h] [rbp-68h] BYREF
  __int128 v26; // [rsp+28h] [rbp-60h] BYREF
  __int128 v27; // [rsp+38h] [rbp-50h]
  int v29; // [rsp+A0h] [rbp+18h]

  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  v25 = 0LL;
  v29 = 0;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  if ( a3 || (v5 = 1, v8 = BuildHwndList(a1), v29 = 1, v8) )
  {
    v10 = (unsigned __int64 *)(v8 + 32);
    v11 = *(_QWORD *)(v8 + 32);
    if ( v11 != 1 )
    {
      v12 = &v25;
      do
      {
        LOBYTE(a2) = 1;
        v13 = HMValidateHandleNoSecure(v11, a2);
        v14 = v13;
        if ( v13 )
        {
          a2 = *(_QWORD *)(v13 + 80);
          if ( a2 )
          {
            if ( v9 )
            {
              DesktopWindow = GetDesktopWindow(v13);
              if ( a2 != DesktopWindow )
              {
                v16 = (*(_DWORD *)(*(_QWORD *)(v14 + 40) + 288LL) >> 8) & 0x1FF;
                a2 = v16 != ((*(_DWORD *)(*(_QWORD *)(a2 + 40) + 288LL) >> 8) & 0x1FF);
                if ( (struct tagWND *)v14 == a1 )
                  a2 = (v16 != ((*(_DWORD *)(*(_QWORD *)(v9 + 40) + 288LL) >> 8) & 0x1FF)) | (unsigned int)a2;
                if ( (_DWORD)a2 )
                {
                  v18 = (_QWORD *)Win32AllocPool(32LL, 1819767637LL);
                  v19 = v18;
                  if ( v18 )
                  {
                    *v12 = (__int64)v18;
                    v12 = v18;
                    *v18 = 0LL;
                    v18[1] = *(_QWORD *)v14;
                    if ( (struct tagWND *)v14 == a1 )
                    {
                      v20 = 1;
                      v21 = v9;
                      v6 = 1;
                    }
                    else
                    {
                      v21 = *(_QWORD *)(v14 + 80);
                      v20 = 0;
                    }
                    v19[7] = v20;
                    v22 = *(_QWORD *)(v14 + 40);
                    v26 = *(_OWORD *)(*(_QWORD *)(v21 + 40) + 104LL);
                    v27 = *(_OWORD *)(v22 + 88);
                    if ( IsDpiBoundaryBetweenWindows(v14, v21) )
                    {
                      LogicalToPhysicalInPlaceRectWithSubpixel(v23, (int *)&v26, 0LL);
                      PhysicalToLogicalInPlaceRectWithSubpixel((struct tagWND *)v14, (int *)&v26, 0LL);
                      v24 = 1;
                    }
                    else
                    {
                      v24 = 0;
                    }
                    v19[6] = v24;
                    v19[4] = v27 - v26;
                    v19[5] = DWORD1(v27) - DWORD1(v26);
                  }
                }
              }
            }
          }
        }
        v11 = *++v10;
      }
      while ( *v10 != 1 );
      v4 = v25;
      v7 = a4;
      v5 = v29;
    }
    if ( v5 )
      FreeHwndList(v8);
  }
  if ( v7 )
    *v7 = v6;
  return v4;
}
