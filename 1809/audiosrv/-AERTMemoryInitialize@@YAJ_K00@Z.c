/*
 * XREFs of ?AERTMemoryInitialize@@YAJ_K00@Z @ 0x180049028
 * Callers:
 *     DllMain @ 0x180063BBC (DllMain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AERTMemoryInitialize(__int64 a1, __int64 a2, void *a3)
{
  LPVOID Context; // [rsp+40h] [rbp+18h] BYREF

  Context = a3;
  if ( gMaxSize )
    return 2147943647LL;
  gMaxSize = 0x8000LL;
  gInitialSize = 4LL;
  gMinSize = 4LL;
  return !InitOnceExecuteOnce(&gRTHeapInitOnce, AERTMemoryInitOnce, 0LL, &Context) ? 0x8007000E : 0;
}
