/*
 * XREFs of GetGestureConfigSettings @ 0x1C01D7B44
 * Callers:
 *     NtUserGetGestureConfig @ 0x1C01EE260 (NtUserGetGestureConfig.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C002DEA4 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z @ 0x1C0109944 (-GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z.c)
 *     ?IsBitSet@@YAHPEAEI@Z @ 0x1C0109A2C (-IsBitSet@@YAHPEAEI@Z.c)
 *     ?GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C0109A58 (-GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z.c)
 *     ?FindGID@@YAHPEAPEAUtagGESTURECONFIGLIST@@I0@Z @ 0x1C01D7980 (-FindGID@@YAHPEAPEAUtagGESTURECONFIGLIST@@I0@Z.c)
 */

__int64 __fastcall GetGestureConfigSettings(struct tagWND *a1, __int64 a2, char a3, unsigned int *a4, _DWORD *a5)
{
  __int64 v5; // rsi
  __int64 v6; // r15
  int v7; // ebp
  struct tagWND *v8; // rbx
  __int64 v9; // rdx
  _DWORD *v10; // rcx
  struct tagVWPLGESTUREDATA *GCData; // r14
  void **WindowGCList; // rax
  __int64 v13; // r11
  __int64 v14; // r13
  _DWORD *v15; // rdi
  unsigned __int8 *v16; // rbp
  struct tagGESTURECONFIGLIST **v17; // rbx
  __int64 v18; // r9
  __int64 v19; // r10
  int v20; // r11d
  struct tagGESTURECONFIGLIST *v21; // rcx
  int v22; // eax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdx
  struct tagVWPLGESTUREDATA *v27; // r14
  unsigned int v28; // r11d
  struct tagGESTURECONFIGLIST **v29; // r12
  unsigned __int8 *v30; // r13
  unsigned int v31; // ebp
  int *v32; // rdi
  __int64 v33; // r9
  int v34; // r11d
  struct tagGESTURECONFIGLIST *v35; // r9
  int v36; // r8d
  int v37; // r10d
  int v38; // ecx
  int v39; // edx
  int v40; // eax
  int v42; // [rsp+90h] [rbp+18h]
  struct tagGESTURECONFIGLIST *v43; // [rsp+98h] [rbp+20h] BYREF

  v5 = *a4;
  v6 = (__int64)a5;
  v7 = a3 & 1;
  v42 = v7;
  v8 = a1;
  v9 = 0LL;
  if ( !(_DWORD)v5 )
  {
LABEL_5:
    GCData = GetGCData(v8);
    WindowGCList = GetWindowGCList(v8);
    if ( GCData )
    {
      if ( (_DWORD)v5 )
      {
        v14 = v5;
        v15 = (_DWORD *)(v6 + 8);
        v16 = *(unsigned __int8 **)GCData;
        v17 = (struct tagGESTURECONFIGLIST **)WindowGCList;
        while ( 1 )
        {
          if ( (unsigned int)IsBitSet(v16, *(v15 - 2)) )
          {
            if ( (unsigned int)FindGID(v17, v18, &v43) )
            {
              v21 = v43;
              *(v15 - 1) = *((_DWORD *)v43 + 3);
              v22 = *((_DWORD *)v21 + 4);
LABEL_16:
              *v15 = v22;
            }
          }
          else
          {
            if ( *((_DWORD *)GCData + 2) == v20 )
            {
              v24 = *((_DWORD *)GCData + 3);
              *(v15 - 1) = v20;
              if ( !v24 )
              {
                *v15 = v20;
                goto LABEL_18;
              }
              v22 = dword_1C02DD310[v18];
              goto LABEL_16;
            }
            *(v15 - 1) = dword_1C02DD310[v18];
            *(_DWORD *)((char *)v15 + v19 - v6 - 8) = *((_DWORD *)GCData + 3);
          }
LABEL_18:
          v15 += 3;
          if ( !--v14 )
          {
            v8 = a1;
            v7 = v42;
            break;
          }
        }
      }
    }
    else if ( (_DWORD)v5 )
    {
      v25 = v6 + 8;
      v26 = v5;
      do
      {
        *(_QWORD *)(v25 - 4) = v13;
        v25 += 12LL;
        --v26;
      }
      while ( v26 );
    }
    if ( !v7 || (unsigned int)IsTopLevelWindow((__int64)v8) || !v8 )
      return 1LL;
    while ( 1 )
    {
      v8 = (struct tagWND *)*((_QWORD *)v8 + 10);
      if ( !v8 )
        return 1LL;
      v27 = GetGCData(v8);
      v29 = (struct tagGESTURECONFIGLIST **)GetWindowGCList(v8);
      if ( v27 )
      {
        v30 = *(unsigned __int8 **)v27;
        v31 = v28;
        if ( (_DWORD)v5 )
          break;
      }
LABEL_41:
      if ( (unsigned int)IsTopLevelWindow((__int64)v8) )
        return 1LL;
    }
    v32 = (int *)(v6 + 8);
    while ( 1 )
    {
      if ( (unsigned int)IsBitSet(v30, *(v32 - 2)) )
      {
        if ( (unsigned int)FindGID(v29, v33, &v43) )
        {
          v35 = v43;
          v36 = *(v32 - 1);
          v37 = *v32;
          v38 = *((_DWORD *)v43 + 3);
          v39 = (v36 | *v32) ^ (v38 | *((_DWORD *)v43 + 4));
          *(v32 - 1) = v36 | v39 & v38;
          v40 = v37 | v39 & *((_DWORD *)v35 + 4);
LABEL_37:
          *v32 = v40;
        }
      }
      else
      {
        if ( *((_DWORD *)v27 + 2) == v34 )
        {
          if ( *((_DWORD *)v27 + 3) == v34 )
          {
            if ( !v29 )
              goto LABEL_40;
            goto LABEL_39;
          }
          v40 = ~*(v32 - 1) & dword_1C02DD310[v33];
          goto LABEL_37;
        }
        *(v32 - 1) = ~*v32 & dword_1C02DD310[v33];
      }
LABEL_39:
      ++v31;
      v32 += 3;
      if ( v31 >= (unsigned int)v5 )
      {
LABEL_40:
        v6 = (__int64)a5;
        goto LABEL_41;
      }
    }
  }
  v10 = a5;
  while ( (unsigned int)(*v10 - 1) <= 6 )
  {
    v9 = (unsigned int)(v9 + 1);
    v10 += 3;
    if ( (unsigned int)v9 >= (unsigned int)v5 )
      goto LABEL_5;
  }
  UserSetLastError(87LL, v9);
  return 0LL;
}
