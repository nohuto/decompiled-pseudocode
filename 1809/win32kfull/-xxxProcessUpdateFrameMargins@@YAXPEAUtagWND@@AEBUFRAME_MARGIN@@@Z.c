/*
 * XREFs of ?xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z @ 0x1C010F748
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0037588 (xxxProcessEventMessage.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     _GetWindowCompositionInfo @ 0x1C00722F8 (_GetWindowCompositionInfo.c)
 *     SetWindowCompositionInfo @ 0x1C00731FC (SetWindowCompositionInfo.c)
 *     ?AreMarginsEqual@@YA_NAEBUFRAME_MARGIN@@0@Z @ 0x1C010F914 (-AreMarginsEqual@@YA_NAEBUFRAME_MARGIN@@0@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall xxxProcessUpdateFrameMargins(struct tagWND *a1, const struct FRAME_MARGIN *a2)
{
  __int16 v4; // bx
  __int64 v5; // rcx
  int v6; // eax
  int v7; // edx
  int v8; // r10d
  __int64 v9; // r8
  __int64 v10; // [rsp+48h] [rbp+7h]
  _BYTE v11[32]; // [rsp+50h] [rbp+Fh] BYREF
  __int64 v12; // [rsp+70h] [rbp+2Fh] BYREF
  __int128 v13; // [rsp+78h] [rbp+37h]

  if ( (unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v11) )
  {
    if ( !AreMarginsEqual(a2, (const struct FRAME_MARGIN *)&v12) )
    {
      v4 = v12;
      v10 = v12;
      v12 = *(_QWORD *)a2;
      if ( (unsigned int)SetWindowCompositionInfo((__int64)a1, (__int64)v11) )
      {
        v5 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v5 + 31) & 0x20) == 0 && ((*(_BYTE *)(v5 + 233) & 3) != 0 || *((_DWORD *)a1 + 73)) )
        {
          v6 = *((__int16 *)a2 + 2);
          v7 = *((__int16 *)a2 + 1);
          v8 = *((__int16 *)a2 + 3);
          v13 = *(_OWORD *)(v5 + 88);
          v9 = (unsigned int)(v4 - *(__int16 *)a2 + v13);
          xxxSetWindowPos(
            a1,
            0LL,
            v9,
            (unsigned int)(SWORD2(v10) + DWORD1(v13) - v6),
            DWORD2(v13) + v7 - SWORD1(v10) - v9,
            HIDWORD(v13) + v8 - SHIWORD(v10) - (SWORD2(v10) + DWORD1(v13) - v6),
            20);
        }
      }
    }
  }
}
