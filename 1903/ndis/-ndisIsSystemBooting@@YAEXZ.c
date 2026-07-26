/*
 * XREFs of ?ndisIsSystemBooting@@YAEXZ @ 0x1C010B600
 * Callers:
 *     ndisInitialBindCompleted @ 0x1C003F1C4 (ndisInitialBindCompleted.c)
 * Callees:
 *     <none>
 */

bool ndisIsSystemBooting(void)
{
  return !ndisBootFinishedTime.QuadPart || MEMORY[0xFFFFF78000000014] - ndisBootFinishedTime.QuadPart < 600000000;
}
