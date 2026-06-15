/*
 * XREFs of ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x180022ED0
 * Callers:
 *     AudioSessionManagerGetCurrentSession @ 0x18001F000 (AudioSessionManagerGetCurrentSession.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z @ 0x180035480 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x1800DBC24 (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800DBCC0 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x1800DC034 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800260A0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memmove_s @ 0x180048EA4 (memmove_s.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180049334 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     _invalid_parameter_noinfo @ 0x180065CBA (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x18006C963 (memcpy_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BCE4C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CAudioEndpointId::Initialize(CAudioEndpointId *this, const unsigned __int16 *a2)
{
  unsigned int v4; // r12d
  __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r15
  char *v8; // rcx
  bool v9; // cc
  __int64 v10; // rsi
  int *v12; // rbx
  ATL::CAtlException *v13; // [rsp+28h] [rbp-20h] BYREF
  int v14; // [rsp+50h] [rbp+8h]

  try
  {
    v4 = 0;
    if ( !a2 )
      goto LABEL_19;
    v5 = -1LL;
    do
      ++v5;
    while ( a2[v5] );
    if ( (_DWORD)v5 )
    {
      v6 = *(unsigned int *)(*(_QWORD *)this - 16LL);
      v7 = ((__int64)a2 - *(_QWORD *)this) >> 1;
      if ( ((1 - *(_DWORD *)(*(_QWORD *)this - 8LL)) | (*(_DWORD *)(*(_QWORD *)this - 12LL) - (int)v5)) < 0 )
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(this, (unsigned int)v5);
      v8 = *(char **)this;
      v9 = v7 <= v6;
      v10 = 2LL * (int)v5;
      if ( v9 )
      {
        memmove_s(v8, 2LL * (int)v5, &v8[2 * v7], 2LL * (int)v5);
      }
      else if ( v10 )
      {
        if ( v8 )
        {
          memcpy_0(v8, a2, 2LL * (int)v5);
        }
        else
        {
          *(_DWORD *)_o__errno(0LL) = 22;
          invalid_parameter_noinfo();
        }
      }
      if ( (int)v5 < 0 || (int)v5 > *(_DWORD *)(*(_QWORD *)this - 12LL) )
        ATL::AtlThrowImpl(-2147024809);
      *(_DWORD *)(*(_QWORD *)this - 16LL) = v5;
      *(_WORD *)(v10 + *(_QWORD *)this) = 0;
    }
    else
    {
LABEL_19:
      ATL::CSimpleStringT<unsigned short,0>::Empty(this);
    }
  }
  catch ( ATL::CAtlException *v13 )
  {
    v12 = (int *)v13;
    if ( *(_DWORD *)v13 == -1073741571 )
      _o__resetstkoflw();
    v14 = *v12;
    v4 = *v12;
    if ( v14 < 0 )
      AudSrvTraceLoggingErrorHelper("CAudioEndpointId::Initialize", 0x8Cu, v14);
  }
  return v4;
}
