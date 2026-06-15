/*
 * XREFs of ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x180028820
 * Callers:
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z @ 0x1800266B0 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z.c)
 *     AudioSessionManagerGetCurrentSession @ 0x180033B50 (AudioSessionManagerGetCurrentSession.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x1800CDB80 (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800CDC1C (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x1800CDFBC (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memmove_s @ 0x18000B768 (memmove_s.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x1800202E8 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18002B690 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _invalid_parameter_noinfo @ 0x18006165A (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AE7FC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CAudioEndpointId::Initialize(CAudioEndpointId *this, const unsigned __int16 *a2)
{
  unsigned int v4; // r15d
  __int64 v5; // rbx
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r14
  char *v8; // rcx
  rsize_t v9; // rdx
  int *v11; // rbx
  ATL::CAtlException *v12; // [rsp+28h] [rbp-20h] BYREF
  int v13; // [rsp+50h] [rbp+8h]

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
      v9 = 2LL * (int)v5;
      if ( v7 <= v6 )
      {
        memmove_s(v8, v9, &v8[2 * v7], 2LL * (int)v5);
      }
      else if ( v9 )
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
      *(_WORD *)(*(_QWORD *)this + 2LL * (int)v5) = 0;
    }
    else
    {
LABEL_19:
      ATL::CSimpleStringT<unsigned short,0>::Empty((__int64 *)this);
    }
  }
  catch ( ATL::CAtlException *v12 )
  {
    v11 = (int *)v12;
    if ( *(_DWORD *)v12 == -1073741571 )
      _o__resetstkoflw();
    v13 = *v11;
    v4 = *v11;
    if ( v13 < 0 )
      AudSrvTraceLoggingErrorHelper("CAudioEndpointId::Initialize", 140, v13);
  }
  return v4;
}
