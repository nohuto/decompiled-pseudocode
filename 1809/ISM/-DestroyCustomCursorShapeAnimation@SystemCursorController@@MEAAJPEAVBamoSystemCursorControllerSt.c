/*
 * XREFs of ?DestroyCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K@Z @ 0x1800929B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B58C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@QEAA_KAEBQEAUISystemContextObserver@@@Z @ 0x18003A148 (-erase@-$_Hash@V-$_Uset_traits@PEAUISystemContextObserver@@V-$_Uhash_compare@PEAUISystemContextO.c)
 *     ??A?$map@IV?$shared_ptr@VCustomCursorApplication@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@2@@std@@QEAAAEAV?$shared_ptr@VCustomCursorApplication@@@1@AEBI@Z @ 0x180092EF4 (--A-$map@IV-$shared_ptr@VCustomCursorApplication@@@std@@U-$less@I@2@V-$allocator@U-$pair@$$CBIV-.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x180093F8C (-erase@-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@VSystemCursorShape@@@std@@U-$less@_K@2@V-$allocat.c)
 *     ?RemoveShape@SystemCursor@@QEAAX_K@Z @ 0x180096F60 (-RemoveShape@SystemCursor@@QEAAX_K@Z.c)
 *     ?count@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEBA_KAEB_K@Z @ 0x180097B78 (-count@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$a.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemCursorController::DestroyCustomCursorShapeAnimation(
        SystemCursorController *this,
        struct BamoSystemCursorControllerStub *a2,
        unsigned __int64 a3)
{
  int v6; // r9d
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
  volatile signed __int32 *v18; // rdi
  const char *v19; // r9
  __int64 v20; // r8
  __int64 *v21; // rax
  __int64 *v22; // rcx
  __int64 *v23; // rdx
  __int64 v24; // rbx
  __int64 v25; // rdx
  SystemCursor *v26; // rcx
  volatile signed __int32 *v27; // rbx
  SystemCursor *v28; // rbx
  __int64 result; // rax
  signed __int32 v30; // eax
  _QWORD v31[5]; // [rsp+20h] [rbp-68h] BYREF
  SystemCursor *v32[2]; // [rsp+48h] [rbp-40h]
  __int64 v33; // [rsp+58h] [rbp-30h]
  volatile signed __int32 *v34; // [rsp+60h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v36; // [rsp+90h] [rbp+8h]
  unsigned __int64 v37; // [rsp+A8h] [rbp+20h] BYREF

  v31[1] = -2LL;
  try
  {
    if ( !*((_QWORD *)this + 12) )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x114,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller.cpp",
        (const char *)0x8000FFFFLL);
      __debugbreak();
    }
    v36 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 7) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 7) + 16LL))
                    + 36);
    v6 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 7) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 7) + 16LL))
                   + 32);
    if ( v36 == *((_DWORD *)this + 18) )
      goto LABEL_14;
    v7 = (__int64 *)*((_QWORD *)this + 10);
    v31[2] = v7;
    v8 = (__int64 *)v7[1];
    v9 = v7;
    if ( *((_BYTE *)v8 + 25) )
      goto LABEL_11;
    do
    {
      if ( *((_DWORD *)v8 + 8) >= v36 )
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
    if ( v9 == v7 || v36 < *((_DWORD *)v9 + 8) )
LABEL_11:
      v9 = v7;
    if ( v9 != v7 )
LABEL_14:
      v10 = 0;
    else
      v10 = 1;
    if ( v10 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x119,
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
          v31[3] = v13;
          v14 = (__int64 *)v13[1];
          v15 = v13;
          if ( *((_BYTE *)v14 + 25) )
            goto LABEL_25;
          do
          {
            if ( *((_DWORD *)v14 + 8) >= v36 )
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
          if ( v15 == v13 || v36 < *((_DWORD *)v15 + 8) )
LABEL_25:
            v15 = v13;
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
            v33 = *v17;
            v34 = v18;
            v37 = a3;
            if ( std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::count(
                   v33 + 16,
                   &v37) )
            {
              std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::erase(
                (_QWORD *)(v33 + 16),
                &v37);
            }
            v20 = *((_QWORD *)this + 12);
            v31[0] = a3;
            v21 = *(__int64 **)(v20 + 160);
            v31[4] = v21;
            v22 = (__int64 *)v21[1];
            v23 = v21;
            if ( *((_BYTE *)v22 + 25) )
              goto LABEL_38;
            do
            {
              if ( v22[4] >= a3 )
              {
                v23 = v22;
                v22 = (__int64 *)*v22;
              }
              else
              {
                v22 = (__int64 *)v22[2];
              }
            }
            while ( !*((_BYTE *)v22 + 25) );
            if ( v23 == v21 || a3 < v23[4] )
LABEL_38:
              v23 = v21;
            if ( v23 != v21 )
              std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::erase(
                v20 + 160,
                v31);
            v24 = *((_QWORD *)this + 12);
            *(_OWORD *)v32 = 0LL;
            v25 = *(_QWORD *)(v24 + 184);
            if ( v25 )
            {
              while ( 1 )
              {
                v30 = *(_DWORD *)(v25 + 8);
                if ( !v30 )
                  break;
                if ( v30 == _InterlockedCompareExchange((volatile signed __int32 *)(v25 + 8), v30 + 1, v30) )
                {
                  v26 = *(SystemCursor **)(v24 + 176);
                  v32[0] = v26;
                  v27 = *(volatile signed __int32 **)(v24 + 184);
                  v32[1] = (SystemCursor *)v27;
                  goto LABEL_43;
                }
              }
            }
            v26 = v32[0];
            v27 = (volatile signed __int32 *)v32[1];
LABEL_43:
            if ( v26 )
              SystemCursor::RemoveShape(v26, a3);
            if ( v27 )
            {
              if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
              {
                v28 = v32[1];
                (**(void (__fastcall ***)(SystemCursor *))v32[1])(v32[1]);
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)v28 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(SystemCursor *))(*(_QWORD *)v32[1] + 8LL))(v32[1]);
              }
            }
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
LABEL_62:
          wil::details::in1diag3::_Throw_Hr(
            v16,
            (void *)0x124,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib"
                     "\\systemcursorcontroller.cpp",
            (const char *)0x8000FFFFLL);
          JUMPOUT(0x180092D2CLL);
        }
LABEL_61:
        wil::details::in1diag3::_Throw_Hr(
          v12,
          (void *)0x123,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorcontroller.cpp",
          (const char *)0x80070005LL);
        goto LABEL_62;
      }
    }
    wil::details::in1diag3::_Throw_Hr(
      v11,
      (void *)0x11F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorcontroller.cpp",
      (const char *)0x80070057LL);
    goto LABEL_61;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x136,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                    "systemcursorcontroller.cpp",
      v19);
    return 0LL;
  }
  return result;
}
