/*
 * XREFs of ?GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x140056D10
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x140014AE8 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     WPP_SF_ii @ 0x140037F40 (WPP_SF_ii.c)
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x140056324 (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z.c)
 *     McTemplateU0pqqqq @ 0x140057BA0 (McTemplateU0pqqqq.c)
 *     McTemplateU0pxxq @ 0x140057C44 (McTemplateU0pxxq.c)
 *     WPP_SF_DDDD @ 0x140057CE0 (WPP_SF_DDDD.c)
 *     ?AEWMILOG_DATA@@YAXKPEAXEE_K11@Z @ 0x140062274 (-AEWMILOG_DATA@@YAXKPEAXEE_K11@Z.c)
 *     ?AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z @ 0x140062318 (-AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z.c)
 */

__int64 __fastcall CCrossProcessClientOutputEndpoint::GetOutputDataPointer(
        CCrossProcessClientOutputEndpoint *this,
        unsigned int a2,
        struct AE_CURRENT_POSITION *a3)
{
  __int64 v3; // rax
  CCrossProcessBaseEndpoint *v4; // r15
  unsigned int v7; // r14d
  signed __int64 v8; // rbp
  signed __int64 v9; // r12
  unsigned __int8 v10; // r8
  unsigned __int8 v11; // r8
  unsigned __int8 v12; // r8
  unsigned int v13; // edi
  int v14; // esi
  unsigned int v15; // ecx
  unsigned __int64 v16; // r13
  int v17; // edx
  int v18; // ecx
  unsigned int v19; // eax
  __int64 v20; // r10
  int v21; // ecx
  unsigned int v22; // r12d
  unsigned int v23; // ebp
  __int64 v24; // rdi
  unsigned __int64 v26; // [rsp+70h] [rbp+8h]

  v3 = *((_QWORD *)this - 48);
  v4 = (CCrossProcessClientOutputEndpoint *)((char *)this - 448);
  *((_DWORD *)this + 5) = a2;
  *((_DWORD *)this + 4) = 2;
  v7 = 0;
  v8 = *(_QWORD *)(v3 + 24);
  v9 = *(_QWORD *)(v3 + 16);
  v26 = a2;
  AEWMILOG_DATA((unsigned int)this, (char *)this - 448, (unsigned __int8)a3, 0x11u, a2, v9, v8);
  if ( !CCrossProcessBaseEndpoint::IsValidOffset(v4, v9, v10)
    || !CCrossProcessBaseEndpoint::IsValidOffset(v4, v8, v11)
    || !a2 )
  {
LABEL_21:
    v14 = *((_DWORD *)this + 4);
    goto LABEL_22;
  }
  v13 = a2 * *((_DWORD *)this - 92);
  v14 = 1;
  if ( v9 >= v8 )
  {
    v19 = *((_DWORD *)this - 74);
    v16 = v13;
    v7 = v8 + v19 - v9;
  }
  else
  {
    v15 = (unsigned int)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_ii(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xEu,
        (__int64)&WPP_23cce490298439044b313548040b8dc4_Traceguids,
        v9,
        v8);
    }
    v16 = v13;
    AEWMILOG_GLITCH(v15, v4, v12, 9u, v9, v8, 0LL, v13);
    if ( (byte_140089301 & 1) != 0 )
      McTemplateU0pxxq(v18, v17, (_DWORD)v4, v9, v8, v13);
    CCrossProcessEndpointTraceLogger::Glitch((__int64)this - 248, 3u, "CpGlitchEvent::CLIENT_OUTPUT_SERVER_OVERREAD");
    v7 = *((_DWORD *)this - 74);
    v19 = v7;
  }
  v20 = *((_QWORD *)this - 47);
  v21 = *(_DWORD *)(v20 + 152);
  v22 = v21 + v9 % v19;
  v23 = v21 + v8 % v19;
  if ( v7 < v13 )
  {
    AEWMILOG_GLITCH(v22, v4, v19, 2u, v22, v23, 0LL, v16);
    if ( (byte_140089301 & 1) != 0 )
      McTemplateU0pqqqq(
        *(_DWORD *)(*((_QWORD *)this - 47) + 156LL),
        (unsigned int)&EVT_GLITCH_CP_CLIENT_OUTPUT_READ_POINTER_OVERWRITE,
        (_DWORD)v4,
        v22,
        v23,
        v13,
        *(_DWORD *)(*((_QWORD *)this - 47) + 156LL));
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_DDDD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        15LL,
        &WPP_23cce490298439044b313548040b8dc4_Traceguids,
        v22,
        v23,
        v13,
        *(_DWORD *)(*((_QWORD *)this - 47) + 156LL));
    }
    CCrossProcessEndpointTraceLogger::Glitch(
      (__int64)this - 248,
      4u,
      "CpGlitchEvent::CLIENT_OUTPUT_READ_POINTER_OVERWRITE");
    goto LABEL_21;
  }
  if ( v22 + v13 <= *(_DWORD *)(v20 + 156) )
  {
    *((_DWORD *)this + 4) = 0;
    v24 = *((_QWORD *)this - 48) + v22;
    v14 = 0;
    goto LABEL_23;
  }
  *((_DWORD *)this + 4) = 1;
LABEL_22:
  v24 = *((_QWORD *)this - 43);
LABEL_23:
  AEWMILOG_DATA(v7 / *((_DWORD *)this - 92), v4, v14, 0x12u, v26, v7 / *((_DWORD *)this - 92), v14);
  return v24;
}
