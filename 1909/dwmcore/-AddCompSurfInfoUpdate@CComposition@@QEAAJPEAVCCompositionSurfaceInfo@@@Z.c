/*
 * XREFs of ?AddCompSurfInfoUpdate@CComposition@@QEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x180017840
 * Callers:
 *     ?RecordCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAXPEAUHMONITOR__@@W4BufferCompositionMode@@_N@Z @ 0x180017760 (-RecordCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAXPEAUHMONITOR__@@W4BufferCompositionMo.c)
 *     ?RecordTransform@CGlobalCompositionSurfaceInfo@@UEAAXPEAUHMONITOR__@@AEBVCMILMatrix@@@Z @ 0x1800177F0 (-RecordTransform@CGlobalCompositionSurfaceInfo@@UEAAXPEAUHMONITOR__@@AEBVCMILMatrix@@@Z.c)
 *     ?RecordOutputColorSpace@CGlobalCompositionSurfaceInfo@@UEAAXPEAUHMONITOR__@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18001A280 (-RecordOutputColorSpace@CGlobalCompositionSurfaceInfo@@UEAAXPEAUHMONITOR__@@W4DXGI_COLOR_SPACE_T.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::AddCompSurfInfoUpdate(CComposition *this, struct CCompositionSurfaceInfo *a2)
{
  char *v2; // r10
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  struct CCompositionSurfaceInfo **v7; // rcx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  int v11; // eax
  struct CCompositionSurfaceInfo *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v2 = (char *)this + 704;
  v3 = 0;
  v4 = *((unsigned int *)this + 182);
  v5 = 0LL;
  v6 = *((_QWORD *)this + 88);
  if ( !(_DWORD)v4 )
  {
LABEL_5:
    v9 = v4 + 1;
    if ( (int)v4 + 1 < (unsigned int)v4 )
    {
      v3 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024362, 0xB8u, 0LL);
    }
    else
    {
      if ( v9 <= *((_DWORD *)v2 + 5) )
      {
        *(_QWORD *)(v6 + 8 * v4) = v12;
        *((_DWORD *)v2 + 6) = v9;
LABEL_8:
        (*(void (__fastcall **)(struct CCompositionSurfaceInfo *, struct CCompositionSurfaceInfo *, __int64))(*(_QWORD *)v12 + 8LL))(
          v12,
          a2,
          v5);
        return v3;
      }
      v11 = DynArrayImpl<0>::AddMultipleAndSet(v2, 8LL, 1LL, &v12);
      v3 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v11, 0xC3u, 0LL);
    }
    if ( (v3 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v3, 0x31Au, 0LL);
      return v3;
    }
    goto LABEL_8;
  }
  v7 = (struct CCompositionSurfaceInfo **)*((_QWORD *)this + 88);
  while ( a2 != *v7 )
  {
    v5 = (unsigned int)(v5 + 1);
    ++v7;
    if ( (unsigned int)v5 >= (unsigned int)v4 )
      goto LABEL_5;
  }
  return v3;
}
