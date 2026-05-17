/*
 * XREFs of RtlRegisterForWnfMetaNotification @ 0x1800060E0
 * Callers:
 *     RtlWaitForWnfMetaNotification @ 0x180006140 (RtlWaitForWnfMetaNotification.c)
 * Callees:
 *     sub_180009D9C @ 0x180009D9C (sub_180009D9C.c)
 */

__int64 __fastcall RtlRegisterForWnfMetaNotification(_QWORD *a1, int a2, int a3, int a4, __int64 a5)
{
  *a1 = 0LL;
  if ( !a3 || (a3 & 0x11) != 0 )
    return 3221225485LL;
  else
    return sub_180009D9C((_DWORD)a1, a2, -1, a4, a5, 0LL, 0, 1, a3);
}
