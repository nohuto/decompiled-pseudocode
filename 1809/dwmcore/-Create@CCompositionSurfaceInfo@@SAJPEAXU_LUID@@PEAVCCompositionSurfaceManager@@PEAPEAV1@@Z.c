/*
 * XREFs of ?Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z @ 0x1800A11B0
 * Callers:
 *     ?GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1800A10B8 (-GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfa.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18005A790 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::Create(
        void *a1,
        struct _LUID a2,
        struct CCompositionSurfaceManager *a3,
        struct CCompositionSurfaceInfo **a4)
{
  unsigned int v4; // esi
  _QWORD *v9; // rax
  struct CCompositionSurfaceInfo *v10; // rdi
  struct _RTL_GENERIC_TABLE *v11; // rcx
  unsigned int v12; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  _QWORD Buffer[5]; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int8 NewElement; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  *a4 = 0LL;
  v9 = WPF::ProcessHeapImpl::AllocClear(0x1A0uLL);
  v10 = (struct CCompositionSurfaceInfo *)v9;
  if ( !v9 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *((_DWORD *)v9 + 2) = 0;
  v9[3] = a3;
  *v9 = &CCompositionSurfaceInfo::`vftable'{for `CMILCOMBase'};
  v9[2] = &CCompositionSurfaceInfo::`vftable'{for `IDeviceResourceNotify'};
  v9[5] = a2;
  v9[6] = v9;
  v9[10] = v9 + 14;
  v9[11] = v9 + 14;
  *((_DWORD *)v9 + 24) = 1;
  *(_QWORD *)((char *)v9 + 100) = 1LL;
  v9[24] = 0LL;
  *((_DWORD *)v9 + 96) = 1;
  *(_QWORD *)((char *)v9 + 388) = 1LL;
  v9[46] = v9 + 50;
  v9[47] = v9 + 50;
  *((_BYTE *)v9 + 408) = 0;
  CMILCOMBase::InternalAddRef((CMILCOMBase *)v9);
  v11 = (struct _RTL_GENERIC_TABLE *)(*((_QWORD *)v10 + 3) + 8LL);
  Buffer[0] = *((_QWORD *)v10 + 5);
  Buffer[1] = v10;
  if ( RtlInsertElementGenericTable(v11, Buffer, 0x10u, &NewElement) )
  {
    *((_QWORD *)v10 + 4) = a1;
    *a4 = v10;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x8Cu);
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0x3Au);
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024882, 0x1Du);
    CGdiSpriteBitmap::Release(v10);
  }
  return v4;
}
