/*
 * XREFs of ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C0055ABC
 * Callers:
 *     ??_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z @ 0x1C0055A20 (--_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C000E7B4 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C0055CB0 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ??1CChannel@DirectComposition@@MEAA@XZ @ 0x1C0055CE8 (--1CChannel@DirectComposition@@MEAA@XZ.c)
 *     ?FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ @ 0x1C0057050 (-FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ.c)
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
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  union _SLIST_HEADER *v15; // rbx
  _QWORD *v16; // rcx
  union _SLIST_HEADER *v17; // rsi
  _QWORD *v18; // rcx
  union _SLIST_HEADER *v19; // rsi
  _QWORD *v20; // rcx
  union _SLIST_HEADER *v21; // rbx
  _QWORD *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax

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
  if ( this[45].Region )
  {
    MmUnmapViewOfSection(this[42].Region);
    this[45].Region = 0LL;
  }
  v11 = (void *)this[45].Alignment;
  if ( v11 )
  {
    MmUnmapViewInSessionSpace(v11);
    this[45].Alignment = 0LL;
  }
  v12 = (void *)this[44].Alignment;
  if ( v12 )
  {
    ObfDereferenceObject(v12);
    this[44].Alignment = 0LL;
  }
  v13 = (void *)this[42].Region;
  if ( v13 )
  {
    ObfDereferenceObject(v13);
    this[42].Region = 0LL;
  }
  v14 = (void *)this[38].Region;
  if ( v14 )
    ObfDereferenceObject(v14);
  v15 = this + 33;
  while ( 1 )
  {
    v16 = (_QWORD *)v15->Alignment;
    if ( (union _SLIST_HEADER *)v15->Alignment == v15 )
      break;
    if ( (union _SLIST_HEADER *)v16[1] != v15 || (v26 = (_QWORD *)*v16, *(_QWORD **)(*v16 + 8LL) != v16) )
LABEL_49:
      __fastfail(3u);
    v15->Alignment = (ULONGLONG)v26;
    v26[1] = v15;
    Win32FreePool((__int64)v16);
  }
  v17 = this + 34;
  while ( 1 )
  {
    v18 = (_QWORD *)v17->Alignment;
    if ( (union _SLIST_HEADER *)v17->Alignment == v17 )
      break;
    if ( (union _SLIST_HEADER *)v18[1] != v17 )
      goto LABEL_49;
    v27 = (_QWORD *)*v18;
    if ( *(_QWORD **)(*v18 + 8LL) != v18 )
      goto LABEL_49;
    v17->Alignment = (ULONGLONG)v27;
    v27[1] = v17;
    Win32FreePool((__int64)v18);
  }
  v19 = this + 35;
  while ( 1 )
  {
    v20 = (_QWORD *)v19->Alignment;
    if ( (union _SLIST_HEADER *)v19->Alignment == v19 )
      break;
    if ( (union _SLIST_HEADER *)v20[1] != v19 )
      goto LABEL_49;
    v28 = (_QWORD *)*v20;
    if ( *(_QWORD **)(*v20 + 8LL) != v20 )
      goto LABEL_49;
    v19->Alignment = (ULONGLONG)v28;
    v28[1] = v19;
    Win32FreePool((__int64)v20);
  }
  v21 = this + 36;
  while ( 1 )
  {
    v22 = (_QWORD *)v21->Alignment;
    if ( (union _SLIST_HEADER *)v21->Alignment == v21 )
      break;
    if ( (union _SLIST_HEADER *)v22[1] != v21 )
      goto LABEL_49;
    v29 = (_QWORD *)*v22;
    if ( *(_QWORD **)(*v22 + 8LL) != v22 )
      goto LABEL_49;
    v21->Alignment = (ULONGLONG)v29;
    v29[1] = v21;
    Win32FreePool((__int64)v22);
  }
  v23 = this[29].Region;
  if ( v23 )
    Win32FreePool(v23);
  v24 = this[7].Alignment;
  if ( v24 )
    Win32FreePool(v24);
  v25 = this[3].Region;
  if ( v25 )
    Win32FreePool(v25);
  DirectComposition::CChannel::~CChannel((DirectComposition::CChannel *)this);
}
