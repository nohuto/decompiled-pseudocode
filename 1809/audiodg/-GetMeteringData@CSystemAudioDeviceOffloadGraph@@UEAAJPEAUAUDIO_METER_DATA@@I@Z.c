/*
 * XREFs of ?GetMeteringData@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_METER_DATA@@I@Z @ 0x140038E60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001B8FC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x14001B908 (--_U@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400405A8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceOffloadGraph::GetMeteringData(
        CSystemAudioDeviceOffloadGraph *this,
        struct AUDIO_METER_DATA *a2,
        unsigned int a3)
{
  unsigned __int64 v4; // r14
  __int64 v6; // rbp
  int *v7; // rax
  int *v8; // rsi
  int v9; // ebx
  int *v10; // rax
  int v11; // ecx
  __int128 v13; // [rsp+30h] [rbp-48h] BYREF

  v4 = a3;
  v13 = *(_OWORD *)((char *)this - 136);
  EtwEventActivityIdControl(4LL, &v13);
  v6 = (unsigned int)v4;
  v7 = (int *)operator new[](saturated_mul(v4, 4uLL));
  v8 = v7;
  if ( v7 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(**((_QWORD **)this + 10) + 32LL))(
           *((_QWORD *)this + 10),
           (unsigned int)v4,
           v7);
    if ( v9 >= 0 && (_DWORD)v4 )
    {
      v10 = v8;
      do
      {
        v11 = *v10++;
        *(_DWORD *)a2 = v11;
        a2 = (struct AUDIO_METER_DATA *)((char *)a2 + 12);
        --v6;
      }
      while ( v6 );
    }
  }
  else
  {
    v9 = -2147024882;
  }
  operator delete(v8);
  if ( v9 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x10u,
        (__int64)&WPP_93f76506177b37e92d7cbf41d5171680_Traceguids,
        v9);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceOffloadGraph::GetMeteringData", 0x190u, v9);
  }
  EtwEventActivityIdControl(4LL, &v13);
  return (unsigned int)v9;
}
