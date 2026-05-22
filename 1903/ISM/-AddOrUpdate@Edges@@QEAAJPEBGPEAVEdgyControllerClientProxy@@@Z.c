/*
 * XREFs of ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x180101918
 * Callers:
 *     ?RegisterControllerClient@EdgyConnection@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801006FC (-RegisterControllerClient@EdgyConnection@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?InternalRelease@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800674EC (-InternalRelease@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18006F494 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??$emplace_back@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAAEAVEdge@@AEBV2@@Z @ 0x18010165C (--$emplace_back@AEBVEdge@@@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAAAEAVEdge@@AEBV2@@.c)
 *     ??0Edge@@QEAA@PEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801016FC (--0Edge@@QEAA@PEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?FindEdge@Edges@@AEBAHPEBG@Z @ 0x180101B10 (-FindEdge@Edges@@AEBAHPEBG@Z.c)
 *     ?Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x180102688 (-Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Edges::AddOrUpdate(Edges *this, const unsigned __int16 *a2, struct EdgyControllerClientProxy *a3)
{
  unsigned int v6; // ebx
  int Edge; // eax
  _BYTE v9[8]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v10[32]; // [rsp+38h] [rbp-90h] BYREF
  __int64 v11[9]; // [rsp+58h] [rbp-70h] BYREF

  v6 = 0;
  Edge = Edges::FindEdge(this, a2);
  if ( Edge < 0 )
  {
    Edge::Edge((Edge *)v9, a2, a3);
    try
    {
      std::vector<Edge>::emplace_back<Edge const &>((__int64 *)this, (__int64)v9);
    }
    catch ( ... )
    {
      v6 = -2147024882;
    }
    Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalRelease(v11);
    std::wstring::_Tidy_deallocate((__int64)v10);
  }
  else
  {
    Edge::Set((Edge *)(*(_QWORD *)this + 104LL * Edge), a2, a3);
  }
  return v6;
}
