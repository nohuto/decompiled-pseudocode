/*
 * XREFs of ?HandlePropertyRequestCompletion@Holographic@Internal@Windows@@YAXAEAV?$map@PEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@U?$less@PEAVV2PropertyRequest@Holographic@Internal@Windows@@@6@V?$allocator@U?$pair@QEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@@6@@std@@PEAX@Z @ 0x180158CF4
 * Callers:
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x18015C010 (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1800DC3E0 (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     ?HandleCompletion@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXJ_K@Z @ 0x1801589AC (-HandleCompletion@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXJ_K@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@U?$less@PEAVV2PropertyRequest@Holographic@Internal@Windows@@@6@V?$allocator@U?$pair@QEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@@6@$0A@@std@@@std@@QEAA_KAEBQEAVV2PropertyRequest@Holographic@Internal@Windows@@@Z @ 0x180160CF4 (-erase@-$_Tree@V-$_Tmap_traits@PEAVV2PropertyRequest@Holographic@Internal@Windows@@_ea_180160CF4.c)
 */

__int64 __fastcall Windows::Internal::Holographic::HandlePropertyRequestCompletion(__int64 a1, void *a2)
{
  Windows::Internal::Holographic::V2PropertyRequest *v2; // rdi
  unsigned int v4; // ebx
  signed int LastError; // eax
  const char *v6; // r9
  char *v8; // [rsp+28h] [rbp-20h]
  unsigned __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  Windows::Internal::Holographic::V2PropertyRequest *v10; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int64 v12; // [rsp+60h] [rbp+18h] BYREF
  char *v13; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0LL;
  LODWORD(v12) = 0;
  v9 = 0LL;
  v13 = 0LL;
  v4 = 0;
  if ( !GetQueuedCompletionStatus(a2, (LPDWORD)&v12, &v9, (LPOVERLAPPED *)&v13, 0) )
  {
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
  }
  LODWORD(v8) = v4;
  wil::details::in1diag3::FailFast_IfMsg(
    retaddr,
    (void *)0x105,
    (unsigned int)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertyrequests.h",
    (const char *)(v13 == 0LL),
    (void *)"GetQueuedCompletionStatus() failed and didn't return a pOverlapped, hr = 0x%x",
    v8);
  if ( v13 )
    v2 = (Windows::Internal::Holographic::V2PropertyRequest *)(v13 - 8);
  v10 = v2;
  Windows::Internal::Holographic::V2PropertyRequest::HandleCompletion(v2, v4, (unsigned int)v12, v6);
  return std::_Tree<std::_Tmap_traits<Windows::Internal::Holographic::V2PropertyRequest *,std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>,std::less<Windows::Internal::Holographic::V2PropertyRequest *>,std::allocator<std::pair<Windows::Internal::Holographic::V2PropertyRequest * const,std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>>,0>>::erase(
           a1,
           &v10);
}
