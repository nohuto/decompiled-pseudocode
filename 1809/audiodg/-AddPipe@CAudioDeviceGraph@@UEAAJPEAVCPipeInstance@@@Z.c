/*
 * XREFs of ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140009560
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLatency@CPipeInstance@@QEBAJPEA_J@Z @ 0x140009760 (-GetLatency@CPipeInstance@@QEBAJPEA_J@Z.c)
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x140009910 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@.c)
 *     ?RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x140014E50 (-RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14002FDF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::AddPipe(CAudioDeviceGraph *this, struct CPipeInstance *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  __int64 v5; // rsi
  _QWORD *v6; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  v5 = *((_QWORD *)this + 16);
  v6 = (_QWORD *)((char *)a2 + 144);
  if ( *((_QWORD *)a2 + 18) )
  {
    v8 = -2005139410;
    v12 = 1857LL;
    v11 = 2289827886LL;
  }
  else
  {
    if ( v5 && a2 != (struct CPipeInstance *)-144LL )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*((_QWORD *)this + 16));
      if ( *v6 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 16LL))(*v6);
      *v6 = v5;
    }
    v7 = CPipeInstance::AddConnectionsAndActivateAPOs(
           a2,
           *((struct Windows::Media::Devices::IAudioDeviceModulesManager **)this + 46));
    v8 = v7;
    if ( v7 < 0 )
    {
      v11 = (unsigned int)v7;
      v12 = 1858LL;
    }
    else
    {
      v9 = CAudioDeviceGraph::RegisterSpatialPipe((CAudioDeviceGraph *)((char *)this - 16), a2, 1);
      v8 = v9;
      if ( v9 >= 0 )
      {
        CPipeInstance::GetLatency(a2, &v15);
        v8 = 0;
        goto LABEL_10;
      }
      v11 = (unsigned int)v9;
      v12 = 1859LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
    (const char *)v11,
    v13);
LABEL_10:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v8;
}
