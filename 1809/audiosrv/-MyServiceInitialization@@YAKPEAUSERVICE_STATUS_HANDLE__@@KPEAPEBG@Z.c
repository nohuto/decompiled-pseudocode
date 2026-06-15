/*
 * XREFs of ?MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z @ 0x1800514CC
 * Callers:
 *     ServiceStart @ 0x180051BF8 (ServiceStart.c)
 * Callees:
 *     ?InitializeAudioThreadpool@@YAJXZ @ 0x180051628 (-InitializeAudioThreadpool@@YAJXZ.c)
 *     McGenEventRegister @ 0x180051700 (McGenEventRegister.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

unsigned int __fastcall MyServiceInitialization(
        struct SERVICE_STATUS_HANDLE__ *a1,
        DWORD a2,
        const unsigned __int16 **a3)
{
  unsigned int result; // eax
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  DWORD Instance; // ebx
  unsigned int v8; // eax
  __int64 v9; // rdx
  int v10; // ebx
  DWORD ThreadId; // [rsp+48h] [rbp+10h] BYREF

  ThreadId = a2;
  result = CoInitializeEx(0LL, 0);
  if ( result <= 1 )
  {
    v6 = g_AudioService;
    *(_QWORD *)(g_AudioService + 8) = 0LL;
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_QWORD *)(v6 + 24) = 0LL;
    *(_QWORD *)(v6 + 40) = 0LL;
    *(_QWORD *)(v6 + 32) = 0LL;
    *(_QWORD *)(v6 + 48) = 0LL;
    *(_DWORD *)(v6 + 56) = 0;
    *(_DWORD *)(v6 + 60) = 0;
    *(_DWORD *)(v6 + 64) = 0;
    McGenEventRegister(&AUDIO_EVENT_PROVIDER, v5, &AUDIO_EVENT_PROVIDER_Context, &AUDIO_EVENT_PROVIDER_Context);
    Instance = CoCreateInstance(
                 &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                 0LL,
                 3u,
                 &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                 (LPVOID *)&g_DeviceEnumerator);
    if ( !Instance )
    {
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
    v8 = (**(__int64 (__fastcall ***)(unsigned __int64, _QWORD))g_AudioService)(g_AudioService, Instance);
    v9 = v8;
    if ( !v8 )
      v9 = (*(unsigned int (__fastcall **)(unsigned __int64, struct SERVICE_STATUS_HANDLE__ *))(*(_QWORD *)g_AudioService
                                                                                              + 8LL))(
             g_AudioService,
             a1);
    v10 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)g_AudioService + 16LL))(g_AudioService, v9);
    CoUninitialize();
    return v10;
  }
  return result;
}
