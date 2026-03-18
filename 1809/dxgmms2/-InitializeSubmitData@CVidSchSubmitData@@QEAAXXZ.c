/*
 * XREFs of ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C00294F0
 * Callers:
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C002B418 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ @ 0x1C00293D4 (-GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ.c)
 */

void __fastcall CVidSchSubmitData::InitializeSubmitData(CVidSchSubmitData *this)
{
  __int64 v2; // rbx
  char v3; // di
  PSLIST_ENTRY v4; // r10
  unsigned int VidSchSibmitDataSize; // eax
  void *v6; // r10
  __int64 v7; // rcx
  int v8; // eax
  int v9; // r8d
  _DWORD *v10; // rdx
  int v11; // r9d
  int v12; // ecx
  int v13; // r8d
  unsigned int v14; // eax

  v2 = *((_QWORD *)this + 1) + 1120LL;
  v3 = 1;
  ++*(_DWORD *)(v2 + 20);
  v4 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v2);
  if ( !v4 )
  {
    ++*(_DWORD *)(v2 + 24);
    v4 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v2 + 48))(
                         *(unsigned int *)(v2 + 36),
                         *(unsigned int *)(v2 + 44),
                         *(unsigned int *)(v2 + 40),
                         v2);
  }
  *(_QWORD *)this = v4;
  if ( v4 )
  {
    VidSchSibmitDataSize = ADAPTER_RENDER::GetVidSchSibmitDataSize(*((ADAPTER_RENDER **)this + 1));
    memset(v6, 0, VidSchSibmitDataSize);
    v7 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    v8 = *(_DWORD *)(v7 + 2160);
    if ( v8 < 0x2000 )
      v9 = 1;
    else
      v9 = *(_DWORD *)(v7 + 256);
    if ( v8 < 0x2000 && !*(_BYTE *)(v7 + 2452) )
      v3 = 0;
    v10 = *(_DWORD **)this;
    v11 = *(_DWORD *)(v7 + 2368);
    *(_BYTE *)(*(_QWORD *)this + 356LL) = v3;
    if ( v3 )
    {
      v10[142] = v9;
      v12 = 8 * v9;
      v13 = v9 << 6;
      v10[141] = v11;
      v10[143] = v11 * (v13 + ((v12 + 191) & 0xFFFFFFF8)) + 16;
      v14 = v11 * (v13 + ((v12 + 191) & 0xFFFFFFF8)) + 576;
      v10[134] = v14;
      v10[135] = v12 + v14;
    }
  }
}
