/*
 * XREFs of ?CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1801D7C50
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x18014D554 (_TlgCreateWsz.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18019F7A0 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18019F89C (-GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z @ 0x18019F994 (-GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z.c)
 *     ?ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z @ 0x1801A344C (-ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z.c)
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x1801D63AC (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
 *     ?AdvanceInertiaToTime@CPositionMotion@@QEAAMPEAVCExpressionValueStack@@_KMMMMMM@Z @ 0x1801E07B0 (-AdvanceInertiaToTime@CPositionMotion@@QEAAMPEAVCExpressionValueStack@@_KMMMMMM@Z.c)
 */

__int64 __fastcall CInteractionTrackerPositionAnimation::CalculateInertiaValueWorker(
        CInteractionTrackerPositionAnimation *this,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        float a4,
        float *a5)
{
  __int64 v5; // rax
  float *v6; // r12
  CInteractionTracker *v10; // rsi
  float MostRecentCenterPoint; // xmm0_4
  int v12; // ebx
  float CurrentVelocity; // xmm6_4
  float v14; // xmm3_4
  _DWORD *v15; // rcx
  float v16; // xmm0_4
  float v17; // xmm4_4
  float v18; // xmm0_4
  int v19; // ecx
  const wchar_t *v20; // rax
  int v21; // r10d
  float v23; // [rsp+58h] [rbp-81h] BYREF
  float v24; // [rsp+5Ch] [rbp-7Dh] BYREF
  CInteractionTrackerPositionAnimation *v25; // [rsp+60h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-71h] BYREF
  CInteractionTrackerPositionAnimation **v27; // [rsp+88h] [rbp-51h]
  int v28; // [rsp+90h] [rbp-49h]
  int v29; // [rsp+94h] [rbp-45h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp-41h] BYREF
  float *v31; // [rsp+A8h] [rbp-31h]
  int v32; // [rsp+B0h] [rbp-29h]
  int v33; // [rsp+B4h] [rbp-25h]
  float *v34; // [rsp+B8h] [rbp-21h]
  int v35; // [rsp+C0h] [rbp-19h]
  int v36; // [rsp+C4h] [rbp-15h]
  float *v37; // [rsp+C8h] [rbp-11h]
  int v38; // [rsp+D0h] [rbp-9h]
  int v39; // [rsp+D4h] [rbp-5h]
  float v40; // [rsp+150h] [rbp+77h] BYREF

  v40 = a4;
  v5 = *((_QWORD *)this + 38);
  v6 = a5;
  v23 = 0.0;
  if ( v5 )
    v10 = *(CInteractionTracker **)(v5 + 16);
  else
    v10 = 0LL;
  MostRecentCenterPoint = CInteractionTracker::GetMostRecentCenterPoint((__int64)v10, 2, *((_DWORD *)this + 73));
  v12 = *((_DWORD *)this + 73);
  v23 = MostRecentCenterPoint;
  CurrentVelocity = CInteractionTracker::GetCurrentVelocity(v10, 2);
  CInteractionTracker::GetCurrentValue((__int64)v10, 2);
  v14 = CInteractionTracker::ValueFromBoundary(v10, 2LL, v12);
  v16 = CInteractionTracker::ValueFromBoundary(v15, 1LL, v12);
  v18 = CPositionMotion::AdvanceInertiaToTime(
          (CInteractionTrackerPositionAnimation *)((char *)this + 408),
          a2,
          a3,
          v40,
          v16,
          v14,
          v17,
          CurrentVelocity,
          v23);
  *v6 = v18;
  v24 = v18;
  if ( dword_180305E40 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 2uLL) )
  {
    v19 = *((_DWORD *)this + 73);
    v29 = 0;
    v27 = &v25;
    v25 = this;
    v28 = 8;
    v20 = ScrollAxisToString(v19);
    TlgCreateWsz(&pDesc, v20);
    v33 = 0;
    v36 = 0;
    v39 = 0;
    v34 = &v23;
    v37 = &v40;
    v31 = &v24;
    v32 = v21;
    v35 = v21;
    v38 = v21;
    TlgWrite((TraceLoggingHProvider)&dword_180305E40, &unk_1802B603D, 0LL, 0LL, 7u, &pData);
  }
  return 0LL;
}
