/*
 * XREFs of BuildWindowListWithDpiBoundaryInfo @ 0x1C00C7664
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C008E698 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C00C78F8 (xxxInheritWindowMonitor.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00ED36C (UpdateMonitorForWindowAndChildren.c)
 * Callees:
 *     IsDpiBoundaryBetweenWindows @ 0x1C00C6554 (IsDpiBoundaryBetweenWindows.c)
 *     _IsTopLevelWindow @ 0x1C00C75CC (_IsTopLevelWindow.c)
 *     BuildHwndList @ 0x1C00CC820 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00CC9E0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00ED568 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00ED5A8 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 */

__int64 __fastcall BuildWindowListWithDpiBoundaryInfo(struct tagWND *a1, __int64 a2, __int64 a3, int *a4)
{
  __int64 v4; // rbx
  __int64 *v5; // rsi
  int v6; // edi
  int *v7; // r15
  __int64 v8; // rbp
  __int64 v9; // r13
  _QWORD *v11; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  struct tagWND *v14; // rdi
  __int64 v15; // r9
  unsigned int v16; // r8d
  __int16 v17; // r9
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // r8d
  int v22; // eax
  BOOL v23; // eax
  __int64 *v25; // rax
  __int64 *v26; // rbx
  __int64 v27; // rsi
  int v28; // eax
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // [rsp+20h] [rbp-68h] BYREF
  __int128 v32; // [rsp+30h] [rbp-58h] BYREF
  __int128 v33; // [rsp+40h] [rbp-48h]
  int v34; // [rsp+90h] [rbp+8h]
  int v35; // [rsp+A0h] [rbp+18h]

  v4 = 0LL;
  v5 = &v31;
  v35 = 0;
  v6 = 0;
  v31 = 0LL;
  v7 = a4;
  v34 = 0;
  v8 = a3;
  v9 = a2;
  if ( a3 || (v35 = 1, (v8 = BuildHwndList(a1)) != 0) )
  {
    v11 = (_QWORD *)(v8 + 32);
    v12 = *(_QWORD *)(v8 + 32);
    if ( v12 != 1 )
    {
      do
      {
        LOBYTE(a2) = 1;
        v13 = HMValidateHandleNoSecure(v12, a2);
        v14 = (struct tagWND *)v13;
        if ( v13 && *(_QWORD *)(v13 + 104) && v9 && !(unsigned int)IsTopLevelWindow(v13) )
        {
          a2 = *(unsigned int *)(*(_QWORD *)(v15 + 40) + 288LL);
          v16 = *(_DWORD *)(*((_QWORD *)v14 + 5) + 288LL);
          v17 = (v16 >> 8) & 0x1FF;
          v20 = 1;
          if ( v17 == (((unsigned int)a2 >> 8) & 0x1FF) )
          {
            v18 = (v16 & 0xF) == 2 && (v16 & 0x20000000) != 0;
            v19 = (a2 & 0xF) == 2 && (a2 & 0x20000000) != 0;
            if ( v18 == v19 )
              v20 = 0;
          }
          if ( v14 == a1 )
          {
            a2 = *(unsigned int *)(*(_QWORD *)(v9 + 40) + 288LL);
            v23 = 1;
            if ( v17 == ((*(_DWORD *)(*(_QWORD *)(v9 + 40) + 288LL) >> 8) & 0x1FF) )
            {
              v21 = (v16 & 0xF) == 2 && (v16 & 0x20000000) != 0;
              v22 = (a2 & 0xF) == 2 && (a2 & 0x20000000) != 0;
              if ( v21 == v22 )
                v23 = 0;
            }
            v20 |= v23;
          }
          if ( v20 )
          {
            v25 = (__int64 *)Win32AllocPool(32LL, 1819767637LL);
            v26 = v25;
            if ( v25 )
            {
              *v5 = (__int64)v25;
              *v25 = 0LL;
              v25[1] = *(_QWORD *)v14;
              if ( v14 == a1 )
              {
                v27 = v9;
                v34 = 1;
                v28 = 1;
              }
              else
              {
                v27 = *((_QWORD *)v14 + 13);
                v28 = 0;
              }
              *((_DWORD *)v26 + 7) = v28;
              v29 = *((_QWORD *)v14 + 5);
              v32 = *(_OWORD *)(*(_QWORD *)(v27 + 40) + 104LL);
              v33 = *(_OWORD *)(v29 + 88);
              if ( (unsigned int)IsDpiBoundaryBetweenWindows((__int64)v14, v27) )
              {
                LogicalToPhysicalInPlaceRectWithSubpixel(v27, &v32, 0LL);
                PhysicalToLogicalInPlaceRectWithSubpixel(v14, &v32, 0LL);
                v30 = 1;
              }
              else
              {
                v30 = 0;
              }
              *((_DWORD *)v26 + 6) = v30;
              v5 = v26;
              *((_DWORD *)v26 + 4) = v33 - v32;
              *((_DWORD *)v26 + 5) = DWORD1(v33) - DWORD1(v32);
            }
          }
        }
        v12 = *++v11;
      }
      while ( *v11 != 1LL );
      v4 = v31;
      v7 = a4;
      v6 = v34;
    }
    if ( v35 )
      FreeHwndList(v8);
  }
  if ( v7 )
    *v7 = v6;
  return v4;
}
