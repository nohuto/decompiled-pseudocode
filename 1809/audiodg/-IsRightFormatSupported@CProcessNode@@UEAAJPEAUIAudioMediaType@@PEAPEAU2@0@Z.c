/*
 * XREFs of ?IsRightFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x140017410
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400405A8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CProcessNode::IsRightFormatSupported(
        CProcessNode *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType **a3,
        struct IAudioMediaType *a4)
{
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
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

  if ( !a2 )
    return 0;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, struct IAudioMediaType **, struct IAudioMediaType *))(**((_QWORD **)this + 2) + 48LL))(
         *((_QWORD *)this + 2),
         v16,
         a3,
         a4);
  if ( v7 < 0
    || (v7 = ((__int64 (__fastcall *)(struct IAudioMediaType *, _QWORD *))a2->lpVtbl->GetUncompressedAudioFormat)(
               a2,
               v11),
        v7 < 0) )
  {
LABEL_19:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        12LL,
        &WPP_968226bc83e533aa0e0333cfe0d2c4af_Traceguids,
        (unsigned int)v7);
    }
    AudDGTraceLoggingErrorHelper("CProcessNode::IsRightFormatSupported", 0x110u, v7);
    return (unsigned int)v7;
  }
  v8 = v11[0] - v16[0];
  if ( v11[0] == v16[0] )
    v8 = v11[1] - v16[1];
  if ( v8 || v12 != v17 || v13 != v18 || v14 != v19 || v15 != v20 )
  {
    if ( a3 )
    {
      *a3 = (struct IAudioMediaType *)*((_QWORD *)this + 2);
      v9 = *((_QWORD *)this + 2);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      return 1;
    }
    v7 = -2147467261;
    goto LABEL_19;
  }
  return (unsigned int)v7;
}
