/*
 * XREFs of ?AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z @ 0x14000E870
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000BCB4 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?GetCpuManager@@YAJPEAPEAVCpuManager@@@Z @ 0x14002CC5C (-GetCpuManager@@YAJPEAPEAVCpuManager@@@Z.c)
 *     ?GetStartPosition@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x14002CD98 (-GetStartPosition@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CE.c)
 */

__int64 __fastcall GraphStreamingResourceManager::AddToCpuManager(struct CpuManager **this, __int64 a2)
{
  int CpuManager; // edi
  _QWORD *v6; // r15
  __int64 StartPosition; // rbx
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rdx
  struct CpuManager *v11; // rax
  _QWORD *v12; // r14
  __int64 v13; // rbx
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rdx
  _QWORD *v17; // r14
  __int64 v18; // rbx
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v23; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)(this + 2);
  v23 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( a2 >= (unsigned int)dword_14008628C )
    goto LABEL_2;
  v6 = this + 34;
  CpuManager = GetCpuManager(this + 34);
  if ( CpuManager >= 0 )
  {
    StartPosition = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetStartPosition(this + 7);
    if ( StartPosition )
    {
      while ( 1 )
      {
        v8 = StartPosition;
        v9 = *(_QWORD *)(StartPosition + 32);
        if ( !v9 )
        {
          v10 = (unsigned int)(*(_DWORD *)(StartPosition + 40) % *((_DWORD *)this + 18) + 1);
          do
          {
            if ( (unsigned int)v10 >= *((_DWORD *)this + 18) )
              break;
            v11 = this[7];
            if ( *((_QWORD *)v11 + v10) )
              v9 = *((_QWORD *)v11 + v10);
            v10 = (unsigned int)(v10 + 1);
          }
          while ( !v9 );
        }
        StartPosition = v9;
        CpuManager = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v6 + 32LL))(
                       *v6,
                       *(_QWORD *)(v8 + 16),
                       v8 + 24);
        if ( CpuManager < 0 )
          break;
        if ( !StartPosition )
          goto LABEL_16;
      }
    }
    else
    {
LABEL_16:
      v12 = this + 16;
      v13 = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetStartPosition(this + 16);
      if ( v13 )
      {
        while ( 1 )
        {
          v14 = v13;
          v15 = *(_QWORD *)(v13 + 32);
          if ( !v15 )
          {
            v16 = (unsigned int)(*(_DWORD *)(v13 + 40) % *((_DWORD *)this + 36) + 1);
            do
            {
              if ( (unsigned int)v16 >= *((_DWORD *)this + 36) )
                break;
              if ( *(_QWORD *)(*v12 + 8 * v16) )
                v15 = *(_QWORD *)(*v12 + 8 * v16);
              v16 = (unsigned int)(v16 + 1);
            }
            while ( !v15 );
          }
          v13 = v15;
          CpuManager = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v6 + 48LL))(
                         *v6,
                         *(_QWORD *)(v14 + 16),
                         v14 + 24);
          if ( CpuManager < 0 )
            break;
          if ( !v13 )
            goto LABEL_25;
        }
      }
      else
      {
LABEL_25:
        v17 = this + 25;
        v18 = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetStartPosition(this + 25);
        if ( !v18 )
        {
LABEL_2:
          CpuManager = 0;
          goto LABEL_3;
        }
        while ( 1 )
        {
          v19 = v18;
          v20 = *(_QWORD *)(v18 + 32);
          if ( !v20 )
          {
            v21 = (unsigned int)(*(_DWORD *)(v18 + 40) % *((_DWORD *)this + 54) + 1);
            do
            {
              if ( (unsigned int)v21 >= *((_DWORD *)this + 54) )
                break;
              if ( *(_QWORD *)(*v17 + 8 * v21) )
                v20 = *(_QWORD *)(*v17 + 8 * v21);
              v21 = (unsigned int)(v21 + 1);
            }
            while ( !v20 );
          }
          v18 = v20;
          CpuManager = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v6 + 64LL))(
                         *v6,
                         *(_QWORD *)(v19 + 16),
                         v19 + 24);
          if ( CpuManager < 0 )
            break;
          if ( !v18 )
            goto LABEL_2;
        }
      }
    }
    (*((void (__fastcall **)(char *))*(this - 1) + 10))((char *)this - 8);
  }
LABEL_3:
  if ( v23 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)CpuManager;
}
