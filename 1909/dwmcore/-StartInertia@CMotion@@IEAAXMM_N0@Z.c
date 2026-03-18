/*
 * XREFs of ?StartInertia@CMotion@@IEAAXMM_N0@Z @ 0x18020E8DC
 * Callers:
 *     ?StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXM_N@Z @ 0x1802080C0 (-StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXM_N@Z.c)
 *     ?StartInertia@CPositionMotion@@QEAAXMMMMMM_N0@Z @ 0x18020F444 (-StartInertia@CPositionMotion@@QEAAXMMMMMM_N0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180017B68 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     _TlgCreateWsz @ 0x180158BD8 (_TlgCreateWsz.c)
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x180205E6C (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
 */

void __fastcall CMotion::StartInertia(CMotion *this, float a2, float a3, char a4, bool a5)
{
  char v7; // al
  float v8; // xmm0_4
  char v9; // cl
  float (__fastcall *v10)(CMotion *); // rax
  float v11; // xmm1_4
  float v12; // xmm0_4
  __int64 v13; // rax
  int v14; // ecx
  const wchar_t *v15; // rax
  BOOL v16; // [rsp+38h] [rbp-81h] BYREF
  CMotion *v17; // [rsp+40h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-71h] BYREF
  CMotion **v19; // [rsp+68h] [rbp-51h]
  int v20; // [rsp+70h] [rbp-49h]
  int v21; // [rsp+74h] [rbp-45h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp-41h] BYREF
  char *v23; // [rsp+88h] [rbp-31h]
  int v24; // [rsp+90h] [rbp-29h]
  int v25; // [rsp+94h] [rbp-25h]
  char *v26; // [rsp+98h] [rbp-21h]
  int v27; // [rsp+A0h] [rbp-19h]
  int v28; // [rsp+A4h] [rbp-15h]
  char *v29; // [rsp+A8h] [rbp-11h]
  int v30; // [rsp+B0h] [rbp-9h]
  int v31; // [rsp+B4h] [rbp-5h]
  char *v32; // [rsp+B8h] [rbp-1h]
  int v33; // [rsp+C0h] [rbp+7h]
  int v34; // [rsp+C4h] [rbp+Bh]
  BOOL *v35; // [rsp+C8h] [rbp+Fh]
  int v36; // [rsp+D0h] [rbp+17h]
  int v37; // [rsp+D4h] [rbp+1Bh]

  *((_DWORD *)this + 6) = 0;
  *((float *)this + 8) = a3;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 17);
  v7 = *((_BYTE *)this + 8);
  if ( !a5 )
    v7 = a4 | v7 & 0xFE;
  v8 = *((float *)this + 10);
  if ( v8 == 0.0 )
    v9 = 0;
  else
    v9 = 4;
  *((_DWORD *)this + 10) = 0;
  *((_BYTE *)this + 8) = v9 | v7 & 0xFB;
  v10 = *(float (__fastcall **)(CMotion *))(*(_QWORD *)this + 40LL);
  v11 = fminf(COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v8 + a2)) & _xmm), *((float *)this + 13))
      * (float)((float)(v8 + a2) > 0.0);
  *((float *)this + 12) = v11;
  *((float *)this + 7) = v11;
  v12 = v10(this);
  v13 = *(_QWORD *)this;
  *((float *)this + 17) = v12;
  *((float *)this + 15) = (*(float (__fastcall **)(CMotion *))(v13 + 24))(this);
  *((_DWORD *)this + 4) = 2;
  if ( dword_180337240 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_180337240, 2uLL) )
    {
      v14 = *((_DWORD *)this + 3);
      v21 = 0;
      v19 = &v17;
      v17 = this;
      v20 = 8;
      v15 = ScrollAxisToString(v14);
      TlgCreateWsz(&pDesc, v15);
      v25 = 0;
      v28 = 0;
      v31 = 0;
      v34 = 0;
      v37 = 0;
      v16 = a5;
      v35 = &v16;
      v23 = (char *)this + 44;
      v24 = 4;
      v26 = (char *)this + 48;
      v27 = 4;
      v29 = (char *)this + 68;
      v30 = 4;
      v32 = (char *)this + 60;
      v33 = 4;
      v36 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_180337240, &unk_1802DB83F, 0LL, 0LL, 9u, &pData);
    }
  }
}
