/*
 * XREFs of ?OnStubDisconnected@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@@Z @ 0x1800922B0
 * Callers:
 *     <none>
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@VCustomCursorApplication@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x180092DF4 (-erase@-$_Tree@V-$_Tmap_traits@IV-$shared_ptr@VCustomCursorApplication@@@std@@U-$less@I@2@V-$all.c)
 *     ??A?$map@IV?$shared_ptr@VCustomCursorApplication@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@2@@std@@QEAAAEAV?$shared_ptr@VCustomCursorApplication@@@1@AEBI@Z @ 0x180092EF4 (--A-$map@IV-$shared_ptr@VCustomCursorApplication@@@std@@U-$less@I@2@V-$allocator@U-$pair@$$CBIV-.c)
 *     ?Cleanup@CustomCursorApplication@@QEAAXXZ @ 0x1800977FC (-Cleanup@CustomCursorApplication@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemCursorController::OnStubDisconnected(
        SystemCursorController *this,
        struct BamoSystemCursorControllerStub *a2)
{
  unsigned int v3; // r8d
  const char *v4; // r9
  __int64 *v5; // rax
  __int64 *v6; // rcx
  __int64 *v7; // rdx
  __int64 v8; // rax
  volatile signed __int32 *v9; // rdi
  CustomCursorApplication *v11; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v13; // [rsp+58h] [rbp+10h] BYREF
  __int64 *v14; // [rsp+60h] [rbp+18h]

  try
  {
    v3 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 7) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 7) + 16LL))
                   + 36);
    v13 = v3;
    v5 = (__int64 *)*((_QWORD *)this + 10);
    v14 = v5;
    v6 = (__int64 *)v5[1];
    v7 = v5;
    if ( *((_BYTE *)v6 + 25) )
      goto LABEL_9;
    do
    {
      if ( *((_DWORD *)v6 + 8) >= v3 )
      {
        v7 = v6;
        v6 = (__int64 *)*v6;
      }
      else
      {
        v6 = (__int64 *)v6[2];
      }
    }
    while ( !*((_BYTE *)v6 + 25) );
    if ( v7 == v5 || v3 < *((_DWORD *)v7 + 8) )
LABEL_9:
      v7 = v5;
    if ( v7 != v5 )
    {
      v8 = std::map<unsigned int,std::shared_ptr<CustomCursorApplication>>::operator[]((int)this + 80);
      v9 = *(volatile signed __int32 **)(v8 + 8);
      if ( v9 )
      {
        _InterlockedIncrement(v9 + 2);
        v9 = *(volatile signed __int32 **)(v8 + 8);
      }
      v11 = *(CustomCursorApplication **)v8;
      std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<CustomCursorApplication>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication>>>,0>>::erase(
        (char *)this + 80,
        &v13);
      CustomCursorApplication::Cleanup(v11);
      if ( v9 )
      {
        if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
          if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
        }
      }
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x9F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                    "systemcursorcontroller.cpp",
      v4);
  }
  return 0LL;
}
