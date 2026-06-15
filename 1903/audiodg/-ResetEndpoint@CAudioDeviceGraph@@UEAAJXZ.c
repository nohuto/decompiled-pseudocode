/*
 * XREFs of ?ResetEndpoint@CAudioDeviceGraph@@UEAAJXZ @ 0x140038810
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140003A68 (-GetTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x14002BF00 (WPP_SF_.c)
 *     WPP_SF_D @ 0x14002BF24 (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14003CB48 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::ResetEndpoint(CAudioDeviceGraph *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rsi
  int v3; // ebx
  _UNKNOWN **v4; // rcx
  __int64 Tail; // rax
  int v7; // eax
  unsigned __int16 v8; // dx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  v9 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  if ( *((_DWORD *)this + 64) )
  {
    Tail = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetTail(*((_QWORD *)this + 20) + 16LL);
    v7 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)Tail + 32LL))(
           **(_QWORD **)(*(_QWORD *)Tail + 32LL),
           &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
           &v10);
    v3 = v7;
    if ( v7 >= 0 )
    {
      v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v10)(
             v10,
             &GUID_c684b72a_6df4_4774_bdf9_76b77509b653,
             &v9);
      v3 = v7;
      if ( v7 >= 0 )
      {
        v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
        if ( v3 < 0 )
          goto LABEL_3;
        (*(void (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)this + 152LL))(this);
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 88LL))(*((_QWORD *)this + 19));
        v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Bu, (__int64)&WPP_b2662dbb94f23b55810f055fd8f68975_Traceguids);
          goto LABEL_32;
        }
      }
      else
      {
        v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          v8 = 26;
          goto LABEL_21;
        }
      }
    }
    else
    {
      v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        v8 = 25;
LABEL_21:
        WPP_SF_D((__int64)v4[2], v8, (__int64)&WPP_b2662dbb94f23b55810f055fd8f68975_Traceguids, v7);
LABEL_32:
        v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
      }
    }
    if ( v3 >= 0 )
      goto LABEL_9;
    goto LABEL_4;
  }
  v3 = -2005139437;
LABEL_3:
  v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
LABEL_4:
  if ( v4 != &WPP_GLOBAL_Control && (*((_DWORD *)v4 + 7) & 0x20000) != 0 && *((_BYTE *)v4 + 25) >= 2u )
    WPP_SF_D((__int64)v4[2], 0x1Cu, (__int64)&WPP_b2662dbb94f23b55810f055fd8f68975_Traceguids, v3);
  AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::ResetEndpoint", 0x26Du, v3);
LABEL_9:
  if ( v1 )
    LeaveCriticalSection(v1);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return (unsigned int)v3;
}
