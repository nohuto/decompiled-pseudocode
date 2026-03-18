/*
 * XREFs of ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C005B7F4
 * Callers:
 *     ??_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z @ 0x1C00586C0 (--_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C000F170 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C005B9E8 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ??1CChannel@DirectComposition@@MEAA@XZ @ 0x1C005BA20 (--1CChannel@DirectComposition@@MEAA@XZ.c)
 *     ?FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ @ 0x1C005CAAC (-FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CApplicationChannel::~CApplicationChannel(union _SLIST_HEADER *this)
{
  bool v1; // zf
  unsigned int v3; // edx
  DirectComposition::CEvent *Region; // rcx
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx
  __int64 Alignment; // rcx
  unsigned int v8; // edx
  struct _ERESOURCE *v9; // rcx
  DirectComposition::CEvent *v10; // rcx
  ULONGLONG v11; // rdx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  union _SLIST_HEADER *v16; // rbx
  _QWORD *v17; // rcx
  union _SLIST_HEADER *v18; // rsi
  _QWORD *v19; // rcx
  union _SLIST_HEADER *v20; // rsi
  _QWORD *v21; // rcx
  union _SLIST_HEADER *v22; // rbx
  _QWORD *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rax

  v1 = this[13].Region == 0;
  this->Alignment = (ULONGLONG)&DirectComposition::CApplicationChannel::`vftable';
  if ( !v1 )
  {
    DirectComposition::CApplicationChannel::ProcessReturnedBatches(this);
    Region = (DirectComposition::CEvent *)this[13].Region;
    if ( Region )
      DirectComposition::CEvent::`scalar deleting destructor'(Region, v3);
  }
  v5 = (_QWORD *)this[11].Region;
  if ( v5 )
  {
    do
    {
      v6 = (_QWORD *)*v5;
      Win32FreePool((__int64)v5);
      this[11].Region = (ULONGLONG)v6;
      v5 = v6;
    }
    while ( v6 );
  }
  Alignment = this[11].Alignment;
  if ( Alignment )
  {
    Win32FreePool(Alignment);
    this[11].Alignment = 0LL;
  }
  DirectComposition::CBatchSharedMemoryPoolSet::FreeAllPools((DirectComposition::CBatchSharedMemoryPoolSet *)((char *)&this[37].HeaderX64 + 8));
  v9 = (struct _ERESOURCE *)this[23].Alignment;
  if ( v9 )
  {
    ExDeleteResourceLite(v9);
    Win32FreePool(this[23].Alignment);
  }
  v10 = (DirectComposition::CEvent *)this[22].Region;
  if ( v10 )
    DirectComposition::CEvent::`scalar deleting destructor'(v10, v8);
  v11 = this[45].Region;
  if ( v11 )
  {
    MmUnmapViewOfSection(this[42].Region, v11);
    this[45].Region = 0LL;
  }
  v12 = (void *)this[45].Alignment;
  if ( v12 )
  {
    MmUnmapViewInSessionSpace(v12);
    this[45].Alignment = 0LL;
  }
  v13 = (void *)this[44].Alignment;
  if ( v13 )
  {
    ObfDereferenceObject(v13);
    this[44].Alignment = 0LL;
  }
  v14 = (void *)this[42].Region;
  if ( v14 )
  {
    ObfDereferenceObject(v14);
    this[42].Region = 0LL;
  }
  v15 = (void *)this[38].Region;
  if ( v15 )
    ObfDereferenceObject(v15);
  v16 = this + 33;
  while ( 1 )
  {
    v17 = (_QWORD *)v16->Alignment;
    if ( (union _SLIST_HEADER *)v16->Alignment == v16 )
      break;
    if ( (union _SLIST_HEADER *)v17[1] != v16 || (v27 = (_QWORD *)*v17, *(_QWORD **)(*v17 + 8LL) != v17) )
LABEL_49:
      __fastfail(3u);
    v16->Alignment = (ULONGLONG)v27;
    v27[1] = v16;
    Win32FreePool((__int64)v17);
  }
  v18 = this + 34;
  while ( 1 )
  {
    v19 = (_QWORD *)v18->Alignment;
    if ( (union _SLIST_HEADER *)v18->Alignment == v18 )
      break;
    if ( (union _SLIST_HEADER *)v19[1] != v18 )
      goto LABEL_49;
    v28 = (_QWORD *)*v19;
    if ( *(_QWORD **)(*v19 + 8LL) != v19 )
      goto LABEL_49;
    v18->Alignment = (ULONGLONG)v28;
    v28[1] = v18;
    Win32FreePool((__int64)v19);
  }
  v20 = this + 35;
  while ( 1 )
  {
    v21 = (_QWORD *)v20->Alignment;
    if ( (union _SLIST_HEADER *)v20->Alignment == v20 )
      break;
    if ( (union _SLIST_HEADER *)v21[1] != v20 )
      goto LABEL_49;
    v29 = (_QWORD *)*v21;
    if ( *(_QWORD **)(*v21 + 8LL) != v21 )
      goto LABEL_49;
    v20->Alignment = (ULONGLONG)v29;
    v29[1] = v20;
    Win32FreePool((__int64)v21);
  }
  v22 = this + 36;
  while ( 1 )
  {
    v23 = (_QWORD *)v22->Alignment;
    if ( (union _SLIST_HEADER *)v22->Alignment == v22 )
      break;
    if ( (union _SLIST_HEADER *)v23[1] != v22 )
      goto LABEL_49;
    v30 = (_QWORD *)*v23;
    if ( *(_QWORD **)(*v23 + 8LL) != v23 )
      goto LABEL_49;
    v22->Alignment = (ULONGLONG)v30;
    v30[1] = v22;
    Win32FreePool((__int64)v23);
  }
  v24 = this[29].Region;
  if ( v24 )
    Win32FreePool(v24);
  v25 = this[7].Alignment;
  if ( v25 )
    Win32FreePool(v25);
  v26 = this[3].Region;
  if ( v26 )
    Win32FreePool(v26);
  DirectComposition::CChannel::~CChannel((DirectComposition::CChannel *)this);
}
