/*
 * XREFs of ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1C01096C8
 * Callers:
 *     SetGestureConfigSettings @ 0x1C0109818 (SetGestureConfigSettings.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?SetBitMask@@YAXPEAUtagWND@@IH@Z @ 0x1C01094FC (-SetBitMask@@YAXPEAUtagWND@@IH@Z.c)
 *     ?GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z @ 0x1C0109944 (-GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z.c)
 *     ?IsBitSet@@YAHPEAEI@Z @ 0x1C0109A2C (-IsBitSet@@YAHPEAEI@Z.c)
 *     ?GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C0109A58 (-GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?FindGID@@YAHPEAPEAUtagGESTURECONFIGLIST@@I0@Z @ 0x1C01D7980 (-FindGID@@YAHPEAPEAUtagGESTURECONFIGLIST@@I0@Z.c)
 *     ?GCRemoveHashElement@@YAXPEAPEAUtagGESTURECONFIGLIST@@I@Z @ 0x1C01D79C8 (-GCRemoveHashElement@@YAXPEAPEAUtagGESTURECONFIGLIST@@I@Z.c)
 */

__int64 __fastcall _StoreGestureConfig(struct tagWND *a1, unsigned int a2, struct tagGESTURECONFIG *a3)
{
  struct tagGESTURECONFIGLIST **WindowGCList; // rdi
  __int64 v7; // rdx
  struct tagVWPLGESTUREDATA *GCData; // r15
  struct tagGESTURECONFIGLIST **v9; // rax
  int v10; // ebp
  int *i; // rbx
  int v12; // esi
  int v13; // ecx
  __int64 v14; // r9
  unsigned int v15; // r9d
  __int64 v16; // rax
  int v17; // edx
  unsigned int v18; // edx
  unsigned int v19; // edx
  __int64 v21; // rcx
  unsigned int v22; // r9d
  struct tagGESTURECONFIGLIST *v23; // rcx
  struct tagGESTURECONFIGLIST *v24; // [rsp+68h] [rbp+20h] BYREF

  WindowGCList = (struct tagGESTURECONFIGLIST **)GetWindowGCList(a1);
  GCData = GetGCData(a1);
  if ( !WindowGCList )
  {
    v9 = (struct tagGESTURECONFIGLIST **)Win32AllocPoolWithQuota(64LL, 1667724117LL);
    WindowGCList = v9;
    if ( !v9 )
    {
LABEL_18:
      v21 = 14LL;
      goto LABEL_20;
    }
    memset(v9, 0, 0x40uLL);
    *((_QWORD *)GetGCData(a1) + 2) = WindowGCList;
  }
  v10 = 0;
  if ( !a2 )
    return 1LL;
  for ( i = (int *)((char *)a3 + 4); ; i += 3 )
  {
    v12 = i[1];
    v13 = *i;
    if ( (v12 & *i) != 0 )
      break;
    v14 = (unsigned int)*(i - 1);
    if ( (unsigned int)(v14 - 1) > 6 )
      break;
    v7 = (unsigned int)~dword_1C02DD310[v14];
    if ( ((unsigned int)v7 & v13) != 0 || ((unsigned int)v7 & v12) != 0 )
      break;
    if ( v13 || v12 || *((_DWORD *)GCData + 2) || *((_DWORD *)GCData + 3) )
    {
      if ( (unsigned int)IsBitSet(*(unsigned __int8 **)GCData, v14) )
      {
        if ( (unsigned int)FindGID(WindowGCList, v15, &v24) )
        {
          v23 = v24;
          *((_DWORD *)v24 + 4) = v12;
          *((_DWORD *)v23 + 3) = *i;
        }
        goto LABEL_16;
      }
      v16 = Win32AllocPoolWithQuota(24LL, 1667724117LL);
      if ( !v16 )
        goto LABEL_18;
      v17 = *(i - 1);
      *(_DWORD *)(v16 + 8) = v17;
      v18 = v17 & 7;
      *(_DWORD *)(v16 + 16) = i[1];
      *(_DWORD *)(v16 + 12) = *i;
      *(_QWORD *)v16 = WindowGCList[v18];
      WindowGCList[v18] = (struct tagGESTURECONFIGLIST *)v16;
      v19 = *(_DWORD *)(v16 + 8);
    }
    else
    {
      if ( !(unsigned int)IsBitSet(*(unsigned __int8 **)GCData, v14) )
        goto LABEL_16;
      GCRemoveHashElement(WindowGCList, v22);
      v19 = *(i - 1);
    }
    SetBitMask(a1, v19);
LABEL_16:
    if ( ++v10 >= a2 )
      return 1LL;
  }
  v21 = 87LL;
LABEL_20:
  UserSetLastError(v21, v7);
  return 0LL;
}
