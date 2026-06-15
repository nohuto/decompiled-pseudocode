/*
 * XREFs of ?OnStreamDisconnectedFromSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@@Z @ 0x180045650
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004E2A0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800B3794 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180115368 (-RemoveAtPos@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUIS.c)
 *     ?RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x180115480 (-RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z.c)
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x18011566C (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?GetAvailableDynamicObjectCount@CEndpointResourcePool@Sarm@@QEBAJAEAI@Z @ 0x1801171D8 (-GetAvailableDynamicObjectCount@CEndpointResourcePool@Sarm@@QEBAJAEAI@Z.c)
 */

void __fastcall Sarm::CSpatialAudioResourceManager::OnStreamDisconnectedFromSaDevice(
        Sarm::CSpatialAudioResourceManager *this,
        struct IAudioStreamInfo *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // r14
  __int64 v6; // r9
  const GUID *v7; // r8
  const char *v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdi
  int v11; // r15d
  __int128 v12; // xmm0
  char v13; // r14
  std::_Ref_count_base *v14; // rcx
  int v15; // eax
  unsigned int v16; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  int v18; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+44h] [rbp-BCh] BYREF
  int v20; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v21; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+68h] [rbp-98h] BYREF
  __int64 v24; // [rsp+70h] [rbp-90h] BYREF
  __int64 (__fastcall **v25)(); // [rsp+78h] [rbp-88h] BYREF
  __int128 v26; // [rsp+80h] [rbp-80h]
  __int64 (__fastcall ***v27)(); // [rsp+B0h] [rbp-50h]
  __int128 v28; // [rsp+B8h] [rbp-48h] BYREF
  void *v29; // [rsp+D0h] [rbp-30h] BYREF
  int v30; // [rsp+D8h] [rbp-28h]
  int v31; // [rsp+DCh] [rbp-24h]
  void *v32; // [rsp+E0h] [rbp-20h]
  int v33; // [rsp+E8h] [rbp-18h]
  int v34; // [rsp+ECh] [rbp-14h]
  const char *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]
  int *v37; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+108h] [rbp+8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+10h] BYREF
  __int64 *v40; // [rsp+130h] [rbp+30h]
  __int64 v41; // [rsp+138h] [rbp+38h]
  __int128 *v42; // [rsp+140h] [rbp+40h]
  __int64 v43; // [rsp+148h] [rbp+48h]
  int *v44; // [rsp+150h] [rbp+50h]
  __int64 v45; // [rsp+158h] [rbp+58h]
  int *v46; // [rsp+160h] [rbp+60h]
  __int64 v47; // [rsp+168h] [rbp+68h]
  int *v48; // [rsp+170h] [rbp+70h]
  __int64 v49; // [rsp+178h] [rbp+78h]
  __int64 *v50; // [rsp+180h] [rbp+80h]
  __int64 v51; // [rsp+188h] [rbp+88h]
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v17 = 413;
  if ( (unsigned int)dword_1801B1350 > 5 )
  {
    v36 = 69LL;
    v35 = "Sarm::CSpatialAudioResourceManager::OnStreamDisconnectedFromSaDevice";
    v37 = &v17;
    v38 = 4LL;
    DWORD1(v21) = 5;
    v29 = off_1801B1358;
    LODWORD(v21) = ((unsigned int)&unk_18017552A - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    *((_QWORD *)&v21 + 1) = 0LL;
    v30 = *(unsigned __int16 *)off_1801B1358;
    v32 = &unk_180175535;
    v31 = 2;
    v33 = 21;
    v34 = 1;
    EtwEventWriteTransfer(qword_1801B1370, &v21, 0LL, 0LL, 4, &v29);
  }
  v22 = 0LL;
  v5 = 0LL;
  if ( a2 )
  {
    (**(void (__fastcall ***)(struct IAudioStreamInfo *, GUID *, __int64 *))a2)(
      a2,
      &GUID_dafb0152_6a78_488a_b685_6dd5845a8db9,
      &v22);
    if ( v22 )
    {
      v6 = *((_QWORD *)this + 29);
      if ( v6 )
      {
        v9 = *(_QWORD *)(v6 + 8LL * ((unsigned int)v22 % *((_DWORD *)this + 62)));
        if ( v9 )
        {
          while ( *(_DWORD *)(v9 + 112) != (_DWORD)v22 || *(_QWORD *)v9 != v22 )
          {
            v9 = *(_QWORD *)(v9 + 104);
            if ( !v9 )
              goto LABEL_6;
          }
          v5 = v9 + 8;
        }
      }
LABEL_6:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      if ( v5 )
      {
        v10 = *(_QWORD *)(v5 + 8);
        if ( !v10 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x1A7,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
            v8);
          __debugbreak();
        }
        v11 = *(_DWORD *)(v5 + 52);
        if ( (unsigned int)dword_1801B1350 > 4 )
        {
          v12 = *(_OWORD *)(v5 + 16);
          v23 = *(_QWORD *)(v5 + 40);
          v40 = &v23;
          v42 = &v28;
          v18 = *(_DWORD *)(v5 + 84);
          v44 = &v18;
          v19 = *(_DWORD *)(v5 + 80);
          v46 = &v19;
          v48 = &v20;
          v50 = &v24;
          v41 = 8LL;
          v28 = v12;
          v43 = 16LL;
          v45 = 4LL;
          v47 = 4LL;
          v20 = v11;
          v49 = 4LL;
          v24 = v10;
          v51 = 8LL;
          TlgWrite((TraceLoggingHProvider)&dword_1801B1350, &unk_1801751F8, v7, (LPCGUID)v8, 8u, &pData);
        }
        Sarm::CSpatialAudioResourceManager::RemoveStream(this, (struct Sarm::CStreamResource *)v5);
        v13 = *(_BYTE *)(v10 + 8);
        v16 = 0;
        Sarm::CEndpointResourcePool::GetAvailableDynamicObjectCount((Sarm::CEndpointResourcePool *)v10, &v16);
        if ( *(_DWORD *)(v10 + 12) )
          goto LABEL_34;
        if ( *(_QWORD *)v10 )
          ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::RemoveAtPos((char *)this + 152);
        if ( *((_QWORD *)this + 20) )
        {
LABEL_34:
          if ( *((_QWORD *)this + 30) )
          {
            if ( v13 )
            {
              if ( v16 )
              {
                *(_QWORD *)&v21 = this;
                v25 = off_180158A28;
                DWORD2(v21) = v11;
                v27 = &v25;
                v26 = v21;
                v15 = CWorkFifo::ScheduleWorkItem((Sarm::CSpatialAudioResourceManager *)((char *)this + 344));
                if ( v15 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x1D0,
                    (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
                    (const char *)(unsigned int)v15);
              }
            }
          }
        }
        else
        {
          v14 = qword_1801B37F0;
          Sarm::CEndpointResourcePool::s_sharedPool = 0LL;
          qword_1801B37F0 = 0LL;
          if ( v14 )
            std::_Ref_count_base::_Decref(v14);
        }
      }
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
