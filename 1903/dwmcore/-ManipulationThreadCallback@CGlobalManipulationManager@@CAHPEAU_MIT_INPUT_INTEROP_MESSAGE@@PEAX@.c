/*
 * XREFs of ?ManipulationThreadCallback@CGlobalManipulationManager@@CAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z @ 0x18001FB50
 * Callers:
 *     <none>
 * Callees:
 *     ?s_HoverHittestRequest@CGlobalInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z @ 0x18001FBD8 (-s_HoverHittestRequest@CGlobalInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x18008699C (--0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180086A34 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?ProcessManipulationThreadCallbackInput@CGlobalManipulationManager@@CAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x1802399FC (-ProcessManipulationThreadCallbackInput@CGlobalManipulationManager@@CAHPEAUtagMANIPULATION_INPUT.c)
 */

__int64 __fastcall CGlobalManipulationManager::ManipulationThreadCallback(
        struct _MIT_INPUT_INTEROP_MESSAGE *a1,
        CGlobalManipulationManager *a2)
{
  unsigned int v3; // ebx
  unsigned int v5; // eax
  _BYTE v7[48]; // [rsp+20h] [rbp-48h] BYREF

  v3 = 0;
  if ( !*(_DWORD *)a1 )
  {
    InputTraceLogging::PerfRegion::PerfRegion(
      (InputTraceLogging::PerfRegion *)v7,
      L"GT:MIT_INPUT_INTEROP_MTCALLBACK",
      0LL);
    v5 = CGlobalManipulationManager::ProcessManipulationThreadCallbackInput(
           (struct _MIT_INPUT_INTEROP_MESSAGE *)((char *)a1 + 8),
           a2);
    goto LABEL_4;
  }
  if ( *(_DWORD *)a1 == 1 )
  {
    InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v7, L"GT:MIT_INPUT_INTEROP_HOVER", 0LL);
    v5 = CGlobalInputManager::s_HoverHittestRequest((struct _MIT_INPUT_INTEROP_MESSAGE *)((char *)a1 + 8));
LABEL_4:
    v3 = v5;
    InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v7);
  }
  return v3;
}
