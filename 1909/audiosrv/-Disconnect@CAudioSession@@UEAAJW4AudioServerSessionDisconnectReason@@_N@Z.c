/*
 * XREFs of ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800CD2B0
 * Callers:
 *     ?Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800CD560 (-Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800CD600 (-Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180028760 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ @ 0x18004E910 (-PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800C8BA0 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ?Add@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioStream@@@Z @ 0x1800CCBF4 (-Add@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAV.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x1800CD65C (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 *     ?NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z @ 0x1800CFA6C (-NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x1800D0D60 (-RemoveAt@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAAX_K0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSession::Disconnect(__int64 a1, int a2, char a3)
{
  int v3; // ebx
  __int64 v4; // rsi
  __int64 v6; // r15
  unsigned int v7; // r12d
  int v8; // ecx
  enum AudioSessionDisconnectReason v9; // r14d
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  ATL::CAtlException *v14; // rbx
  _QWORD v15[2]; // [rsp+20h] [rbp-78h] BYREF
  ATL::CAtlException *v16; // [rsp+30h] [rbp-68h] BYREF
  ATL::CAtlException *v17; // [rsp+38h] [rbp-60h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-58h] BYREF
  char v19; // [rsp+48h] [rbp-50h]
  LPCRITICAL_SECTION v20; // [rsp+50h] [rbp-48h] BYREF
  __int64 v21; // [rsp+58h] [rbp-40h]
  int v22; // [rsp+60h] [rbp-38h]
  int v26; // [rsp+B8h] [rbp+20h]

  v15[1] = -2LL;
  v3 = a2;
  v4 = a1;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  v19 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( v3 != 5 )
    goto LABEL_9;
  if ( !*(_QWORD *)(v4 + 88)
    || *(_BYTE *)(*(_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                               (_QWORD *)(v4 + 80),
                               0LL)
                + 44LL)
    || !*(_QWORD *)(v4 + 88) )
  {
    if ( v19 )
      LeaveCriticalSection(lpCriticalSection);
    return 0LL;
  }
  while ( 2 )
  {
    v15[0] = *(_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                          (_QWORD *)(v4 + 80),
                          0LL);
    try
    {
      ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::RemoveAt(v4 + 80, 0LL);
    }
    catch ( ATL::CAtlException *v16 )
    {
      v14 = v16;
      if ( *(_DWORD *)v16 == -1073741571 )
        _o__resetstkoflw();
      v26 = *(_DWORD *)v14;
      v4 = a1;
      v3 = a2;
      if ( v26 >= 0 )
        break;
LABEL_9:
      if ( *(_QWORD *)(v4 + 88) )
        continue;
      *(_DWORD *)(v4 + 256) = 0;
      if ( v19 )
        LeaveCriticalSection(lpCriticalSection);
      v6 = v4 - 16;
      v7 = CAudioSession::DisconnectStreamList((CAudioSession *)(v4 - 16));
      v8 = *(_DWORD *)(v4 + 392);
      v9 = DisconnectReasonServerShutdown;
      if ( v8 == 1 )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 136LL))(v4 - 16, 0LL);
      }
      else if ( !v8 )
      {
        CAudioSession::PostStateCheckExpirationWork((CAudioSession *)(v4 - 16));
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v4 - 16);
      v20 = (LPCRITICAL_SECTION)&CAudioSessionDisconnected::`vftable';
      v21 = v4 - 16;
      v22 = v3;
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
        (LPCRITICAL_SECTION)(v4 + 480),
        (void (__fastcall ***)(_QWORD, __int64 *))&v20);
      if ( a3 )
      {
        if ( v3 )
        {
          v10 = v3 - 1;
          if ( v10 )
          {
            v11 = v10 - 1;
            if ( v11 )
            {
              v12 = v11 - 1;
              if ( v12 )
              {
                v13 = v12 - 1;
                if ( v13 )
                {
                  if ( v13 == 1 )
                    v9 = DisconnectReasonExclusiveModeOverride;
                }
                else
                {
                  v9 = DisconnectReasonSessionDisconnected;
                }
              }
              else
              {
                v9 = DisconnectReasonSessionLogoff;
              }
            }
            else
            {
              v9 = DisconnectReasonFormatChanged;
            }
          }
        }
        else
        {
          v9 = DisconnectReasonDeviceRemoval;
        }
        CAudioSession::NotifyClientOfDisconnection((CAudioSession *)(v4 - 16), v9);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v4 - 16);
      return v7;
    }
    break;
  }
  v20 = (LPCRITICAL_SECTION)(v4 + 112);
  LOBYTE(v21) = 0;
  ATL::CCritSecLock::Lock(&v20);
  try
  {
    ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add((_QWORD *)(v4 + 152), v15);
  }
  catch ( ATL::CAtlException *v17 )
  {
    if ( *(_DWORD *)v17 == -1073741571 )
      _o__resetstkoflw();
    v4 = a1;
    v3 = a2;
  }
  if ( (_BYTE)v21 )
  {
    LeaveCriticalSection(v20);
    LOBYTE(v21) = 0;
  }
  --*(_DWORD *)(v4 + 72);
  goto LABEL_9;
}
