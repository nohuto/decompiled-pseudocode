/*
 * XREFs of ?AddSourceAnimation@CResource@@QEAAJPEAVCBaseExpression@@I@Z @ 0x1800CA18C
 * Callers:
 *     ?RegisterSourcesForOwner@CExpression@@UEAAJXZ @ 0x1800C8630 (-RegisterSourcesForOwner@CExpression@@UEAAJXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBaseExpression@@$0A@@@QEAAJPEFBQEAVCBaseExpression@@I@Z @ 0x1800A8F94 (-AddMultipleAndSet@-$DynArray@PEAVCBaseExpression@@$0A@@@QEAAJPEFBQEAVCBaseExpression@@I@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CResource::AddSourceAnimation(CResource *this, struct CBaseExpression *a2, int a3)
{
  struct _RTL_GENERIC_TABLE *v3; // rbx
  _QWORD *inserted; // rbx
  unsigned int v7; // edx
  struct CBaseExpression **v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  struct _RTL_GENERIC_TABLE *v13; // rcx
  __int64 v14; // rcx
  struct _RTL_GENERIC_TABLE *v15; // rax
  __int64 v16; // rcx
  int v17; // [rsp+30h] [rbp-50h] BYREF
  void *v18[2]; // [rsp+38h] [rbp-48h] BYREF
  int v19; // [rsp+48h] [rbp-38h]
  int v20; // [rsp+4Ch] [rbp-34h]
  int v21; // [rsp+50h] [rbp-30h]
  int Buffer; // [rsp+58h] [rbp-28h] BYREF
  void *v23[2]; // [rsp+60h] [rbp-20h]
  int v24; // [rsp+70h] [rbp-10h]
  int v25; // [rsp+74h] [rbp-Ch]
  int v26; // [rsp+78h] [rbp-8h]
  unsigned __int8 NewElement; // [rsp+A0h] [rbp+20h] BYREF
  struct CBaseExpression *v28; // [rsp+A8h] [rbp+28h] BYREF

  v28 = a2;
  v3 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 5);
  if ( v3 )
    goto LABEL_2;
  v15 = (struct _RTL_GENERIC_TABLE *)HeapAlloc(WPF::g_processHeap, 0, 0x48uLL);
  v3 = v15;
  if ( v15 )
    RtlInitializeGenericTable(
      v15,
      (PRTL_GENERIC_COMPARE_ROUTINE)CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::CompareTableData,
      (PRTL_GENERIC_ALLOCATE_ROUTINE)CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::AllocTableData,
      (PRTL_GENERIC_FREE_ROUTINE)CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::FreeTableData,
      0LL);
  else
    v3 = 0LL;
  *((_QWORD *)this + 5) = v3;
  if ( v3 )
  {
LABEL_2:
    v24 = 0;
    v25 = 0;
    v26 = 0;
    *(_OWORD *)v23 = 0LL;
    Buffer = a3;
    inserted = RtlLookupElementGenericTable(v3, &Buffer);
    if ( v23[0] != v23[1] )
    {
      WPF::ProcessHeapImpl::Free(v23[0]);
      v23[0] = 0LL;
    }
    if ( !inserted )
    {
      v13 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 5);
      v19 = 0;
      v20 = 0;
      v21 = 0;
      *(_OWORD *)v18 = 0LL;
      v17 = a3;
      inserted = RtlInsertElementGenericTable(v13, &v17, 0x28u, &NewElement);
      if ( !inserted )
      {
        v11 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0x1E5u);
        DynArrayImpl<1>::~DynArrayImpl<1>(v18);
        return v11;
      }
      if ( v18[0] != v18[1] )
      {
        WPF::ProcessHeapImpl::Free(v18[0]);
        v18[0] = 0LL;
      }
    }
    v7 = 0;
    v8 = (struct CBaseExpression **)inserted[1];
    if ( *((_DWORD *)inserted + 8) )
    {
      while ( v28 != *v8 )
      {
        ++v7;
        ++v8;
        if ( v7 >= *((_DWORD *)inserted + 8) )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      v9 = DynArray<CBaseExpression *,0>::AddMultipleAndSet((__int64)(inserted + 1), &v28);
      v11 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1F7u);
        return v11;
      }
    }
    return 0;
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024882, 0x1DBu);
  }
  return v11;
}
