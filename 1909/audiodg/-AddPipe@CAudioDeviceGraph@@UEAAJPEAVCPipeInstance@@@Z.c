/*
 * XREFs of ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000B8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140009D34 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x14000B7EC (-RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14000B9BC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?GetLatency@CPipeInstance@@QEBAJPEA_J@Z @ 0x14000BA90 (-GetLatency@CPipeInstance@@QEBAJPEA_J@Z.c)
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x14000BCF0 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028134 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::AddPipe(CAudioDeviceGraph *this, struct CPipeInstance *a2)
{
  char *v2; // rbx
  struct IUnknown *v5; // rdx
  unsigned int v6; // esi
  int v7; // eax
  int v8; // ebx
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char *v15; // [rsp+40h] [rbp+8h] BYREF
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF

  v2 = (char *)this + 248;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  v5 = (struct IUnknown *)*((_QWORD *)this + 16);
  v6 = 0;
  v15 = v2;
  if ( *((_QWORD *)a2 + 19) )
  {
    v8 = -2005139410;
    v10 = 1857LL;
    v9 = 2289827886LL;
    goto LABEL_13;
  }
  if ( v5 )
    ATL::AtlComPtrAssign((struct IUnknown **)a2 + 19, v5);
  v7 = CPipeInstance::AddConnectionsAndActivateAPOs(
         a2,
         *((struct Windows::Media::Devices::IAudioDeviceModulesManager **)this + 46));
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = (unsigned int)v7;
    v10 = 1858LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)v9,
      v13);
    v6 = v8;
    goto LABEL_14;
  }
  v11 = CAudioDeviceGraph::RegisterSpatialPipe((CPipeInstance **)this - 2, a2, 1);
  v8 = v11;
  if ( v11 < 0 )
  {
    v9 = (unsigned int)v11;
    v10 = 1859LL;
    goto LABEL_13;
  }
  CPipeInstance::GetLatency(a2, &v16);
  if ( *((_DWORD *)a2 + 28) == 2 && ++*((_QWORD *)this + 49) == 2LL && *((_DWORD *)this + 74) == 3 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 96LL))(*((_QWORD *)this + 17));
LABEL_14:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v15);
  return v6;
}
