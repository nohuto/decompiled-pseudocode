/*
 * XREFs of ?FeedAnimationData@SystemCursorShape@@AEAAJXZ @ 0x180097278
 * Callers:
 *     ?CreateCursorShapeAnimation@SystemCursorService@@QEAAJIK_K0@Z @ 0x180095B94 (-CreateCursorShapeAnimation@SystemCursorService@@QEAAJIK_K0@Z.c)
 *     ?CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z @ 0x180095F4C (-CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z.c)
 *     ?SetVisible@SystemCursorShape@@QEAAJ_N@Z @ 0x180097234 (-SetVisible@SystemCursorShape@@QEAAJ_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetBamoDataSourceStub@AnimationDataProvider@@QEAA?AV?$ComPtr@VBamoDataSourceStub@@@WRL@Microsoft@@V?$ComPtr@VDataSourcePrincipal@@@34@@Z @ 0x18009BE78 (-GetBamoDataSourceStub@AnimationDataProvider@@QEAA-AV-$ComPtr@VBamoDataSourceStub@@@WRL@Microsof.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemCursorShape::FeedAnimationData(SystemCursorShape *this)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  void (__fastcall ***v4)(_QWORD); // rcx
  signed __int32 v5; // eax
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int128 v11; // [rsp+28h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v13; // [rsp+50h] [rbp+10h] BYREF
  void (__fastcall ***v14)(_QWORD); // [rsp+58h] [rbp+18h] BYREF

  v11 = 0LL;
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(v2 + 8);
      if ( !v5 )
        break;
      if ( v5 == _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v5 + 1, v5) )
      {
        *(_QWORD *)&v11 = *((_QWORD *)this + 2);
        v3 = *((_QWORD *)this + 3);
        *((_QWORD *)&v11 + 1) = v3;
        goto LABEL_3;
      }
    }
  }
  v3 = 0LL;
LABEL_3:
  if ( !(_QWORD)v11 )
    goto LABEL_16;
  v4 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 5);
  v14 = v4;
  if ( v4 )
    (**v4)(v4);
  AnimationDataProvider::GetBamoDataSourceStub(*((_QWORD *)this + 4), &v13, &v14);
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v13 + 8) + 32LL))(v13 + 8, 1LL);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    }
LABEL_16:
    v7 = 0;
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x228,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\system"
             "cursorservice.cpp",
    (const char *)(unsigned int)v6);
  v8 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  }
LABEL_17:
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v11 + 1))(*((_QWORD *)&v11 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v11 + 1) + 8LL))(*((_QWORD *)&v11 + 1));
    }
  }
  return v7;
}
