/*
 * XREFs of ?CreateCursorForDevice@SystemCursorService@@QEAAJ_K@Z @ 0x1800956F4
 * Callers:
 *     ?CreateCursorForDevice@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K@Z @ 0x1800921F0 (-CreateCursorForDevice@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18005DD00 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??A?$unordered_map@_KV?$shared_ptr@VSystemCursor@@@std@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@@std@@QEAAAEAV?$shared_ptr@VSystemCursor@@@1@AEB_K@Z @ 0x18009437C (--A-$unordered_map@_KV-$shared_ptr@VSystemCursor@@@std@@U-$hash@_K@2@U-$equal_to@_K@2@V-$allocat.c)
 *     ?CursorExists@SystemCursorService@@QEAA_N_K@Z @ 0x1800944A0 (-CursorExists@SystemCursorService@@QEAA_N_K@Z.c)
 *     ?CreateCustomCursorSharedTarget@SystemCursor@@QEAAJPEAUIContainerVisual@Composition@UI@Windows@@PEAPEAX@Z @ 0x180096868 (-CreateCustomCursorSharedTarget@SystemCursor@@QEAAJPEAUIContainerVisual@Composition@UI@Windows@@.c)
 *     ?AddShape@SystemCursor@@QEAAJV?$shared_ptr@VSystemCursorShape@@@std@@@Z @ 0x180096D24 (-AddShape@SystemCursor@@QEAAJV-$shared_ptr@VSystemCursorShape@@@std@@@Z.c)
 *     ?RefreshShapeVisibilityData@SystemCursor@@QEAAXXZ @ 0x180097184 (-RefreshShapeVisibilityData@SystemCursor@@QEAAXXZ.c)
 *     ??$?0V?$shared_ptr@VSystemCursorService@@@std@@AEA_K@?$_Ref_count_obj@VSystemCursor@@@std@@QEAA@$$QEAV?$shared_ptr@VSystemCursorService@@@1@AEA_K@Z @ 0x180098114 (--$-0V-$shared_ptr@VSystemCursorService@@@std@@AEA_K@-$_Ref_count_obj@VSystemCursor@@@std@@QEAA@.c)
 *     ??0bad_weak_ptr@std@@QEAA@XZ @ 0x1800987A0 (--0bad_weak_ptr@std@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SystemCursorService::CreateCursorForDevice(SystemCursorService *this, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *i; // rdx
  __int64 v6; // rdx
  signed __int32 v7; // eax
  volatile signed __int32 *v8; // rsi
  char v9; // r15
  __int64 v10; // rbx
  _QWORD *v11; // rax
  volatile signed __int32 *v12; // rbx
  __int64 v13; // r8
  volatile signed __int32 *v14; // rbx
  __int64 v15; // rdx
  signed __int32 v16; // eax
  char v17; // di
  int v18; // eax
  int v19; // ebx
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 *v25; // rdi
  __int64 *v26; // rbx
  __int64 v27; // rcx
  int v28; // eax
  __int64 *v29; // rax
  __int64 *j; // rax
  volatile signed __int32 *v31; // rcx
  __int128 v33; // [rsp+20h] [rbp-59h] BYREF
  SystemCursor *v34; // [rsp+30h] [rbp-49h]
  volatile signed __int32 *v35; // [rsp+38h] [rbp-41h]
  __int128 v36; // [rsp+40h] [rbp-39h]
  void *v37; // [rsp+50h] [rbp-29h]
  __int128 v38; // [rsp+60h] [rbp-19h]
  __int128 v39; // [rsp+70h] [rbp-9h]
  __int64 v40; // [rsp+80h] [rbp+7h]
  _BYTE pExceptionObject[72]; // [rsp+88h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  void *v43; // [rsp+E0h] [rbp+67h] BYREF
  volatile signed __int32 *v44; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v45; // [rsp+F0h] [rbp+77h] BYREF
  _QWORD *v46; // [rsp+F8h] [rbp+7Fh]

  v44 = (volatile signed __int32 *)a2;
  v40 = -2LL;
  LODWORD(v43) = 0;
  v38 = 0uLL;
  v39 = 0uLL;
  v4 = (_QWORD *)*((_QWORD *)this + 15);
  v46 = v4;
  for ( i = (_QWORD *)*((_QWORD *)this + 14); i != v4 && *i != a2; i += 2 )
    ;
  if ( i == v4 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x39,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)0x8000FFFFLL);
    JUMPOUT(0x180095B8CLL);
  }
  v39 = *(_OWORD *)i;
  if ( SystemCursorService::CursorExists(this, a2) )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
  v33 = 0LL;
  v6 = *((_QWORD *)this + 2);
  if ( !v6 )
  {
LABEL_77:
    std::bad_weak_ptr::bad_weak_ptr((std::bad_weak_ptr *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v7 = *(_DWORD *)(v6 + 8);
    if ( !v7 )
      goto LABEL_77;
  }
  while ( v7 != _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7) );
  v33 = *(_OWORD *)((char *)this + 8);
  v37 = operator new(0x60uLL);
  v8 = (volatile signed __int32 *)std::_Ref_count_obj<SystemCursor>::_Ref_count_obj<SystemCursor>(v37, &v33, &v44);
  v9 = 6;
  v34 = (SystemCursor *)(v8 + 4);
  v35 = v8;
  if ( *((_QWORD *)&v33 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v33 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v10 = *((_QWORD *)&v33 + 1);
      (***((void (__fastcall ****)(_QWORD))&v33 + 1))(*((_QWORD *)&v33 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v33 + 1) + 8LL))(*((_QWORD *)&v33 + 1));
    }
  }
  v11 = std::unordered_map<unsigned __int64,std::shared_ptr<SystemCursor>>::operator[]((_QWORD *)this + 6, &v44);
  if ( v8 )
    _InterlockedIncrement(v8 + 2);
  *v11 = v34;
  v12 = (volatile signed __int32 *)v11[1];
  v11[1] = v8;
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  if ( DWORD2(v39) )
  {
    v14 = v44;
LABEL_32:
    v17 = 0;
    goto LABEL_33;
  }
  v13 = 0LL;
  v14 = 0LL;
  v15 = *((_QWORD *)this + 23);
  if ( v15 )
  {
    while ( 1 )
    {
      v16 = *(_DWORD *)(v15 + 8);
      if ( !v16 )
        break;
      if ( v16 == _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 8), v16 + 1, v16) )
      {
        v13 = *((_QWORD *)this + 22);
        v14 = (volatile signed __int32 *)*((_QWORD *)this + 23);
        break;
      }
    }
  }
  v9 = 7;
  if ( v13 )
    goto LABEL_32;
  v17 = 1;
LABEL_33:
  if ( (v9 & 1) != 0 )
  {
    if ( v14 )
    {
      if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
      }
    }
  }
  if ( !v17 )
    goto LABEL_70;
  v18 = SystemCursor::CreateCustomCursorSharedTarget(
          v34,
          *((struct Windows::UI::Composition::IContainerVisual **)this + 19),
          &v43);
  v19 = v18;
  if ( v18 < 0 )
  {
    v20 = (unsigned int)v18;
    v21 = 81LL;
LABEL_49:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)v20);
    goto LABEL_71;
  }
  v22 = NtDCompositionDuplicateHandleToProcess(v43, *((unsigned int *)this + 34), &v45);
  if ( v22 >= 0 )
  {
    v23 = *(_QWORD *)(*((_QWORD *)this + 5) + 64LL);
    if ( v23
      && (v24 = (*(__int64 (__fastcall **)(__int64, volatile signed __int32 *, __int64))(*(_QWORD *)(v23 + 8) + 40LL))(
                  v23 + 8,
                  v44,
                  v45),
          v19 = v24,
          v24 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15E,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller.cpp",
        (const char *)(unsigned int)v24);
    }
    else
    {
      v19 = 0;
    }
    if ( v19 < 0 )
    {
      v20 = (unsigned int)v19;
      v21 = 94LL;
      goto LABEL_49;
    }
    v25 = (__int64 *)*((_QWORD *)this + 20);
    v26 = (__int64 *)*v25;
    while ( v26 != v25 )
    {
      v36 = 0LL;
      v27 = v26[6];
      if ( v27 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v27 + 8));
        v27 = v26[6];
      }
      *(_QWORD *)&v36 = v26[5];
      *((_QWORD *)&v36 + 1) = v27;
      v28 = SystemCursor::AddShape(v34);
      if ( v28 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x64,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorservice.cpp",
          (const char *)(unsigned int)v28);
      if ( !*((_BYTE *)v26 + 25) )
      {
        v29 = (__int64 *)v26[2];
        if ( *((_BYTE *)v29 + 25) )
        {
          for ( j = (__int64 *)v26[1]; !*((_BYTE *)j + 25) && v26 == (__int64 *)j[2]; j = (__int64 *)j[1] )
            v26 = j;
          v26 = j;
        }
        else
        {
          do
          {
            v26 = v29;
            v29 = (__int64 *)*v29;
          }
          while ( !*((_BYTE *)v29 + 25) );
        }
      }
    }
    SystemCursor::RefreshShapeVisibilityData(v34);
    if ( v8 )
      _InterlockedIncrement(v8 + 3);
    *((_QWORD *)this + 22) = v34;
    v31 = (volatile signed __int32 *)*((_QWORD *)this + 23);
    *((_QWORD *)this + 23) = v8;
    if ( v31 && _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
LABEL_70:
    v19 = 0;
    goto LABEL_71;
  }
  v19 = wil::details::in1diag3::Return_NtStatus(
          retaddr,
          (void *)0x5A,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorservice.cpp",
          (const char *)(unsigned int)v22);
LABEL_71:
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return (unsigned int)v19;
}
