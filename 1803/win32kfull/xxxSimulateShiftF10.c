/*
 * XREFs of xxxSimulateShiftF10 @ 0x1C01A5D68
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 * Callees:
 *     <none>
 */

__int64 xxxSimulateShiftF10()
{
  xxxKeyEvent(
    160LL,
    554LL,
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
    0LL,
    0LL,
    0LL,
    0,
    0,
    0LL);
  xxxKeyEvent(
    121LL,
    580LL,
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
    0LL,
    0LL,
    0LL,
    0,
    0,
    0LL);
  xxxKeyEvent(
    32889LL,
    580LL,
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
    0LL,
    0LL,
    0LL,
    0,
    0,
    0LL);
  return xxxKeyEvent(
           32928LL,
           554LL,
           (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
           0LL,
           0LL,
           0LL,
           0,
           0,
           0LL);
}
