/*
 * XREFs of sub_1801104D0 @ 0x1801104D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_18010DB00 @ 0x18010DB00 (sub_18010DB00.c)
 *     sub_180111E40 @ 0x180111E40 (sub_180111E40.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180125BD8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     atexit @ 0x18012607C (atexit.c)
 *     _Init_thread_footer @ 0x180126888 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801268E8 (_Init_thread_header.c)
 *     memset @ 0x1801272D8 (memset.c)
 *     ?_Xout_of_range@std@@YAXPEBD@Z @ 0x18012752C (-_Xout_of_range@std@@YAXPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=12
char __fastcall sub_1801104D0(__int64 a1, __int64 a2)
{
  __m128i v4; // [rsp+20h] [rbp-E8h] BYREF
  char *v5; // [rsp+30h] [rbp-D8h]
  __int64 v6; // [rsp+38h] [rbp-D0h]
  __int64 v7; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v8[3]; // [rsp+50h] [rbp-B8h]
  char v9; // [rsp+68h] [rbp-A0h]
  _QWORD v10[4]; // [rsp+70h] [rbp-98h] BYREF
  char v11; // [rsp+90h] [rbp-78h]
  __int64 v12; // [rsp+98h] [rbp-70h] BYREF
  __int128 v13; // [rsp+A8h] [rbp-60h]
  char v14; // [rsp+B8h] [rbp-50h]
  _QWORD v15[4]; // [rsp+C0h] [rbp-48h] BYREF
  char v16; // [rsp+E0h] [rbp-28h]
  __int64 v17; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v18; // [rsp+F8h] [rbp-10h]
  char v19; // [rsp+108h] [rbp+0h]
  _QWORD v20[4]; // [rsp+110h] [rbp+8h] BYREF
  char v21; // [rsp+130h] [rbp+28h]
  __int64 v22; // [rsp+138h] [rbp+30h] BYREF
  __int128 v23; // [rsp+148h] [rbp+40h]
  char v24; // [rsp+158h] [rbp+50h]
  _QWORD v25[4]; // [rsp+160h] [rbp+58h] BYREF
  char v26; // [rsp+180h] [rbp+78h]
  __int64 v27; // [rsp+188h] [rbp+80h] BYREF
  __int128 v28; // [rsp+198h] [rbp+90h]
  char v29; // [rsp+1A8h] [rbp+A0h]
  _QWORD v30[4]; // [rsp+1B0h] [rbp+A8h] BYREF
  char v31; // [rsp+1D0h] [rbp+C8h]
  __int64 v32; // [rsp+1D8h] [rbp+D0h] BYREF
  __int128 v33; // [rsp+1E8h] [rbp+E0h]
  char v34; // [rsp+1F8h] [rbp+F0h]
  char v35; // [rsp+200h] [rbp+F8h] BYREF
  __int64 v36; // [rsp+228h] [rbp+120h] BYREF

  v6 = -2LL;
  if ( dword_18026BC90 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_18026BC90);
    if ( dword_18026BC90 == -1 )
    {
      memset(&qword_18026BC50, 0, 0x40uLL);
      *(_OWORD *)&v8[1] = 0LL;
      sub_18000F444(&v7, (__int64)&qword_18025C618);
      v9 = 0;
      v10[2] = 0LL;
      v10[3] = 0LL;
      sub_18000F444(v10, (__int64)&qword_18025C558);
      v11 = 0;
      v13 = 0LL;
      sub_18000F444(&v12, (__int64)&qword_18025C758);
      v14 = 0;
      v15[2] = 0LL;
      v15[3] = 0LL;
      sub_18000F444(v15, (__int64)&qword_18025C658);
      v16 = 2;
      v18 = 0LL;
      sub_18000F444(&v17, (__int64)&qword_18025C578);
      v19 = 2;
      v20[2] = 0LL;
      v20[3] = 0LL;
      sub_18000F444(v20, (__int64)&qword_18025C638);
      v21 = 3;
      v23 = 0LL;
      sub_18000F444(&v22, (__int64)&qword_18025C5B8);
      v24 = 3;
      v25[2] = 0LL;
      v25[3] = 0LL;
      sub_18000F444(v25, (__int64)&qword_18025C678);
      v26 = 1;
      v28 = 0LL;
      sub_18000F444(&v27, (__int64)&qword_18025C5F8);
      v29 = 1;
      v30[2] = 0LL;
      v30[3] = 0LL;
      sub_18000F444(v30, (__int64)&qword_18025C6B8);
      v31 = 5;
      v33 = 0LL;
      sub_18000F444(&v32, (__int64)&qword_18025C5D8);
      v34 = 5;
      v4.m128i_i64[1] = (__int64)&v7;
      v5 = &v35;
      sub_18010DB00(&qword_18026BC50, (__m128i *)&v4.m128i_u64[1]);
      `eh vector destructor iterator'(&v7, 0x28uLL, 0xBuLL, (void (*)(void *))std::string::_Tidy_deallocate);
      atexit(sub_18013CC80);
      Init_thread_footer(&dword_18026BC90);
    }
  }
  v36 = 0LL;
  sub_180111E40(&qword_18026BC50, &v36, a2);
  if ( v36 == qword_18026BC58 )
  {
    std::_Xout_of_range("invalid unordered_map<K, T> key");
    __debugbreak();
  }
  return *(_BYTE *)(v36 + 48);
}
