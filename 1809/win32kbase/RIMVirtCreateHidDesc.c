/*
 * XREFs of RIMVirtCreateHidDesc @ 0x1C011C038
 * Callers:
 *     RIMVirtCreateDev @ 0x1C0122170 (RIMVirtCreateDev.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C002BFC0 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C004F608 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F724 (WPP_RECORDER_SF_q.c)
 *     DbgPrintRIM @ 0x1C00517C4 (DbgPrintRIM.c)
 *     RIMFreeHidDesc @ 0x1C0052898 (RIMFreeHidDesc.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0052924 (WPP_RECORDER_SF_qDD.c)
 *     ApiSetInkProcessorIsInkDevice @ 0x1C0052A14 (ApiSetInkProcessorIsInkDevice.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C0090848 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C0090924 (RIMSearchHidTLCInfo.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     fromIV_HIDP_CAPS @ 0x1C011A458 (fromIV_HIDP_CAPS.c)
 *     RIMVirtAllocateHidDesc @ 0x1C011BD08 (RIMVirtAllocateHidDesc.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C011C494 (WPP_RECORDER_SF_DDq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMVirtCreateHidDesc(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 HidDesc; // r12
  void *v7; // r13
  __int64 v8; // rax
  size_t v9; // r8
  const void *v10; // rdx
  __m128i v11; // xmm1
  __m128i v12; // xmm0
  unsigned __int16 v13; // r15
  unsigned int v14; // ebx
  __int64 v15; // rdx
  unsigned __int16 epi16; // ax
  __int64 v17; // rdx
  unsigned __int16 v18; // ax
  unsigned __int16 v19; // r14
  __int64 v20; // rdx
  unsigned int v21; // r8d
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int16 v24; // r9
  unsigned int v25; // r8d
  unsigned __int16 v26; // r14
  unsigned __int16 v27; // r15
  __int64 *v28; // rax
  int v29; // r8d
  _WORD *v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v34; // [rsp+28h] [rbp-B1h]
  __int64 v35; // [rsp+28h] [rbp-B1h]
  __int64 v36; // [rsp+30h] [rbp-A9h]
  __int64 v37; // [rsp+30h] [rbp-A9h]
  __int64 v38; // [rsp+40h] [rbp-99h]
  int v39; // [rsp+48h] [rbp-91h]
  __m128i v41[4]; // [rsp+60h] [rbp-79h] BYREF
  _BYTE v42[64]; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v43; // [rsp+E0h] [rbp+7h] BYREF
  int v44; // [rsp+E8h] [rbp+Fh]

  HidDesc = 0LL;
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 48) - 1) > 1u )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(1LL, a2, a3);
  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x4Cu, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids);
  if ( (*(_DWORD *)(a2 + 184) & 0x2000) == 0 )
  {
    v7 = (void *)Win32AllocPoolNonPaged(*(unsigned int *)(a3 + 168), 0x70707352u);
    if ( !v7 )
    {
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x4Du, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids);
      return HidDesc;
    }
    LODWORD(v38) = *(_DWORD *)(a3 + 168);
    BYTE4(v38) = *(_DWORD *)(a3 + 172) != 0;
    BYTE5(v38) = *(_BYTE *)(a3 + 176);
    HIWORD(v38) = *(_WORD *)(a3 + 180);
    LOWORD(v39) = *(_WORD *)(a3 + 184);
    HIWORD(v39) = *(_WORD *)(a3 + 188);
    v44 = v39;
    v43 = v38;
    v8 = fromIV_HIDP_CAPS((__int64)v42, a3 + 72);
    v9 = *(unsigned int *)(a3 + 168);
    v10 = *(const void **)(a3 + 192);
    v11 = *(__m128i *)(v8 + 32);
    v41[0] = *(__m128i *)v8;
    v12 = *(__m128i *)(v8 + 16);
    v41[2] = v11;
    v41[1] = v12;
    v41[3] = *(__m128i *)(v8 + 48);
    memmove(v7, v10, v9);
    v13 = v41[0].m128i_i16[0];
    v14 = v41[0].m128i_u16[0];
    WPP_RECORDER_SF_DD(
      v41[0].m128i_u16[1],
      v15,
      0x15u,
      0x4Eu,
      (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids,
      v41[0].m128i_u16[1],
      v41[0].m128i_u16[0]);
    epi16 = _mm_extract_epi16(v41[0], 4);
    v17 = epi16;
    LODWORD(v36) = epi16;
    v18 = _mm_extract_epi16(v41[0], 2);
    LODWORD(v34) = v18;
    WPP_RECORDER_SF_DD(v18, v17, 0x15u, 0x4Fu, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids, v34, v36);
    v19 = _mm_extract_epi16(v41[0], 1);
    DbgPrintRIM("Found (Usage: %x, UsagePage: %x)\n", v41[0].m128i_u16[0], v19);
    v21 = *(_DWORD *)(a1 + 88);
    if ( v21 )
    {
      v22 = 0LL;
      v20 = *(_QWORD *)(a1 + 96);
      while ( *(_DWORD *)(v20 + 4 * v22) != __PAIR32__(v19, v41[0].m128i_u16[0]) )
      {
        v23 = 1LL;
        v22 = (unsigned int)(v22 + 1);
        if ( (unsigned int)v22 >= v21 )
          goto LABEL_13;
      }
      *(_DWORD *)(a2 + 184) |= 0x4000u;
    }
    v23 = 1LL;
LABEL_13:
    if ( (*(_DWORD *)(a2 + 184) & 0x4000) != 0 || v19 != 1 )
    {
      if ( v19 == 13 )
      {
        v23 = 14LL;
        if ( v13 == 14 )
        {
          LODWORD(v37) = 14;
          v24 = 83;
          LODWORD(v35) = 13;
LABEL_33:
          v25 = 20;
          goto LABEL_34;
        }
LABEL_28:
        if ( (unsigned int)ApiSetInkProcessorIsInkDevice(v19, v13, (__int64)&v43 + 6) && (*(_DWORD *)(a1 + 84) & 4) == 0 )
        {
          WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x55u, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids);
LABEL_35:
          Win32FreePool((__int64)v7);
          return HidDesc;
        }
        HidDesc = RIMVirtAllocateHidDesc(a1, a2, (__int64)v7, (unsigned __int16 *)v41, (__int64)&v43, a3);
        if ( HidDesc )
        {
          v26 = v41[0].m128i_i16[0];
          v27 = v41[0].m128i_u16[1];
          v28 = RIMSearchHidTLCInfo(v41[0].m128i_i16[1], v41[0].m128i_i16[0]);
          v30 = v28;
          if ( v28 )
          {
            WPP_RECORDER_SF_DDq(
              v26,
              v27,
              v29,
              87,
              (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids,
              v27,
              v26,
              (char)v28);
          }
          else
          {
            v30 = RIMAllocateAndLinkHidTLCInfo(v27, v26);
            if ( !v30 )
            {
              WPP_RECORDER_SF_q(
                gRimLog,
                3u,
                0x14u,
                0x58u,
                (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids,
                a1);
              RIMFreeHidDesc(HidDesc, v31, v32);
              return 0LL;
            }
            LODWORD(v37) = v27;
            WPP_RECORDER_SF_qDD(
              v27,
              3u,
              0x15u,
              0x59u,
              (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids,
              v30,
              v37,
              v26);
          }
          ++*((_DWORD *)v30 + 5);
          *(_QWORD *)(a2 + 472) = v30;
          return HidDesc;
        }
        v23 = v41[0].m128i_u16[0];
        v24 = 86;
        v20 = v41[0].m128i_u16[1];
        LODWORD(v37) = v41[0].m128i_u16[0];
        LODWORD(v35) = v41[0].m128i_u16[1];
        goto LABEL_33;
      }
      if ( v19 != 1 )
        goto LABEL_28;
    }
    else if ( v14 && (v14 <= 2 || v14 > 5 && (v14 <= 7 || v14 == 128)) )
    {
      v24 = 80;
      LODWORD(v37) = v14;
      LODWORD(v35) = 1;
      v25 = 21;
LABEL_34:
      WPP_RECORDER_SF_DD(v23, v20, v25, v24, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids, v35, v37);
      goto LABEL_35;
    }
    if ( v13 == 14 && (*(_DWORD *)(a1 + 84) & 0x10) == 0 )
    {
      LODWORD(v37) = 14;
      v24 = 84;
      v23 = 1LL;
      LODWORD(v35) = 1;
      goto LABEL_33;
    }
    goto LABEL_28;
  }
  __debugbreak();
  return 0LL;
}
