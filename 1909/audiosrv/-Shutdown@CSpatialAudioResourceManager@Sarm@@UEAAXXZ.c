/*
 * XREFs of ?Shutdown@CSpatialAudioResourceManager@Sarm@@UEAAXXZ @ 0x180121F30
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180042C04 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetNextValue@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@QEAAAEAVCStreamResource@Sarm@@AEAPEAU__POSITION@@@Z @ 0x18011FEB8 (-GetNextValue@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAudi.c)
 *     ?GetNextValue@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAAEAVCEndpointResourcePool@Sarm@@AEAPEAU__POSITION@@@Z @ 0x18011FF14 (-GetNextValue@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUI.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180121698 (-RemoveAtPos@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUIS.c)
 *     ?RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x1801217B0 (-RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z.c)
 *     ?Shutdown@CWorkFifo@@QEAAXXZ @ 0x180122140 (-Shutdown@CWorkFifo@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCExclusiveModeListener@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180122A60 (-reset@-$com_ptr_t@VCExclusiveModeListener@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall Sarm::CSpatialAudioResourceManager::Shutdown(Sarm::CSpatialAudioResourceManager *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rsi
  _QWORD *v3; // rbx
  unsigned int v4; // edx
  __int64 v5; // rcx
  struct Sarm::CStreamResource *NextValue; // rax
  unsigned int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  _QWORD *v11; // rbx
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 *v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  std::_Ref_count_base *v19; // rcx

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  wil::com_ptr_t<CExclusiveModeListener,wil::err_returncode_policy>::reset((char *)this + 576);
  CWorkFifo::Shutdown((Sarm::CSpatialAudioResourceManager *)((char *)this + 344));
  v3 = (_QWORD *)((char *)this + 232);
  if ( *((_QWORD *)this + 30) && (v4 = 0, *((_DWORD *)this + 62)) )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(*v3 + 8LL * v4);
      if ( v5 )
        break;
      if ( ++v4 >= *((_DWORD *)this + 62) )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v5 = 0LL;
  }
  NextValue = 0LL;
  *((_QWORD *)this + 38) = v5;
  if ( v5 )
    NextValue = (struct Sarm::CStreamResource *)ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::GetNextValue(
                                                  (__int64)this + 232,
                                                  (__int64 *)this + 38);
  while ( NextValue )
  {
    Sarm::CSpatialAudioResourceManager::RemoveStream(this, NextValue);
    if ( *((_QWORD *)this + 30) && (v7 = 0, *((_DWORD *)this + 62)) )
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(*v3 + 8LL * v7);
        if ( v8 )
          break;
        if ( ++v7 >= *((_DWORD *)this + 62) )
          goto LABEL_12;
      }
    }
    else
    {
LABEL_12:
      v8 = 0LL;
    }
    *((_QWORD *)this + 38) = v8;
    NextValue = 0LL;
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 104);
      if ( !v9 )
      {
        v9 = 0LL;
        v10 = (unsigned int)(*(_DWORD *)(v8 + 112) % *((_DWORD *)this + 62) + 1);
        do
        {
          if ( (unsigned int)v10 >= *((_DWORD *)this + 62) )
            break;
          if ( *(_QWORD *)(*v3 + 8 * v10) )
            v9 = *(_QWORD *)(*v3 + 8 * v10);
          v10 = (unsigned int)(v10 + 1);
        }
        while ( !v9 );
      }
      *((_QWORD *)this + 38) = v9;
      NextValue = (struct Sarm::CStreamResource *)(v8 + 8);
    }
  }
  v11 = (_QWORD *)((char *)this + 152);
  if ( *((_QWORD *)this + 20) && (v12 = 0, *((_DWORD *)this + 42)) )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(*v11 + 8LL * v12);
      if ( v13 )
        break;
      if ( ++v12 >= *((_DWORD *)this + 42) )
        goto LABEL_26;
    }
  }
  else
  {
LABEL_26:
    v13 = 0LL;
  }
  v14 = 0LL;
  *((_QWORD *)this + 28) = v13;
  if ( v13 )
    v14 = (__int64 *)ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::GetNextValue(
                       (__int64)this + 152,
                       (__int64 *)this + 28);
  while ( v14 )
  {
    if ( *v14 )
      ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::RemoveAtPos(
        (__int64)this + 152,
        *v14);
    if ( *((_QWORD *)this + 20) && (v15 = 0, *((_DWORD *)this + 42)) )
    {
      while ( 1 )
      {
        v16 = *(_QWORD *)(*v11 + 8LL * v15);
        if ( v16 )
          break;
        if ( ++v15 >= *((_DWORD *)this + 42) )
          goto LABEL_35;
      }
    }
    else
    {
LABEL_35:
      v16 = 0LL;
    }
    *((_QWORD *)this + 28) = v16;
    v14 = 0LL;
    if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 40);
      if ( !v17 )
      {
        v17 = 0LL;
        v18 = (unsigned int)(*(_DWORD *)(v16 + 48) % *((_DWORD *)this + 42) + 1);
        do
        {
          if ( (unsigned int)v18 >= *((_DWORD *)this + 42) )
            break;
          if ( *(_QWORD *)(*v11 + 8 * v18) )
            v17 = *(_QWORD *)(*v11 + 8 * v18);
          v18 = (unsigned int)(v18 + 1);
        }
        while ( !v17 );
      }
      *((_QWORD *)this + 28) = v17;
      v14 = (__int64 *)(v16 + 8);
    }
  }
  v19 = qword_1801B7860;
  Sarm::CEndpointResourcePool::s_sharedPool = 0LL;
  qword_1801B7860 = 0LL;
  if ( v19 )
    std::_Ref_count_base::_Decref(v19);
  *((_BYTE *)this + 144) = 0;
  if ( v1 )
    LeaveCriticalSection(v1);
}
