/*
 * XREFs of ?CreateQueryKnownGameListInstance@KnownGameList@@YAJPEAPEAUIQueryKnownGameList@1@PEBG@Z @ 0x18003DA44
 * Callers:
 *     ?LoadKgl@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003B550 (-LoadKgl@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCQueryKnownGameList@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCQueryKnownGameList@@AEAPEBG@Z @ 0x1800413BC (--$MakeAndInitialize@VCQueryKnownGameList@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCQueryKno.c)
 *     _guard_dispatch_icall_nop @ 0x1800443E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KnownGameList::CreateQueryKnownGameListInstance(
        KnownGameList *this,
        struct KnownGameList::IQueryKnownGameList **a2,
        const unsigned __int16 *a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  struct KnownGameList::IQueryKnownGameList **v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v4 = 0LL;
  v9 = 0LL;
  if ( !this )
  {
    v5 = 196LL;
LABEL_5:
    v6 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    goto LABEL_11;
  }
  if ( !a2 )
  {
    v5 = 197LL;
    goto LABEL_5;
  }
  v6 = Microsoft::WRL::Details::MakeAndInitialize<CQueryKnownGameList,CQueryKnownGameList,unsigned short const * &>(
         &v9,
         &v10,
         a3);
  if ( (unsigned int)(v6 + 2147024894) <= 1 )
    goto LABEL_9;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC9,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)v6);
LABEL_9:
    v4 = v9;
    goto LABEL_11;
  }
  v4 = 0LL;
  *(_QWORD *)this = v9;
  v6 = 0;
LABEL_11:
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v6;
}
