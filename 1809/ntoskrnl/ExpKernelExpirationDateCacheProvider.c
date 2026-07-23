/*
 * XREFs of ExpKernelExpirationDateCacheProvider @ 0x140760CD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlTimeToTimeFields @ 0x14015DB20 (RtlTimeToTimeFields.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExpKernelExpirationDateCacheProvider(_DWORD *a1, _OWORD *a2, unsigned int a3, _DWORD *a4, _BYTE *a5)
{
  int v6; // ebx
  _TIME_FIELDS TimeFields; // [rsp+20h] [rbp-30h] BYREF
  LARGE_INTEGER Time; // [rsp+30h] [rbp-20h] BYREF
  __int128 v10; // [rsp+38h] [rbp-18h]

  v10 = 0uLL;
  Time.QuadPart = 0LL;
  *(_QWORD *)&TimeFields.Year = 0LL;
  *(_QWORD *)&TimeFields.Minute = 0LL;
  *a4 = 16;
  if ( a3 >= 0x10 )
  {
    if ( a1 )
      *a1 = 3;
    if ( qword_14040EE78 )
    {
      v6 = qword_14040EE78(&Time);
      if ( v6 < 0 )
        return (unsigned int)v6;
    }
    else
    {
      Time.QuadPart = 0LL;
      v6 = 0;
    }
    RtlTimeToTimeFields(&Time, &TimeFields);
    LOWORD(v10) = TimeFields.Year;
    BYTE2(v10) = TimeFields.Month;
    BYTE11(v10) = HIBYTE(TimeFields.Second);
    *(_QWORD *)((char *)&v10 + 3) = *(_QWORD *)((char *)&TimeFields.Month + 1);
    *a2 = v10;
    *a5 = 1;
    return (unsigned int)v6;
  }
  return (unsigned int)-1073741789;
}
