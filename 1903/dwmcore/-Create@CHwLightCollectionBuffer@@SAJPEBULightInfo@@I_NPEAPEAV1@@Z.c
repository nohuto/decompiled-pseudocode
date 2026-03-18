/*
 * XREFs of ?Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z @ 0x180009498
 * Callers:
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x1800090EC (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 * Callees:
 *     ?UpdateLightInfo@CHwLightCollectionBuffer@@AEAAXPEBULightInfo@@I_N@Z @ 0x180009594 (-UpdateLightInfo@CHwLightCollectionBuffer@@AEAAXPEBULightInfo@@I_N@Z.c)
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x18002B298 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwLightCollectionBuffer::Create(
        const struct LightInfo *a1,
        unsigned int a2,
        bool a3,
        struct CHwLightCollectionBuffer **a4)
{
  unsigned int v8; // edi
  char *v9; // rax
  unsigned int v10; // ecx
  CHwLightCollectionBuffer *v11; // rbx
  CHwLightCollectionBuffer *v13; // [rsp+30h] [rbp-28h] BYREF

  v8 = 0;
  v9 = (char *)DefaultHeap::Alloc(0x208uLL);
  v11 = (CHwLightCollectionBuffer *)v9;
  if ( v9 )
  {
    *((_DWORD *)v9 + 2) = 0;
    *(_QWORD *)v9 = &CHwLightCollectionBuffer::`vftable';
    *((_DWORD *)v9 + 4) = -1;
    memset_0(v9 + 20, 0, 0x1F4uLL);
  }
  else
  {
    v11 = 0LL;
  }
  v13 = v11;
  if ( v11 )
  {
    (**(void (__fastcall ***)(CHwLightCollectionBuffer *))v11)(v11);
    CHwLightCollectionBuffer::UpdateLightInfo(v11, a1, a2, a3);
    v13 = 0LL;
    *a4 = v11;
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x25u, 0LL);
  }
  ReleaseInterface<CDisplay>(&v13);
  return v8;
}
