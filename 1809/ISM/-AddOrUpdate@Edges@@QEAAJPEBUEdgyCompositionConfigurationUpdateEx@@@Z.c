/*
 * XREFs of ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1800CB050
 * Callers:
 *     ?OnEdgyCompositionUpdateStatic@EdgyConnection@@CAJPEAXPEBXH@Z @ 0x1800CA2D0 (-OnEdgyCompositionUpdateStatic@EdgyConnection@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800278A4 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?Set@Edge@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1800CAD10 (-Set@Edge@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 *     ?FindEdge@Edges@@AEBAHPEBG@Z @ 0x1800CB5A0 (-FindEdge@Edges@@AEBAHPEBG@Z.c)
 *     ?push_back@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAXAEBVEdge@@@Z @ 0x1800CC0B4 (-push_back@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAAXAEBVEdge@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Edges::AddOrUpdate(Edges *this, const struct EdgyCompositionConfigurationUpdateEx *a2)
{
  unsigned int v4; // edi
  int Edge; // eax
  __int64 v6; // rcx
  __int64 v8; // [rsp+30h] [rbp-98h] BYREF
  _WORD v9[8]; // [rsp+38h] [rbp-90h] BYREF
  __int64 v10; // [rsp+48h] [rbp-80h]
  __int64 v11; // [rsp+50h] [rbp-78h]
  __int64 v12; // [rsp+58h] [rbp-70h]
  _BYTE v13[44]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v14; // [rsp+8Ch] [rbp-3Ch]

  v4 = 0;
  Edge = Edges::FindEdge(this, (const unsigned __int16 *)a2 + 12);
  if ( Edge < 0 )
  {
    v8 = 0LL;
    v10 = 0LL;
    v11 = 7LL;
    v9[0] = 0;
    v12 = 0LL;
    memset_0(v13, 0, sizeof(v13));
    v14 = 0LL;
    Edge::Set((Edge *)&v8, a2);
    try
    {
      std::vector<Edge>::push_back(this, &v8);
    }
    catch ( ... )
    {
      v4 = -2147024882;
    }
    v6 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (**(void (__fastcall ***)(__int64, _QWORD))(v6 + 16))(v6 + 16, *(_QWORD *)(v6 + 16));
    }
    std::wstring::~wstring((__int64)v9);
  }
  else
  {
    Edge::Set((Edge *)(*(_QWORD *)this + 104LL * Edge), a2);
  }
  return v4;
}
