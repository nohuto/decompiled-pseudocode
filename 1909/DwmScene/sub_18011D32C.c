/*
 * XREFs of sub_18011D32C @ 0x18011D32C
 * Callers:
 *     sub_18011D7AC @ 0x18011D7AC (sub_18011D7AC.c)
 * Callees:
 *     sub_18000E168 @ 0x18000E168 (sub_18000E168.c)
 *     sub_18011CEA8 @ 0x18011CEA8 (sub_18011CEA8.c)
 *     memmove @ 0x180125BAC (memmove.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x180126888 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801268E8 (_Init_thread_header.c)
 *     _Query_perf_counter @ 0x18012750E (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180127514 (_Query_perf_frequency.c)
 */

__int64 *__fastcall sub_18011D32C(__int64 *a1)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  size_t v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  void *v9; // rbx
  _BYTE Src[256]; // [rsp+40h] [rbp-118h] BYREF

  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v4 = -1LL;
  v5 = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
  if ( dword_18026C2B8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_18026C2B8);
    if ( dword_18026C2B8 == -1 )
    {
      qword_18026C2B0 = v5;
      Init_thread_footer(&dword_18026C2B8);
    }
  }
  v6 = v5 - qword_18026C2B0;
  v7 = ((unsigned __int64)(v6 / 1000000) * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
  v8 = (v7 + ((unsigned __int64)(v6 / 1000000 - v7) >> 1)) >> 9;
  sub_18011CEA8(
    (__int64)Src,
    (__int64)"%.3d:%.2d:%.2d:%.3d",
    v8 / 0x3C / 0x3C,
    v8 / 0x3C % 0x3C,
    v8 % 0x3C,
    v6 / 1000000 - 1000 * v8);
  a1[2] = 0LL;
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
  do
    ++v4;
  while ( Src[v4] );
  if ( v4 > a1[3] )
  {
    sub_18000E168(a1, v4, 0LL, Src);
  }
  else
  {
    v9 = a1;
    if ( (unsigned __int64)a1[3] >= 0x10 )
      v9 = (void *)*a1;
    a1[2] = v4;
    memmove(v9, Src, v4);
    *((_BYTE *)v9 + v4) = 0;
  }
  return a1;
}
