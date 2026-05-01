/*
 * XREFs of ?CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@@Z @ 0x180100F60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18006F1FC (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?s_CreateInstance@CMonitorNotificationHelper@@SAJPEAUIImmersiveMonitorNotification@@AEBU_GUID@@PEAPEAX@Z @ 0x1800FBFB4 (-s_CreateInstance@CMonitorNotificationHelper@@SAJPEAUIImmersiveMonitorNotification@@AEBU_GUID@@P.c)
 *     ?_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180101DC0 (-_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?_RegisterForLauncherVisibilityNotifications@CImmersiveMode@@AEAAJXZ @ 0x180102104 (-_RegisterForLauncherVisibilityNotifications@CImmersiveMode@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CImmersiveMode::CompleteInitialization(
        CImmersiveMode *this,
        struct IFallbackWindow *a2,
        struct IImmersiveMonitorManager *a3)
{
  CImmersiveMode *v6; // r14
  struct _RTL_CRITICAL_SECTION *v7; // r15
  int v8; // r12d
  struct IFallbackWindow *v9; // rcx
  int v10; // ebx
  unsigned int v11; // edi
  __int64 v12; // rbx
  LSTATUS ValueW; // eax
  signed int v14; // ecx
  bool v15; // zf
  char v16; // al
  void *v18; // [rsp+40h] [rbp-30h] BYREF
  __int64 v19[3]; // [rsp+48h] [rbp-28h] BYREF
  int v20; // [rsp+60h] [rbp-10h]
  struct IFallbackWindow *pvData; // [rsp+B0h] [rbp+40h] BYREF
  DWORD pdwType; // [rsp+B8h] [rbp+48h] BYREF
  struct IImmersiveMonitor *pcbData; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v24; // [rsp+C8h] [rbp+58h] BYREF

  v19[1] = -2LL;
  v6 = (CImmersiveMode *)((char *)this - 88);
  v7 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 96) & -(__int64)(this != (CImmersiveMode *)88));
  v19[2] = (__int64)v7;
  v8 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v7, 1);
  v20 = v8;
  v9 = (struct IFallbackWindow *)*((_QWORD *)this + 32);
  if ( v9 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IFallbackWindow *))(*(_QWORD *)a2 + 8LL))(a2);
      v9 = (struct IFallbackWindow *)*((_QWORD *)this + 32);
    }
    pvData = v9;
    *((_QWORD *)this + 32) = a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pvData);
  }
  v19[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v19);
  v10 = (**(__int64 (__fastcall ***)(struct IImmersiveMonitorManager *, GUID *, __int64 *))a3)(
          a3,
          &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
          v19);
  if ( v10 >= 0 )
  {
    v18 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    v10 = CMonitorNotificationHelper::s_CreateInstance(
            (struct IImmersiveMonitorNotification *)(((unsigned __int64)this + 48) & -(__int64)(v6 != 0LL)),
            (const struct _GUID *)this + 3,
            &v18);
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, void *, char *))(*(_QWORD *)v19[0] + 24LL))(
              v19[0],
              v18,
              (char *)this + 272);
      if ( v10 >= 0 )
      {
        v10 = CImmersiveMode::_RegisterForLauncherVisibilityNotifications(v6);
        if ( v10 >= 0 )
        {
          v24 = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
          v10 = (*(__int64 (__fastcall **)(struct IImmersiveMonitorManager *, __int64 *))(*(_QWORD *)a3 + 112LL))(
                  a3,
                  &v24);
          if ( v10 >= 0 )
          {
            v10 = (*(__int64 (__fastcall **)(__int64, struct IFallbackWindow **))(*(_QWORD *)v24 + 24LL))(v24, &pvData);
            if ( v10 >= 0 )
            {
              v11 = 0;
              do
              {
                if ( v11 >= (unsigned int)pvData )
                  break;
                pcbData = 0LL;
                v12 = v24;
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pcbData);
                v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v12 + 32LL))(
                        v12,
                        v11,
                        &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                        &pcbData);
                if ( v10 >= 0 )
                {
                  v10 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, DWORD *))(*(_QWORD *)pcbData + 48LL))(
                          pcbData,
                          &pdwType);
                  if ( v10 >= 0 )
                  {
                    if ( pdwType )
                      CImmersiveMode::_RegisterDesktopVisibilitySource(v6, pcbData);
                  }
                }
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pcbData);
                ++v11;
              }
              while ( v10 >= 0 );
            }
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
        }
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    if ( v10 >= 0 )
    {
      *((_BYTE *)this + 144) = 1;
      pdwType = 0;
      LODWORD(pcbData) = 4;
      ValueW = RegGetValueW(
                 HKEY_LOCAL_MACHINE,
                 L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\DAMVisibility",
                 L"Enabled",
                 0x10000012u,
                 &pdwType,
                 &pvData,
                 (LPDWORD)&pcbData);
      LOWORD(v14) = 13;
      if ( ValueW )
      {
        if ( ValueW == 234 )
          ValueW = 13;
        v14 = ValueW;
        if ( ValueW <= 0 )
          goto LABEL_32;
      }
      else if ( pdwType == 4 )
      {
        if ( (unsigned int)pvData <= 1 )
        {
          v14 = 0;
          v15 = (_DWORD)pvData == 1;
LABEL_24:
          v16 = v15;
          goto LABEL_33;
        }
      }
      else if ( (_DWORD)pcbData == 4 && (unsigned __int16)((_WORD)pvData - 48) <= 1u )
      {
        v14 = 0;
        v15 = (_WORD)pvData == 49;
        goto LABEL_24;
      }
      v14 = (unsigned __int16)v14 | 0x80070000;
LABEL_32:
      v16 = (char)pvData;
LABEL_33:
      if ( v14 >= 0 )
        *((_BYTE *)this + 144) = v16;
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v19);
  if ( v8 >= 0 )
    LeaveCriticalSection(v7);
  return (unsigned int)v10;
}
