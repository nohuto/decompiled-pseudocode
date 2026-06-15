/*
 * XREFs of ?MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z @ 0x180060BE0
 * Callers:
 *     ServiceStart @ 0x180060AA0 (ServiceStart.c)
 * Callees:
 *     ?InitializeAudioThreadpool@@YAJXZ @ 0x180060D90 (-InitializeAudioThreadpool@@YAJXZ.c)
 *     McGenEventRegister @ 0x180060E68 (McGenEventRegister.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
unsigned int __fastcall MyServiceInitialization(
        struct SERVICE_STATUS_HANDLE__ *a1,
        DWORD a2,
        const unsigned __int16 **a3)
{
  unsigned int result; // eax
  unsigned __int64 v5; // rax
  DWORD Instance; // ebx
  unsigned int v7; // eax
  __int64 v8; // rdx
  int v9; // ebx
  DWORD ThreadId; // [rsp+58h] [rbp+10h] BYREF
  const unsigned __int16 **v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = a3;
  ThreadId = a2;
  result = CoInitializeEx(0LL, 0);
  if ( result <= 1 )
  {
    v5 = g_AudioService;
    *(_QWORD *)(g_AudioService + 8) = 0LL;
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)(v5 + 24) = 0LL;
    *(_QWORD *)(v5 + 40) = 0LL;
    *(_QWORD *)(v5 + 32) = 0LL;
    *(_QWORD *)(v5 + 48) = 0LL;
    *(_DWORD *)(v5 + 56) = 0;
    *(_DWORD *)(v5 + 60) = 0;
    *(_DWORD *)(v5 + 64) = 0;
    McGenEventRegister();
    Instance = CoCreateInstance(
                 &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                 0LL,
                 3u,
                 &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                 (LPVOID *)&g_DeviceEnumerator);
    if ( !Instance )
    {
      v11 = 0LL;
      if ( (***(int (__fastcall ****)(_QWORD, GUID *, const unsigned __int16 ***))&g_DeviceEnumerator)(
             *(_QWORD *)&g_DeviceEnumerator,
             &GUID_ed16e2a4_62d8_4db6_a543_25a1660f8ad8,
             &v11) >= 0 )
        (*((void (__fastcall **)(const unsigned __int16 **, _QWORD))*v11 + 11))(v11, Instance + 1);
      if ( v11 )
        (*((void (__fastcall **)(const unsigned __int16 **))*v11 + 2))(v11);
      g_WorkerEventPort = CreateIoCompletionPort((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0LL, 0);
      if ( g_WorkerEventPort || (Instance = GetLastError()) == 0 )
      {
        Instance = InitializeAudioThreadpool();
        if ( !Instance )
        {
          g_EventWorkerThreadHandle = CreateThread(0LL, 0LL, EventWorkerThread, 0LL, 0, &ThreadId);
          if ( !g_EventWorkerThreadHandle )
            Instance = GetLastError();
        }
      }
    }
    v7 = (**(__int64 (__fastcall ***)(unsigned __int64, _QWORD))g_AudioService)(g_AudioService, Instance);
    v8 = v7;
    if ( !v7 )
      v8 = (*(unsigned int (__fastcall **)(unsigned __int64, struct SERVICE_STATUS_HANDLE__ *))(*(_QWORD *)g_AudioService
                                                                                              + 8LL))(
             g_AudioService,
             a1);
    v9 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)g_AudioService + 16LL))(g_AudioService, v8);
    CoUninitialize();
    return v9;
  }
  return result;
}
