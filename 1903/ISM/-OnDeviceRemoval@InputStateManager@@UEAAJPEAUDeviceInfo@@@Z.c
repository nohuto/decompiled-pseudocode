/*
 * XREFs of ?OnDeviceRemoval@InputStateManager@@UEAAJPEAUDeviceInfo@@@Z @ 0x180092A20
 * Callers:
 *     ?OnDeviceRemoval@InputStateManager@@W7EAAJPEAUDeviceInfo@@@Z @ 0x180038810 (-OnDeviceRemoval@InputStateManager@@W7EAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?OnDeviceRemoval@InputStateManager@InputETW@@SAXPEAUDeviceInfo@@@Z @ 0x180092B58 (-OnDeviceRemoval@InputStateManager@InputETW@@SAXPEAUDeviceInfo@@@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x18009321C (-erase@-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equa.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputStateManager::OnDeviceRemoval(InputStateManager *this, struct DeviceInfo *a2)
{
  __int64 v4; // rdi
  __int64 i; // rbx
  int v6; // eax
  unsigned int v7; // esi
  __int64 v8; // r9
  __int64 v9; // rdx
  _QWORD *v10; // rdx
  _QWORD *v11; // rcx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0LL;
  InputETW::InputStateManager::OnDeviceRemoval(a2);
  for ( i = *((_QWORD *)this + 9); ; i += 16LL )
  {
    if ( i == *((_QWORD *)this + 10) )
    {
      v7 = -2147467259;
      v8 = 2147500037LL;
      v9 = 376LL;
      goto LABEL_14;
    }
    if ( *(_DWORD *)i == *(_DWORD *)a2 )
      break;
  }
  v4 = *(_QWORD *)(i + 8);
  v6 = (*(__int64 (__fastcall **)(__int64, struct DeviceInfo *))(*(_QWORD *)v4 + 40LL))(v4, a2);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v10 = (_QWORD *)*((_QWORD *)this + 10);
    if ( (_QWORD *)(i + 16) != v10 )
    {
      v11 = (_QWORD *)(i + 24);
      do
      {
        *((_DWORD *)v11 - 6) = *((_DWORD *)v11 - 2);
        *(v11 - 2) = *v11;
        v11 += 2;
      }
      while ( v11 - 1 != v10 );
    }
    *((_QWORD *)this + 10) -= 16LL;
    std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::erase(
      (char *)this + 96,
      a2);
    v12 = (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *))(**((_QWORD **)this + 5) + 40LL))(
            *((_QWORD *)this + 5),
            a2);
    v7 = v12;
    if ( v12 >= 0 )
    {
      v7 = 0;
      goto LABEL_15;
    }
    v8 = (unsigned int)v12;
    v9 = 369LL;
  }
  else
  {
    v8 = (unsigned int)v6;
    v9 = 357LL;
  }
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
    (const char *)v8);
LABEL_15:
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v7;
}
