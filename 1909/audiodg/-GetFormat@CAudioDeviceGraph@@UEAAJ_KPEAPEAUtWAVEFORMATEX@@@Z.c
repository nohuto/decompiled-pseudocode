/*
 * XREFs of ?GetFormat@CAudioDeviceGraph@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x140037DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x140003FAC (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z @ 0x14000BC38 (-FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x14000D9D4 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14002BE64 (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14003CAE8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
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
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x23u, (__int64)&WPP_b2662dbb94f23b55810f055fd8f68975_Traceguids, v7);
  }
  AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::GetFormat", 0x467u, v7);
LABEL_13:
  if ( v3 )
    LeaveCriticalSection(v3);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)v7;
}
