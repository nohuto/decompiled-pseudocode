/*
 * XREFs of ?GetEndpointBufferSize@CAudioDeviceGraph@@UEAAJPEAIPEAM@Z @ 0x140037B30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140003A58 (-GetTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14002BE64 (WPP_SF_D.c)
 *     WPP_SF_Dg @ 0x140039218 (WPP_SF_Dg.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14003CAE8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetEndpointBufferSize(CAudioDeviceGraph *this, unsigned int *a2, float *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  int v7; // ebx
  _UNKNOWN **v8; // rcx
  __int64 Tail; // rax
  int v11; // eax
  unsigned __int16 v12; // dx
  __int64 v13; // rdx
  __int64 v14; // r8
  float v15; // xmm0_4
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+70h] [rbp+8h] BYREF
  __int64 v18; // [rsp+88h] [rbp+20h] BYREF

  v17 = 0;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  v16 = 0LL;
  v18 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  if ( *((_DWORD *)this + 64) )
  {
    if ( !a2 || !a3 )
    {
      v7 = -2147467261;
      goto LABEL_3;
    }
    Tail = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetTail(*((_QWORD *)this + 20) + 16LL);
    v11 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)Tail + 32LL))(
            **(_QWORD **)(*(_QWORD *)Tail + 32LL),
            &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
            &v16);
    v7 = v11;
    if ( v11 >= 0 )
    {
      v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v16)(
              v16,
              &GUID_5d48237d_438a_42fb_8ad8_3e90bc6c605f,
              &v18);
      v7 = v11;
      if ( v11 >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v18 + 32LL))(v18, &v17);
        if ( v7 < 0 )
          goto LABEL_3;
        v7 = 0;
        *a2 = v17;
        v15 = *((float *)this + 34);
        *a3 = v15;
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
        {
          goto LABEL_9;
        }
        WPP_SF_Dg(*((_QWORD *)WPP_GLOBAL_Control + 2), v13, v14, *a2, v15);
        goto LABEL_35;
      }
      v8 = (_UNKNOWN **)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        v12 = 14;
        goto LABEL_24;
      }
    }
    else
    {
      v8 = (_UNKNOWN **)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        v12 = 13;
LABEL_24:
        WPP_SF_D((__int64)v8[2], v12, (__int64)&WPP_b2662dbb94f23b55810f055fd8f68975_Traceguids, v11);
LABEL_35:
        v8 = (_UNKNOWN **)WPP_GLOBAL_Control;
      }
    }
    if ( v7 >= 0 )
      goto LABEL_9;
    goto LABEL_4;
  }
  v7 = -2005139437;
LABEL_3:
  v8 = (_UNKNOWN **)WPP_GLOBAL_Control;
LABEL_4:
  if ( v8 != &WPP_GLOBAL_Control && (*((_DWORD *)v8 + 7) & 0x20000) != 0 && *((_BYTE *)v8 + 25) >= 2u )
    WPP_SF_D((__int64)v8[2], 0x10u, (__int64)&WPP_b2662dbb94f23b55810f055fd8f68975_Traceguids, v7);
  AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::GetEndpointBufferSize", 0x174u, v7);
LABEL_9:
  if ( v3 )
    LeaveCriticalSection(v3);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  return (unsigned int)v7;
}
