/*
 * XREFs of ?GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x140054D70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x1400028DC (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     WPP_SF_ii @ 0x140032AD4 (WPP_SF_ii.c)
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x140053EB4 (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z.c)
 *     McTemplateU0pqxxx @ 0x140054A98 (McTemplateU0pqxxx.c)
 *     McTemplateU0pqqqq @ 0x140055C8C (McTemplateU0pqqqq.c)
 *     McTemplateU0pxxq @ 0x140055D30 (McTemplateU0pxxq.c)
 *     WPP_SF_DDDD @ 0x140055DCC (WPP_SF_DDDD.c)
 *     ?AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z @ 0x140060090 (-AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z.c)
 */

__int64 __fastcall CCrossProcessClientOutputEndpoint::GetOutputDataPointer(
        CCrossProcessClientOutputEndpoint *this,
        __int64 a2,
        struct AE_CURRENT_POSITION *a3)
{
  __int64 v3; // rax
  CCrossProcessBaseEndpoint *v4; // r14
  unsigned int v5; // r15d
  int v6; // r12d
  signed __int64 v8; // rbp
  signed __int64 v9; // rsi
  unsigned __int8 v10; // r8
  unsigned int v11; // edi
  unsigned int v12; // ecx
  unsigned __int64 v13; // r13
  int v14; // edx
  int v15; // ecx
  unsigned int v16; // eax
  __int64 v17; // r10
  int v18; // ecx
  unsigned int v19; // ebp
  unsigned int v20; // esi
  __int64 v21; // rdi

  v3 = *((_QWORD *)this - 47);
  v4 = (CCrossProcessClientOutputEndpoint *)((char *)this - 448);
  *((_DWORD *)this + 4) = 2;
  v5 = 0;
  v6 = a2;
  *((_DWORD *)this + 5) = a2;
  v8 = *(_QWORD *)(v3 + 16);
  v9 = *(_QWORD *)(v3 + 24);
  if ( (byte_140087281 & 4) != 0 )
    McTemplateU0pqxxx((__int64)this, a2, (__int64)this - 448, 17, a2, v8, v9);
  if ( !CCrossProcessBaseEndpoint::IsValidOffset(v4, v8) || !CCrossProcessBaseEndpoint::IsValidOffset(v4, v9) || !v6 )
    goto LABEL_23;
  v11 = v6 * *((_DWORD *)this - 90);
  if ( v8 >= v9 )
  {
    v16 = *((_DWORD *)this - 74);
    v13 = v11;
    v5 = v9 + v16 - v8;
  }
  else
  {
    v12 = (unsigned int)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_ii(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xEu,
        (__int64)&WPP_cf63f31659183c1d56c0a39f6c8110d7_Traceguids,
        v8,
        v9);
    }
    v13 = v11;
    AEWMILOG_GLITCH(v12, v4, v10, 9u, v8, v9, 0LL, v11);
    if ( (byte_140087281 & 1) != 0 )
      McTemplateU0pxxq(v15, v14, (_DWORD)v4, v8, v9, v11);
    CCrossProcessEndpointTraceLogger::Glitch((__int64)this - 248, 3u, "CpGlitchEvent::CLIENT_OUTPUT_SERVER_OVERREAD");
    v5 = *((_DWORD *)this - 74);
    v16 = v5;
  }
  v17 = *((_QWORD *)this - 46);
  v18 = *(_DWORD *)(v17 + 152);
  v19 = v18 + v8 % v16;
  v20 = v18 + v9 % v16;
  if ( v5 < v11 )
  {
    AEWMILOG_GLITCH(v19, v4, v16, 2u, v19, v20, 0LL, v13);
    if ( (byte_140087281 & 1) != 0 )
      McTemplateU0pqqqq(
        *(_DWORD *)(*((_QWORD *)this - 46) + 156LL),
        (unsigned int)&EVT_GLITCH_CP_CLIENT_OUTPUT_READ_POINTER_OVERWRITE,
        (_DWORD)v4,
        v19,
        v20,
        v11,
        *(_DWORD *)(*((_QWORD *)this - 46) + 156LL));
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_DDDD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        15LL,
        &WPP_cf63f31659183c1d56c0a39f6c8110d7_Traceguids,
        v19,
        v20,
        v11,
        *(_DWORD *)(*((_QWORD *)this - 46) + 156LL));
    }
    CCrossProcessEndpointTraceLogger::Glitch(
      (__int64)this - 248,
      4u,
      "CpGlitchEvent::CLIENT_OUTPUT_READ_POINTER_OVERWRITE");
    goto LABEL_23;
  }
  if ( v11 + v19 > *(_DWORD *)(v17 + 156) )
  {
    *((_DWORD *)this + 4) = 1;
LABEL_23:
    v21 = *((_QWORD *)this - 42);
    goto LABEL_24;
  }
  *((_DWORD *)this + 4) = 0;
  v21 = *((_QWORD *)this - 47) + v19;
LABEL_24:
  if ( (byte_140087281 & 4) != 0 )
    McTemplateU0pqxxx(
      v5 / *((_DWORD *)this - 90),
      v5 % *((_DWORD *)this - 90),
      (__int64)v4,
      18,
      v6,
      v5 / *((_DWORD *)this - 90),
      *((_DWORD *)this + 4));
  return v21;
}
