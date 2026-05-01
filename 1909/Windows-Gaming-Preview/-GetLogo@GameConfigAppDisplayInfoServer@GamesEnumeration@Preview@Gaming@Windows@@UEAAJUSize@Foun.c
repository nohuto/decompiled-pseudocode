/*
 * XREFs of ?GetLogo@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUSize@Foundation@5@PEAPEAUIRandomAccessStreamReference@Streams@Storage@5@@Z @ 0x180012330
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180011B38 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_a9a914ae9a59c691d093b8ab4eae99ae_::operator() @ 0x1800123B8 (_lambda_a9a914ae9a59c691d093b8ab4eae99ae_--operator().c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::GetLogo(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  int v4; // eax
  int v5[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v6[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _QWORD *v8; // [rsp+60h] [rbp+18h] BYREF

  v8 = a3;
  *(_QWORD *)v5 = a2;
  if ( a3 )
  {
    *a3 = 0LL;
    v6[1] = v5;
    v6[0] = a1;
    v6[2] = &v8;
    v4 = lambda_a9a914ae9a59c691d093b8ab4eae99ae_::operator()(v6);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x11B,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
        (const char *)(unsigned int)v4);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10D,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
