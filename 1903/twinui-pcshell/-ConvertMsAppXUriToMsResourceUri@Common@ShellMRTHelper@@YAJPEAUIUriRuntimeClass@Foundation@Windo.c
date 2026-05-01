/*
 * XREFs of ?ConvertMsAppXUriToMsResourceUri@Common@ShellMRTHelper@@YAJPEAUIUriRuntimeClass@Foundation@Windows@@PEAPEAG@Z @ 0x18040A458
 * Callers:
 *     ?ConvertMsAppXUriToMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z @ 0x18040A344 (-ConvertMsAppXUriToMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180136B2C (-_Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z.c)
 */

__int64 __fastcall ShellMRTHelper::Common::ConvertMsAppXUriToMsResourceUri(
        ShellMRTHelper::Common *this,
        struct Windows::Foundation::IUriRuntimeClass *a2,
        unsigned __int16 **a3)
{
  __int64 v5; // rax
  int v6; // eax
  int v7; // ebx
  char *StringRawBuffer; // r13
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  char *v13; // rdi
  char *v14; // r12
  unsigned __int64 v15; // rcx
  __int64 v16; // r14
  unsigned __int64 v17; // rsi
  char *v18; // rax
  unsigned __int64 v19; // rcx
  signed __int64 v20; // rdx
  __int16 v21; // ax
  char *v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  HSTRING v26; // [rsp+20h] [rbp-48h] BYREF
  HSTRING v27; // [rsp+28h] [rbp-40h] BYREF
  HSTRING string; // [rsp+30h] [rbp-38h] BYREF
  char *v29; // [rsp+38h] [rbp-30h]
  char *v30; // [rsp+40h] [rbp-28h] BYREF
  __int64 v31; // [rsp+48h] [rbp-20h]
  unsigned __int64 v32; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+40h]
  int v34; // [rsp+B0h] [rbp+48h] BYREF
  UINT32 v35; // [rsp+B8h] [rbp+50h] BYREF
  UINT32 length; // [rsp+C0h] [rbp+58h] BYREF
  UINT32 v37; // [rsp+C8h] [rbp+60h] BYREF

  *(_QWORD *)a2 = 0LL;
  string = 0LL;
  WindowsDeleteString(0LL);
  v5 = *(_QWORD *)this;
  string = 0LL;
  v6 = (*(__int64 (__fastcall **)(ShellMRTHelper::Common *, HSTRING *))(v5 + 104))(this, &string);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v27 = 0LL;
    StringRawBuffer = (char *)WindowsGetStringRawBuffer(string, &length);
    WindowsDeleteString(0LL);
    v9 = *(_QWORD *)this;
    v27 = 0LL;
    v10 = (*(__int64 (__fastcall **)(ShellMRTHelper::Common *, HSTRING *))(v9 + 112))(this, &v27);
    v7 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6F,
        (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\shellmrthelper.common.h",
        (const char *)(unsigned int)v10);
LABEL_46:
      WindowsDeleteString(v27);
      v27 = 0LL;
      goto LABEL_47;
    }
    v26 = 0LL;
    v29 = (char *)WindowsGetStringRawBuffer(v27, &v37);
    WindowsDeleteString(0LL);
    v11 = *(_QWORD *)this;
    v26 = 0LL;
    v12 = (*(__int64 (__fastcall **)(ShellMRTHelper::Common *, HSTRING *))(v11 + 88))(this, &v26);
    v7 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x75,
        (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\shellmrthelper.common.h",
        (const char *)(unsigned int)v12);
LABEL_45:
      WindowsDeleteString(v26);
      v26 = 0LL;
      goto LABEL_46;
    }
    v13 = 0LL;
    v14 = (char *)WindowsGetStringRawBuffer(v26, &v35);
    v30 = 0LL;
    v15 = v37 + v35 + length + 20;
    v31 = 0LL;
    v32 = 0LL;
    v16 = 12LL;
    v17 = v15 + 1;
    if ( v15 < 0xC )
      v16 = (unsigned int)v15;
    if ( v17 >= v15 && is_mul_ok(v17, 2uLL) )
    {
      v7 = 0;
      v18 = (char *)CoTaskMemAlloc(2 * v17);
      if ( v18 )
      {
        v32 = v17;
        v13 = v18;
        v30 = v18;
        *(_WORD *)v18 = 0;
      }
      else
      {
        v7 = -2147024882;
      }
      if ( v7 >= 0 )
      {
        if ( v17 > 0x7FFFFFFF )
        {
          *(_WORD *)v13 = 0;
        }
        else
        {
          v19 = v16 - v17;
          v20 = (char *)L"ms-resource:" - v13;
          do
          {
            if ( !(v19 + v17) )
              break;
            v21 = *(_WORD *)&v13[v20];
            if ( !v21 )
              break;
            *(_WORD *)v13 = v21;
            v13 += 2;
            --v17;
          }
          while ( v17 );
          v22 = v13 - 2;
          if ( v17 )
            v22 = v13;
          *(_WORD *)v22 = 0;
        }
        v31 = v16;
        v34 = 47;
        v23 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
                &v30,
                (char *)&v34,
                1uLL);
        v7 = v23;
        if ( v23 >= 0 )
        {
          v34 = 47;
          v23 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
                  &v30,
                  (char *)&v34,
                  1uLL);
          v7 = v23;
          if ( v23 >= 0 )
          {
            if ( v35
              && (v23 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
                          &v30,
                          v14,
                          v35),
                  v7 = v23,
                  v23 < 0) )
            {
              v24 = 132LL;
            }
            else
            {
              v34 = 47;
              v23 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
                      &v30,
                      (char *)&v34,
                      1uLL);
              v7 = v23;
              if ( v23 >= 0 )
              {
                v23 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
                        &v30,
                        (char *)L"files",
                        5uLL);
                v7 = v23;
                if ( v23 >= 0 )
                {
                  v23 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
                          &v30,
                          StringRawBuffer,
                          length);
                  v7 = v23;
                  if ( v23 >= 0 )
                  {
                    if ( !v37
                      || (v23 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
                                  &v30,
                                  v29,
                                  v37),
                          v7 = v23,
                          v23 >= 0) )
                    {
                      v7 = 0;
                      *(_QWORD *)a2 = v30;
                      v30 = 0LL;
                      v32 = 0LL;
                      v31 = 0LL;
                      goto LABEL_44;
                    }
                    v24 = 144LL;
                  }
                  else
                  {
                    v24 = 139LL;
                  }
                }
                else
                {
                  v24 = 136LL;
                }
              }
              else
              {
                v24 = 135LL;
              }
            }
          }
          else
          {
            v24 = 128LL;
          }
        }
        else
        {
          v24 = 127LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v24,
          (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\shellmrthelper.common.h",
          (const char *)(unsigned int)v23);
LABEL_44:
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v30);
        goto LABEL_45;
      }
    }
    else
    {
      v7 = -2147024362;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7E,
      (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\shellmrthelper.common.h",
      (const char *)(unsigned int)v7);
    goto LABEL_44;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x69,
    (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\shellmrthelper.common.h",
    (const char *)(unsigned int)v6);
LABEL_47:
  WindowsDeleteString(string);
  return (unsigned int)v7;
}
