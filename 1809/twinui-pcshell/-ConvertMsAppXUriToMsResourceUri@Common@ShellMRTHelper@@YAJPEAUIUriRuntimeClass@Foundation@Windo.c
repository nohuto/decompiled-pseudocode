/*
 * XREFs of ?ConvertMsAppXUriToMsResourceUri@Common@ShellMRTHelper@@YAJPEAUIUriRuntimeClass@Foundation@Windows@@PEAPEAG@Z @ 0x1803A90D4
 * Callers:
 *     ?ConvertMsAppXUriToMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z @ 0x1803A8FC0 (-ConvertMsAppXUriToMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18010FD58 (-_Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z.c)
 */

__int64 __fastcall ShellMRTHelper::Common::ConvertMsAppXUriToMsResourceUri(
        ShellMRTHelper::Common *this,
        struct Windows::Foundation::IUriRuntimeClass *a2,
        unsigned __int16 **a3)
{
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  char *StringRawBuffer; // r12
  __int64 v9; // rcx
  int v10; // eax
  char *v11; // r13
  __int64 v12; // rcx
  int v13; // eax
  char *v14; // rax
  __int64 v15; // rsi
  char *v16; // r9
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rdi
  char *v20; // rax
  unsigned __int64 v21; // r9
  __int64 v22; // rdx
  unsigned __int64 v24; // rcx
  signed __int64 v25; // rdx
  __int16 v26; // ax
  char *v27; // rax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  HSTRING v35; // [rsp+20h] [rbp-60h] BYREF
  HSTRING v36; // [rsp+28h] [rbp-58h] BYREF
  HSTRING string; // [rsp+30h] [rbp-50h] BYREF
  char *v38; // [rsp+38h] [rbp-48h]
  char *v39; // [rsp+40h] [rbp-40h] BYREF
  __int64 v40; // [rsp+48h] [rbp-38h]
  unsigned __int64 v41; // [rsp+50h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  int v43; // [rsp+B0h] [rbp+30h] BYREF
  UINT32 v44; // [rsp+B8h] [rbp+38h] BYREF
  UINT32 length; // [rsp+C0h] [rbp+40h] BYREF
  UINT32 v46; // [rsp+C8h] [rbp+48h] BYREF

  *(_QWORD *)a2 = 0LL;
  string = 0LL;
  WindowsDeleteString(0LL);
  v5 = *(_QWORD *)this;
  string = 0LL;
  v6 = (*(__int64 (__fastcall **)(ShellMRTHelper::Common *, HSTRING *))(v5 + 104))(this, &string);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v36 = 0LL;
    StringRawBuffer = (char *)WindowsGetStringRawBuffer(string, &length);
    WindowsDeleteString(0LL);
    v9 = *(_QWORD *)this;
    v36 = 0LL;
    v10 = (*(__int64 (__fastcall **)(ShellMRTHelper::Common *, HSTRING *))(v9 + 112))(this, &v36);
    v7 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x69,
        (__int64)"internal\\onecoreuapshell\\inc\\shellmrthelper.common.h",
        (const char *)(unsigned int)v10);
LABEL_20:
      WindowsDeleteString(v36);
      v36 = 0LL;
      goto LABEL_21;
    }
    v35 = 0LL;
    v11 = (char *)WindowsGetStringRawBuffer(v36, &v46);
    WindowsDeleteString(0LL);
    v12 = *(_QWORD *)this;
    v35 = 0LL;
    v13 = (*(__int64 (__fastcall **)(ShellMRTHelper::Common *, HSTRING *))(v12 + 88))(this, &v35);
    v7 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6F,
        (__int64)"internal\\onecoreuapshell\\inc\\shellmrthelper.common.h",
        (const char *)(unsigned int)v13);
LABEL_19:
      WindowsDeleteString(v35);
      v35 = 0LL;
      goto LABEL_20;
    }
    v14 = (char *)WindowsGetStringRawBuffer(v35, &v44);
    v15 = 12LL;
    v16 = 0LL;
    v17 = v46 + v44 + length + 20;
    v39 = 0LL;
    v40 = 0LL;
    v41 = 0LL;
    v18 = -1LL;
    if ( v17 < 0xC )
      v15 = (unsigned int)v17;
    v38 = v14;
    v19 = v17 + 1;
    if ( v17 + 1 >= v17 )
      v18 = v17 + 1;
    v7 = v17 + 1 < v17 ? 0x80070216 : 0;
    if ( v19 >= v17 )
    {
      if ( !is_mul_ok(v18, 2uLL) )
      {
        v7 = -2147024362;
        goto LABEL_16;
      }
      v7 = 0;
      v20 = (char *)CoTaskMemAlloc(2 * v18);
      v16 = v20;
      if ( !v20 )
      {
        v7 = -2147024882;
        goto LABEL_16;
      }
      v41 = v18;
      *(_WORD *)v20 = 0;
      v39 = v20;
    }
    if ( (v7 & 0x80000000) == 0 )
    {
      if ( v19 > 0x7FFFFFFF )
      {
        *(_WORD *)v16 = 0;
      }
      else
      {
        v24 = v15 - v19;
        v25 = (char *)L"ms-resource:" - v16;
        do
        {
          if ( !(v24 + v19) )
            break;
          v26 = *(_WORD *)&v16[v25];
          if ( !v26 )
            break;
          *(_WORD *)v16 = v26;
          v16 += 2;
          --v19;
        }
        while ( v19 );
        v27 = v16 - 2;
        if ( v19 )
          v27 = v16;
        *(_WORD *)v27 = 0;
      }
      v40 = v15;
      v43 = 47;
      v28 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
              &v39,
              (char *)&v43,
              1uLL);
      v7 = v28;
      if ( v28 >= 0 )
      {
        v43 = 47;
        v29 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
                &v39,
                (char *)&v43,
                1uLL);
        v7 = v29;
        if ( v29 >= 0 )
        {
          if ( v44
            && (v30 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
                        &v39,
                        v38,
                        v44),
                v7 = v30,
                v30 < 0) )
          {
            v21 = (unsigned int)v30;
            v22 = 126LL;
          }
          else
          {
            v43 = 47;
            v31 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
                    &v39,
                    (char *)&v43,
                    1uLL);
            v7 = v31;
            if ( v31 >= 0 )
            {
              v32 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
                      &v39,
                      (char *)L"files",
                      5uLL);
              v7 = v32;
              if ( v32 >= 0 )
              {
                v33 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
                        &v39,
                        StringRawBuffer,
                        length);
                v7 = v33;
                if ( v33 >= 0 )
                {
                  if ( !v46
                    || (v34 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
                                &v39,
                                v11,
                                v46),
                        v7 = v34,
                        v34 >= 0) )
                  {
                    v7 = 0;
                    *(_QWORD *)a2 = v39;
                    v39 = 0LL;
                    v41 = 0LL;
                    v40 = 0LL;
                    goto LABEL_18;
                  }
                  v21 = (unsigned int)v34;
                  v22 = 138LL;
                }
                else
                {
                  v21 = (unsigned int)v33;
                  v22 = 133LL;
                }
              }
              else
              {
                v21 = (unsigned int)v32;
                v22 = 130LL;
              }
            }
            else
            {
              v21 = (unsigned int)v31;
              v22 = 129LL;
            }
          }
        }
        else
        {
          v21 = (unsigned int)v29;
          v22 = 122LL;
        }
      }
      else
      {
        v21 = (unsigned int)v28;
        v22 = 121LL;
      }
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v22,
        (__int64)"internal\\onecoreuapshell\\inc\\shellmrthelper.common.h",
        (const char *)v21);
LABEL_18:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v39);
      goto LABEL_19;
    }
LABEL_16:
    v21 = v7;
    v22 = 120LL;
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x63,
    (__int64)"internal\\onecoreuapshell\\inc\\shellmrthelper.common.h",
    (const char *)(unsigned int)v6);
LABEL_21:
  WindowsDeleteString(string);
  return v7;
}
