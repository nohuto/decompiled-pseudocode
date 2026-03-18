/*
 * XREFs of IsGpqForegroundAccessibleExplicit @ 0x1C0198290
 * Callers:
 *     EditionKeyEventLLHook @ 0x1C00D7DB0 (EditionKeyEventLLHook.c)
 *     EditionHandleAltTabCancel @ 0x1C0101500 (EditionHandleAltTabCancel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsGpqForegroundAccessibleExplicit(int a1, unsigned __int64 a2, int a3)
{
  unsigned int v3; // r9d
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx

  v3 = 0;
  if ( !a1 )
    return 1;
  if ( !gpqForeground )
    return 1;
  if ( a3 )
    return 1;
  v4 = *(_QWORD *)(gpqForeground + 428LL);
  if ( !gbEnforceUIPI )
    return 1;
  if ( (unsigned int)a2 > (unsigned int)v4 )
    return 1;
  if ( (_DWORD)a2 == (_DWORD)v4 )
  {
    v5 = HIDWORD(v4);
    v6 = HIDWORD(a2);
    if ( (_DWORD)v6 == (_DWORD)v5 || (_DWORD)v6 == -1 || (_DWORD)v5 == -1 )
      return 1;
  }
  return v3;
}
