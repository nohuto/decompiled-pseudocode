/*
 * XREFs of ?GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x14000ED60
 * Callers:
 *     <none>
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x140003FAC (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x14000D9D4 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14002BE64 (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14003CAE8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetDevicePipeFormat(CAudioDeviceGraph *this, struct tWAVEFORMATEX **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v5; // rcx
  int v6; // ebx
  const struct tWAVEFORMATEX *v7; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  if ( *((_DWORD *)this + 60) )
  {
    v5 = *(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)(*((_QWORD *)this + 18) + 16LL));
    if ( v5 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 8LL))(v5, &v9);
      if ( v6 >= 0 )
      {
        v7 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 40LL))(v9);
        v6 = CloneWaveFormat(v7, a2);
        if ( v6 >= 0 )
          goto LABEL_5;
      }
    }
    else
    {
      v6 = -2005139430;
    }
  }
  else
  {
    v6 = -2005139437;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      36LL,
      &WPP_b2662dbb94f23b55810f055fd8f68975_Traceguids,
      (unsigned int)v6);
  }
  AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::GetDevicePipeFormat", 0x48Bu, v6);
LABEL_5:
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return (unsigned int)v6;
}
