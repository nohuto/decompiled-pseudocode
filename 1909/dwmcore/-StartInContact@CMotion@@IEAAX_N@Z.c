/*
 * XREFs of ?StartInContact@CMotion@@IEAAX_N@Z @ 0x18020E808
 * Callers:
 *     ?StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ @ 0x1802079D0 (-StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ.c)
 *     ?StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ @ 0x180208010 (-StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180017B68 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x180158BD8 (_TlgCreateWsz.c)
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x180205E6C (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
 */

void __fastcall CMotion::StartInContact(CMotion *this, char a2)
{
  int v3; // ecx
  const wchar_t *v4; // rax
  CMotion *v5; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  CMotion **v7; // [rsp+60h] [rbp-38h]
  int v8; // [rsp+68h] [rbp-30h]
  int v9; // [rsp+6Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-28h] BYREF

  *((_BYTE *)this + 8) &= ~2u;
  *((_BYTE *)this + 8) |= 2 * a2;
  *((_DWORD *)this + 4) = 1;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 17);
  if ( dword_180337240 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_180337240, 2uLL) )
    {
      v3 = *((_DWORD *)this + 3);
      v9 = 0;
      v7 = &v5;
      v5 = this;
      v8 = 8;
      v4 = ScrollAxisToString(v3);
      TlgCreateWsz(&pDesc, v4);
      TlgWrite((TraceLoggingHProvider)&dword_180337240, &unk_1802DB7A6, 0LL, 0LL, 4u, &pData);
    }
  }
}
