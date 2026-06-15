/*
 * XREFs of ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180009D4C
 * Callers:
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x180009498 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180009D00 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?InitAdapterInformation@EndpointDevice@@AEAAJXZ @ 0x180055830 (-InitAdapterInformation@EndpointDevice@@AEAAJXZ.c)
 *     ?InitTopologyIdInfo@EndpointDevice@@AEAAJXZ @ 0x180055A20 (-InitTopologyIdInfo@EndpointDevice@@AEAAJXZ.c)
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x18005E478 (-Initialize@CConstraintModel@@QEAAJXZ.c)
 *     ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18010A510 (-Initialize@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180044928 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180053D70 (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18006B903 (memcpy_0.c)
 *     memmove_0 @ 0x18006B90F (memmove_0.c)
 */

char *__fastcall std::wstring::assign(char *a1, void *Src, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  SIZE_T v9; // rsi
  HANDLE ProcessHeap; // rax
  _QWORD *v11; // rsi
  char *v13; // rsi
  __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  void *v16; // rax

  v3 = *((_QWORD *)a1 + 3);
  if ( a3 <= v3 )
  {
    v13 = a1;
    if ( v3 >= 8 )
      v13 = *(char **)a1;
    v14 = 2 * a3;
    *((_QWORD *)a1 + 2) = a3;
    memmove_0(v13, Src, 2 * a3);
    *(_WORD *)&v13[v14] = 0;
  }
  else
  {
    v7 = 0x7FFFFFFFFFFFFFFELL;
    if ( a3 > 0x7FFFFFFFFFFFFFFELL )
      std::_Xlength_error("string too long");
    if ( (a3 | 7) <= 0x7FFFFFFFFFFFFFFELL )
    {
      v8 = v3 >> 1;
      if ( v3 <= 0x7FFFFFFFFFFFFFFELL - (v3 >> 1) )
      {
        v7 = v8 + v3;
        if ( (a3 | 7) >= v8 + v3 )
          v7 = a3 | 7;
      }
    }
    v9 = 2 * (v7 + 1);
    if ( (unsigned __int64)(v7 + 1) > 0x7FFFFFFFFFFFFFFFLL )
      v9 = -1LL;
    if ( v9 >= 0x1000 )
    {
      v15 = v9 + 39;
      if ( v9 + 39 < v9 )
        v15 = -1LL;
      v16 = operator new(v15);
      if ( !v16 )
      {
        _o__invalid_parameter_noinfo_noreturn();
        JUMPOUT(0x1800844F7LL);
      }
      v11 = (_QWORD *)(((unsigned __int64)v16 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(v11 - 1) = v16;
    }
    else if ( v9 )
    {
      ProcessHeap = GetProcessHeap();
      v11 = HeapAlloc(ProcessHeap, 0, v9);
    }
    else
    {
      v11 = 0LL;
    }
    *((_QWORD *)a1 + 3) = v7;
    *((_QWORD *)a1 + 2) = a3;
    memcpy_0(v11, Src, 2 * a3);
    *((_WORD *)v11 + a3) = 0;
    if ( v3 >= 8 )
      std::_Deallocate<16,0>(*(_QWORD *)a1, 2 * v3 + 2);
    *(_QWORD *)a1 = v11;
  }
  return a1;
}
