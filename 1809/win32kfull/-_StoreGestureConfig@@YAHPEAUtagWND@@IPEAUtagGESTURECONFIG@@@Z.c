/*
 * XREFs of ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1C012AAF8
 * Callers:
 *     SetGestureConfigSettings @ 0x1C012AC54 (SetGestureConfigSettings.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?SetBitMask@@YAXPEAUtagWND@@IH@Z @ 0x1C012A8F0 (-SetBitMask@@YAXPEAUtagWND@@IH@Z.c)
 *     ?GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z @ 0x1C012AD8C (-GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z.c)
 *     ?IsBitSet@@YAHPEAEI@Z @ 0x1C012AE74 (-IsBitSet@@YAHPEAEI@Z.c)
 *     ?GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C012AEA0 (-GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?FindGID@@YAHPEAPEAUtagGESTURECONFIGLIST@@I0@Z @ 0x1C01FC768 (-FindGID@@YAHPEAPEAUtagGESTURECONFIGLIST@@I0@Z.c)
 *     ?GCRemoveHashElement@@YAXPEAPEAUtagGESTURECONFIGLIST@@I@Z @ 0x1C01FC7B0 (-GCRemoveHashElement@@YAXPEAPEAUtagGESTURECONFIGLIST@@I@Z.c)
 */

__int64 __fastcall _StoreGestureConfig(struct tagWND *a1, unsigned int a2, struct tagGESTURECONFIG *a3)
{
  struct tagGESTURECONFIGLIST **WindowGCList; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct tagVWPLGESTUREDATA *GCData; // r15
  struct tagGESTURECONFIGLIST **v11; // rax
  int v12; // ebp
  int *i; // rbx
  int v14; // esi
  int v15; // ecx
  unsigned int v16; // r9d
  __int64 v17; // rax
  int v18; // edx
  int v19; // r8d
  unsigned int v20; // edx
  unsigned int v21; // edx
  struct tagGESTURECONFIGLIST *v23; // rcx
  __int64 v24; // rcx
  struct tagGESTURECONFIGLIST *v25; // [rsp+68h] [rbp+20h] BYREF

  WindowGCList = (struct tagGESTURECONFIGLIST **)GetWindowGCList(a1);
  GCData = GetGCData(a1);
  if ( !WindowGCList )
  {
    v11 = (struct tagGESTURECONFIGLIST **)Win32AllocPoolWithQuota(64LL, 1667724117LL);
    WindowGCList = v11;
    if ( !v11 )
    {
LABEL_24:
      v24 = 14LL;
      goto LABEL_26;
    }
    memset(v11, 0, 0x40uLL);
    *((_QWORD *)GetGCData(a1) + 2) = WindowGCList;
  }
  v12 = 0;
  if ( !a2 )
    return 1LL;
  for ( i = (int *)((char *)a3 + 4); ; i += 3 )
  {
    v14 = i[1];
    v15 = *i;
    if ( (v14 & *i) != 0 )
      break;
    v9 = (unsigned int)*(i - 1);
    if ( (unsigned int)(v9 - 1) > 6 )
      break;
    v7 = (unsigned int)~dword_1C02CE500[v9];
    if ( ((unsigned int)v7 & v15) != 0 || ((unsigned int)v7 & v14) != 0 )
      break;
    if ( v15 || v14 || *((_DWORD *)GCData + 2) || *((_DWORD *)GCData + 3) )
    {
      if ( (unsigned int)IsBitSet(*(unsigned __int8 **)GCData, v9) )
      {
        if ( (unsigned int)FindGID(WindowGCList, v16, &v25) )
        {
          v23 = v25;
          *((_DWORD *)v25 + 4) = v14;
          *((_DWORD *)v23 + 3) = *i;
        }
        goto LABEL_16;
      }
      v17 = Win32AllocPoolWithQuota(24LL, 1667724117LL);
      if ( !v17 )
        goto LABEL_24;
      v18 = *(i - 1);
      v19 = 1;
      *(_DWORD *)(v17 + 8) = v18;
      v20 = v18 & 7;
      *(_DWORD *)(v17 + 16) = i[1];
      *(_DWORD *)(v17 + 12) = *i;
      *(_QWORD *)v17 = WindowGCList[v20];
      WindowGCList[v20] = (struct tagGESTURECONFIGLIST *)v17;
      v21 = *(_DWORD *)(v17 + 8);
    }
    else
    {
      if ( !(unsigned int)IsBitSet(*(unsigned __int8 **)GCData, v9) )
        goto LABEL_16;
      GCRemoveHashElement(WindowGCList, v9);
      v21 = *(i - 1);
      v19 = 0;
    }
    SetBitMask(a1, v21, v19);
LABEL_16:
    if ( ++v12 >= a2 )
      return 1LL;
  }
  v24 = 87LL;
LABEL_26:
  UserSetLastError(v24, v7, v8, v9);
  return 0LL;
}
