/*
 * XREFs of RemoveThreadSwitchWindowInfo @ 0x1C00F79B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z @ 0x1C01BB73C (-SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z.c)
 */

struct tagSwitchWndInfo *__fastcall RemoveThreadSwitchWindowInfo(__int64 a1)
{
  struct tagSwitchWndInfo *result; // rax
  struct tagSwitchWndInfo **v2; // rbx
  struct tagSwitchWndInfo *v4; // [rsp+38h] [rbp+10h] BYREF

  result = gpswiFirst;
  v2 = &gpswiFirst;
  while ( result )
  {
    v4 = result;
    if ( *((_QWORD *)result + 1) == a1 )
    {
      *v2 = *(struct tagSwitchWndInfo **)result;
      SwitchWndCleanup(&v4);
      result = *v2;
    }
    if ( !result )
      break;
    v2 = (struct tagSwitchWndInfo **)result;
    result = *(struct tagSwitchWndInfo **)result;
  }
  return result;
}
