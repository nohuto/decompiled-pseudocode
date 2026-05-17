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

__int64 __fastcall sub_1800DCB54(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned int v7; // esi
  int UniqueProcess; // ebx
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // eax
  _QWORD v13[3]; // [rsp+30h] [rbp-48h]

  v3 = 0;
  v7 = 0;
  if ( a1 )
  {
    UniqueProcess = (int)NtCurrentTeb()->ClientId.UniqueProcess;
    if ( (unsigned int)sub_18006B7F4(a1) != UniqueProcess )
    {
      v13[0] = a1;
      v7 = 1;
    }
  }
  if ( a2 )
  {
    v9 = v7++;
    v13[v9] = a2;
  }
  if ( a3 )
  {
    v10 = v7++;
    v13[v10] = a3;
  }
  if ( v7 )
  {
    if ( v7 <= 3 )
    {
      do
      {
        v11 = ZwWaitForMultipleObjects();
        if ( v11 < 0 )
          return (unsigned int)v11;
        if ( v11 < (int)v7 )
          return v3;
      }
      while ( v11 != 258 );
      return (unsigned int)-1073741823;
    }
    else
    {
      return (unsigned int)-1073741684;
    }
  }
  return v3;
}
