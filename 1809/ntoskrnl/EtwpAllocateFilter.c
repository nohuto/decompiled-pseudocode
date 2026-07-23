/*
 * XREFs of EtwpAllocateFilter @ 0x1408C2A1C
 * Callers:
 *     EtwpValidateFilterDescriptors @ 0x1408C3914 (EtwpValidateFilterDescriptors.c)
 *     EtwpValidateTraceControlFilterDescriptors @ 0x1408C3ACC (EtwpValidateTraceControlFilterDescriptors.c)
 * Callees:
 *     EtwpAllocateEventNameFilter @ 0x1408C265C (EtwpAllocateEventNameFilter.c)
 *     EtwpAllocatePayloadFilterData @ 0x1408C2BB0 (EtwpAllocatePayloadFilterData.c)
 *     EtwpAllocateStringFilterData @ 0x1408C2C38 (EtwpAllocateStringFilterData.c)
 *     EtwpCreatePerfectHashFunction @ 0x1408C321C (EtwpCreatePerfectHashFunction.c)
 */

__int64 __fastcall EtwpAllocateFilter(int a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r10d
  __int64 v6; // rdx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r11
  __int64 v11; // rcx
  _WORD *v12; // rax
  __int64 v13; // r9
  __int64 v14; // rdx
  _WORD *v15; // rax
  _QWORD *v16; // rdx

  v4 = 0;
  switch ( a1 )
  {
    case -2147483640:
      v6 = a3;
      return (unsigned int)EtwpAllocateStringFilterData(a2, v6);
    case -2147483632:
      v6 = a3 + 8;
      return (unsigned int)EtwpAllocateStringFilterData(a2, v6);
    case -2147483616:
      v6 = a3 + 16;
      return (unsigned int)EtwpAllocateStringFilterData(a2, v6);
    case -2147450880:
      v6 = a3 + 24;
      return (unsigned int)EtwpAllocateStringFilterData(a2, v6);
    case -2147479552:
      v8 = *(_QWORD *)a2;
      v9 = (unsigned int)a2[2];
      if ( (unsigned int)(v9 - 6) <= 0x3FA )
      {
        v10 = *(unsigned __int16 *)(v8 + 2);
        if ( v9 == 2 * v10 + 4 )
        {
          v11 = 1LL;
          if ( (unsigned __int16)(v10 - 1) <= 0x3Fu )
          {
            if ( *(_WORD *)(v8 + 2) )
            {
              v12 = (_WORD *)(v8 + 4);
              while ( *v12 != 0xFFFF )
              {
                ++v4;
                ++v12;
                if ( v4 >= (unsigned int)v10 )
                  goto LABEL_18;
              }
              return (unsigned int)-1073741811;
            }
LABEL_18:
            v13 = a3 + 40;
LABEL_19:
            LOBYTE(v11) = *(_BYTE *)v8;
            return (unsigned int)EtwpCreatePerfectHashFunction(v11, v8 + 4, (unsigned __int16)v10, v13);
          }
        }
      }
      return (unsigned int)-1073741811;
    case -2147483136:
      v8 = *(_QWORD *)a2;
      v14 = (unsigned int)a2[2];
      if ( (unsigned int)(v14 - 6) <= 0x3FA )
      {
        v10 = *(unsigned __int16 *)(v8 + 2);
        if ( v14 == 2 * v10 + 4 )
        {
          v11 = 1LL;
          if ( (unsigned __int16)(v10 - 1) <= 0x3Fu )
          {
            if ( *(_WORD *)(v8 + 2) )
            {
              v15 = (_WORD *)(v8 + 4);
              while ( *v15 != 0xFFFF )
              {
                ++v4;
                ++v15;
                if ( v4 >= (unsigned int)v10 )
                  goto LABEL_28;
              }
              return (unsigned int)-1073741811;
            }
LABEL_28:
            v13 = a3 + 32;
            goto LABEL_19;
          }
        }
      }
      return (unsigned int)-1073741811;
    case -2147482624:
      v16 = (_QWORD *)(a3 + 48);
      return (unsigned int)EtwpAllocateEventNameFilter(a2, v16);
    case -2147475456:
      v16 = (_QWORD *)(a3 + 56);
      return (unsigned int)EtwpAllocateEventNameFilter(a2, v16);
    case -2147483392:
      if ( !a4 )
        return 3221225485LL;
      return (unsigned int)EtwpAllocatePayloadFilterData(a4, a2, a3 + 72);
  }
  return v4;
}
