/*
 * XREFs of ?_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ @ 0x1C02CF09C
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C017001C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01748A8 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ?_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02D01BC (-_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GTF_GetVideoModeDescriptor@@YAJGGKKEPEAU_VideoModeDescriptor@@@Z @ 0x1C0020F30 (-GTF_GetVideoModeDescriptor@@YAJGGKKEPEAU_VideoModeDescriptor@@@Z.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ConvertVideoSignalInfo @ 0x1C01724A8 (ConvertVideoSignalInfo.c)
 */

__int64 __fastcall DXGMONITOR::_CreateDefaultMonitorProfileForWDDMv1_0(DXGMONITOR *this, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // r14
  USHORT *v12; // r15
  const wchar_t *v13; // r13
  int VideoModeDescriptor; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdi
  _DWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _DWORD *v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  _QWORD *v27; // r14
  _QWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  _QWORD *v33; // rax
  __int64 v34; // rcx
  __int128 v36; // [rsp+30h] [rbp-88h]
  _VideoModeDescriptor v37; // [rsp+40h] [rbp-78h] BYREF
  int v38; // [rsp+C0h] [rbp+8h]

  v38 = 0;
  v3 = WdLogNewEntry5_WdDmmEvent(this, a2);
  *(_QWORD *)(v3 + 24) = this;
  WdLogEvent5_WdDmmEvent(v3);
  if ( *((_DWORD *)this + 52) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, v4);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = (_QWORD *)((char *)this + 216);
  if ( (_QWORD *)*v7 != v7 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4);
    WdLogEvent5_WdAssertion(v8);
  }
  *(_QWORD *)&v36 = 0x800000008LL;
  v9 = 0LL;
  *((_QWORD *)&v36 + 1) = 8LL;
  while ( 2 )
  {
    v10 = 0LL;
    v11 = (unsigned int)v9;
    v12 = &word_1C00824A0[2 * v9];
    v13 = L"<FHKU";
    do
    {
      memset(&v37, 0, sizeof(v37));
      VideoModeDescriptor = GTF_GetVideoModeDescriptor(*v12, word_1C00824A0[2 * v11 + 1], *v13, 1u, 0, &v37);
      v18 = VideoModeDescriptor;
      if ( VideoModeDescriptor < 0 )
      {
        v31 = WdLogNewEntry5_WdError(v16, v15, v17);
        v32 = 2LL;
        v33 = (_QWORD *)(v31 + 24);
        do
        {
          v34 = *v12++;
          *v33++ = v34;
          --v32;
        }
        while ( v32 );
        *(_QWORD *)(v31 + 48) = v18;
        *(_QWORD *)(v31 + 40) = aFhku[v10];
        WdLogEvent5_WdError(v31);
        goto LABEL_22;
      }
      v19 = operator new[](0x78uLL, 0x4D677844u, PagedPool);
      v23 = v19;
      if ( !v19 )
      {
        v30 = WdLogNewEntry5_WdError(v21, v20, v22);
        WdLogEvent5_WdError(v30);
        LODWORD(v18) = -1073741801;
        goto LABEL_22;
      }
      *v19 = (*((_DWORD *)this + 53))++;
      LODWORD(v18) = ConvertVideoSignalInfo(&v37.PixelClockRate, (__int64)(v19 + 2));
      if ( (int)v18 < 0 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v25, v24);
        WdLogEvent5_WdAssertion(v26);
      }
      v23[16] = 2;
      v23[21] = 1;
      v23[22] = 2;
      *(_OWORD *)(v23 + 17) = v36;
      v23[28] = 5;
      v27 = v23 + 24;
      v28 = (_QWORD *)*((_QWORD *)this + 28);
      if ( (_QWORD *)*v28 != v7 )
        __fastfail(3u);
      ++v38;
      v10 = (unsigned int)(v10 + 1);
      *v27 = v7;
      ++v13;
      v27[1] = v28;
      *v28 = v27;
      *((_QWORD *)this + 28) = v27;
      ++*((_DWORD *)this + 52);
      v11 = (unsigned int)v9;
    }
    while ( (unsigned int)v10 < 5 );
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 < 0x10 )
      continue;
    break;
  }
  if ( *((DXGMONITOR **)this + 33) != (DXGMONITOR *)((char *)this + 264) )
  {
    v29 = WdLogNewEntry5_WdAssertion(word_1C00824A0, v24);
    WdLogEvent5_WdAssertion(v29);
  }
  *((_DWORD *)this + 30) = 3;
LABEL_22:
  *((_DWORD *)this + 10) ^= (*((_DWORD *)this + 10) ^ ((unsigned int)~(_DWORD)v18 >> 28)) & 8;
  return (unsigned int)v18;
}
