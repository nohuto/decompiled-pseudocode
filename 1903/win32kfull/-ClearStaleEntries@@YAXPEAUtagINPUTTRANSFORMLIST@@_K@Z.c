/*
 * XREFs of ?ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z @ 0x1C000839C
 * Callers:
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x1C0117850 (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_i @ 0x1C01F69B4 (WPP_RECORDER_SF_i.c)
 */

void __fastcall ClearStaleEntries(struct tagINPUTTRANSFORMLIST *a1, __int64 a2, __int64 a3, int a4)
{
  char *v4; // rsi
  char *v6; // rdi
  unsigned __int64 v7; // r8
  char *v8; // rcx
  char *i; // rbx
  __int64 v10; // rcx
  char **v11; // rax
  int v12; // [rsp+20h] [rbp-18h]

  v4 = (char *)a1 + 8;
  v6 = (char *)*((_QWORD *)a1 + 1);
  if ( v6 != (char *)a1 + 8 && v6 != *((char **)a1 + 2) )
  {
    v7 = gqpcAgeLimit;
    if ( gqpcAgeLimit || (v7 = 5LL * gliQpcFreq, (gqpcAgeLimit = 5LL * gliQpcFreq) != 0) )
    {
      v8 = *(char **)v6;
      if ( *(char **)v6 != v4 )
      {
        do
        {
          if ( a2 - *((_QWORD *)v6 + 2) > v7 )
            break;
          v6 = v8;
          v8 = *(char **)v8;
        }
        while ( v8 != v4 );
        for ( i = *(char **)v6; *(char **)v6 != v4; i = *(char **)v6 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_i((_DWORD)v8, a2, v7, a4, v12, *((_QWORD *)i + 2));
          EtwTraceTransformAgeDecay(a1, *((_QWORD *)i + 2));
          v10 = *(_QWORD *)i;
          if ( *(char **)(*(_QWORD *)i + 8LL) != i || (v11 = (char **)*((_QWORD *)i + 1), *v11 != i) )
            __fastfail(3u);
          *v11 = (char *)v10;
          *(_QWORD *)(v10 + 8) = v11;
          Win32FreePool(i);
          *((_DWORD *)a1 + 22) |= 2u;
        }
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_(gliQpcFreq, a2, v7 + 10, v7 + 11, (__int64)&WPP_8438351599043bf8e2667f448536d6b5_Traceguids);
    }
  }
}
