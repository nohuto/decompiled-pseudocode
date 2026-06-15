/*
 * XREFs of ?ConfigureAPOInterfaces@CPipeInstance@@AEAAJPEAUIAudioGraphCallback@@@Z @ 0x140009F44
 * Callers:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140009ECC (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ?CopyTo@?$CComPtrBase@UIAudioMediaType@@@ATL@@QEAAJPEAPEAUIAudioMediaType@@@Z @ 0x14000A0A0 (-CopyTo@-$CComPtrBase@UIAudioMediaType@@@ATL@@QEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015744 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x140015750 (--_U@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1400168B6 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14002BF24 (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14003CB48 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CPipeInstance::ConfigureAPOInterfaces(CPipeInstance *this, struct IAudioGraphCallback *a2)
{
  __int64 v2; // rdi
  _QWORD *v3; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rbp
  __int64 v10; // r14
  __int64 v11; // rcx
  _DWORD *v12; // rcx
  int v13; // ebx
  _QWORD *v14; // r14

  v2 = 0LL;
  v3 = 0LL;
  if ( !a2 )
    return 0;
  v6 = *((_QWORD *)this + 3);
  if ( v6 )
  {
    do
    {
      v7 = *(_QWORD *)(v6 + 16);
      v6 = *(_QWORD *)(v6 + 8);
      if ( *(_DWORD *)(v7 + 40) == 2 && !**(_DWORD **)(v7 + 32) )
        v2 = (unsigned int)(v2 + 1);
    }
    while ( v6 );
    if ( (_DWORD)v2 )
    {
      v8 = operator new[](saturated_mul((unsigned int)v2, 8uLL));
      v3 = v8;
      if ( !v8 )
      {
        v13 = -2147024882;
LABEL_28:
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            57LL,
            &WPP_d4b18a9a07fa3bd0098f681e5ce2fb5d_Traceguids,
            (unsigned int)v13);
        }
        AudDGTraceLoggingErrorHelper("CPipeInstance::ConfigureAPOInterfaces", 0x1127u, v13);
        return (unsigned int)v13;
      }
      memset_0(v8, 0, 8LL * (unsigned int)v2);
      v9 = *((_QWORD *)this + 3);
      v10 = 0LL;
      while ( v9 )
      {
        v11 = *(_QWORD *)(v9 + 16);
        v9 = *(_QWORD *)(v9 + 8);
        if ( *(_DWORD *)(v11 + 40) == 2 )
        {
          v12 = *(_DWORD **)(v11 + 32);
          if ( !*v12 && (unsigned int)v10 < (unsigned int)v2 )
          {
            v13 = ATL::CComPtrBase<IAudioMediaType>::CopyTo(v12 + 10, &v3[v10]);
            if ( v13 < 0 )
              goto LABEL_17;
            v10 = (unsigned int)(v10 + 1);
          }
        }
      }
    }
  }
  v13 = (*(__int64 (__fastcall **)(struct IAudioGraphCallback *, CPipeInstance *, _QWORD, _QWORD *))(*(_QWORD *)a2 + 24LL))(
          a2,
          this,
          (unsigned int)v2,
          v3);
LABEL_17:
  if ( v3 )
  {
    if ( (_DWORD)v2 )
    {
      v14 = v3;
      do
      {
        if ( *v14 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v14 + 16LL))(*v14);
          *v14 = 0LL;
        }
        ++v14;
        --v2;
      }
      while ( v2 );
    }
    operator delete(v3);
  }
  if ( v13 < 0 )
    goto LABEL_28;
  return (unsigned int)v13;
}
