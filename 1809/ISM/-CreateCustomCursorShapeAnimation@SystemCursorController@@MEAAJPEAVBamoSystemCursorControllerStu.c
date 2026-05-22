/*
 * XREFs of ?CreateCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K@Z @ 0x180092500
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B58C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Insert@AEBQEAUIHeatSystemContextClient@@U_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@@std@@_N@1@AEBQEAUIHeatSystemContextClient@@U_Not_a_node_tag@1@@Z @ 0x18003A4DC (--$_Insert@AEBQEAUIHeatSystemContextClient@@U_Not_a_node_tag@std@@@-$_Hash@V-$_Uset_traits@PEAUI.c)
 *     ??A?$map@IV?$shared_ptr@VCustomCursorApplication@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@2@@std@@QEAAAEAV?$shared_ptr@VCustomCursorApplication@@@1@AEBI@Z @ 0x180092EF4 (--A-$map@IV-$shared_ptr@VCustomCursorApplication@@@std@@U-$less@I@2@V-$allocator@U-$pair@$$CBIV-.c)
 *     ?CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z @ 0x180095F4C (-CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z.c)
 *     ?count@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEBA_KAEB_K@Z @ 0x180097B78 (-count@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$a.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemCursorController::CreateCustomCursorShapeAnimation(
        SystemCursorController *this,
        struct BamoSystemCursorControllerStub *a2,
        unsigned __int64 a3)
{
  unsigned int v6; // r15d
  __int64 *v7; // rax
  __int64 *v8; // rcx
  __int64 *v9; // rdx
  char v10; // al
  wil::details::in1diag3 *v11; // rcx
  wil::details::in1diag3 *v12; // rcx
  __int64 *v13; // rax
  __int64 *v14; // rcx
  __int64 *v15; // rdx
  wil::details::in1diag3 *v16; // rcx
  __int64 *v17; // rax
  volatile signed __int32 *v18; // rbx
  int CustomCursorShapeAnimation; // eax
  const char *v20; // r9
  wil::details::in1diag3 *v21; // rcx
  __int64 v23; // [rsp+38h] [rbp-40h]
  _BYTE v24[24]; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v26; // [rsp+80h] [rbp+8h]
  unsigned __int64 v27; // [rsp+98h] [rbp+20h] BYREF

  try
  {
    if ( !*((_QWORD *)this + 12) )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xCB,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller.cpp",
        (const char *)0x8000FFFFLL);
      __debugbreak();
    }
    v26 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 7) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 7) + 16LL))
                    + 36);
    v6 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 7) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 7) + 16LL))
                   + 32);
    if ( v26 == *((_DWORD *)this + 18) )
      goto LABEL_14;
    v7 = (__int64 *)*((_QWORD *)this + 10);
    v8 = (__int64 *)v7[1];
    v9 = v7;
    if ( *((_BYTE *)v8 + 25) )
      goto LABEL_11;
    do
    {
      if ( *((_DWORD *)v8 + 8) >= v26 )
      {
        v9 = v8;
        v8 = (__int64 *)*v8;
      }
      else
      {
        v8 = (__int64 *)v8[2];
      }
    }
    while ( !*((_BYTE *)v8 + 25) );
    if ( v9 == v7 || v26 < *((_DWORD *)v9 + 8) )
LABEL_11:
      v9 = (__int64 *)*((_QWORD *)this + 10);
    if ( v9 != v7 )
LABEL_14:
      v10 = 0;
    else
      v10 = 1;
    if ( v10 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xCF,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller.cpp",
        (const char *)0x80070005LL);
    }
    else
    {
      v11 = retaddr;
      if ( HIBYTE(a3) == 1 )
      {
        v12 = retaddr;
        if ( (unsigned int)(a3 >> 16) == v6 )
        {
          v13 = (__int64 *)*((_QWORD *)this + 10);
          v14 = (__int64 *)v13[1];
          v15 = v13;
          if ( *((_BYTE *)v14 + 25) )
            goto LABEL_25;
          do
          {
            if ( *((_DWORD *)v14 + 8) >= v26 )
            {
              v15 = v14;
              v14 = (__int64 *)*v14;
            }
            else
            {
              v14 = (__int64 *)v14[2];
            }
          }
          while ( !*((_BYTE *)v14 + 25) );
          if ( v15 == v13 || v26 < *((_DWORD *)v15 + 8) )
LABEL_25:
            v15 = (__int64 *)*((_QWORD *)this + 10);
          v16 = retaddr;
          if ( v15 != v13 )
          {
            v17 = (__int64 *)std::map<unsigned int,std::shared_ptr<CustomCursorApplication>>::operator[]((int)this + 80);
            v18 = (volatile signed __int32 *)v17[1];
            if ( v18 )
            {
              _InterlockedIncrement(v18 + 2);
              v18 = (volatile signed __int32 *)v17[1];
            }
            v23 = *v17;
            v27 = a3;
            if ( !std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::count(
                    v23 + 16,
                    &v27) )
              std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::_Insert<IHeatSystemContextClient * const &,std::_Not_a_node_tag>(
                (_QWORD *)(v23 + 16),
                (__int64)v24,
                (__int64 *)&v27);
            CustomCursorShapeAnimation = SystemCursorService::CreateCustomCursorShapeAnimation(
                                           *((SystemCursorService **)this + 12),
                                           v26,
                                           v6,
                                           a3);
            v21 = retaddr;
            if ( CustomCursorShapeAnimation >= 0 )
            {
              if ( v18 )
              {
                if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
                {
                  (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
                  if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
                }
              }
              return 0LL;
            }
LABEL_42:
            wil::details::in1diag3::_Throw_Hr(
              v21,
              (void *)0xE4,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\l"
                       "ib\\systemcursorcontroller.cpp",
              (const char *)(unsigned int)CustomCursorShapeAnimation);
            JUMPOUT(0x1800927B1LL);
          }
LABEL_41:
          wil::details::in1diag3::_Throw_Hr(
            v16,
            (void *)0xDA,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib"
                     "\\systemcursorcontroller.cpp",
            (const char *)0x8000FFFFLL);
          goto LABEL_42;
        }
LABEL_40:
        wil::details::in1diag3::_Throw_Hr(
          v12,
          (void *)0xD9,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorcontroller.cpp",
          (const char *)0x80070005LL);
        goto LABEL_41;
      }
    }
    wil::details::in1diag3::_Throw_Hr(
      v11,
      (void *)0xD5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorcontroller.cpp",
      (const char *)0x8000FFFFLL);
    goto LABEL_40;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xE6,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                    "systemcursorcontroller.cpp",
      v20);
  }
  return 0LL;
}
