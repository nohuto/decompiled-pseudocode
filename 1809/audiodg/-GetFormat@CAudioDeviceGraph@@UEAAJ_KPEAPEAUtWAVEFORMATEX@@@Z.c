/*
 * XREFs of ?GetFormat@CAudioDeviceGraph@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x14003C740
 * Callers:
 *     <none>
 * Callees:
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140004E48 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x14003103C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     ?FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z @ 0x14003C344 (-FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400405A8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetFormat(CAudioDeviceGraph *this, __int64 a2, struct tWAVEFORMATEX **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  int v7; // ebx
  struct CPipeInstance *PipeInstance; // rax
  __int64 v9; // rcx
  const struct tWAVEFORMATEX *v10; // rax
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  if ( *((_DWORD *)this + 64) )
  {
    PipeInstance = CAudioDeviceGraph::FindPipeInstance(this, a2);
    if ( PipeInstance
      && (v9 = *(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)PipeInstance + 2)) != 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 8LL))(v9, &v12);
      if ( v7 >= 0 )
      {
        v10 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 40LL))(v12);
        v7 = CloneWaveFormat(v10, a3);
        if ( v7 >= 0 )
          goto LABEL_13;
      }
    }
    else
    {
      v7 = -2005139430;
    }
  }
  else
  {
    v7 = -2005139437;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x25u, (__int64)&WPP_c996c122903733bc288a845a1996e411_Traceguids, v7);
  }
  AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::GetFormat", 0x44Eu, v7);
LABEL_13:
  if ( v3 )
    LeaveCriticalSection(v3);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)v7;
}
