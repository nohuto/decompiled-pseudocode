/*
 * XREFs of ?Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x180061610
 * Callers:
 *     ?GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@PEAUHSTRING__@@@Z @ 0x180063DF0 (-GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VCorrelationV.c)
 * Callees:
 *     ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV1_t@@@Z @ 0x1800614D0 (--0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV1_t@@@Z.c)
 *     ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z @ 0x180061570 (--0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CABF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

struct TraceLoggingCorrelationVector *__fastcall TraceLoggingCorrelationVector::Set(const char *Source)
{
  __int64 v2; // rax
  char v3; // bl
  unsigned __int64 v4; // rcx
  __int64 v5; // rsi
  void *v6; // rax
  __int64 v7; // rax
  void *v8; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  struct TraceLoggingCorrelationVector *result; // rax
  char *v12; // rax
  char *v13; // rdi
  unsigned int v14; // eax
  __int64 v15; // r14
  void *v16; // rax
  __int64 v17; // rax
  void *v18; // rax
  rsize_t v19; // rdi

  v2 = strchr(Source, 46) - Source;
  if ( v2 == 22 )
    v3 = 2;
  else
    v3 = v2 == 16;
  if ( !v3 )
    return 0LL;
  v4 = 129LL;
  if ( v3 == 1 )
    v4 = 65LL;
  v5 = -1LL;
  do
    ++v5;
  while ( Source[v5] );
  if ( v5 + 1 <= v4 && Source[v5 - 1] == 33 )
  {
    if ( v3 == 1 )
    {
      v8 = operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v8 )
      {
        v7 = TraceLoggingCorrelationVector::TraceLoggingCorrelationVector((__int64)v8);
        goto LABEL_17;
      }
    }
    else
    {
      if ( v3 != 2 )
        return 0LL;
      v6 = operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v6 )
      {
        v7 = TraceLoggingCorrelationVector::TraceLoggingCorrelationVector((__int64)v6);
LABEL_17:
        v9 = v7;
        goto LABEL_19;
      }
    }
    v9 = 0LL;
LABEL_19:
    if ( v9 )
    {
      strncpy_s((char *)v9, 0x81uLL, Source, v5 - 1);
      *(_BYTE *)(v9 + 129) = v5 - 1;
      *(_QWORD *)(v9 + 136) = (v5 + 1) << 32;
      v10 = *(_QWORD *)(v9 + 136) | 0x8000000000000000uLL;
LABEL_21:
      *(_QWORD *)(v9 + 136) = v10;
      result = (struct TraceLoggingCorrelationVector *)v9;
      *(_BYTE *)(*(unsigned __int8 *)(v9 + 129) + v9) = 0;
      return result;
    }
    return 0LL;
  }
  if ( v5 + 2 > v4 )
    return 0LL;
  v12 = strrchr(Source, 46);
  if ( !v12 )
    return 0LL;
  v13 = v12 + 1;
  _set_errno(0);
  v14 = strtol(v13, 0LL, 10);
  v15 = v14;
  if ( !v14 && *v13 != 48 && v13[1] )
    return 0LL;
  if ( *_errno() == 34 )
    return 0LL;
  if ( v3 == 1 )
  {
    v18 = operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v18 )
    {
      v17 = TraceLoggingCorrelationVector::TraceLoggingCorrelationVector((__int64)v18);
      goto LABEL_34;
    }
  }
  else
  {
    if ( v3 != 2 )
      return 0LL;
    v16 = operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v16 )
    {
      v17 = TraceLoggingCorrelationVector::TraceLoggingCorrelationVector((__int64)v16);
LABEL_34:
      v9 = v17;
      goto LABEL_36;
    }
  }
  v9 = 0LL;
LABEL_36:
  if ( v9 )
  {
    v19 = v13 - Source;
    strncpy_s((char *)v9, 0x81uLL, Source, v19);
    *(_BYTE *)(v9 + 129) = v19;
    *(_QWORD *)(v9 + 136) = v15 | ((v5 + 1) << 32);
    v10 = *(_QWORD *)(v9 + 136) & 0x7FFFFFFFFFFFFFFFLL;
    goto LABEL_21;
  }
  return 0LL;
}
