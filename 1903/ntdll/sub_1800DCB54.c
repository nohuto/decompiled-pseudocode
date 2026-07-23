/*
 * XREFs of sub_1800DCB54 @ 0x1800DCB54
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DB9F0 (RtlReportExceptionEx.c)
 *     sub_1800DBEC0 @ 0x1800DBEC0 (sub_1800DBEC0.c)
 * Callees:
 *     sub_18006B7F4 @ 0x18006B7F4 (sub_18006B7F4.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwWaitForMultipleObjects @ 0x18009D230 (ZwWaitForMultipleObjects.c)
 */

__int64 __fastcall sub_1800DCB54(void *a1, void *a2, void *a3, LARGE_INTEGER *a4)
{
  unsigned int v4; // edi
  ULONG v9; // esi
  int UniqueProcess; // ebx
  __int64 v11; // rax
  __int64 v12; // rax
  NTSTATUS v13; // eax
  HANDLE Handles[3]; // [rsp+30h] [rbp-48h] BYREF

  v4 = 0;
  v9 = 0;
  if ( a1 )
  {
    UniqueProcess = (int)NtCurrentTeb()->ClientId.UniqueProcess;
    if ( (unsigned int)sub_18006B7F4(a1) != UniqueProcess )
    {
      Handles[0] = a1;
      v9 = 1;
    }
  }
  if ( a2 )
  {
    v11 = v9++;
    Handles[v11] = a2;
  }
  if ( a3 )
  {
    v12 = v9++;
    Handles[v12] = a3;
  }
  if ( v9 )
  {
    if ( v9 <= 3 )
    {
      do
      {
        v13 = ZwWaitForMultipleObjects(v9, Handles, WaitAny, 1u, a4);
        if ( v13 < 0 )
          return (unsigned int)v13;
        if ( v13 < (int)v9 )
          return v4;
      }
      while ( v13 != 258 );
      return (unsigned int)-1073741823;
    }
    else
    {
      return (unsigned int)-1073741684;
    }
  }
  return v4;
}
