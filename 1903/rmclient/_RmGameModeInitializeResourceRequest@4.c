/*
 * XREFs of _RmGameModeInitializeResourceRequest@4 @ 0x1000F8E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RmGameModeInitializeResourceRequest(_DWORD *a1)
{
  int result; // eax

  result = 0;
  memset(a1, 0, 0x28u);
  *a1 = 6;
  a1[4] = 10;
  a1[5] = 50;
  a1[6] = 30;
  return result;
}
