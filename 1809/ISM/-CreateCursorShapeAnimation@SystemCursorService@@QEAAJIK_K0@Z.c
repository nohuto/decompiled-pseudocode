/*
 * XREFs of ?CreateCursorShapeAnimation@SystemCursorService@@QEAAJIK_K0@Z @ 0x180095B94
 * Callers:
 *     ?CreateCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1@Z @ 0x1800923D0 (-CreateCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??A?$unordered_map@_KV?$shared_ptr@VSystemCursor@@@std@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@@std@@QEAAAEAV?$shared_ptr@VSystemCursor@@@1@AEB_K@Z @ 0x18009437C (--A-$unordered_map@_KV-$shared_ptr@VSystemCursor@@@std@@U-$hash@_K@2@U-$equal_to@_K@2@V-$allocat.c)
 *     ?CursorExists@SystemCursorService@@QEAA_N_K@Z @ 0x1800944A0 (-CursorExists@SystemCursorService@@QEAA_N_K@Z.c)
 *     ?AddShape@SystemCursor@@QEAAJV?$shared_ptr@VSystemCursorShape@@@std@@@Z @ 0x180096D24 (-AddShape@SystemCursor@@QEAAJV-$shared_ptr@VSystemCursorShape@@@std@@@Z.c)
 *     ?FeedAnimationData@SystemCursorShape@@AEAAJXZ @ 0x180097278 (-FeedAnimationData@SystemCursorShape@@AEAAJXZ.c)
 *     ??$?0V?$shared_ptr@VSystemCursorService@@@std@@AEA_KAEAPEAVAnimationDataProvider@@AEAV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@?$_Ref_count_obj@VSystemCursorShape@@@std@@QEAA@$$QEAV?$shared_ptr@VSystemCursorService@@@1@AEA_KAEAPEAVAnimationDataProvider@@AEAV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@Z @ 0x18009821C (--$-0V-$shared_ptr@VSystemCursorService@@@std@@AEA_KAEAPEAVAnimationDataProvider@@AEAV-$ComPtr@V.c)
 *     ??0bad_weak_ptr@std@@QEAA@XZ @ 0x1800987A0 (--0bad_weak_ptr@std@@QEAA@XZ.c)
 *     ?CreateDataSource@AnimationDataProvider@@QEAA?AV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I@Z @ 0x18009BC64 (-CreateDataSource@AnimationDataProvider@@QEAA-AV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I.c)
 *     ?GetDataProviderId@AnimationDataProvider@@QEAA_KXZ @ 0x18009BFC4 (-GetDataProviderId@AnimationDataProvider@@QEAA_KXZ.c)
 *     ?GetDataSourceId@AnimationDataProvider@@SA_KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@Z @ 0x18009C01C (-GetDataSourceId@AnimationDataProvider@@SA_KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall SystemCursorService::CreateCursorShapeAnimation(
        SystemCursorService *this,
        int a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int64 a5)
{
  SystemCursor **v9; // rax
  SystemCursor *v10; // rbx
  __int64 *v11; // rax
  __int64 *v12; // rcx
  __int64 *v13; // rdx
  int v14; // edi
  __int64 v15; // rdx
  signed __int32 v16; // eax
  volatile signed __int32 *v17; // rsi
  __int64 v18; // rbx
  int v19; // eax
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  int v22; // eax
  __int64 DataSourceId; // rbx
  unsigned __int64 DataProviderId; // r9
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  volatile signed __int32 *v31; // rbx
  int v32[2]; // [rsp+38h] [rbp-51h] BYREF
  __int128 v33; // [rsp+40h] [rbp-49h] BYREF
  SystemCursor *v34; // [rsp+50h] [rbp-39h]
  SystemCursor *v35; // [rsp+58h] [rbp-31h]
  __int64 v36; // [rsp+60h] [rbp-29h] BYREF
  void *v37; // [rsp+68h] [rbp-21h]
  __int128 v38; // [rsp+70h] [rbp-19h]
  SystemCursorShape *v39; // [rsp+80h] [rbp-9h]
  volatile signed __int32 *v40; // [rsp+88h] [rbp-1h]
  __int64 v41; // [rsp+90h] [rbp+7h]
  __int64 *v42; // [rsp+98h] [rbp+Fh]
  _BYTE pExceptionObject[24]; // [rsp+A0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+57h]
  __int64 v45; // [rsp+100h] [rbp+77h] BYREF

  v45 = a4;
  v41 = -2LL;
  if ( !SystemCursorService::CursorExists(this, a4) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v9 = (SystemCursor **)std::unordered_map<unsigned __int64,std::shared_ptr<SystemCursor>>::operator[](
                          (_QWORD *)this + 6,
                          &v45);
  v10 = v9[1];
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
    v10 = v9[1];
  }
  v34 = *v9;
  v35 = v10;
  v11 = (__int64 *)*((_QWORD *)v34 + 4);
  v42 = v11;
  v12 = (__int64 *)v11[1];
  v13 = v11;
  while ( !*((_BYTE *)v12 + 25) )
  {
    if ( v12[4] >= a5 )
    {
      v13 = v12;
      v12 = (__int64 *)*v12;
    }
    else
    {
      v12 = (__int64 *)v12[2];
    }
  }
  if ( v13 == v11 || a5 < v13[4] )
    v13 = v11;
  if ( v13 == v11 )
  {
    AnimationDataProvider::CreateDataSource(*((_QWORD *)this + 4), v32, a3);
    v33 = 0LL;
    v15 = *((_QWORD *)this + 2);
    if ( !v15 )
    {
LABEL_55:
      std::bad_weak_ptr::bad_weak_ptr((std::bad_weak_ptr *)pExceptionObject);
      throw (std::bad_weak_ptr *)pExceptionObject;
    }
    do
    {
      v16 = *(_DWORD *)(v15 + 8);
      if ( !v16 )
        goto LABEL_55;
    }
    while ( v16 != _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 8), v16 + 1, v16) );
    v33 = *(_OWORD *)((char *)this + 8);
    v37 = operator new(0x40uLL);
    v17 = (volatile signed __int32 *)std::_Ref_count_obj<SystemCursorShape>::_Ref_count_obj<SystemCursorShape>(
                                       (_DWORD)v37,
                                       (unsigned int)&v33,
                                       (unsigned int)&a5,
                                       (int)this + 32,
                                       (__int64)v32);
    v39 = (SystemCursorShape *)(v17 + 4);
    v40 = v17;
    if ( *((_QWORD *)&v33 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v33 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v18 = *((_QWORD *)&v33 + 1);
        (***((void (__fastcall ****)(_QWORD))&v33 + 1))(*((_QWORD *)&v33 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v33 + 1) + 8LL))(*((_QWORD *)&v33 + 1));
      }
    }
    v19 = SystemCursorShape::FeedAnimationData(v39);
    v14 = v19;
    if ( v19 >= 0 )
      v14 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorservice.cpp",
        (const char *)(unsigned int)v19);
    if ( v14 < 0 )
    {
      v20 = (unsigned int)v14;
      v21 = 134LL;
LABEL_33:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorservice.cpp",
        (const char *)v20);
      goto LABEL_43;
    }
    v38 = 0LL;
    if ( v17 )
      _InterlockedIncrement(v17 + 2);
    *(_QWORD *)&v38 = v39;
    *((_QWORD *)&v38 + 1) = v17;
    v22 = SystemCursor::AddShape(v34);
    v14 = v22;
    if ( v22 < 0 )
    {
      v20 = (unsigned int)v22;
      v21 = 135LL;
      goto LABEL_33;
    }
    v36 = *(_QWORD *)v32;
    if ( *(_QWORD *)v32 )
      (***(void (__fastcall ****)(_QWORD))v32)(*(_QWORD *)v32);
    DataSourceId = AnimationDataProvider::GetDataSourceId(&v36);
    DataProviderId = AnimationDataProvider::GetDataProviderId(*((AnimationDataProvider **)this + 4));
    v25 = *((_QWORD *)this + 5);
    if ( a2 == *(_DWORD *)(v25 + 72) && (v26 = *(_QWORD *)(v25 + 64)) != 0 )
    {
      v27 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, unsigned __int64, __int64))(*(_QWORD *)(v26 + 8) + 56LL))(
              v26 + 8,
              v45,
              a5,
              DataProviderId,
              DataSourceId);
      if ( v27 >= 0 )
      {
LABEL_42:
        v14 = 0;
LABEL_43:
        if ( v17 )
        {
          if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
            if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          }
        }
        v30 = *(_QWORD *)v32;
        if ( *(_QWORD *)v32 )
        {
          *(_QWORD *)v32 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
        }
        v10 = v35;
        goto LABEL_50;
      }
      v28 = (unsigned int)v27;
      v29 = 369LL;
    }
    else
    {
      v28 = 2147549183LL;
      v29 = 374LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorcontroller.cpp",
      (const char *)v28);
    goto LABEL_42;
  }
  v14 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7E,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\system"
             "cursorservice.cpp",
    (const char *)0x8000FFFFLL);
LABEL_50:
  if ( v10 && _InterlockedExchangeAdd((volatile signed __int32 *)v10 + 2, 0xFFFFFFFF) == 1 )
  {
    v31 = (volatile signed __int32 *)v35;
    (**(void (__fastcall ***)(SystemCursor *))v35)(v35);
    if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(SystemCursor *))(*(_QWORD *)v35 + 8LL))(v35);
  }
  return (unsigned int)v14;
}
