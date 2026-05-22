/*
 * XREFs of ?AttachApplication@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoCustomCursorControllerClientProxy@@@Z @ 0x180091F40
 * Callers:
 *     <none>
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B58C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??A?$map@IV?$shared_ptr@VCustomCursorApplication@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@2@@std@@QEAAAEAV?$shared_ptr@VCustomCursorApplication@@@1@AEBI@Z @ 0x180092EF4 (--A-$map@IV-$shared_ptr@VCustomCursorApplication@@@std@@U-$less@I@2@V-$allocator@U-$pair@$$CBIV-.c)
 *     ??$?0AEAV?$shared_ptr@VSystemCursorService@@@std@@AEAIAEAPEAVBamoCustomCursorControllerClientProxy@@@?$_Ref_count_obj@VCustomCursorApplication@@@std@@QEAA@AEAV?$shared_ptr@VSystemCursorService@@@1@AEAIAEAPEAVBamoCustomCursorControllerClientProxy@@@Z @ 0x1800936CC (--$-0AEAV-$shared_ptr@VSystemCursorService@@@std@@AEAIAEAPEAVBamoCustomCursorControllerClientPro.c)
 *     ?CreateSharedVisual@CustomCursorApplication@@QEAAJPEAPEAX@Z @ 0x1800973E8 (-CreateSharedVisual@CustomCursorApplication@@QEAAJPEAPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemCursorController::AttachApplication(
        SystemCursorController *this,
        struct BamoSystemCursorControllerStub *a2,
        struct BamoCustomCursorControllerClientProxy *a3)
{
  char *v6; // rdi
  double v7; // xmm0_8
  _QWORD *v8; // r15
  unsigned int v9; // r8d
  int v10; // edi
  __int64 *v11; // rax
  __int64 *v12; // rcx
  __int64 *v13; // rdx
  wil::details::in1diag3 *v14; // rcx
  volatile signed __int32 *v15; // rbx
  CustomCursorApplication *v16; // r14
  CustomCursorApplication **v17; // rax
  volatile signed __int32 *v18; // rsi
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  int v21; // eax
  const char *v22; // r9
  wil::details::in1diag3 *v23; // rcx
  int v25; // eax
  __int64 *v26; // [rsp+28h] [rbp-50h]
  void *v27; // [rsp+30h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v29; // [rsp+80h] [rbp+8h] BYREF
  struct BamoCustomCursorControllerClientProxy *v30; // [rsp+90h] [rbp+18h] BYREF
  void *v31; // [rsp+98h] [rbp+20h] BYREF

  v30 = a3;
  try
  {
    if ( *((_QWORD *)this + 8) )
    {
      v6 = (char *)this + 8;
      v7 = (*(double (__fastcall **)(char *))(*((_QWORD *)this + 1) + 24LL))((char *)this + 8);
      if ( *(float *)&v7 != (*(float (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 8) + 8LL) + 64LL))(*((_QWORD *)this + 8) + 8LL) )
        (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 32LL))(v6);
    }
    v8 = (_QWORD *)((char *)this + 96);
    if ( *((_QWORD *)this + 12) )
    {
      v9 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 7) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 7) + 16LL))
                     + 36);
      v29 = v9;
      v10 = (_DWORD)this + 80;
      v11 = (__int64 *)*((_QWORD *)this + 10);
      v26 = v11;
      v12 = (__int64 *)v11[1];
      v13 = v11;
      while ( !*((_BYTE *)v12 + 25) )
      {
        if ( *((_DWORD *)v12 + 8) >= v9 )
        {
          v13 = v12;
          v12 = (__int64 *)*v12;
        }
        else
        {
          v12 = (__int64 *)v12[2];
        }
      }
      if ( v13 == v11 || v9 < *((_DWORD *)v13 + 8) )
        v13 = (__int64 *)*((_QWORD *)this + 10);
      v14 = retaddr;
      if ( v13 == v11 )
      {
        v27 = operator new(0x80uLL);
        v15 = (volatile signed __int32 *)std::_Ref_count_obj<CustomCursorApplication>::_Ref_count_obj<CustomCursorApplication>(
                                           v27,
                                           (char *)this + 96,
                                           &v29,
                                           &v30,
                                           -2LL,
                                           v26,
                                           v27);
        v16 = (CustomCursorApplication *)(v15 + 4);
        v17 = (CustomCursorApplication **)std::map<unsigned int,std::shared_ptr<CustomCursorApplication>>::operator[](v10);
        if ( v15 )
        {
          _InterlockedIncrement(v15 + 2);
          v16 = (CustomCursorApplication *)(v15 + 4);
        }
        *v17 = v16;
        v18 = (volatile signed __int32 *)v17[1];
        v17[1] = (CustomCursorApplication *)v15;
        if ( v18 )
        {
          if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
            if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          }
          v16 = (CustomCursorApplication *)(v15 + 4);
        }
        v19 = CustomCursorApplication::CreateSharedVisual(v16, &v31);
        v20 = retaddr;
        if ( v19 >= 0 )
        {
          v21 = (*(__int64 (__fastcall **)(__int64, __int64, void *))(*(_QWORD *)(*((_QWORD *)v16 + 11) + 8LL) + 24LL))(
                  *((_QWORD *)v16 + 11) + 8LL,
                  *v8 + 192LL,
                  v31);
          v23 = retaddr;
          if ( v21 >= 0 )
          {
            if ( v15 )
            {
              if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
              {
                (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
                if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
              }
            }
            return 0LL;
          }
LABEL_33:
          wil::details::in1diag3::_Throw_Hr(
            v23,
            (void *)0x71,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib"
                     "\\systemcursorcontroller.cpp",
            (const char *)(unsigned int)v21);
          JUMPOUT(0x1800921DFLL);
        }
LABEL_32:
        wil::details::in1diag3::_Throw_Hr(
          v20,
          (void *)0x6D,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorcontroller.cpp",
          (const char *)(unsigned int)v19);
        goto LABEL_33;
      }
    }
    else
    {
      v25 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a3 + 1) + 32LL))((char *)a3 + 8);
      if ( v25 >= 0 )
        return 0LL;
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x79,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller.cpp",
        (const char *)(unsigned int)v25);
    }
    wil::details::in1diag3::_Throw_Hr(
      v14,
      (void *)0x61,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorcontroller.cpp",
      (const char *)0x8000FFFFLL);
    goto LABEL_32;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x7C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                    "systemcursorcontroller.cpp",
      v22);
  }
  return 0LL;
}
