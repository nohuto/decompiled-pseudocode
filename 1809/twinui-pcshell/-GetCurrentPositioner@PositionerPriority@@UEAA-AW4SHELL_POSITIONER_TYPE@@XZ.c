/*
 * XREFs of ?GetCurrentPositioner@PositionerPriority@@UEAA?AW4SHELL_POSITIONER_TYPE@@XZ @ 0x180057DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PositionerPriority::GetCurrentPositioner(RTL_SRWLOCK *a1)
{
  RTL_SRWLOCK *v1; // rdi
  __int64 v3; // rax
  unsigned int v4; // ebx

  v1 = a1 + 3;
  AcquireSRWLockShared(a1 + 3);
  v3 = 8LL;
  while ( !*((_BYTE *)&a1[3].Ptr + v3 + 7) )
  {
    if ( !--v3 )
    {
      v4 = 0;
      goto LABEL_6;
    }
  }
  v4 = v3 - 1;
LABEL_6:
  if ( v1 )
    ReleaseSRWLockShared(v1);
  return v4;
}
