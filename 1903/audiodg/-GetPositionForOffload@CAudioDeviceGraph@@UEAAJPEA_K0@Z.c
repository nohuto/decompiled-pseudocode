/*
 * XREFs of ?GetPositionForOffload@CAudioDeviceGraph@@UEAAJPEA_K0@Z @ 0x140038110
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140003A68 (-GetTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14002BF24 (WPP_SF_D.c)
 *     WPP_SF_ii @ 0x140032AD4 (WPP_SF_ii.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14003CB48 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetPositionForOffload(
        CAudioDeviceGraph *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  int v7; // ebx
  _UNKNOWN **v8; // rcx
  __int64 Tail; // rax
  int v11; // eax
  unsigned __int16 v12; // dx
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  v14 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  v13 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  if ( *((_DWORD *)this + 64) )
  {
    Tail = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetTail(*((_QWORD *)this + 20) + 16LL);
    v11 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)Tail + 32LL))(
            **(_QWORD **)(*(_QWORD *)Tail + 32LL),
            &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
            &v14);
    v7 = v11;
    if ( v11 >= 0 )
    {
      v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v14)(
              v14,
              &GUID_cd63314f_3fba_4a1b_812c_ef96358728e7,
              &v13);
      v7 = v11;
      if ( v11 >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *, unsigned __int64 *))(*(_QWORD *)v13 + 32LL))(
               v13,
               a2,
               a3);
        if ( v7 < 0 )
          goto LABEL_3;
        v7 = 0;
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
        {
          goto LABEL_9;
        }
        WPP_SF_ii(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x13u,
          (__int64)&WPP_b2662dbb94f23b55810f055fd8f68975_Traceguids,
          *a2,
          *a3);
        goto LABEL_32;
      }
      v8 = (_UNKNOWN **)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        v12 = 18;
        goto LABEL_21;
      }
    }
    else
    {
      v8 = (_UNKNOWN **)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        v12 = 17;
LABEL_21:
        WPP_SF_D((__int64)v8[2], v12, (__int64)&WPP_b2662dbb94f23b55810f055fd8f68975_Traceguids, v11);
LABEL_32:
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
    WPP_SF_D((__int64)v8[2], 0x14u, (__int64)&WPP_b2662dbb94f23b55810f055fd8f68975_Traceguids, v7);
  AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::GetPositionForOffload", 0x1C6u, v7);
LABEL_9:
  if ( v3 )
    LeaveCriticalSection(v3);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return (unsigned int)v7;
}
