/*
 * XREFs of ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C00E8FB0
 * Callers:
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C00E711C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C00E73F0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     CkptRestore @ 0x1C00669FC (CkptRestore.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall _CopyWindowCheckpoint(struct tagWND *a1, struct tagWND *a2)
{
  unsigned int v4; // ebx
  __int64 Prop; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  int v8; // eax
  _DWORD *v9; // rax
  __int128 v11; // [rsp+20h] [rbp-40h] BYREF
  __int128 v12; // [rsp+30h] [rbp-30h]
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF
  int v14; // [rsp+50h] [rbp-10h]

  v4 = 0;
  Prop = RealGetProp(*((_QWORD *)a1 + 15), (unsigned __int16)atomCheckpointProp, 1LL);
  if ( Prop )
  {
    v6 = *(_OWORD *)(Prop + 16);
    v11 = *(_OWORD *)Prop;
    v7 = *(_OWORD *)(Prop + 32);
    v8 = *(_DWORD *)(Prop + 48);
    v12 = v6;
    v14 = v8;
    v13 = v7;
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      TransformRectBetweenCoordinateSpaces(&v11, &v11, a2, a1);
      TransformPointBetweenCoordinateSpaces(&v13, &v13, a2, a1);
      TransformPointBetweenCoordinateSpaces((char *)&v13 + 8, (char *)&v13 + 8, a2, a1);
    }
    v9 = CkptRestore((__int64)a2, &v11);
    if ( v9 )
    {
      v4 = 1;
      *(_OWORD *)v9 = v11;
      *((_OWORD *)v9 + 1) = v12;
      *((_OWORD *)v9 + 2) = v13;
      v9[12] = v14;
    }
  }
  return v4;
}
