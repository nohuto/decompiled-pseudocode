/*
 * XREFs of ?IsLeftFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x1400130D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyTo@?$CComPtrBase@UIAudioMediaType@@@ATL@@QEAAJPEAPEAUIAudioMediaType@@@Z @ 0x14000A090 (-CopyTo@-$CComPtrBase@UIAudioMediaType@@@ATL@@QEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     __security_check_cookie @ 0x140015E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14002BE64 (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14003CAE8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CProcessNode::IsLeftFormatSupported(
        CProcessNode *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType **a3,
        struct IAudioMediaType *a4)
{
  _QWORD *v4; // rsi
  __int64 v6; // rcx
  int v8; // ebx
  __int64 v9; // rax
  _QWORD v11[2]; // [rsp+20h] [rbp-60h] BYREF
  int v12; // [rsp+30h] [rbp-50h]
  int v13; // [rsp+34h] [rbp-4Ch]
  int v14; // [rsp+38h] [rbp-48h]
  float v15; // [rsp+3Ch] [rbp-44h]
  _QWORD v16[2]; // [rsp+48h] [rbp-38h] BYREF
  int v17; // [rsp+58h] [rbp-28h]
  int v18; // [rsp+5Ch] [rbp-24h]
  int v19; // [rsp+60h] [rbp-20h]
  float v20; // [rsp+64h] [rbp-1Ch]

  v4 = (_QWORD *)((char *)this + 8);
  v6 = *((_QWORD *)this + 1);
  if ( !v6 )
    return 0;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD *, struct IAudioMediaType **, struct IAudioMediaType *))(*(_QWORD *)v6 + 48LL))(
         v6,
         v16,
         a3,
         a4);
  if ( v8 < 0
    || (v8 = ((__int64 (__fastcall *)(struct IAudioMediaType *, _QWORD *))a2->lpVtbl->GetUncompressedAudioFormat)(
               a2,
               v11),
        v8 < 0) )
  {
LABEL_15:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        11LL,
        &WPP_8d9f8a1f47633de0740c8ad81d33d659_Traceguids,
        (unsigned int)v8);
    }
    AudDGTraceLoggingErrorHelper("CProcessNode::IsLeftFormatSupported", 0xC9u, v8);
    return (unsigned int)v8;
  }
  v9 = v11[0] - v16[0];
  if ( v11[0] == v16[0] )
    v9 = v11[1] - v16[1];
  if ( v9 || v12 != v17 || v13 != v18 || v14 != v19 || v15 != v20 )
  {
    v8 = ATL::CComPtrBase<IAudioMediaType>::CopyTo(v4, a3);
    if ( v8 >= 0 )
      return 1;
    goto LABEL_15;
  }
  return (unsigned int)v8;
}
