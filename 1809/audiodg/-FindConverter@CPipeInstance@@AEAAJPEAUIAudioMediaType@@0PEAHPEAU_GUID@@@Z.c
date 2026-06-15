/*
 * XREFs of ?FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z @ 0x140011B84
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000B420 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140010F90 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400405A8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CPipeInstance::FindConverter(
        CPipeInstance *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType *a3,
        int *a4,
        struct _GUID *a5)
{
  int v8; // ebx
  int v9; // ecx
  int v11; // eax
  _BYTE v12[16]; // [rsp+20h] [rbp-88h] BYREF
  int v13; // [rsp+30h] [rbp-78h]
  float v14; // [rsp+3Ch] [rbp-6Ch]
  _BYTE v15[16]; // [rsp+48h] [rbp-60h] BYREF
  int v16; // [rsp+58h] [rbp-50h]
  float v17; // [rsp+64h] [rbp-44h]

  *a4 = 1;
  v8 = ((__int64 (__fastcall *)(struct IAudioMediaType *, _BYTE *))a3->lpVtbl->GetUncompressedAudioFormat)(a3, v15);
  if ( v8 < 0 )
    goto LABEL_18;
  v8 = ((__int64 (__fastcall *)(struct IAudioMediaType *, _BYTE *))a2->lpVtbl->GetUncompressedAudioFormat)(a2, v12);
  if ( v8 < 0 )
    goto LABEL_18;
  if ( v17 != v14 || (v9 = *((_DWORD *)this + 33), (v9 & 8) != 0) )
  {
    if ( (*((_BYTE *)this + 132) & 2) != 0 )
    {
      *a5 = GUID_27c98999_2895_4829_b080_5a8b65bd3db0;
      v11 = *((_DWORD *)this + 33);
      if ( (v11 & 8) != 0 )
      {
        *a4 = 0;
        v11 = *((_DWORD *)this + 33);
      }
      *((_DWORD *)this + 33) = v11 & 0xFFFFFFF5;
LABEL_8:
      if ( v8 >= 0 )
        return (unsigned int)v8;
      goto LABEL_18;
    }
LABEL_14:
    v8 = -2005139408;
    goto LABEL_8;
  }
  if ( v16 != v13 )
  {
    if ( (v9 & 4) != 0 )
    {
      *a5 = GUID_541987ee_0e02_411e_9a85_1fc6156e7f4b;
      *((_DWORD *)this + 33) &= ~4u;
      goto LABEL_8;
    }
    goto LABEL_14;
  }
  if ( (v9 & 1) != 0 )
  {
    *a5 = GUID_3fd7f233_a716_472e_8f2f_c25954f34e96;
    goto LABEL_8;
  }
  v8 = -2005139408;
LABEL_18:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      35LL,
      &WPP_48d0519fd63337424d216177f8c49edf_Traceguids,
      (unsigned int)v8);
  }
  AudDGTraceLoggingErrorHelper("CPipeInstance::FindConverter", 0x8E0u, v8);
  return (unsigned int)v8;
}
