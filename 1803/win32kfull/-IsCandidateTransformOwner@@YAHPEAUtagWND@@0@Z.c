/*
 * XREFs of ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x1C00F48F0
 * Callers:
 *     GetInheritedMonitor @ 0x1C002D830 (GetInheritedMonitor.c)
 * Callees:
 *     IntersectRect @ 0x1C002D204 (IntersectRect.c)
 *     UnionRect @ 0x1C0072864 (UnionRect.c)
 *     IsTitleWindow @ 0x1C00F4A4C (IsTitleWindow.c)
 *     ?IsAdjacentRect@@YAHPEBUtagRECT@@0@Z @ 0x1C00F4AA0 (-IsAdjacentRect@@YAHPEBUtagRECT@@0@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

_BOOL8 __fastcall IsCandidateTransformOwner(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v2; // rbx
  int v4; // r14d
  int v5; // esi
  __int64 v6; // r10
  __int64 v7; // r11
  __int64 v9; // rdi
  struct tagRECT *v10; // rdi
  __int64 v11; // rbx
  int v12; // ebp
  __int64 v13; // rcx
  _QWORD v14[2]; // [rsp+20h] [rbp-38h] BYREF

  v2 = *((_QWORD *)a2 + 5);
  v4 = *(_BYTE *)(v2 + 27) & 8;
  v5 = (*(_BYTE *)(v2 + 26) >> 3) & (unsigned __int8)~(*(_BYTE *)(v2 + 27) >> 5) & 1;
  if ( !(unsigned int)IsTitleWindow(a1, 1LL)
    || *(_QWORD *)(v6 + 424) != *(_QWORD *)(v7 + 424) && *(_QWORD *)(v6 + 416) != *(_QWORD *)(v7 + 416) )
  {
    return 0LL;
  }
  v9 = *((_QWORD *)a1 + 5);
  if ( (((unsigned __int16)(*(_DWORD *)(v2 + 288) >> 8) ^ (unsigned __int16)(*(_DWORD *)(v9 + 288) >> 8)) & 0x1FF) != 0 )
    return 0LL;
  if ( !v4 && !v5 )
    return 1LL;
  v10 = (struct tagRECT *)(v9 + 88);
  v11 = v2 + 88;
  v12 = IsAdjacentRect((const struct tagRECT *)v11, v10);
  if ( v4 )
  {
    if ( !v12 && !(unsigned int)IntersectRect(v14, (int *)v11, &v10->left) )
      return 0LL;
  }
  if ( !v5 || v12 )
    return 1LL;
  if ( !(unsigned int)UnionRect(v14, (int *)v11, &v10->left) )
    return 0LL;
  v13 = v14[0] - *(_QWORD *)v11;
  if ( v14[0] == *(_QWORD *)v11 )
    v13 = v14[1] - *(_QWORD *)(v11 + 8);
  return !v13;
}
