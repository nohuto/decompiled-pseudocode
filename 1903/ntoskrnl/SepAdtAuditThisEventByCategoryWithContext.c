/*
 * XREFs of SepAdtAuditThisEventByCategoryWithContext @ 0x140621B20
 * Callers:
 *     SeAuditingAnyFileEventsWithContextEx @ 0x140087EB0 (SeAuditingAnyFileEventsWithContextEx.c)
 *     SeAuditingFileEventsWithContextEx @ 0x14031DDE0 (SeAuditingFileEventsWithContextEx.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x1406217BC (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x140621A90 (SepAdtAuditThisEventWithContext.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SeCaptureSubjectContext @ 0x1405DDBB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     SepAuditFailed @ 0x1408E2ED0 (SepAuditFailed.c)
 */

char __fastcall SepAdtAuditThisEventByCategoryWithContext(
        unsigned int a1,
        int a2,
        struct _SECURITY_SUBJECT_CONTEXT *a3)
{
  __int64 v4; // rsi
  int v6; // eax
  char v7; // bl
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // r15
  _BYTE *ClientToken; // r8
  unsigned int v11; // edx
  __int16 v12; // r13
  __int16 v13; // r12
  unsigned int v14; // r9d
  __m128i v15; // xmm3
  __m128i v16; // xmm2
  __int64 v17; // rax
  __m128i v18; // xmm1
  __m128i v19; // xmm1
  __m128i v20; // xmm2
  __m128i v21; // xmm2
  unsigned __int16 *v22; // rcx
  __int64 v23; // r9
  int v24; // eax
  int v25; // r11d
  unsigned int i; // r10d
  int v27; // r9d
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-48h] BYREF

  v4 = a1;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v6 = SeAuditingStateByCategory[v4];
  if ( !v6 )
    return 0;
  if ( (v6 & a2) != 0 )
    return 1;
  v7 = 0;
  if ( SepTokenPolicyCounterByCategory[v4] )
  {
    if ( a3 )
    {
      p_SubjectContext = a3;
    }
    else
    {
      p_SubjectContext = &SubjectContext;
      SeCaptureSubjectContext(&SubjectContext);
    }
    ClientToken = p_SubjectContext->ClientToken;
    if ( p_SubjectContext->ClientToken || (ClientToken = p_SubjectContext->PrimaryToken) != 0LL )
    {
      if ( ClientToken[118] == 2 )
      {
        v11 = 0;
        v12 = 0;
        v13 = 0;
        v14 = 0;
        if ( (_DWORD)v4 )
        {
          if ( (unsigned int)v4 >= 8 )
          {
            v15 = 0LL;
            v16 = 0LL;
            do
            {
              v17 = v14 + 4;
              v18 = _mm_unpacklo_epi16(_mm_loadl_epi64((const __m128i *)&AdtpPerCategoryCount[v14 / 4]), (__m128i)0LL);
              v14 += 8;
              v15 = _mm_add_epi32(v18, v15);
              v19 = _mm_add_epi32(
                      _mm_unpacklo_epi16(
                        _mm_loadl_epi64((const __m128i *)((char *)AdtpPerCategoryCount + 2 * v17)),
                        (__m128i)0LL),
                      v16);
              v16 = v19;
            }
            while ( v14 < ((unsigned int)v4 & 0xFFFFFFF8) );
            v20 = _mm_add_epi32(v19, v15);
            v21 = _mm_add_epi32(v20, _mm_srli_si128(v20, 8));
            v11 = _mm_cvtsi128_si32(_mm_add_epi32(v21, _mm_srli_si128(v21, 4)));
          }
          if ( v14 < (unsigned int)v4 )
          {
            v22 = (unsigned __int16 *)(0x140000000LL + 2LL * v14 + 10146256);
            v23 = (unsigned int)v4 - v14;
            do
            {
              v24 = *v22++;
              v11 += v24;
              --v23;
            }
            while ( v23 );
          }
        }
        v25 = *((unsigned __int16 *)AdtpPerCategoryCount + (unsigned int)v4);
        for ( i = v11 + v25; v11 < i; ++v11 )
        {
          v27 = (unsigned __int8)ClientToken[((unsigned __int64)v11 >> 1) + 88] >> (4 * (v11 & 1));
          if ( (v27 & 1) != 0 )
          {
            if ( (a2 & 2) != 0 )
              goto LABEL_34;
            ++v12;
          }
          if ( (v27 & 4) != 0 )
          {
            if ( (a2 & 0x20) != 0 )
              goto LABEL_34;
            ++v13;
          }
        }
        if ( (a2 & 1) != 0 && v12 == (_WORD)v25 || (a2 & 0x10) != 0 && v13 == (_WORD)v25 )
LABEL_34:
          v7 = 1;
      }
    }
    else
    {
      SepAuditFailed(3221225596LL);
    }
    if ( !a3 )
      SeReleaseSubjectContext(p_SubjectContext);
  }
  return v7;
}
