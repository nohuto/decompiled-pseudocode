/*
 * XREFs of ?AddCompSurfInfoUpdate@CComposition@@QEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x180013460
 * Callers:
 *     ?RecordCompositionMode@CCompositionSurfaceInfo@@QEAAXPEAUHMONITOR__@@W4BufferCompositionMode@@_N@Z @ 0x1800129C0 (-RecordCompositionMode@CCompositionSurfaceInfo@@QEAAXPEAUHMONITOR__@@W4BufferCompositionMode@@_N.c)
 *     ?RecordOutputColorSpace@CCompositionSurfaceBitmap@@UEAAXPEAUHMONITOR__@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180013080 (-RecordOutputColorSpace@CCompositionSurfaceBitmap@@UEAAXPEAUHMONITOR__@@W4DXGI_COLOR_SPACE_TYPE@.c)
 *     ?RecordTransform@CCompositionSurfaceInfo@@QEAAXPEAUHMONITOR__@@AEBVCMILMatrix@@@Z @ 0x180013100 (-RecordTransform@CCompositionSurfaceInfo@@QEAAXPEAUHMONITOR__@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18005A790 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComposition::AddCompSurfInfoUpdate(CComposition *this, struct CCompositionSurfaceInfo *a2)
{
  char *v2; // r10
  int v3; // ebx
  __int64 v4; // rax
  unsigned int v5; // r8d
  __int64 v6; // r9
  struct CCompositionSurfaceInfo **v7; // rcx
  unsigned int v9; // ecx
  int v10; // eax
  CMILCOMBase *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v2 = (char *)this + 688;
  v3 = 0;
  v4 = *((unsigned int *)this + 178);
  v5 = 0;
  v6 = *((_QWORD *)this + 86);
  if ( (_DWORD)v4 )
  {
    v7 = (struct CCompositionSurfaceInfo **)*((_QWORD *)this + 86);
    while ( a2 != *v7 )
    {
      ++v5;
      ++v7;
      if ( v5 >= (unsigned int)v4 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v9 = v4 + 1;
    v3 = (int)v4 + 1 < (unsigned int)v4 ? 0x80070216 : 0;
    if ( (int)v4 + 1 < (unsigned int)v4 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v3, 0xB5u);
    }
    else if ( v9 > *((_DWORD *)v2 + 5) )
    {
      v10 = DynArrayImpl<0>::AddMultipleAndSet(v2, 8LL, 1LL, &v11);
      v3 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v10, 0xC0u);
    }
    else
    {
      *(_QWORD *)(v6 + 8 * v4) = v11;
      *((_DWORD *)v2 + 6) = v9;
    }
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v3, 0x310u);
    else
      CMILCOMBase::InternalAddRef(v11);
  }
  return (unsigned int)v3;
}
