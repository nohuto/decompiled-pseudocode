/*
 * XREFs of ?GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x140056540
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x1400028D8 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x140053DC4 (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z.c)
 *     McTemplateU0pqxxx @ 0x1400549A8 (McTemplateU0pqxxx.c)
 *     WPP_SF_DDDD @ 0x140055CDC (WPP_SF_DDDD.c)
 *     McTemplateU0pqqq @ 0x140056C3C (McTemplateU0pqqq.c)
 *     McTemplateU0pxqxq @ 0x140056E3C (McTemplateU0pxqxq.c)
 *     ?AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z @ 0x140060090 (-AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z.c)
 */

__int64 __fastcall CCrossProcessServerOutputEndpoint::GetOutputDataPointer(
        CCrossProcessServerOutputEndpoint *this,
        __int64 a2,
        struct AE_CURRENT_POSITION *a3)
{
  CCrossProcessBaseEndpoint *v3; // rsi
  int v4; // r13d
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r12
  __int64 v12; // rax
  int v13; // r15d
  unsigned int v14; // r15d
  int v15; // edx
  unsigned int v16; // r8d
  int v17; // eax
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rdx
  int v20; // edx
  int v21; // ecx
  __int64 v22; // rcx
  unsigned int v23; // ebp
  __int64 v24; // r10
  int v25; // r8d
  unsigned int v26; // r14d
  int v27; // ecx
  int v28; // r15d
  __int64 v29; // rdi
  unsigned __int64 v31; // [rsp+20h] [rbp-48h]
  unsigned __int64 v32; // [rsp+28h] [rbp-40h]
  char v33; // [rsp+28h] [rbp-40h]
  unsigned __int64 v34; // [rsp+30h] [rbp-38h]
  int v35; // [rsp+70h] [rbp+8h]

  *((_DWORD *)this + 22) = 0;
  v3 = (CCrossProcessServerOutputEndpoint *)((char *)this - 456);
  v4 = a2;
  *((_DWORD *)this + 5) = a2;
  *((_DWORD *)this + 4) = 2;
  if ( (byte_140086281 & 4) != 0 )
    McTemplateU0pqxxx((__int64)this, a2, (__int64)this - 456, 9, a2, *((_DWORD *)this - 90), 0);
  v7 = *((_QWORD *)this - 48);
  v8 = *(_DWORD *)(v7 + 164) & 1;
  if ( (*(_BYTE *)(v7 + 164) & 1) == 0 )
    goto LABEL_28;
  if ( !v4 )
    goto LABEL_28;
  v9 = *((_QWORD *)this - 48);
  v10 = *(_QWORD *)(v9 + 16);
  v11 = *(_QWORD *)(v9 + 24);
  if ( !CCrossProcessBaseEndpoint::IsValidOffset(v3, v10) || !CCrossProcessBaseEndpoint::IsValidOffset(v3, v11) )
    goto LABEL_28;
  (*(void (__fastcall **)(CCrossProcessBaseEndpoint *, struct AE_CURRENT_POSITION *, __int64))(*(_QWORD *)v3 + 80LL))(
    v3,
    a3,
    v10);
  v12 = *((_QWORD *)this - 48);
  v13 = *((_DWORD *)this - 92);
  *((_OWORD *)this + 6) = *(_OWORD *)&a3->u64DevicePosition;
  v14 = v4 * v13;
  *((_OWORD *)this + 7) = *(_OWORD *)&a3->u64PaddingFrames;
  *((_QWORD *)this + 16) = *(_QWORD *)&a3->f32FramesPerSecond;
  v15 = *(_DWORD *)(v12 + 4) + 1;
  v16 = **((_DWORD **)this - 48);
  v17 = 0;
  if ( v15 != *(_DWORD *)(*((_QWORD *)this - 47) + 132LL) )
    v17 = v15;
  if ( v17 == v16 )
  {
    v18 = (unsigned __int64)v16 << 6;
    v19 = (unsigned __int64)(v16 + 1 < *(_DWORD *)(*((_QWORD *)this - 47) + 132LL) ? v16 + 1 : 0) << 6;
    _InterlockedExchange(
      *((volatile __int32 **)this - 48),
      v16 + 1 < *(_DWORD *)(*((_QWORD *)this - 47) + 132LL) ? v16 + 1 : 0);
    *(_DWORD *)(v19 + *((_QWORD *)this - 42) + 52) = 1;
    AEWMILOG_GLITCH(v14, v3, v16, 0xAu, v10, *(unsigned int *)(*((_QWORD *)this - 42) + v18 + 4), v11, v14);
    if ( (byte_140086281 & 1) != 0 )
      McTemplateU0pxqxq(v21, v20, (_DWORD)v3, v10, *(_DWORD *)(*((_QWORD *)this - 42) + v18 + 4), v11, v14);
    CCrossProcessEndpointTraceLogger::Glitch(
      (__int64)this - 256,
      6u,
      "CpGlitchEvent::SERVER_OUTPUT_QUEUE_FULL_PACKET_DROP");
  }
  v22 = *((unsigned int *)this - 76);
  if ( (unsigned int)v22 >= (int)v10 - (int)v11 )
    v23 = v11 + v22 - v10;
  else
    v23 = v14;
  v24 = *((_QWORD *)this - 47);
  v25 = *(_DWORD *)(v24 + 152);
  v26 = v25 + v10 % v22;
  a2 = v11 % v22;
  v8 = v25 + (unsigned int)(v11 % v22);
  v35 = v8;
  if ( v23 < v14 )
  {
    AEWMILOG_GLITCH(v8, v3, v26, 2u, v26, v8, 0LL, v14);
    if ( (byte_140086281 & 1) != 0 )
    {
      v33 = v14;
      v28 = v35;
      McTemplateU0pqqq(v27, a2, (_DWORD)v3, v26, v35, v33);
    }
    else
    {
      v28 = v35;
    }
    v8 = (unsigned __int64)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      LODWORD(v34) = *(_DWORD *)(*((_QWORD *)this - 47) + 156LL);
      LODWORD(v32) = v4 * *((_DWORD *)this - 92);
      LODWORD(v31) = v28;
      WPP_SF_DDDD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xAu,
        &WPP_539049de69a333ea2eb103c6a6c256ab_Traceguids,
        v26,
        v31,
        v32,
        v34);
    }
    if ( v11 > 0 )
      CCrossProcessEndpointTraceLogger::Glitch(
        (__int64)this - 256,
        7u,
        "CpGlitchEvent::SERVER_OUTPUT_READ_POINTER_OVERWRITE");
    if ( v23 )
    {
      *((_DWORD *)this + 22) = v23;
      *((_DWORD *)this + 4) = 1;
    }
LABEL_28:
    _InterlockedExchange((volatile __int32 *)this - 74, 1);
LABEL_29:
    v29 = *((_QWORD *)this - 43);
    goto LABEL_30;
  }
  if ( v26 + v14 > *(_DWORD *)(v24 + 160) )
  {
    *((_DWORD *)this + 4) = 1;
    goto LABEL_29;
  }
  *((_DWORD *)this + 4) = 0;
  v29 = *((_QWORD *)this - 48) + v26;
LABEL_30:
  if ( (byte_140086281 & 4) != 0 )
    McTemplateU0pqxxx(v8, a2, (__int64)v3, 10, v4, 0, 0);
  return v29;
}
