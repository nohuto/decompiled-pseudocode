/*
 * XREFs of ?BeginInteraction@CManipulationTelemetryData@@UEAAJPEBUIManipulationResource@@@Z @ 0x1801F5310
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x1800CEA84 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulationTelemetryData::BeginInteraction(
        CManipulationTelemetryData *this,
        const struct IManipulationResource *a2)
{
  __int64 v2; // rsi
  _WORD *v4; // rdi
  unsigned int v5; // ebx
  signed int AttachedChannel; // eax
  unsigned __int64 v7; // rcx
  CMILRefCountBase *v8; // r13
  _WORD *v9; // r15
  SIZE_T v10; // r14
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  int v13; // r9d
  bool v14; // cf
  _WORD *v15; // rax
  unsigned __int16 v16; // si
  __int64 v17; // rdx
  __int64 v18; // r9
  unsigned int cData; // [rsp+28h] [rbp-A9h]
  CMILRefCountBase *v21; // [rsp+38h] [rbp-99h] BYREF
  __int64 v22; // [rsp+40h] [rbp-91h] BYREF
  CManipulationTelemetryData *v23; // [rsp+48h] [rbp-89h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-79h] BYREF
  _WORD *v25; // [rsp+78h] [rbp-59h]
  __int64 v26; // [rsp+80h] [rbp-51h]
  __int64 v27; // [rsp+88h] [rbp-49h]
  __int64 v28; // [rsp+90h] [rbp-41h]
  char *v29; // [rsp+98h] [rbp-39h]
  __int64 v30; // [rsp+A0h] [rbp-31h]
  char *v31; // [rsp+A8h] [rbp-29h]
  __int64 v32; // [rsp+B0h] [rbp-21h]
  __int64 *v33; // [rsp+B8h] [rbp-19h]
  __int64 v34; // [rsp+C0h] [rbp-11h]
  CMILRefCountBase **v35; // [rsp+C8h] [rbp-9h]
  __int64 v36; // [rsp+D0h] [rbp-1h]
  char *v37; // [rsp+D8h] [rbp+7h]
  __int64 v38; // [rsp+E0h] [rbp+Fh]
  char *v39; // [rsp+E8h] [rbp+17h]
  __int64 v40; // [rsp+F0h] [rbp+1Fh]

  v2 = 0LL;
  v23 = this;
  v21 = 0LL;
  v4 = 0LL;
  if ( !a2 )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0x58u);
    goto LABEL_27;
  }
  AttachedChannel = CComposition::GetAttachedChannel(*((CComposition **)this + 18), *((_DWORD *)this + 38), &v21);
  v8 = v21;
  v5 = AttachedChannel;
  if ( AttachedChannel < 0 )
  {
    cData = 91;
    goto LABEL_23;
  }
  v9 = (_WORD *)*((_QWORD *)v21 + 6);
  v10 = -1LL;
  v7 = 0LL;
  if ( v9 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( v9[v2] );
  }
  v11 = v2 + 1;
  v12 = 2 * v11;
  if ( is_mul_ok(v11, 2uLL) )
  {
    v7 = v12 + 32;
    v14 = v12 >= 0xFFFFFFFFFFFFFFE0uLL;
    if ( v12 < 0xFFFFFFFFFFFFFFE0uLL )
      v10 = v12 + 32;
    AttachedChannel = v12 >= 0xFFFFFFFFFFFFFFE0uLL ? 0x80070216 : 0;
    v5 = v14 ? 0x80070216 : 0;
    if ( v7 >= 0x20 )
    {
      v15 = operator new(v10);
      v4 = v15;
      if ( v15 )
      {
        memset_0(v15, 0, v10);
        v16 = v11 - 1;
        v4[4] = v10;
        v4[13] = v16;
        if ( v9 )
        {
          v4[12] = 32;
          memcpy_0(v4 + 16, v9, 2LL * v16);
        }
        *(_QWORD *)v4 = a2;
        *((_DWORD *)v4 + 4) = 2;
        *((_DWORD *)v4 + 5) = 2;
        if ( dword_180305E40 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 2uLL) )
        {
          v25 = v4;
          v29 = (char *)(v4 + 5);
          v31 = (char *)(v4 + 6);
          v33 = &v22;
          v35 = &v21;
          v37 = (char *)(v4 + 12);
          v26 = 8LL;
          v27 = v18;
          v28 = v17;
          v30 = v17;
          v32 = v17;
          LODWORD(v22) = v17;
          v34 = 4LL;
          LODWORD(v21) = v17;
          v36 = 4LL;
          v38 = v17;
          v39 = (char *)(v4 + 13);
          v40 = v17;
          TlgWrite((TraceLoggingHProvider)&dword_180305E40, &unk_1802B82FB, 0LL, 0LL, 0xAu, &pData);
        }
        (*(void (__fastcall **)(_QWORD, _WORD *, __int64, _WORD *))(**(_QWORD **)(*((_QWORD *)v23 + 18) + 536LL) + 8LL))(
          *(_QWORD *)(*((_QWORD *)v23 + 18) + 536LL),
          v4,
          2LL * (unsigned __int16)v4[13],
          v4 + 16);
        goto LABEL_25;
      }
      v5 = -2147024882;
      cData = 115;
      goto LABEL_9;
    }
    cData = 113;
LABEL_23:
    v13 = AttachedChannel;
    goto LABEL_24;
  }
  v5 = -2147024362;
  cData = 108;
LABEL_9:
  v13 = v5;
LABEL_24:
  MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v13, cData);
LABEL_25:
  if ( v8 )
    CMILRefCountBase::Release(v8);
LABEL_27:
  WPF::ProcessHeapImpl::Free(v4);
  return v5;
}
