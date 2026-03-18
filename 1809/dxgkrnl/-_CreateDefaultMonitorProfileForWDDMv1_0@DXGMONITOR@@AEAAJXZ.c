/*
 * XREFs of ?_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ @ 0x1C029A940
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B44E8 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ?_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C029CE54 (-_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C029DDC8 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GTF_GetVideoModeDescriptor@@YAJGGKKEPEAU_VideoModeDescriptor@@@Z @ 0x1C001C480 (-GTF_GetVideoModeDescriptor@@YAJGGKKEPEAU_VideoModeDescriptor@@@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ConvertVideoSignalInfo @ 0x1C029A10C (ConvertVideoSignalInfo.c)
 */

__int64 __fastcall DXGMONITOR::_CreateDefaultMonitorProfileForWDDMv1_0(
        DXGMONITOR *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // r12
  __int64 v12; // r14
  USHORT *v13; // r15
  const wchar_t *v14; // r13
  int VideoModeDescriptor; // eax
  __int64 v16; // rcx
  __int64 v17; // rdi
  _DWORD *v18; // rax
  __int64 v19; // rcx
  _DWORD *v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rax
  _QWORD *v23; // r14
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int128 v32; // [rsp+30h] [rbp-88h]
  _VideoModeDescriptor v33; // [rsp+40h] [rbp-78h] BYREF
  int v34; // [rsp+C0h] [rbp+8h]

  v34 = 0;
  v5 = WdLogNewEntry5_WdDmmEvent(this, a2, a3, a4);
  *(_QWORD *)(v5 + 24) = this;
  WdLogEvent5_WdDmmEvent(v5);
  if ( *((_DWORD *)this + 52) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = (_QWORD *)((char *)this + 216);
  if ( (_QWORD *)*v8 != v8 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v9);
  }
  *(_QWORD *)&v32 = 0x800000008LL;
  v10 = 0LL;
  *((_QWORD *)&v32 + 1) = 8LL;
  while ( 2 )
  {
    v11 = 0LL;
    v12 = (unsigned int)v10;
    v13 = &word_1C0070DD0[2 * v10];
    v14 = L"<FHKU";
    do
    {
      memset(&v33, 0, sizeof(v33));
      VideoModeDescriptor = GTF_GetVideoModeDescriptor(*v13, word_1C0070DD0[2 * v12 + 1], *v14, 1u, 0, &v33);
      v17 = VideoModeDescriptor;
      if ( VideoModeDescriptor < 0 )
      {
        v27 = WdLogNewEntry5_WdError(v16);
        v28 = 2LL;
        v29 = (_QWORD *)(v27 + 24);
        do
        {
          v30 = *v13++;
          *v29++ = v30;
          --v28;
        }
        while ( v28 );
        *(_QWORD *)(v27 + 48) = v17;
        *(_QWORD *)(v27 + 40) = aFhku[v11];
        WdLogEvent5_WdError(v27);
        goto LABEL_22;
      }
      v18 = operator new(0x78uLL, 0x4D677844u, PagedPool);
      v20 = v18;
      if ( !v18 )
      {
        v26 = WdLogNewEntry5_WdError(v19);
        WdLogEvent5_WdError(v26);
        LODWORD(v17) = -1073741801;
        goto LABEL_22;
      }
      *v18 = (*((_DWORD *)this + 53))++;
      LODWORD(v17) = ConvertVideoSignalInfo(&v33.PixelClockRate, (__int64)(v18 + 2));
      if ( (int)v17 < 0 )
      {
        v22 = WdLogNewEntry5_WdAssertion(v21);
        WdLogEvent5_WdAssertion(v22);
      }
      v20[16] = 2;
      v20[21] = 1;
      v20[22] = 2;
      *(_OWORD *)(v20 + 17) = v32;
      v20[28] = 5;
      v23 = v20 + 24;
      v24 = (_QWORD *)*((_QWORD *)this + 28);
      if ( (_QWORD *)*v24 != v8 )
        __fastfail(3u);
      ++v34;
      v11 = (unsigned int)(v11 + 1);
      *v23 = v8;
      ++v14;
      v23[1] = v24;
      *v24 = v23;
      *((_QWORD *)this + 28) = v23;
      ++*((_DWORD *)this + 52);
      v12 = (unsigned int)v10;
    }
    while ( (unsigned int)v11 < 5 );
    v10 = (unsigned int)(v10 + 1);
    if ( (unsigned int)v10 < 0x10 )
      continue;
    break;
  }
  if ( *((DXGMONITOR **)this + 33) != (DXGMONITOR *)((char *)this + 264) )
  {
    v25 = WdLogNewEntry5_WdAssertion(word_1C0070DD0);
    WdLogEvent5_WdAssertion(v25);
  }
  *((_DWORD *)this + 30) = 3;
LABEL_22:
  *((_DWORD *)this + 10) ^= (*((_DWORD *)this + 10) ^ ((unsigned int)~(_DWORD)v17 >> 28)) & 8;
  return (unsigned int)v17;
}
