/*
 * XREFs of ?ProcessSetCreationParams@CCompositionCubeMap@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONCUBEMAP_SETCREATIONPARAMS@@@Z @ 0x1801CEC70
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Grow@?$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z @ 0x1800AADF4 (-Grow@-$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionCubeMap::ProcessSetCreationParams(
        CCompositionCubeMap *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONCUBEMAP_SETCREATIONPARAMS *a3)
{
  int v4; // edx
  int v5; // esi
  signed int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi

  if ( *((_QWORD *)this + 19) != *((_QWORD *)a3 + 1) )
  {
    *((_DWORD *)this + 38) = *((_DWORD *)a3 + 2);
    v4 = *((_DWORD *)a3 + 3);
    *((_DWORD *)this + 39) = v4;
    *((_BYTE *)this + 160) = *((_BYTE *)a3 + 16);
    v5 = 6 * v4;
    v6 = DynArrayImpl<1>::Grow((__int64)this + 80, 0x20u, 6 * v4, 1, 0LL);
    v8 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xA0u, 0LL);
      return v8;
    }
    *((_DWORD *)this + 26) = v5;
    (*(void (__fastcall **)(CCompositionCubeMap *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  }
  return 0;
}
