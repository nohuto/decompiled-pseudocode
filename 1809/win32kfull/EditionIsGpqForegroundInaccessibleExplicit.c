/*
 * XREFs of EditionIsGpqForegroundInaccessibleExplicit @ 0x1C011B940
 * Callers:
 *     EditionKeyEventLLHook @ 0x1C00B5990 (EditionKeyEventLLHook.c)
 *     EditionHandleAltTabCancel @ 0x1C0121C90 (EditionHandleAltTabCancel.c)
 * Callees:
 *     IsForegroundShellFrameQueueAccessible @ 0x1C0006640 (IsForegroundShellFrameQueueAccessible.c)
 *     MSGLUA_GPQFOREGROUND @ 0x1C0006948 (MSGLUA_GPQFOREGROUND.c)
 */

__int64 __fastcall EditionIsGpqForegroundInaccessibleExplicit(int a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v4; // edi
  unsigned int v5; // ebx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  int v9; // [rsp+44h] [rbp+1Ch]

  v9 = HIDWORD(a3);
  v4 = 0;
  v5 = a3;
  if ( a1 )
  {
    if ( gpqForeground )
    {
      if ( !a4 && !IsForegroundShellFrameQueueAccessible(a2) )
      {
        v6 = *(_QWORD *)(gpqForeground + 428LL);
        if ( gbEnforceUIPI )
        {
          if ( v5 <= (unsigned int)v6 )
          {
            if ( v5 != (_DWORD)v6 || (v7 = HIDWORD(v6), v9 != (_DWORD)v7) && v9 != -1 && (_DWORD)v7 != -1 )
            {
              v4 = 1;
              MSGLUA_GPQFOREGROUND();
            }
          }
        }
      }
    }
  }
  return v4;
}
