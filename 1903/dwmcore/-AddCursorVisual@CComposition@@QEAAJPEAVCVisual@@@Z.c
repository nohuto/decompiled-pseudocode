/*
 * XREFs of ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x1800D659C
 * Callers:
 *     ?Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETCURSOR@@@Z @ 0x1800D6538 (-Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_P.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CCursorVisualReference@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x1800D6698 (-Create@CCursorVisualReference@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ??_GCCursorVisualReference@@QEAAPEAXI@Z @ 0x1800DCF2C (--_GCCursorVisualReference@@QEAAPEAXI@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCCursorVisualReference@@$0A@@@QEAAJI@Z @ 0x1800DCFF0 (-RemoveAt@-$DynArray@PEAVCCursorVisualReference@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall CComposition::AddCursorVisual(CComposition *this, struct CVisual *a2)
{
  int v2; // edi
  unsigned int v3; // ebx
  _QWORD *v6; // r14
  __int64 v7; // rdx
  CCursorVisualReference *v8; // r15
  __int64 v9; // rax
  unsigned int v10; // edx
  signed int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // edx
  signed int v16; // eax
  __int64 v17; // rcx
  CCursorVisualReference *v18; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 234);
  v3 = 0;
  v18 = 0LL;
  if ( v2 > 0 )
  {
    v6 = (_QWORD *)((char *)this + 912);
    do
    {
      v7 = (unsigned int)(v2 - 1);
      v8 = *(CCursorVisualReference **)(*v6 + 8 * v7);
      v9 = *((_QWORD *)v8 + 1);
      if ( *(_QWORD *)(v9 + 16) )
      {
        if ( *(struct CVisual **)(v9 + 16) == a2 )
          goto LABEL_20;
      }
      else
      {
        DynArray<CCursorVisualReference *,0>::RemoveAt(v6, v7);
        CCursorVisualReference::`scalar deleting destructor'(v8, v10);
      }
      --v2;
    }
    while ( v2 > 0 );
  }
  v11 = CCursorVisualReference::Create(this, a2, &v18);
  v3 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xE36u, 0LL);
  }
  else
  {
    v13 = *((_DWORD *)this + 234);
    v14 = v13 + 1;
    if ( v13 + 1 < v13 )
    {
      v3 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    }
    else
    {
      if ( v14 <= *((_DWORD *)this + 233) )
      {
        v3 = 0;
        *(_QWORD *)(*((_QWORD *)this + 114) + 8LL * v13) = v18;
        *((_DWORD *)this + 234) = v14;
        return v3;
      }
      v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 912, 8, 1, &v18);
      v3 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0xC3u, 0LL);
    }
    if ( (v3 & 0x80000000) == 0 )
      return v3;
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v3, 0xE38u, 0LL);
  }
LABEL_20:
  if ( v18 )
    CCursorVisualReference::`scalar deleting destructor'(v18, v7);
  return v3;
}
