/*
 * XREFs of ?GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x1400584C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x140014AE8 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x140056324 (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z.c)
 *     WPP_SF_DDDD @ 0x140057CE0 (WPP_SF_DDDD.c)
 *     McTemplateU0pqqq @ 0x140058BB0 (McTemplateU0pqqq.c)
 *     McTemplateU0pxqxq @ 0x140058CF8 (McTemplateU0pxqxq.c)
 *     ?AEWMILOG_DATA@@YAXKPEAXEE_K11@Z @ 0x140062274 (-AEWMILOG_DATA@@YAXKPEAXEE_K11@Z.c)
 *     ?AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z @ 0x140062318 (-AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z.c)
 */

__int64 __fastcall CCrossProcessServerOutputEndpoint::GetOutputDataPointer(
        CCrossProcessServerOutputEndpoint *this,
        unsigned int a2,
        struct AE_CURRENT_POSITION *a3)
{
  unsigned __int64 v6; // rax
  CCrossProcessBaseEndpoint *v7; // rsi
  int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // xmm0_8
  int v15; // r15d
  int v16; // edx
  unsigned int v17; // r15d
  unsigned int v18; // r8d
  int v19; // eax
  unsigned __int32 v20; // ecx
  unsigned __int64 v21; // rdi
  int v22; // edx
  int v23; // ecx
  unsigned int v24; // edi
  __int64 v25; // r10
  unsigned int v26; // r14d
  unsigned int v27; // r13d
  int v28; // edx
  int v29; // ecx
  __int64 v30; // rdi
  unsigned __int64 v32; // [rsp+20h] [rbp-58h]
  unsigned __int64 v33; // [rsp+28h] [rbp-50h]
  unsigned __int64 v34; // [rsp+30h] [rbp-48h]
  unsigned __int64 v35; // [rsp+80h] [rbp+8h]

  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 5) = a2;
  v6 = *((unsigned int *)this - 92);
  v7 = (CCrossProcessServerOutputEndpoint *)((char *)this - 456);
  *((_DWORD *)this + 4) = 2;
  v35 = a2;
  AEWMILOG_DATA(v35, (char *)this - 456, (unsigned __int8)a3, 9u, v35, v6, 0LL);
  ResetEvent(*((HANDLE *)this - 39));
  LODWORD(v9) = *(_DWORD *)(*((_QWORD *)this - 49) + 164LL);
  if ( (v9 & 1) == 0
    || !a2
    || (v10 = *((_QWORD *)this - 49),
        v11 = *(_QWORD *)(v10 + 16),
        v12 = *(_QWORD *)(v10 + 24),
        !CCrossProcessBaseEndpoint::IsValidOffset(v7, v11, v8))
    || !CCrossProcessBaseEndpoint::IsValidOffset(v7, v12, v8) )
  {
LABEL_27:
    _InterlockedExchange((volatile __int32 *)this - 74, 1);
    goto LABEL_28;
  }
  (*(void (__fastcall **)(CCrossProcessBaseEndpoint *, struct AE_CURRENT_POSITION *, __int64))(*(_QWORD *)v7 + 80LL))(
    v7,
    a3,
    v11);
  v13 = *((_QWORD *)this - 49);
  *((_OWORD *)this + 6) = *(_OWORD *)&a3->u64DevicePosition;
  *((_OWORD *)this + 7) = *(_OWORD *)&a3->u64PaddingFrames;
  v14 = *(_QWORD *)&a3->f32FramesPerSecond;
  v15 = *((_DWORD *)this - 94);
  *((_QWORD *)this + 16) = v14;
  v16 = *(_DWORD *)(v13 + 4) + 1;
  v17 = a2 * v15;
  v18 = **((_DWORD **)this - 49);
  v19 = 0;
  if ( v16 != *(_DWORD *)(*((_QWORD *)this - 48) + 132LL) )
    v19 = v16;
  if ( v19 == v18 )
  {
    v20 = 0;
    if ( v18 + 1 != *(_DWORD *)(*((_QWORD *)this - 48) + 132LL) )
      v20 = v18 + 1;
    v21 = (unsigned __int64)v18 << 6;
    _InterlockedExchange(*((volatile __int32 **)this - 49), v20);
    *(_DWORD *)(((unsigned __int64)v20 << 6) + *((_QWORD *)this - 43) + 52) = 1;
    AEWMILOG_GLITCH(v17, v7, v18, 0xAu, v11, *(unsigned int *)(v21 + *((_QWORD *)this - 43) + 4), v12, v17);
    if ( (byte_140089301 & 1) != 0 )
      McTemplateU0pxqxq(v23, v22, (_DWORD)v7, v11, *(_DWORD *)(v21 + *((_QWORD *)this - 43) + 4), v12, v17);
    CCrossProcessEndpointTraceLogger::Glitch(
      (__int64)this - 256,
      6u,
      "CpGlitchEvent::SERVER_OUTPUT_QUEUE_FULL_PACKET_DROP");
  }
  v9 = *((unsigned int *)this - 76);
  if ( (unsigned int)v9 >= (int)v11 - (int)v12 )
    v24 = v12 + v9 - v11;
  else
    v24 = v17;
  v25 = *((_QWORD *)this - 48);
  v8 = *(_DWORD *)(v25 + 152);
  v26 = v8 + v11 % v9;
  v27 = v8 + v12 % v9;
  if ( v24 < v17 )
  {
    AEWMILOG_GLITCH(v27, v7, v26, 2u, v26, v27, 0LL, v17);
    if ( (byte_140089301 & 1) != 0 )
      McTemplateU0pqqq(v29, v28, (_DWORD)v7, v26, v27, v17);
    LODWORD(v9) = (_DWORD)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      LODWORD(v34) = *(_DWORD *)(*((_QWORD *)this - 48) + 156LL);
      LODWORD(v33) = a2 * *((_DWORD *)this - 94);
      LODWORD(v32) = v27;
      WPP_SF_DDDD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xAu,
        &WPP_c60ca4a009c837ce426fd22b0e417877_Traceguids,
        v26,
        v32,
        v33,
        v34);
    }
    if ( v12 > 0 )
      CCrossProcessEndpointTraceLogger::Glitch(
        (__int64)this - 256,
        7u,
        "CpGlitchEvent::SERVER_OUTPUT_READ_POINTER_OVERWRITE");
    if ( v24 )
    {
      *((_DWORD *)this + 22) = v24;
      *((_DWORD *)this + 4) = 1;
    }
    goto LABEL_27;
  }
  if ( v26 + v17 <= *(_DWORD *)(v25 + 160) )
  {
    *((_DWORD *)this + 4) = 0;
    v30 = *((_QWORD *)this - 49) + v26;
    goto LABEL_29;
  }
  *((_DWORD *)this + 4) = 1;
LABEL_28:
  v30 = *((_QWORD *)this - 44);
LABEL_29:
  AEWMILOG_DATA(v9, v7, v8, 0xAu, v35, 0LL, 0LL);
  return v30;
}
