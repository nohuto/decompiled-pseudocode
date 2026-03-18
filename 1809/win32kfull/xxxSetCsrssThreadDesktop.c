/*
 * XREFs of xxxSetCsrssThreadDesktop @ 0x1C00BC5C0
 * Callers:
 *     xxxQueryInformationThread @ 0x1C00BB038 (xxxQueryInformationThread.c)
 *     xxxSetInformationThread @ 0x1C00BB740 (xxxSetInformationThread.c)
 *     xxxHardErrorControl @ 0x1C02273E0 (xxxHardErrorControl.c)
 * Callees:
 *     xxxDispatchMessage @ 0x1C002DDC0 (xxxDispatchMessage.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     xxxSetThreadDesktop @ 0x1C00B0F18 (xxxSetThreadDesktop.c)
 *     CloseProtectedHandle @ 0x1C00BB984 (CloseProtectedHandle.c)
 *     xxxInternalGetMessage @ 0x1C00BC3F0 (xxxInternalGetMessage.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

NTSTATUS __fastcall xxxSetCsrssThreadDesktop(_DWORD *Object, PVOID *a2)
{
  void *v4; // rcx
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  _DWORD *v9; // rax
  NTSTATUS result; // eax
  ULONG v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  _BYTE v16[48]; // [rsp+40h] [rbp-38h] BYREF

  if ( (Object[12] & 8) != 0 )
    return -1073741823;
  v4 = *(void **)(gptiCurrent + 456LL);
  *a2 = v4;
  if ( !v4 || (result = ObReferenceObjectByPointer(v4, 0x2000000u, (POBJECT_TYPE)ExDesktopObjectType, 0), result >= 0) )
  {
    v5 = ObOpenObjectByPointer(Object, 0, 0LL, 0x1F0003u, 0LL, 0, a2 + 1);
    v8 = v5;
    if ( v5 < 0 )
    {
      v11 = RtlNtStatusToDosError(v5);
      UserSetLastError(v11, v12, v13, v14);
      if ( *a2 )
        ObfDereferenceObject(*a2);
    }
    else
    {
      v9 = *(_DWORD **)(gptiCurrent + 456LL);
      if ( Object != v9 )
      {
        if ( v9 )
        {
          memset(v16, 0, sizeof(v16));
          while ( (unsigned int)xxxInternalGetMessage((__int64)v16, 0LL, 0, 0, 3, 0) )
            xxxDispatchMessage((__int64)v16, v15);
        }
        v8 = xxxSetThreadDesktop(0LL, (__int64)Object, v6, v7);
        if ( v8 < 0 )
        {
          if ( *a2 )
            ObfDereferenceObject(*a2);
          CloseProtectedHandle(a2[1], 0);
        }
      }
    }
    return v8;
  }
  return result;
}
