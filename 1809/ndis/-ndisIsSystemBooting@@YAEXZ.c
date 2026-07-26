/*
 * XREFs of ?ndisIsSystemBooting@@YAEXZ @ 0x1C00C95D4
 * Callers:
 *     ndisInitialBindCompleted @ 0x1C001DC88 (ndisInitialBindCompleted.c)
 * Callees:
 *     <none>
 */

bool ndisIsSystemBooting(void)
{
  return !ndisBootFinishedTime.QuadPart || MEMORY[0xFFFFF78000000014] - ndisBootFinishedTime.QuadPart < 600000000;
}
