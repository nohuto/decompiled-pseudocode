/*
 * XREFs of ?Now@EventTime@CMouseProcessor@@SA?AU12@XZ @ 0x1C003219C
 * Callers:
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C0032110 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     ?EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ @ 0x1C003254C (-EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER *__fastcall CMouseProcessor::EventTime::Now(LARGE_INTEGER *a1)
{
  LONGLONG v2; // rbx
  LARGE_INTEGER *result; // rax

  v2 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  a1[1] = KeQueryPerformanceCounter(0LL);
  result = a1;
  a1->QuadPart = v2;
  return result;
}
