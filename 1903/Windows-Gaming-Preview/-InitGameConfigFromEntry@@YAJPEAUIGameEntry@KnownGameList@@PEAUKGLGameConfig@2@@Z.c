/*
 * XREFs of ?InitGameConfigFromEntry@@YAJPEAUIGameEntry@KnownGameList@@PEAUKGLGameConfig@2@@Z @ 0x180040CB4
 * Callers:
 *     ?GetGameConfigFromPID@CQueryKnownGameList@@UEAAJKPEAUKGLGameConfig@KnownGameList@@@Z @ 0x18003E260 (-GetGameConfigFromPID@CQueryKnownGameList@@UEAAJKPEAUKGLGameConfig@KnownGameList@@@Z.c)
 *     ?GetGameConfigFromAppId@CQueryKnownGameList@@UEAAJPEBGPEAUKGLGameConfig@KnownGameList@@@Z @ 0x18003E310 (-GetGameConfigFromAppId@CQueryKnownGameList@@UEAAJPEBGPEAUKGLGameConfig@KnownGameList@@@Z.c)
 *     ?GetGameConfig@CGameEntry@@UEAAJPEAUKGLGameConfig@KnownGameList@@@Z @ 0x1800400E0 (-GetGameConfig@CGameEntry@@UEAAJPEAUKGLGameConfig@KnownGameList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InitGameConfigFromEntry(
        struct KnownGameList::IGameEntry *a1,
        struct KnownGameList::KGLGameConfig *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  bool v7; // cf
  unsigned int v8; // edi
  int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rdx
  int v12; // [rsp+30h] [rbp-20h] BYREF
  int v13; // [rsp+38h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned __int16 v15; // [rsp+80h] [rbp+30h] BYREF
  __int16 v16; // [rsp+88h] [rbp+38h] BYREF

  *(_WORD *)((char *)a2 + 1) = 0;
  *(_BYTE *)a2 = 0;
  v4 = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, unsigned __int16 *))(*(_QWORD *)a1 + 48LL))(
         a1,
         &v15);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = v15 != 0;
    v8 = 0;
    while ( v7 )
    {
      v9 = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, _QWORD, __int16 *, int *))(*(_QWORD *)a1 + 64LL))(
             a1,
             v8,
             &v16,
             &v12);
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x605,
          (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)(unsigned int)v9);
        return v10;
      }
      switch ( v16 )
      {
        case 258:
          if ( v12 )
          {
            v11 = 1545LL;
LABEL_23:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v11,
              (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
              (const char *)0x8000FFFFLL);
            return 2147549183LL;
          }
          *((_BYTE *)a2 + 2) = v13 != 0;
          break;
        case 257:
          if ( v12 )
          {
            v11 = 1551LL;
            goto LABEL_23;
          }
          *(_BYTE *)a2 = v13 != 0;
          break;
        case 256:
          if ( v12 )
          {
            v11 = 1557LL;
            goto LABEL_23;
          }
          *((_BYTE *)a2 + 1) = v13 != 0;
          break;
        case 259:
          if ( v12 )
          {
            v11 = 1563LL;
            goto LABEL_23;
          }
          *((_BYTE *)a2 + 3) = v13 != 0;
          break;
        case 260:
          if ( v12 )
          {
            v11 = 1569LL;
            goto LABEL_23;
          }
          *((_BYTE *)a2 + 4) = v13 != 0;
          break;
      }
      v7 = ++v8 < v15;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5FE,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
