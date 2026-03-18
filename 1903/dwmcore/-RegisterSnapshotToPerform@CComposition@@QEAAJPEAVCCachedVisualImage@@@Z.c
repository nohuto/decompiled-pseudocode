/*
 * XREFs of ?RegisterSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z @ 0x180177AA8
 * Callers:
 *     ?ProcessFreeze@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_FREEZE@@@Z @ 0x1801FE31C (-ProcessFreeze@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_FREEZE@@@Z.c)
 *     ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x180218148 (-CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CComposition::RegisterSnapshotToPerform(CComposition *this, struct CCachedVisualImage *a2)
{
  char *v2; // r10
  unsigned int v3; // ebx
  __int64 v4; // rax
  unsigned int v5; // r8d
  __int64 v6; // r9
  struct CCachedVisualImage **v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  signed int v10; // eax
  struct CCachedVisualImage *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v2 = (char *)this + 664;
  v3 = 0;
  v4 = *((unsigned int *)this + 172);
  v5 = 0;
  v6 = *((_QWORD *)this + 83);
  if ( (_DWORD)v4 )
  {
    v7 = (struct CCachedVisualImage **)*((_QWORD *)this + 83);
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
    v8 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v8 >= (unsigned int)v4 )
    {
      if ( (unsigned int)v8 <= *((_DWORD *)v2 + 5) )
      {
        *(_QWORD *)(v6 + 8 * v4) = v12;
        *((_DWORD *)v2 + 6) = v8;
        return v3;
      }
      v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v2, 8, 1, &v12);
      v3 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v10, 0xC3u, 0LL);
    }
    else
    {
      v3 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    }
    if ( (v3 & 0x80000000) != 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v3, 0x9ECu, 0LL);
  }
  return v3;
}
