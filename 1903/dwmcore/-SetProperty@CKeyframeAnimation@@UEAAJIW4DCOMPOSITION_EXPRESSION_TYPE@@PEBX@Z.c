/*
 * XREFs of ?SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800BCDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800C7190 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ?UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z @ 0x1800C76CC (-UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z.c)
 *     ?SetProgress@CKeyframeAnimation@@AEAAXM@Z @ 0x1800D0448 (-SetProgress@CKeyframeAnimation@@AEAAXM@Z.c)
 *     ?SetPlaybackRate@CKeyframeAnimation@@AEAAXM@Z @ 0x1800D1CD0 (-SetPlaybackRate@CKeyframeAnimation@@AEAAXM@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?AdjustAllKeyframeTime@CKeyframeAnimation@@AEAAXM@Z @ 0x1801E136C (-AdjustAllKeyframeTime@CKeyframeAnimation@@AEAAXM@Z.c)
 *     ?SetInitialDelay@CKeyframeAnimation@@AEAAJM@Z @ 0x1801E1C1C (-SetInitialDelay@CKeyframeAnimation@@AEAAJM@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  __int64 v5; // rax
  unsigned int v6; // edi
  int updated; // eax
  unsigned int v9; // r9d
  unsigned int v10; // eax
  UINT32 v11; // r10d
  unsigned int TracingCookie; // eax
  UINT32 v13; // r10d
  UINT32 cData; // [rsp+20h] [rbp-19h]
  float v15; // [rsp+30h] [rbp-9h] BYREF
  float v16[3]; // [rsp+34h] [rbp-5h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  float *v18; // [rsp+60h] [rbp+27h]
  UINT32 v19; // [rsp+68h] [rbp+2Fh]
  int v20; // [rsp+6Ch] [rbp+33h]
  float *v21; // [rsp+70h] [rbp+37h]
  UINT32 v22; // [rsp+78h] [rbp+3Fh]
  int v23; // [rsp+7Ch] [rbp+43h]

  if ( a3 == 18 )
  {
    switch ( a2 )
    {
      case 23:
        v5 = *(_QWORD *)(a1 + 416);
        *(float *)(a1 + 516) = fminf(fmaxf(*a4, 0.0), 1.0);
        if ( (*(_BYTE *)(v5 + 112) & 4) != 0 )
        {
          if ( *(_DWORD *)(a1 + 520) )
          {
            updated = CKeyframeAnimation::UpdatePlaybackState(a1, 0LL, 0LL, 0LL);
            v6 = updated;
            if ( updated < 0 )
            {
              cData = 2062;
LABEL_10:
              v9 = updated;
LABEL_30:
              MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v9, cData, 0LL);
              return v6;
            }
          }
        }
        return 0;
      case 30:
        CKeyframeAnimation::SetPlaybackRate((CKeyframeAnimation *)a1, *a4);
        return 0;
      case 32:
        CKeyframeAnimation::SetProgress((CKeyframeAnimation *)a1, *a4);
        return 0;
    }
LABEL_29:
    v6 = -2147024809;
    v9 = -2147024809;
    cData = 2119;
    goto LABEL_30;
  }
  if ( a3 != 42 )
    goto LABEL_29;
  if ( a2 != 15 )
  {
    if ( a2 == 29 )
    {
      v15 = *a4;
      if ( v15 >= 1.0 )
      {
        CKeyframeAnimation::AdjustAllKeyframeTime((CKeyframeAnimation *)a1, v15);
        if ( *(int *)(*(_QWORD *)(a1 + 304) + 4LL) < 0
          && dword_18033A240 > 4u
          && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 4uLL) )
        {
          TracingCookie = CBaseExpression::GetTracingCookie((CBaseExpression *)a1);
          v20 = 0;
          v23 = 0;
          LODWORD(v16[0]) = TracingCookie;
          v18 = v16;
          v21 = &v15;
          v19 = v13;
          v22 = v13;
          TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DC61B, 0LL, 0LL, v13, &pData);
        }
      }
      return 0;
    }
    goto LABEL_29;
  }
  v16[0] = *a4;
  if ( v16[0] > 0.0 )
  {
    updated = CKeyframeAnimation::SetInitialDelay((CKeyframeAnimation *)a1, v16[0]);
    v6 = updated;
    if ( updated < 0 )
    {
      cData = 2071;
      goto LABEL_10;
    }
    if ( *(int *)(*(_QWORD *)(a1 + 304) + 4LL) < 0
      && dword_18033A240 > 4u
      && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 4uLL) )
    {
      v10 = CBaseExpression::GetTracingCookie((CBaseExpression *)a1);
      v20 = 0;
      v23 = 0;
      v15 = *(float *)&v10;
      v18 = &v15;
      v21 = v16;
      v19 = v11;
      v22 = v11;
      TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DC5D9, 0LL, 0LL, v11, &pData);
    }
  }
  return 0;
}
