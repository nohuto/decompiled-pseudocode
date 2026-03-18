/*
 * XREFs of ?xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z @ 0x1C02264B4
 * Callers:
 *     EditionHandleMitSignal @ 0x1C00AE650 (EditionHandleMitSignal.c)
 *     zzzPostInertiaMessage @ 0x1C0226BCC (zzzPostInertiaMessage.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00B2690 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     WakeDIT @ 0x1C01089A4 (WakeDIT.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall xxxRouteSyntheticTouchpadToMT(
        __int64 a1,
        struct tagPOINT a2,
        struct tagPOINT a3,
        unsigned __int64 a4)
{
  unsigned int v6; // esi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _DWORD v14[4]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v15[16]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v16[72]; // [rsp+B0h] [rbp-50h] BYREF

  v6 = a1;
  memset(&v16[3], 0, 177);
  memset(&v16[49], 0, 177);
  gInertiaMTInfo &= ~1u;
  v8 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))PsGetCurrentProcess)(a1, a2, a3, a4);
  if ( (unsigned int)IsProcessDwm(v8) )
  {
    memset(v15, 0, sizeof(v15));
    memset(v16, 0, sizeof(v16));
    LODWORD(v15[6]) = 1;
    v15[13] = v16;
    v16[0] = 0x18000000400LL;
    HIDWORD(v16[48]) = a4;
    LODWORD(v16[29]) = 5;
    HIDWORD(v16[30]) = 0x800000;
    v16[35] = a2;
    v16[33] = a2;
    v16[36] = a3;
    v16[34] = a3;
    LODWORD(v16[38]) = v6;
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)v14);
    CTouchProcessor::ForwardPointerInputFrameToManipulationThread((const struct CPointerInputFrame *)v15);
    if ( !v14[0] )
      UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  }
  else
  {
    gInertiaMTInfo |= 1u;
    dword_1C031AE0C = v6;
    stru_1C031AE10 = a2;
    stru_1C031AE18 = a3;
    qword_1C031AE20 = a4;
    WakeDIT(4u);
  }
  CInputDest::~CInputDest((CInputDest *)&v16[49]);
  CInputDest::~CInputDest((CInputDest *)&v16[3]);
  return 0LL;
}
