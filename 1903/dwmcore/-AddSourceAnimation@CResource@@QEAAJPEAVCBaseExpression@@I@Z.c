/*
 * XREFs of ?AddSourceAnimation@CResource@@QEAAJPEAVCBaseExpression@@I@Z @ 0x1800890F8
 * Callers:
 *     ?RegisterSourcesForOwner@CExpression@@UEAAJXZ @ 0x180089050 (-RegisterSourcesForOwner@CExpression@@UEAAJXZ.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CResource::AddSourceAnimation(CResource *this, struct CBaseExpression *a2, int a3)
{
  struct _RTL_GENERIC_TABLE *v3; // rbx
  _QWORD *inserted; // rbx
  struct _RTL_GENERIC_TABLE *v7; // rcx
  unsigned int v8; // ecx
  char *v9; // rcx
  unsigned int v10; // r8d
  __int64 v11; // rax
  unsigned int v12; // edx
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // ebx
  struct CBaseExpression **v17; // rdx
  struct _RTL_GENERIC_TABLE *v18; // rax
  unsigned int v19; // ecx
  int Buffer; // [rsp+30h] [rbp-50h] BYREF
  void *lpMem[2]; // [rsp+38h] [rbp-48h]
  __int64 v22; // [rsp+48h] [rbp-38h]
  int v23; // [rsp+50h] [rbp-30h]
  int v24; // [rsp+58h] [rbp-28h] BYREF
  __int128 v25; // [rsp+60h] [rbp-20h] BYREF
  __int64 v26; // [rsp+70h] [rbp-10h]
  int v27; // [rsp+78h] [rbp-8h]
  unsigned __int8 NewElement; // [rsp+A0h] [rbp+20h] BYREF
  struct CBaseExpression *v29; // [rsp+A8h] [rbp+28h] BYREF

  v29 = a2;
  v3 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 5);
  if ( !v3 )
  {
    v18 = (struct _RTL_GENERIC_TABLE *)DefaultHeap::Alloc(0x48uLL);
    v3 = v18;
    if ( v18 )
      RtlInitializeGenericTable(
        v18,
        CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::CompareTableData,
        (PRTL_GENERIC_ALLOCATE_ROUTINE)CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::AllocTableData,
        CGenericTableMap<void *,CLogicalSurfaceHandleMap::LSEENTRY>::FreeTableData,
        0LL);
    else
      v3 = 0LL;
    *((_QWORD *)this + 5) = v3;
    if ( !v3 )
    {
      v15 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2147024882, 0x1D4u, 0LL);
      return v15;
    }
  }
  v22 = 0LL;
  v23 = 0;
  Buffer = a3;
  *(_OWORD *)lpMem = 0LL;
  inserted = RtlLookupElementGenericTable(v3, &Buffer);
  if ( lpMem[0] != lpMem[1] )
  {
    operator delete(lpMem[0]);
    lpMem[0] = 0LL;
  }
  if ( !inserted )
  {
    v7 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 5);
    v26 = 0LL;
    v27 = 0;
    v24 = a3;
    v25 = 0LL;
    inserted = RtlInsertElementGenericTable(v7, &v24, 0x28u, &NewElement);
    if ( !inserted )
    {
      v15 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024882, 0x1DEu, 0LL);
      DynArrayImpl<0>::~DynArrayImpl<0>(&v25);
      return v15;
    }
    DynArrayImpl<0>::~DynArrayImpl<0>(&v25);
  }
  v9 = (char *)(inserted + 1);
  v10 = 0;
  v11 = *((unsigned int *)inserted + 8);
  if ( (_DWORD)v11 )
  {
    v17 = (struct CBaseExpression **)inserted[1];
    while ( v29 != *v17 )
    {
      ++v10;
      ++v17;
      if ( v10 >= (unsigned int)v11 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v12 = v11 + 1;
    if ( (int)v11 + 1 < (unsigned int)v11 )
    {
      v15 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v9, 0LL, 0, -2147024362, 0xB8u, 0LL);
      goto LABEL_12;
    }
    if ( v12 > *((_DWORD *)inserted + 7) )
    {
      v13 = DynArrayImpl<0>::AddMultipleAndSet(v9, 8LL, 1LL, &v29);
      v15 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xC3u, 0LL);
LABEL_12:
      if ( (v15 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v15, 0x1F0u, 0LL);
        return v15;
      }
      return 0;
    }
    *(_QWORD *)(inserted[1] + 8 * v11) = v29;
    *((_DWORD *)inserted + 8) = v12;
  }
  return 0;
}
