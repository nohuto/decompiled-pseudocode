/*
 * XREFs of Endpoint_OnCancelStopCompletion @ 0x1C0019AA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddLLi @ 0x1C0002EB8 (WPP_RECORDER_SF_ddLLi.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000B478 (WPP_RECORDER_SF_ddL.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000E974 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0010108 (Controller_ReportFatalError.c)
 *     UsbDevice_GetEndpointState @ 0x1C003B09C (UsbDevice_GetEndpointState.c)
 *     UsbDevice_GetXhciEndpointDequeuePointer @ 0x1C003B110 (UsbDevice_GetXhciEndpointDequeuePointer.c)
 *     ESM_AddEvent @ 0x1C0044E54 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_OnCancelStopCompletion(__int64 a1, int a2, __int64 *a3)
{
  __m128i **v3; // rbx
  __int64 result; // rax
  int EndpointState; // edi
  __int64 v8; // r9
  __m128i *v9; // rcx
  int v10; // edi
  int v11; // edi
  int v12; // [rsp+20h] [rbp-38h]

  v3 = *(__m128i ***)(a1 + 48);
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dd(
        (__int64)v3[10],
        4u,
        0xDu,
        0x4Cu,
        (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
        v3[2][8].m128i_u8[7],
        *((_DWORD *)v3 + 36));
    _m_prefetchw(v3 + 4);
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
    goto LABEL_5;
  }
  EndpointState = UsbDevice_GetEndpointState(v3[2], *((unsigned int *)v3 + 36));
  UsbDevice_GetXhciEndpointDequeuePointer(v3[2], *((unsigned int *)v3 + 36));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddLLi((__int64)v3[10], *(unsigned __int8 *)(a1 + 60), v3[2][8].m128i_u8[7], v8, v12);
  v9 = *v3;
  if ( (_mm_srli_si128((*v3)[21], 8).m128i_u8[0] & 0x20) == 0 || *(_BYTE *)(a1 + 60) != 19 || EndpointState != 4 )
  {
    if ( *(_BYTE *)(a1 + 60) == 1 )
    {
      if ( EndpointState != 3 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_ddL(
            (__int64)v3[10],
            2u,
            0xDu,
            0x4Eu,
            (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
            v3[2][8].m128i_u8[7],
            *((_DWORD *)v3 + 36),
            EndpointState);
          v9 = *v3;
        }
        Controller_ReportFatalError((__int64)v9, 2, 4131, (__int64)v3[2], (__int64)v3, 0LL);
        _m_prefetchw(v3 + 4);
        result = (unsigned int)_InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
LABEL_5:
        if ( (result & 2) != 0 )
          return result;
      }
    }
    else
    {
      if ( *(_BYTE *)(a1 + 60) != 19 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_ddL(
            (__int64)v3[10],
            2u,
            0xDu,
            0x4Fu,
            (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
            v3[2][8].m128i_u8[7],
            *((_DWORD *)v3 + 36),
            *(unsigned __int8 *)(a1 + 60));
          v9 = *v3;
        }
        Controller_HwVerifierBreakIfEnabled(
          v9,
          (__int64)v3[1],
          (__int64)v3[3],
          0x800000LL,
          "Stop Endpoint Command failed",
          (__int64 *)(a1 + 24),
          a3);
        Controller_ReportFatalError((__int64)*v3, 2, 4099, (__int64)v3[2], (__int64)v3, 0LL);
        _m_prefetchw(v3 + 4);
        result = (unsigned int)_InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
        goto LABEL_5;
      }
      v10 = EndpointState - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 != 1 )
          {
            Controller_ReportFatalError((__int64)v9, 2, 4100, (__int64)v3[2], (__int64)v3, 0LL);
            _m_prefetchw(v3 + 4);
            result = (unsigned int)_InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
            goto LABEL_5;
          }
        }
        else if ( (*((_BYTE *)v3 + 99) & 3) == 1 )
        {
          Controller_ReportFatalError((__int64)v9, 2, 4099, (__int64)v3[2], (__int64)v3, 0LL);
          _m_prefetchw(v3 + 4);
          result = (unsigned int)_InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
          goto LABEL_5;
        }
      }
    }
  }
  return ESM_AddEvent(v3 + 36);
}
