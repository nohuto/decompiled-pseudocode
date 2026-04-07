/*
 * XREFs of ?DoStackCapture@@YAXJIPEAX@Z @ 0x1800B72EC
 * Callers:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18004F8A4 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x1800B74C4 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18004FAFA (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DoStackCapture(int a1, int a2, PVOID a3)
{
  HMODULE ModuleHandleW; // rax
  FARPROC ProcAddress; // rax
  void (__fastcall *v8)(volatile int *, __int64); // rbx
  volatile int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rbx
  DWORD CurrentThreadId; // eax
  _QWORD *v13; // rbx
  USHORT v14; // ax
  PVOID *v15; // rdx
  PVOID *v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
  PVOID BackTrace[12]; // [rsp+20h] [rbp-88h] BYREF

  if ( !_InterlockedCompareExchange(&dword_1800DC1A0, 1, 0) )
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
  g_StackCaptureFrames[10 * v10] = a1;
  CurrentThreadId = GetCurrentThreadId();
  g_StackCaptureFrames[2 * v11 + 2] = a2;
  g_StackCaptureFrames[2 * v11 + 1] = CurrentThreadId;
  v13 = &g_StackCaptureFrames[2 * v11];
  v13[2] = 0LL;
  v13[3] = 0LL;
  v13[4] = 0LL;
  v14 = RtlCaptureStackBackTrace(1u, 0xBu, BackTrace, 0LL);
  v15 = BackTrace;
  v16 = &BackTrace[v14];
  if ( BackTrace != v16 )
  {
    do
    {
      if ( *v15 == a3 )
        break;
      ++v15;
    }
    while ( v15 != v16 );
  }
  v17 = 3LL;
  v18 = v16 - v15;
  if ( v18 < 3 )
    v17 = v18;
  if ( v17 )
    memcpy_0(v13 + 2, v15, 8 * v17);
  else
    memset(v13 + 2, 224, 18);
}
