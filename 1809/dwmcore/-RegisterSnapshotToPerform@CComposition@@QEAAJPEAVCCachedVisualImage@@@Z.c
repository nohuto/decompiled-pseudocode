/*
 * XREFs of ?RegisterSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z @ 0x18014BCF4
 * Callers:
 *     ?ProcessFreezeVisualSurface@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE_FREEZEVISUALSURFACE@@@Z @ 0x18018D51C (-ProcessFreezeVisualSurface@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUAL.c)
 *     ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x1801B2828 (-CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComposition::RegisterSnapshotToPerform(CComposition *this, struct CCachedVisualImage *a2)
{
  char *v2; // r10
  int v3; // ebx
  __int64 v4; // rax
  unsigned int v5; // r8d
  __int64 v6; // r9
  struct CCachedVisualImage **v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  struct CCachedVisualImage *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v2 = (char *)this + 648;
  v3 = 0;
  v4 = *((unsigned int *)this + 168);
  v5 = 0;
  v6 = *((_QWORD *)this + 81);
  if ( (_DWORD)v4 )
  {
    v7 = (struct CCachedVisualImage **)*((_QWORD *)this + 81);
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
    v3 = (unsigned int)v8 < (unsigned int)v4 ? 0x80070216 : 0;
    if ( (unsigned int)v8 < (unsigned int)v4 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v3, 0xB5u);
    }
    else if ( (unsigned int)v8 > *((_DWORD *)v2 + 5) )
    {
      v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v2, 8, 1, &v11);
      v3 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v9, 0xC0u);
    }
    else
    {
      *(_QWORD *)(v6 + 8 * v4) = v11;
      *((_DWORD *)v2 + 6) = v8;
    }
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v3, 0xAAFu);
  }
  return (unsigned int)v3;
}
