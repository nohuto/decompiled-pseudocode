/*
 * XREFs of Interrupter_FilterMessageDescriptors @ 0x1C0066290
 * Callers:
 *     Interrupter_FilterRemoveResourceRequirements @ 0x1C0066494 (Interrupter_FilterRemoveResourceRequirements.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall Interrupter_FilterMessageDescriptors(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // r14
  __int64 result; // rax
  unsigned int v10; // ebx
  unsigned int i; // ebp
  _OWORD *v12; // rdi
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  __int128 v15; // xmm1
  __int64 v16; // [rsp+28h] [rbp-90h]
  __int64 v17; // [rsp+30h] [rbp-88h]
  _OWORD v18[2]; // [rsp+40h] [rbp-78h] BYREF

  memset(v18, 0, sizeof(v18));
  v8 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2328))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a2,
         a3);
  result = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 2384))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             v8);
  v10 = 0;
  for ( i = result; v10 < i; ++v10 )
  {
    result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2392))(
               WPP_MAIN_CB.Dpc.ProcessorHistory,
               v8,
               v10);
    v12 = (_OWORD *)result;
    if ( *(_BYTE *)(result + 1) == 2 && (*(_BYTE *)(result + 4) & 3) == 3 )
    {
      if ( a4 )
      {
        v13 = *(_DWORD *)(result + 12) - *(_DWORD *)(result + 8) + 1;
        if ( a4 < v13 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v17) = v10;
            LODWORD(v16) = a3;
            WPP_RECORDER_SF_dd(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
              4u,
              9u,
              0x3Cu,
              (__int64)&WPP_46aa8b6abf25399c8a99e6bda1f22045_Traceguids,
              v16,
              v17);
          }
          _BitScanReverse(&v14, 2 * a4 - 1);
          v18[0] = *v12;
          v15 = v12[1];
          DWORD2(v18[0]) = ~(1 << v14);
          v18[1] = v15;
          HIDWORD(v18[0]) = -2;
          result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, _OWORD *, _QWORD))(WdfFunctions_01023 + 2376))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     v8,
                     v18,
                     v10);
          a4 = 0;
        }
        else
        {
          a4 -= v13;
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v17) = v10;
          LODWORD(v16) = a3;
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            4u,
            9u,
            0x3Bu,
            (__int64)&WPP_46aa8b6abf25399c8a99e6bda1f22045_Traceguids,
            v16,
            v17);
        }
        (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2400))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          v8,
          v10);
        result = 0xFFFFFFFFLL;
        --v10;
        --i;
      }
    }
  }
  return result;
}
