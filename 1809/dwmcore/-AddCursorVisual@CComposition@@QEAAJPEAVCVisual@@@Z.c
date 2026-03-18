/*
 * XREFs of ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x1800EA1EC
 * Callers:
 *     ?Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETCURSOR@@@Z @ 0x1800EA188 (-Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PART.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CCursorVisualReference@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x1800EA2F0 (-Create@CCursorVisualReference@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ??_GCCursorVisualReference@@QEAAPEAXI@Z @ 0x1800EA37C (--_GCCursorVisualReference@@QEAAPEAXI@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCCursorVisualReference@@$0A@@@QEAAJI@Z @ 0x1800EA3B8 (-RemoveAt@-$DynArray@PEAVCCursorVisualReference@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall CComposition::AddCursorVisual(CComposition *this, struct CVisual *a2)
{
  int v2; // edi
  int v3; // ebx
  _QWORD *v6; // r14
  __int64 v7; // rdx
  CCursorVisualReference *v8; // r15
  __int64 v9; // rax
  unsigned int v10; // edx
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // edx
  __int64 v15; // rcx
  int v17; // eax
  CCursorVisualReference *v18; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 230);
  v3 = 0;
  v18 = 0LL;
  if ( v2 > 0 )
  {
    v6 = (_QWORD *)((char *)this + 896);
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
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xF01u);
LABEL_20:
    if ( v18 )
      CCursorVisualReference::`scalar deleting destructor'(v18, v7);
    return (unsigned int)v3;
  }
  v13 = *((_DWORD *)this + 230);
  v14 = v13 + 1;
  v3 = v13 + 1 < v13 ? 0x80070216 : 0;
  if ( v13 + 1 < v13 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v3, 0xB5u);
  }
  else if ( v14 > *((_DWORD *)this + 229) )
  {
    v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 896, 8, 1, &v18);
    v3 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v17, 0xC0u);
  }
  else
  {
    v15 = v13;
    *(_QWORD *)(*((_QWORD *)this + 112) + 8LL * v13) = v18;
    *((_DWORD *)this + 230) = v14;
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v3, 0xF03u);
    goto LABEL_20;
  }
  return (unsigned int)v3;
}
