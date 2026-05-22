/*
 * XREFs of ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18001E1F4
 * Callers:
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180006FC0 (-RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEATwil_detail.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18001E06C (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18001E1C4 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x18002C4C6 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x180037D6F (memcpy_0.c)
 */

bool __fastcall wil::details_abi::heap_buffer::reserve(wil::details_abi::heap_buffer *this, unsigned __int64 a2)
{
  SIZE_T v3; // rdi
  HANDLE ProcessHeap; // rax
  char *v5; // rax
  char *v6; // rsi
  __int64 v7; // rbp
  size_t v8; // r14
  void *v9; // rbp
  HANDLE v10; // rax

  if ( *((_QWORD *)this + 2) - *(_QWORD *)this < a2 )
  {
    v3 = (a2 & 0xFFFFFFFFFFFFFFC0uLL) + 64;
    ProcessHeap = GetProcessHeap();
    v5 = (char *)HeapAlloc(ProcessHeap, 0, v3);
    v6 = v5;
    if ( !v5 )
      return (char)v5;
    v7 = *(_QWORD *)this;
    v8 = *((_QWORD *)this + 1) - *(_QWORD *)this;
    if ( !v8 )
      goto LABEL_4;
    if ( v7 && v3 >= v8 )
    {
      memcpy_0(v5, *(const void **)this, v8);
LABEL_4:
      v9 = (void *)*((_QWORD *)this + 3);
      *((_QWORD *)this + 3) = v6;
      if ( v9 )
      {
        v10 = GetProcessHeap();
        HeapFree(v10, 0, v9);
      }
      *(_QWORD *)this = v6;
      *((_QWORD *)this + 1) = &v6[v8];
      *((_QWORD *)this + 2) = &v6[v3];
      goto LABEL_7;
    }
    memset_0(v5, 0, v3);
    if ( v7 )
    {
      if ( v3 >= v8 )
        goto LABEL_4;
      *(_DWORD *)_o__errno() = 34;
    }
    else
    {
      *(_DWORD *)_o__errno() = 22;
    }
    invalid_parameter_noinfo();
    goto LABEL_4;
  }
LABEL_7:
  LOBYTE(v5) = 1;
  return (char)v5;
}
