/*
 * XREFs of ?BeginInteraction@CManipulationTelemetryData@@UEAAJPEBUIManipulationResource@@@Z @ 0x1802342F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x18005713C (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180066710 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     _TlgCreateWsz @ 0x180158BD8 (_TlgCreateWsz.c)
 */

__int64 __fastcall CManipulationTelemetryData::BeginInteraction(
        CManipulationTelemetryData *this,
        const struct IManipulationResource *a2)
{
  __int64 v4; // rdi
  unsigned int v5; // ebx
  signed int AttachedChannel; // eax
  __int64 v7; // rcx
  CDirtyRegion *v8; // r14
  const WCHAR *v9; // rsi
  unsigned __int64 v10; // kr00_8
  __int64 v11; // rdi
  const WCHAR *v12; // rdx
  __int64 v13; // r10
  CDirtyRegion *v15; // [rsp+30h] [rbp-A9h] BYREF
  int v16; // [rsp+38h] [rbp-A1h] BYREF
  const struct IManipulationResource *v17; // [rsp+40h] [rbp-99h] BYREF
  char v18; // [rsp+48h] [rbp-91h] BYREF
  char v19; // [rsp+4Ah] [rbp-8Fh] BYREF
  int v20; // [rsp+4Ch] [rbp-8Dh]
  int v21; // [rsp+50h] [rbp-89h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-49h] BYREF
  const struct IManipulationResource **v24; // [rsp+A0h] [rbp-39h]
  __int64 v25; // [rsp+A8h] [rbp-31h]
  char *v26; // [rsp+B0h] [rbp-29h]
  __int64 v27; // [rsp+B8h] [rbp-21h]
  char *v28; // [rsp+C0h] [rbp-19h]
  __int64 v29; // [rsp+C8h] [rbp-11h]
  int *v30; // [rsp+D0h] [rbp-9h]
  __int64 v31; // [rsp+D8h] [rbp-1h]
  CDirtyRegion **v32; // [rsp+E0h] [rbp+7h]
  __int64 v33; // [rsp+E8h] [rbp+Fh]

  v15 = 0LL;
  v4 = 0LL;
  if ( a2 )
  {
    AttachedChannel = CComposition::GetAttachedChannel(*((CComposition **)this + 21), *((_DWORD *)this + 44), &v15);
    v8 = v15;
    v5 = AttachedChannel;
    if ( AttachedChannel < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, AttachedChannel, 0x64u, 0LL);
    }
    else
    {
      v9 = (const WCHAR *)*((_QWORD *)v15 + 6);
      if ( v9 )
      {
        v4 = -1LL;
        do
          ++v4;
        while ( v9[v4] );
      }
      v10 = v4;
      v11 = 2 * v4;
      if ( is_mul_ok(v10, 2uLL) )
      {
        v5 = 0;
        v17 = a2;
        v20 = 2;
        v21 = 2;
        if ( dword_180337240 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_180337240, 2uLL) )
        {
          v12 = &pwsz;
          if ( v9 )
            v12 = v9;
          TlgCreateWsz(&pDesc, v12);
          v27 = v13;
          v26 = &v18;
          v24 = &v17;
          v28 = &v19;
          v16 = v20;
          v30 = &v16;
          LODWORD(v15) = v21;
          v32 = &v15;
          v25 = (unsigned int)(v13 + 6);
          v29 = v13;
          v31 = 4LL;
          v33 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_180337240, &unk_1802DD7A6, 0LL, 0LL, v13 + 6, &pData);
        }
        (*(void (__fastcall **)(_QWORD, const struct IManipulationResource **, __int64, const WCHAR *))(**(_QWORD **)(*((_QWORD *)this + 21) + 552LL) + 8LL))(
          *(_QWORD *)(*((_QWORD *)this + 21) + 552LL),
          &v17,
          v11,
          v9);
      }
      else
      {
        v5 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, 0x80070216, 0x6Cu, 0LL);
      }
    }
    if ( v8 )
      CDirtyRegion::Release(v8);
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80070057, 0x61u, 0LL);
  }
  return v5;
}
