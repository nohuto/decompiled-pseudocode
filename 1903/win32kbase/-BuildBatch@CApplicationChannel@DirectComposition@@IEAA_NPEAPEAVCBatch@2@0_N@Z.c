/*
 * XREFs of ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C000E430
 * Callers:
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z @ 0x1C0009FF8 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z.c)
 *     NtDCompositionCommitChannel @ 0x1C000E1B0 (NtDCompositionCommitChannel.c)
 * Callees:
 *     ?ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C0007088 (-ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?EmitCommands@CTelemetryInfo@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0009854 (-EmitCommands@CTelemetryInfo@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C000DBD4 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C000E7B4 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?EmitDeletionCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000EAD8 (-EmitDeletionCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000EB78 (-EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     EtwTraceDCompCommitBatchEvent @ 0x1C000ECC0 (EtwTraceDCompCommitBatchEvent.c)
 *     ?EmitBindingAddCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000ECDC (-EmitBindingAddCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000EDC0 (-EmitUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSharedSectionUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000EE34 (-EmitSharedSectionUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCreationCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000EEA4 (-EmitCreationCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000EF68 (-EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C000F1FC (-RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0013C00 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C0055CB0 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01A5558 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::BuildBatch(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2,
        struct DirectComposition::CBatch **a3,
        char a4)
{
  unsigned __int8 v8; // bp
  char v9; // cl
  struct DirectComposition::CBatch *BatchFragment; // r14
  struct DirectComposition::CBatch *v11; // rdi
  struct _ERESOURCE *v12; // rsi
  char v14; // al
  __int64 v15; // rdi
  char *v16; // rdx
  unsigned int v17; // edx
  DirectComposition::CEvent *v18; // rcx
  char *v19; // rax
  char *v20; // rcx
  void *v21; // [rsp+20h] [rbp-48h] BYREF
  struct DirectComposition::CBatch *v22; // [rsp+70h] [rbp+8h] BYREF
  void *v23; // [rsp+78h] [rbp+10h] BYREF
  void *v24; // [rsp+80h] [rbp+18h] BYREF

  v8 = 1;
  if ( *((int *)this + 6) > 2 )
    DirectComposition::CApplicationChannel::ClearAnimationTimeList(this);
  DirectComposition::CApplicationChannel::ProcessReturnedBatches(this);
  v9 = *((_BYTE *)this + 240);
  if ( (v9 & 2) != 0 )
  {
    DirectComposition::CApplicationChannel::RemoveExpiredAnimations(this);
    *((_BYTE *)this + 240) &= ~2u;
    v9 = *((_BYTE *)this + 240);
  }
  BatchFragment = 0LL;
  v11 = 0LL;
  if ( (*((_BYTE *)this + 48) & 2) == 0
    || *((_QWORD *)this + 21)
    || (v9 & 0x60) != 0
    || (*((_BYTE *)this + 241) & 1) != 0
    || *((_QWORD *)this + 53)
    || *((_QWORD *)this + 56)
    || *((_QWORD *)this + 50)
    || *((_QWORD *)this + 55)
    || *((_QWORD *)this + 51)
    || *((_QWORD *)this + 52)
    || *((DirectComposition::CApplicationChannel **)this + 66) != (DirectComposition::CApplicationChannel *)((char *)this + 528)
    || *((DirectComposition::CApplicationChannel **)this + 68) != (DirectComposition::CApplicationChannel *)((char *)this + 544)
    || *((DirectComposition::CApplicationChannel **)this + 70) != (DirectComposition::CApplicationChannel *)((char *)this + 560)
    || *((DirectComposition::CApplicationChannel **)this + 72) != (DirectComposition::CApplicationChannel *)((char *)this + 576)
    || *((_QWORD *)this + 93)
    || ((*((_DWORD *)this + 148) - 1) & 0xFFFFFFFD) == 0 )
  {
    BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment((PERESOURCE *)this, 1, 1);
    *((_BYTE *)BatchFragment + 32) ^= (*((_BYTE *)BatchFragment + 32) ^ ~(*((_BYTE *)this + 48) >> 1)) & 1;
    *((_BYTE *)this + 48) |= 2u;
    EtwTraceDCompCommitBatchEvent(*((unsigned int *)this + 7), BatchFragment, *((unsigned int *)BatchFragment + 4));
    v15 = *((_QWORD *)this + 54);
    if ( v15 )
    {
      do
      {
        DirectComposition::CResourceMarshaler::AddRef((DirectComposition::CResourceMarshaler *)(*(_QWORD *)v15 + 16LL));
        *(_DWORD *)(v15 + 24) |= 2u;
        v15 = *(_QWORD *)(v15 + 8);
      }
      while ( v15 );
      v15 = *((_QWORD *)this + 54);
    }
    *((_QWORD *)BatchFragment + 10) = v15;
    *((_QWORD *)this + 54) = 0LL;
    v22 = BatchFragment;
    if ( !DirectComposition::CApplicationChannel::EmitCallbackIDCommand(this, &v22)
      || !DirectComposition::CTelemetryInfo::EmitCommands(
            (DirectComposition::CApplicationChannel *)((char *)this + 528),
            &v22)
      || !DirectComposition::CApplicationChannel::EmitBindingRemovalCommands(this, &v22)
      || !DirectComposition::CApplicationChannel::EmitDeletionCommands(this, &v22)
      || !DirectComposition::CApplicationChannel::EmitCreationCommands(this, &v22)
      || !DirectComposition::CApplicationChannel::EmitSharedSectionUpdateCommands(this, &v22)
      || !DirectComposition::CApplicationChannel::EmitUpdateCommands(this, &v22)
      || !DirectComposition::CApplicationChannel::EmitBindingRemovalCommands(this, &v22)
      || !DirectComposition::CApplicationChannel::EmitBindingAddCommands(this, &v22) )
    {
      goto LABEL_67;
    }
    if ( *((_QWORD *)this + 93) )
    {
      if ( DirectComposition::CBatch::EnsureBatchBuffer(&v22, 0x34uLL, &v23) )
      {
        v16 = (char *)v23;
        *(_DWORD *)v23 = 52;
        *((_DWORD *)v16 + 1) = 54;
        *((_DWORD *)v16 + 11) = *(_DWORD *)(*((_QWORD *)this + 93) + 24LL);
        *((_DWORD *)v16 + 2) = *((_DWORD *)this + 188);
        *((_DWORD *)v16 + 3) = *((_DWORD *)this + 189);
        *((_DWORD *)v16 + 4) = *((_DWORD *)this + 190);
        *((_DWORD *)v16 + 5) = *((_DWORD *)this + 191);
        *((_DWORD *)v16 + 6) = *((_DWORD *)this + 192);
        *(_QWORD *)(v16 + 28) = *((_QWORD *)this + 97);
        *(_QWORD *)(v16 + 36) = *((_QWORD *)this + 98);
        DirectComposition::CApplicationChannel::ReleaseResource(
          this,
          *((struct DirectComposition::CResourceMarshaler **)this + 93));
        v18 = (DirectComposition::CEvent *)*((_QWORD *)this + 92);
        *((_QWORD *)this + 93) = 0LL;
        if ( v18 )
          DirectComposition::CEvent::`scalar deleting destructor'(v18, v17);
        *((_QWORD *)this + 92) = 0LL;
      }
      if ( *((_QWORD *)this + 93) )
        goto LABEL_67;
    }
    if ( !DirectComposition::CApplicationChannel::EmitDeletionCommands(this, &v22) )
      goto LABEL_67;
    if ( ((*((_DWORD *)this + 148) - 1) & 0xFFFFFFFD) == 0
      && DirectComposition::CBatch::EnsureBatchBuffer(&v22, 0xCuLL, &v24) )
    {
      v19 = (char *)v24;
      *(_DWORD *)v24 = 12;
      *(_QWORD *)(v19 + 4) = 0LL;
      *((_DWORD *)v19 + 1) = 49;
      if ( *((_DWORD *)this + 148) == 1 )
      {
        v19[8] = 1;
        *((_DWORD *)this + 148) = 2;
      }
      else
      {
        v19[8] = 0;
        *((_DWORD *)this + 148) = 0;
      }
    }
    if ( (*((_DWORD *)this + 148) & 0xFFFFFFFD) != 0 )
      goto LABEL_67;
    if ( (*((_BYTE *)this + 241) & 1) == 0 )
      goto LABEL_44;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(&v22, 0xCuLL, &v21) )
    {
      v20 = (char *)v21;
      *(_DWORD *)v21 = 12;
      *(_QWORD *)(v20 + 4) = 0LL;
      *((_DWORD *)v20 + 1) = 52;
      v20[8] = (*((_BYTE *)this + 241) & 2) != 0;
      v20[9] = (*((_BYTE *)this + 241) & 4) != 0;
      *((_BYTE *)this + 241) &= ~1u;
    }
    if ( (*((_BYTE *)this + 241) & 1) == 0 )
LABEL_44:
      v8 = 1;
    else
LABEL_67:
      v8 = 0;
    v11 = v22;
  }
  else
  {
    if ( !a4 )
    {
      v12 = (struct _ERESOURCE *)*((_QWORD *)this + 46);
      if ( v12 )
      {
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v12, 1u);
        if ( !*((_DWORD *)this + 56) )
          KeSetEvent(*(PRKEVENT *)(*((_QWORD *)this + 45) + 8LL), 1, 0);
        ExReleaseResourceLite(*((PERESOURCE *)this + 46));
        KeLeaveCriticalRegion();
      }
      goto LABEL_23;
    }
    BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment((PERESOURCE *)this, 1, 1);
    EtwTraceDCompCommitBatchEvent(*((unsigned int *)this + 7), BatchFragment, *((unsigned int *)BatchFragment + 4));
    v11 = BatchFragment;
  }
  *((_QWORD *)BatchFragment + 13) = *((_QWORD *)this + 26);
  *((_QWORD *)this + 26) = 0LL;
  if ( v11 )
    *(_BYTE *)(*((_QWORD *)v11 + 17) + 64LL) = 0;
LABEL_23:
  *a2 = BatchFragment;
  *a3 = v11;
  if ( v8 )
  {
    if ( v11 )
    {
      v14 = *((_BYTE *)this + 240);
      if ( (v14 & 0x10) != 0 )
      {
        *((_BYTE *)this + 240) = v14 & 0xEF;
        *((_BYTE *)v11 + 32) |= 8u;
      }
    }
    *((_BYTE *)this + 240) &= ~1u;
    *((_BYTE *)this + 241) &= ~4u;
  }
  return v8;
}
