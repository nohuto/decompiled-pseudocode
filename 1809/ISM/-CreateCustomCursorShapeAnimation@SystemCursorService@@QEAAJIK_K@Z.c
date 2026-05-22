/*
 * XREFs of ?CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z @ 0x180095F4C
 * Callers:
 *     ?CreateCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K@Z @ 0x180092500 (-CreateCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStu.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendCustomCursorAnimationCreatedCallback@SystemCursorController@@QEAAJI_K00@Z @ 0x180092D34 (-SendCustomCursorAnimationCreatedCallback@SystemCursorController@@QEAAJI_K00@Z.c)
 *     ?AddShape@SystemCursor@@QEAAJV?$shared_ptr@VSystemCursorShape@@@std@@@Z @ 0x180096D24 (-AddShape@SystemCursor@@QEAAJV-$shared_ptr@VSystemCursorShape@@@std@@@Z.c)
 *     ?FeedAnimationData@SystemCursorShape@@AEAAJXZ @ 0x180097278 (-FeedAnimationData@SystemCursorShape@@AEAAJXZ.c)
 *     ??A?$map@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@@std@@QEAAAEAV?$shared_ptr@VSystemCursorShape@@@1@AEB_K@Z @ 0x180097C58 (--A-$map@_KV-$shared_ptr@VSystemCursorShape@@@std@@U-$less@_K@2@V-$allocator@U-$pair@$$CB_KV-$sh.c)
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
__int64 __fastcall SystemCursorService::CreateCustomCursorShapeAnimation(
        SystemCursorService *this,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4)
{
  __int64 v5; // r10
  signed __int32 v6; // eax
  __int64 v7; // rcx
  bool v8; // r13
  __int64 *v9; // rax
  __int64 *v10; // rcx
  __int64 *v11; // rdx
  __int64 v12; // rdx
  __int64 *v13; // rax
  __int64 *v14; // rcx
  __int64 *v15; // rdx
  int v16; // esi
  __int64 v17; // rdx
  signed __int32 v18; // eax
  volatile signed __int32 *v19; // rdi
  __int64 v20; // rbx
  int v21; // eax
  unsigned __int64 v22; // r9
  __int64 v23; // rdx
  SystemCursorShape **v24; // rax
  volatile signed __int32 *v25; // rbx
  int v26; // eax
  unsigned __int64 DataSourceId; // rbx
  __int64 DataProviderId; // rax
  void (__fastcall ***v29)(_QWORD); // rcx
  __int128 v31; // [rsp+38h] [rbp-59h]
  __int128 v32; // [rsp+48h] [rbp-49h] BYREF
  void (__fastcall ***v33)(_QWORD); // [rsp+58h] [rbp-39h] BYREF
  void *v34; // [rsp+60h] [rbp-31h]
  SystemCursorShape *v35; // [rsp+68h] [rbp-29h]
  volatile signed __int32 *v36; // [rsp+70h] [rbp-21h]
  __int128 v37; // [rsp+78h] [rbp-19h]
  __int64 v38; // [rsp+88h] [rbp-9h]
  __int64 *v39; // [rsp+90h] [rbp-1h]
  __int64 *v40; // [rsp+98h] [rbp+7h]
  _BYTE pExceptionObject[72]; // [rsp+A0h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]
  void (__fastcall ***v43)(_QWORD); // [rsp+F8h] [rbp+67h] BYREF
  unsigned int v44; // [rsp+100h] [rbp+6Fh]
  unsigned __int64 v45; // [rsp+110h] [rbp+7Fh] BYREF

  v45 = a4;
  v44 = a2;
  v38 = -2LL;
  v31 = 0LL;
  v5 = *((_QWORD *)this + 23);
  if ( v5 )
  {
    do
    {
      v6 = *(_DWORD *)(v5 + 8);
      if ( !v6 )
      {
        a4 = v45;
        goto LABEL_6;
      }
    }
    while ( v6 != _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), v6 + 1, v6) );
    v7 = *((_QWORD *)this + 22);
    v31 = *((_OWORD *)this + 11);
    a4 = v45;
  }
  else
  {
LABEL_6:
    v7 = 0LL;
  }
  v8 = v7 != 0;
  if ( v7 )
  {
    v9 = *(__int64 **)(v7 + 32);
    v39 = v9;
    v10 = (__int64 *)v9[1];
    v11 = v9;
    while ( !*((_BYTE *)v10 + 25) )
    {
      if ( v10[4] >= a4 )
      {
        v11 = v10;
        v10 = (__int64 *)*v10;
      }
      else
      {
        v10 = (__int64 *)v10[2];
      }
    }
    if ( v11 == v9 || a4 < v11[4] )
      v11 = v9;
    if ( v11 != v9 )
    {
      v12 = 158LL;
LABEL_29:
      v16 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorservice.cpp",
        (const char *)0x8000FFFFLL);
      goto LABEL_65;
    }
  }
  v13 = (__int64 *)*((_QWORD *)this + 20);
  v40 = v13;
  v14 = (__int64 *)v13[1];
  v15 = v13;
  while ( !*((_BYTE *)v14 + 25) )
  {
    if ( v14[4] >= a4 )
    {
      v15 = v14;
      v14 = (__int64 *)*v14;
    }
    else
    {
      v14 = (__int64 *)v14[2];
    }
  }
  if ( v15 == v13 || a4 < v15[4] )
    v15 = v13;
  if ( v15 != v13 )
  {
    v12 = 161LL;
    goto LABEL_29;
  }
  AnimationDataProvider::CreateDataSource(*((_QWORD *)this + 4), &v43, a3);
  v32 = 0LL;
  v17 = *((_QWORD *)this + 2);
  if ( !v17 )
  {
LABEL_70:
    std::bad_weak_ptr::bad_weak_ptr((std::bad_weak_ptr *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v18 = *(_DWORD *)(v17 + 8);
    if ( !v18 )
      goto LABEL_70;
  }
  while ( v18 != _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 8), v18 + 1, v18) );
  v32 = *(_OWORD *)((char *)this + 8);
  v34 = operator new(0x40uLL);
  v19 = (volatile signed __int32 *)std::_Ref_count_obj<SystemCursorShape>::_Ref_count_obj<SystemCursorShape>(
                                     (_DWORD)v34,
                                     (unsigned int)&v32,
                                     (unsigned int)&v45,
                                     (int)this + 32,
                                     (__int64)&v43);
  v35 = (SystemCursorShape *)(v19 + 4);
  v36 = v19;
  if ( *((_QWORD *)&v32 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v32 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v20 = *((_QWORD *)&v32 + 1);
      (***((void (__fastcall ****)(_QWORD))&v32 + 1))(*((_QWORD *)&v32 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v32 + 1) + 8LL))(*((_QWORD *)&v32 + 1));
    }
  }
  v21 = SystemCursorShape::FeedAnimationData(v35);
  v16 = v21;
  if ( v21 >= 0 )
    v16 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)(unsigned int)v21);
  if ( v16 >= 0 )
  {
    v24 = (SystemCursorShape **)std::map<unsigned __int64,std::shared_ptr<SystemCursorShape>>::operator[]((int)this + 160);
    if ( v19 )
      _InterlockedIncrement(v19 + 2);
    *v24 = v35;
    v25 = (volatile signed __int32 *)v24[1];
    v24[1] = (SystemCursorShape *)v19;
    if ( v25 )
    {
      if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
        if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
      }
    }
    if ( !v8 )
      goto LABEL_56;
    v37 = 0LL;
    if ( v19 )
      _InterlockedIncrement(v19 + 2);
    *(_QWORD *)&v37 = v35;
    *((_QWORD *)&v37 + 1) = v19;
    v26 = SystemCursor::AddShape((SystemCursor *)v31);
    v16 = v26;
    if ( v26 >= 0 )
    {
LABEL_56:
      v33 = v43;
      if ( v43 )
        (**v43)(v43);
      DataSourceId = AnimationDataProvider::GetDataSourceId(&v33);
      DataProviderId = AnimationDataProvider::GetDataProviderId(*((AnimationDataProvider **)this + 4));
      SystemCursorController::SendCustomCursorAnimationCreatedCallback(
        *((SystemCursorController **)this + 5),
        v44,
        v45,
        DataProviderId,
        DataSourceId);
      v16 = 0;
      goto LABEL_59;
    }
    v22 = (unsigned int)v26;
    v23 = 175LL;
  }
  else
  {
    v22 = (unsigned int)v16;
    v23 = 169LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v23,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\system"
             "cursorservice.cpp",
    (const char *)v22);
LABEL_59:
  if ( v19 )
  {
    if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
      if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
    }
  }
  v29 = v43;
  if ( v43 )
  {
    v43 = 0LL;
    (*v29)[1](v29);
  }
LABEL_65:
  if ( *((_QWORD *)&v31 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v31 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v31 + 1))(*((_QWORD *)&v31 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v31 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v31 + 1) + 8LL))(*((_QWORD *)&v31 + 1));
    }
  }
  return (unsigned int)v16;
}
