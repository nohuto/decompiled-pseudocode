/*
 * XREFs of sub_1800681A4 @ 0x1800681A4
 * Callers:
 *     sub_180068BD0 @ 0x180068BD0 (sub_180068BD0.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18000F65C (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     sub_1800114F0 @ 0x1800114F0 (sub_1800114F0.c)
 *     sub_18002B6D4 @ 0x18002B6D4 (sub_18002B6D4.c)
 *     sub_180065970 @ 0x180065970 (sub_180065970.c)
 *     sub_180065A00 @ 0x180065A00 (sub_180065A00.c)
 *     sub_180065B14 @ 0x180065B14 (sub_180065B14.c)
 *     sub_180066388 @ 0x180066388 (sub_180066388.c)
 *     sub_180069A30 @ 0x180069A30 (sub_180069A30.c)
 *     sub_180069CC0 @ 0x180069CC0 (sub_180069CC0.c)
 *     memcmp @ 0x180125AA8 (memcmp.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800681A4(__int64 a1)
{
  int v2; // r12d
  _QWORD *v3; // rax
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 *v6; // rdi
  __int64 *v7; // rbx
  int v8; // ecx
  double v9; // xmm6_8
  double *v10; // rax
  void **v11; // rdx
  const void *v12; // rcx
  size_t v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 **v16; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  _QWORD *v19; // rdi
  _QWORD *v20; // rbx
  _QWORD *v21; // rax
  __int64 *v22; // rdx
  _QWORD *v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int128 *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 **v29; // rax
  __int64 k; // rax
  __int64 *m; // rcx
  int v33; // [rsp+38h] [rbp-69h] BYREF
  _QWORD Src[3]; // [rsp+40h] [rbp-61h] BYREF
  unsigned __int64 v35; // [rsp+58h] [rbp-49h]
  __int64 v36; // [rsp+60h] [rbp-41h]
  __int64 v37; // [rsp+68h] [rbp-39h] BYREF
  __int128 v38; // [rsp+78h] [rbp-29h] BYREF
  __int128 v39; // [rsp+88h] [rbp-19h] BYREF
  __int128 v40; // [rsp+98h] [rbp-9h]

  v36 = -2LL;
  v2 = 0;
  v33 = 0;
  v38 = 0LL;
  v3 = sub_18002B6D4();
  *(_QWORD *)&v38 = v3;
  v4 = *(_QWORD *)(a1 + 416);
  v5 = *(_QWORD *)(a1 + 424);
  while ( v4 != v5 )
  {
    if ( *(_BYTE *)(v4 + 120) )
    {
      sub_180065A00(
        *(__int64 ***)(a1 + 384),
        (__int64)"..\\Source\\Engine\\RenderOutput.cpp",
        595,
        (__int64)"LogGpuProfilingData",
        (__int64)"GpuStats_FrameNumber",
        *(_QWORD *)(v4 + 128));
      sub_180069A30(&v38);
      v6 = *(__int64 **)(v4 + 136);
      v7 = (__int64 *)*v6;
      while ( v7 != v6 )
      {
        v8 = *((_DWORD *)v7 + 16);
        if ( v8 )
        {
          if ( v8 == 1 )
          {
            v9 = *((double *)v7 + 10) - *((double *)v7 + 9);
            v33 = 0;
            v10 = sub_180065B14(&v38, (__int64)(v7 + 4), &v33);
            sub_180066388(&v38, (__int64)&v37, 0, (size_t *)v10 + 4, v10);
            *(double *)(v37 + 64) = v9 + *(double *)(v37 + 64);
          }
        }
        else
        {
          v11 = &Buf2;
          if ( *((_QWORD *)&xmmword_18025CD30 + 1) >= 0x10uLL )
            v11 = (void **)Buf2;
          v12 = v7 + 4;
          if ( (unsigned __int64)v7[7] >= 0x10 )
            v12 = (const void *)v7[4];
          v13 = v7[6];
          if ( v13 == (_QWORD)xmmword_18025CD30 && !memcmp(v12, v11, v13) )
          {
            sub_180065970(
              *(__int64 ***)(a1 + 384),
              (__int64)"..\\Source\\Engine\\RenderOutput.cpp",
              617LL,
              (__int64)"LogGpuProfilingData",
              (__int64)"GpuStats_PostStamp");
          }
          else
          {
            v14 = sub_1800114F0(Src, &qword_180258688, v7 + 4);
            if ( v14[3] >= 0x10uLL )
              v14 = (_QWORD *)*v14;
            sub_180065970(
              *(__int64 ***)(a1 + 384),
              (__int64)"..\\Source\\Engine\\RenderOutput.cpp",
              622LL,
              (__int64)"LogGpuProfilingData",
              (__int64)v14);
            if ( v35 >= 0x10 )
            {
              v15 = Src[0];
              if ( v35 + 1 >= 0x1000 )
              {
                v15 = *(_QWORD *)(Src[0] - 8LL);
                if ( (unsigned __int64)(Src[0] - v15 - 8) > 0x1F )
                {
                  o__invalid_parameter_noinfo_noreturn(v15, v35 + 40);
LABEL_55:
                  o__invalid_parameter_noinfo_noreturn(v24, v25);
LABEL_56:
                  v3 = (_QWORD *)o__invalid_parameter_noinfo_noreturn(v27, v28);
                  goto LABEL_57;
                }
              }
              j_j__o_free(v15);
            }
          }
        }
        v16 = (__int64 **)v7[2];
        if ( *((_BYTE *)v16 + 25) )
        {
          for ( i = (__int64 *)v7[1]; !*((_BYTE *)i + 25) && v7 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v7 = i;
          v7 = i;
        }
        else
        {
          v7 = (__int64 *)v7[2];
          for ( j = *v16; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            v7 = j;
        }
      }
      v19 = (_QWORD *)v38;
      v20 = *(_QWORD **)v38;
      while ( v20 != v19 )
      {
        v21 = sub_1800114F0(Src, &qword_180258688, v20 + 4);
        v22 = &qword_18025CD00;
        if ( *((_QWORD *)&xmmword_18025CD10 + 1) >= 0x10uLL )
          v22 = (__int64 *)qword_18025CD00;
        v23 = std::string::append(v21, v22, xmmword_18025CD10);
        v40 = 0uLL;
        v39 = *(_OWORD *)v23;
        v40 = *((_OWORD *)v23 + 1);
        v23[2] = 0LL;
        v23[3] = 15LL;
        *(_BYTE *)v23 = 0;
        v2 |= 1u;
        if ( v35 >= 0x10 )
        {
          v24 = Src[0];
          if ( v35 + 1 >= 0x1000 )
          {
            v25 = v35 + 40;
            v24 = *(_QWORD *)(Src[0] - 8LL);
            if ( (unsigned __int64)(Src[0] - v24 - 8) > 0x1F )
              goto LABEL_55;
          }
          j_j__o_free(v24);
        }
        Src[2] = 0LL;
        v35 = 15LL;
        LOBYTE(Src[0]) = 0;
        v26 = &v39;
        if ( *((_QWORD *)&v40 + 1) >= 0x10uLL )
          v26 = (__int128 *)v39;
        sub_180065970(
          *(__int64 ***)(a1 + 384),
          (__int64)"..\\Source\\Engine\\RenderOutput.cpp",
          643LL,
          (__int64)"LogGpuProfilingData",
          (__int64)v26);
        if ( *((_QWORD *)&v40 + 1) >= 0x10uLL )
        {
          v27 = v39;
          if ( (unsigned __int64)(*((_QWORD *)&v40 + 1) + 1LL) >= 0x1000 )
          {
            v28 = *((_QWORD *)&v40 + 1) + 40LL;
            v27 = *(_QWORD *)(v39 - 8);
            if ( (unsigned __int64)(v39 - v27 - 8) > 0x1F )
              goto LABEL_56;
          }
          j_j__o_free(v27);
        }
        v29 = (__int64 **)v20[2];
        if ( *((_BYTE *)v29 + 25) )
        {
          for ( k = v20[1]; !*(_BYTE *)(k + 25) && v20 == *(_QWORD **)(k + 16); k = *(_QWORD *)(k + 8) )
            v20 = (_QWORD *)k;
          v20 = (_QWORD *)k;
        }
        else
        {
          v20 = (_QWORD *)v20[2];
          for ( m = *v29; !*((_BYTE *)m + 25); m = (__int64 *)*m )
            v20 = m;
        }
      }
      sub_180065970(
        *(__int64 ***)(a1 + 384),
        (__int64)"..\\Source\\Engine\\RenderOutput.cpp",
        647LL,
        (__int64)"LogGpuProfilingData",
        (__int64)"GpuStats_StartTime");
      sub_180065970(
        *(__int64 ***)(a1 + 384),
        (__int64)"..\\Source\\Engine\\RenderOutput.cpp",
        648LL,
        (__int64)"LogGpuProfilingData",
        (__int64)"GpuStats_PresentStamp");
      sub_180065970(
        *(__int64 ***)(a1 + 384),
        (__int64)"..\\Source\\Engine\\RenderOutput.cpp",
        649LL,
        (__int64)"LogGpuProfilingData",
        (__int64)"GpuStats_EndTime");
      sub_180065970(
        *(__int64 ***)(a1 + 384),
        (__int64)"..\\Source\\Engine\\RenderOutput.cpp",
        650LL,
        (__int64)"LogGpuProfilingData",
        (__int64)"GpuStats_RenderDuration");
      sub_180065970(
        *(__int64 ***)(a1 + 384),
        (__int64)"..\\Source\\Engine\\RenderOutput.cpp",
        651LL,
        (__int64)"LogGpuProfilingData",
        (__int64)"GpuStats_Duration");
      v3 = (_QWORD *)v38;
    }
    v4 += 152LL;
  }
LABEL_57:
  sub_180069CC0(&v38, &v33, *v3);
  return j_j__o_free(v38);
}
