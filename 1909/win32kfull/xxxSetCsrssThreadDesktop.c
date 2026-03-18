/*
 * XREFs of xxxSetCsrssThreadDesktop @ 0x1C000D2E0
 * Callers:
 *     xxxQueryInformationThread @ 0x1C000C908 (xxxQueryInformationThread.c)
 *     xxxSetInformationThread @ 0x1C000D040 (xxxSetInformationThread.c)
 *     xxxHardErrorControl @ 0x1C023EA4C (xxxHardErrorControl.c)
 * Callees:
 *     CloseProtectedHandle @ 0x1C000D284 (CloseProtectedHandle.c)
 *     xxxSetThreadDesktop @ 0x1C000D458 (xxxSetThreadDesktop.c)
 *     xxxInternalGetMessage @ 0x1C000DC44 (xxxInternalGetMessage.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     xxxDispatchMessage @ 0x1C002ADC8 (xxxDispatchMessage.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

NTSTATUS __fastcall xxxSetCsrssThreadDesktop(_DWORD *Object, PVOID *a2)
{
  void *v4; // rcx
  int v5; // eax
  int v6; // ebx
  _DWORD *v7; // rax
  NTSTATUS result; // eax
  ULONG v9; // eax
  _BYTE v10[48]; // [rsp+40h] [rbp-38h] BYREF

  if ( (Object[12] & 8) != 0 )
    return -1073741823;
  v4 = *(void **)(gptiCurrent + 448LL);
  *a2 = v4;
  if ( !v4 || (result = ObReferenceObjectByPointer(v4, 0x2000000u, (POBJECT_TYPE)ExDesktopObjectType, 0), result >= 0) )
  {
    v5 = ObOpenObjectByPointer(Object, 0, 0LL, 0x1F0003u, 0LL, 0, a2 + 1);
    v6 = v5;
    if ( v5 < 0 )
    {
      v9 = RtlNtStatusToDosError(v5);
      UserSetLastError(v9);
      if ( *a2 )
        ObfDereferenceObject(*a2);
    }
    else
    {
      v7 = *(_DWORD **)(gptiCurrent + 448LL);
      if ( Object != v7 )
      {
        if ( v7 )
        {
          memset(v10, 0, sizeof(v10));
          while ( (unsigned int)xxxInternalGetMessage((unsigned int)v10, 0, 0, 0, 3, 0) )
            xxxDispatchMessage(v10);
        }
        v6 = xxxSetThreadDesktop(0LL);
        if ( v6 < 0 )
        {
          if ( *a2 )
            ObfDereferenceObject(*a2);
          CloseProtectedHandle(a2[1], 0);
        }
      }
    }
    return v6;
  }
  return result;
}
