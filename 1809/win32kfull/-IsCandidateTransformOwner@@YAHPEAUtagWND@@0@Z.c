/*
 * XREFs of ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x1C010E2B4
 * Callers:
 *     GetInheritedMonitor @ 0x1C0042D58 (GetInheritedMonitor.c)
 * Callees:
 *     IntersectRect @ 0x1C003D900 (IntersectRect.c)
 *     UnionRect @ 0x1C0079C20 (UnionRect.c)
 *     IsTitleWindow @ 0x1C010E410 (IsTitleWindow.c)
 *     ?IsAdjacentRect@@YAHPEBUtagRECT@@0@Z @ 0x1C010E464 (-IsAdjacentRect@@YAHPEBUtagRECT@@0@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

_BOOL8 __fastcall IsCandidateTransformOwner(struct tagWND *a1, struct tagWND *a2)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  int v5; // r14d
  int v6; // edi
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v10; // rsi
  struct tagRECT *v11; // rsi
  __int64 v12; // rbx
  int v13; // ebp
  __int64 v14; // rdx
  _QWORD v15[2]; // [rsp+20h] [rbp-38h] BYREF

  v3 = *((_QWORD *)a2 + 5);
  LOBYTE(v2) = ~*(_BYTE *)(v3 + 27);
  v5 = *(_BYTE *)(v3 + 27) & 8;
  v6 = (*(_BYTE *)(v3 + 26) >> 3) & (unsigned __int8)(v2 >> 5) & 1;
  if ( !(unsigned int)IsTitleWindow(a1, 1LL)
    || *(_QWORD *)(v7 + 432) != *(_QWORD *)(v8 + 432) && *(_QWORD *)(v7 + 424) != *(_QWORD *)(v8 + 424) )
  {
    return 0LL;
  }
  v10 = *((_QWORD *)a1 + 5);
  if ( (((unsigned __int16)(*(_DWORD *)(v3 + 288) >> 8) ^ (unsigned __int16)(*(_DWORD *)(v10 + 288) >> 8)) & 0x1FF) != 0 )
    return 0LL;
  if ( !v5 && !v6 )
    return 1LL;
  v11 = (struct tagRECT *)(v10 + 88);
  v12 = v3 + 88;
  v13 = IsAdjacentRect((const struct tagRECT *)v12, v11);
  if ( v5 )
  {
    if ( !v13 && !(unsigned int)IntersectRect(v15, (int *)v12, &v11->left) )
      return 0LL;
  }
  if ( !v6 || v13 )
    return 1LL;
  if ( !(unsigned int)UnionRect(v15, (int *)v12, &v11->left) )
    return 0LL;
  v14 = v15[0] - *(_QWORD *)v12;
  if ( v15[0] == *(_QWORD *)v12 )
    v14 = v15[1] - *(_QWORD *)(v12 + 8);
  return !v14;
}
