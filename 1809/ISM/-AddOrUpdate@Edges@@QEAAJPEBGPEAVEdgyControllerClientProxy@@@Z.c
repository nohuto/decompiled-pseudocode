/*
 * XREFs of ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1800CB158
 * Callers:
 *     ?RegisterEdgyControllerClient@EdgyControllerServer@@UEAAJPEAVBamoEdgyControllerServerStub@@PEBGPEAVBamoEdgyControllerClientProxy@@@Z @ 0x1800283E0 (-RegisterEdgyControllerClient@EdgyControllerServer@@UEAAJPEAVBamoEdgyControllerServerStub@@PEBGP.c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800278A4 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1800CAD7C (-Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?FindEdge@Edges@@AEBAHPEBG@Z @ 0x1800CB5A0 (-FindEdge@Edges@@AEBAHPEBG@Z.c)
 *     ?push_back@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAXAEBVEdge@@@Z @ 0x1800CC0B4 (-push_back@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAAXAEBVEdge@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Edges::AddOrUpdate(Edges *this, unsigned __int16 *a2, struct EdgyControllerClientProxy *a3)
{
  unsigned int v6; // edi
  int Edge; // eax
  __int64 v8; // rcx
  __int64 v10; // [rsp+30h] [rbp-A8h] BYREF
  _WORD v11[8]; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v12; // [rsp+48h] [rbp-90h]
  __int64 v13; // [rsp+50h] [rbp-88h]
  __int64 v14; // [rsp+58h] [rbp-80h]
  _BYTE v15[44]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v16; // [rsp+8Ch] [rbp-4Ch]

  v6 = 0;
  Edge = Edges::FindEdge(this, a2);
  if ( Edge < 0 )
  {
    v10 = 0LL;
    v12 = 0LL;
    v13 = 7LL;
    v11[0] = 0;
    v14 = 0LL;
    memset_0(v15, 0, sizeof(v15));
    v16 = 0LL;
    Edge::Set((Edge *)&v10, a2, a3);
    try
    {
      std::vector<Edge>::push_back(this, &v10);
    }
    catch ( ... )
    {
      v6 = -2147024882;
    }
    v8 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (**(void (__fastcall ***)(__int64, _QWORD))(v8 + 16))(v8 + 16, *(_QWORD *)(v8 + 16));
    }
    std::wstring::~wstring((__int64)v11);
  }
  else
  {
    Edge::Set((Edge *)(*(_QWORD *)this + 104LL * Edge), a2, a3);
  }
  return v6;
}
