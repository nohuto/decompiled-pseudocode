/*
 * XREFs of ?DoStackCapture@@YAXIJI@Z @ 0x1800B127C
 * Callers:
 *     ?DoStackCapture@@YAXJI@Z @ 0x18004E038 (-DoStackCapture@@YAXJI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXIJKI@Z @ 0x1800B13E0 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXIJKI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DoStackCapture(int a1, int a2, int a3)
{
  HMODULE ModuleHandleW; // rax
  FARPROC ProcAddress; // rax
  void (__fastcall *v8)(volatile int *, __int64); // rbx
  volatile int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rbx
  DWORD CurrentThreadId; // eax
  PVOID *v13; // rbx

  if ( !_InterlockedCompareExchange(&dword_1800D5190, 1, 0) )
  {
    ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
    if ( ModuleHandleW )
    {
      ProcAddress = GetProcAddress(ModuleHandleW, "WerRegisterMemoryBlock");
      v8 = (void (__fastcall *)(volatile int *, __int64))ProcAddress;
      if ( ProcAddress )
      {
        ((void (__fastcall *)(_DWORD *, __int64))ProcAddress)(g_StackCaptureFrames, 10240LL);
        v8(&g_nCurrentStackCaptureIndex, 4LL);
      }
    }
  }
  do
  {
    v9 = g_nCurrentStackCaptureIndex;
    v10 = (unsigned __int8)(g_nCurrentStackCaptureIndex + 1);
  }
  while ( v9 != _InterlockedCompareExchange(&g_nCurrentStackCaptureIndex, v10, g_nCurrentStackCaptureIndex) );
  v11 = 5 * v10;
  g_StackCaptureFrames[10 * v10] = a2;
  CurrentThreadId = GetCurrentThreadId();
  g_StackCaptureFrames[2 * v11 + 2] = a3;
  g_StackCaptureFrames[2 * v11 + 1] = CurrentThreadId;
  v13 = (PVOID *)&g_StackCaptureFrames[2 * v11];
  v13[2] = 0LL;
  v13[3] = 0LL;
  v13[4] = 0LL;
  if ( !RtlCaptureStackBackTrace(a1 + 1, 3u, v13 + 2, 0LL) )
    memset(v13 + 2, 224, 18);
}
