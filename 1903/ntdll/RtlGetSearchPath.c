/*
 * XREFs of RtlGetSearchPath @ 0x180082CE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800321F8 @ 0x1800321F8 (sub_1800321F8.c)
 */

__int64 __fastcall RtlGetSearchPath(_QWORD *a1)
{
  __int64 v2; // rax

  v2 = sub_1800321F8(&qword_180164360, (__int64 (__fastcall *)(__int64, __int64))sub_18006B880, 0LL, 0LL);
  if ( v2 )
  {
    *a1 = v2 + 112;
    return 0LL;
  }
  else
  {
    *a1 = 0LL;
    return 3221225495LL;
  }
}
