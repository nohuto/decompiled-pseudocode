/*
 * XREFs of ?ProcessSetVisualTree@CCaptureController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURECONTROLLER_SETVISUALTREE@@@Z @ 0x1801CDA5C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009BDF0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCaptureController::ProcessSetVisualTree(
        CCaptureController *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CAPTURECONTROLLER_SETVISUALTREE *a3)
{
  unsigned int v4; // ebp
  unsigned int v5; // edx
  __int64 Resource; // rdi
  __int64 v8; // rbx
  _QWORD *v9; // rbx
  _QWORD *v10; // rsi
  signed int v11; // eax
  __int64 v12; // rcx

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( v5 )
    Resource = CResourceTable::GetResource((__int64)a2, v5, 0x30u);
  v8 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = Resource;
  if ( Resource )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Resource + 8LL))(Resource);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = (_QWORD *)*((_QWORD *)this + 7);
  v10 = (_QWORD *)*((_QWORD *)this + 8);
  while ( v9 != v10 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v9 + 432LL))(*v9, Resource);
    v4 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x32u, 0LL);
      return v4;
    }
    ++v9;
  }
  return v4;
}
