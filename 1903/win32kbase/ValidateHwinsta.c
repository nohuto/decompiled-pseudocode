/*
 * XREFs of ValidateHwinsta @ 0x1C009BEC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 */

__int64 __fastcall ValidateHwinsta(void *a1, KPROCESSOR_MODE a2, ACCESS_MASK a3, PVOID *a4)
{
  int v5; // eax
  _DWORD *v6; // rcx
  unsigned int v7; // ebx
  ULONG v9; // eax
  __int64 v10; // rdx
  ULONG v11; // eax
  __int64 v12; // rdx
  _DWORD *v13; // [rsp+58h] [rbp+20h] BYREF

  v5 = ObReferenceObjectByHandle(a1, a3, ExWindowStationObjectType, a2, (PVOID *)&v13, 0LL);
  v6 = v13;
  v7 = v5;
  *a4 = v13;
  if ( v5 < 0 )
  {
    v9 = RtlNtStatusToDosError(v5);
    UserSetLastError(v9, v10);
  }
  else if ( *v6 != gSessionId )
  {
    v7 = -1073741816;
    v11 = RtlNtStatusToDosError(-1073741816);
    UserSetLastError(v11, v12);
    ObfDereferenceObject(*a4);
  }
  return v7;
}
