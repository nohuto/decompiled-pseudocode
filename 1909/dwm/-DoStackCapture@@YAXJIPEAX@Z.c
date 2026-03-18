/*
 * XREFs of ?DoStackCapture@@YAXJIPEAX@Z @ 0x140008DB4
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1400017A0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x140008F1C (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140003000 (__security_check_cookie.c)
 *     memmove_0 @ 0x140004A73 (memmove_0.c)
 *     ?MilWerRegisterMemoryBlock@@YAXPEBXI@Z @ 0x140008FB4 (-MilWerRegisterMemoryBlock@@YAXPEBXI@Z.c)
 */

void __fastcall DoStackCapture(DWORD a1, DWORD a2, PVOID a3)
{
  volatile int v6; // ecx
  __int64 v7; // rdx
  LARGE_INTEGER *v8; // rbx
  DWORD CurrentThreadId; // eax
  USHORT v10; // ax
  PVOID *v11; // rdx
  PVOID *v12; // r8
  unsigned __int64 v13; // r8
  PVOID BackTrace[12]; // [rsp+20h] [rbp-88h] BYREF

  if ( !_InterlockedCompareExchange(&dword_140010C38, 1, 0) )
  {
    MilWerRegisterMemoryBlock(&g_StackCaptureFrames, 0x3000u);
    MilWerRegisterMemoryBlock((const void *)&g_nCurrentStackCaptureIndex, 4u);
  }
  do
  {
    v6 = g_nCurrentStackCaptureIndex;
    v7 = (unsigned __int8)(g_nCurrentStackCaptureIndex + 1);
  }
  while ( v6 != _InterlockedCompareExchange(&g_nCurrentStackCaptureIndex, v7, g_nCurrentStackCaptureIndex) );
  v8 = (LARGE_INTEGER *)((char *)&g_StackCaptureFrames + 48 * v7);
  v8->LowPart = a1;
  CurrentThreadId = GetCurrentThreadId();
  v8[1].LowPart = a2;
  v8->HighPart = CurrentThreadId;
  QueryPerformanceCounter(v8 + 2);
  v8[3].QuadPart = 0LL;
  v8[4].QuadPart = 0LL;
  v8[5].QuadPart = 0LL;
  v10 = RtlCaptureStackBackTrace(1u, 0xBu, BackTrace, 0LL);
  v11 = BackTrace;
  v12 = &BackTrace[v10];
  if ( BackTrace != v12 )
  {
    do
    {
      if ( *v11 == a3 )
        break;
      ++v11;
    }
    while ( v11 != v12 );
  }
  v13 = v12 - v11;
  if ( v13 > 3 )
  {
    v13 = 3LL;
LABEL_9:
    memmove_0(&v8[3], v11, 8 * v13);
    return;
  }
  if ( v13 )
    goto LABEL_9;
  memset(&v8[3], 224, 18);
}
