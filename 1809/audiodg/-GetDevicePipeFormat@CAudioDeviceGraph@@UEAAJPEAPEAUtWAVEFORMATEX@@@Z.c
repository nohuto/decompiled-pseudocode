/*
 * XREFs of ?GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x140011990
 * Callers:
 *     <none>
 * Callees:
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140004E48 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     memcpy_0 @ 0x14001D9AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400405A8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetDevicePipeFormat(CAudioDeviceGraph *this, struct tWAVEFORMATEX **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v5; // rcx
  int v6; // ebx
  unsigned __int16 *v7; // rbp
  __int64 v8; // rbx
  struct tWAVEFORMATEX *v9; // rax
  struct tWAVEFORMATEX *v10; // rsi
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  if ( *((_DWORD *)this + 60) )
  {
    v5 = *(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)(*((_QWORD *)this + 18) + 16LL));
    if ( v5 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 8LL))(v5, &v12);
      if ( v6 >= 0 )
      {
        v7 = (unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 40LL))(v12);
        v8 = v7[8];
        v9 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v8 + 18);
        v10 = v9;
        if ( v9 )
        {
          memcpy_0(v9, v7, v8 + 18);
          v6 = 0;
        }
        else
        {
          v6 = -2147024882;
        }
        *a2 = v10;
        if ( v6 >= 0 )
          goto LABEL_7;
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
      38LL,
      &WPP_c996c122903733bc288a845a1996e411_Traceguids,
      (unsigned int)v6);
  }
  AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::GetDevicePipeFormat", 0x472u, v6);
LABEL_7:
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)v6;
}
