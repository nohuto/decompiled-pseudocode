/*
 * XREFs of sub_180062B70 @ 0x180062B70
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     RtlGetSuiteMask @ 0x18002DCA0 (RtlGetSuiteMask.c)
 *     TpAllocWork @ 0x180062C70 (TpAllocWork.c)
 *     TpSetPoolMaxThreads @ 0x180062E20 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x180062E90 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     sub_180062F34 @ 0x180062F34 (sub_180062F34.c)
 *     sub_18006352C @ 0x18006352C (sub_18006352C.c)
 */

__int64 __fastcall sub_180062B70(unsigned int a1)
{
  int v2; // esi
  __int64 v3; // rcx
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-58h] BYREF
  __int64 v7; // [rsp+28h] [rbp-50h]
  __int64 v8; // [rsp+30h] [rbp-48h]
  __int64 v9; // [rsp+38h] [rbp-40h]
  __int128 v10; // [rsp+40h] [rbp-38h]
  __int64 v11; // [rsp+50h] [rbp-28h]
  int v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+5Ch] [rbp-1Ch]
  int v14; // [rsp+60h] [rbp-18h]

  v2 = 0;
  sub_18006352C();
  if ( a1 )
  {
    v4 = a1;
    if ( a1 > 0x10 )
      v4 = 16;
  }
  else
  {
    v4 = 4;
    if ( (RtlGetSuiteMask(v3) & 0x10000) != 0 )
      v4 = 0;
  }
  if ( v4 > 1 && !byte_180165300 )
  {
    v2 = sub_180062F34(&qword_1801661B0, 1LL);
    if ( v2 >= 0 )
    {
      TpSetPoolWorkerThreadIdleTimeout(qword_1801661B0, -300000000LL);
      TpSetPoolMaxThreads(qword_1801661B0, v4 - 1);
      v8 = 0LL;
      v9 = 0LL;
      v11 = 0LL;
      v12 = 0;
      v10 = 0LL;
      v7 = qword_1801661B0;
      v6 = 3;
      v13 = 1;
      v14 = 72;
      return (unsigned int)((__int64 (__fastcall *)(__int64 *, void (*)(), _QWORD, int *))TpAllocWork)(
                             &qword_180165288,
                             sub_18002E1E0,
                             0LL,
                             &v6);
    }
  }
  return (unsigned int)v2;
}
