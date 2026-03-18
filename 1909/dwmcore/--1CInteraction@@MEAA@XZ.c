/*
 * XREFs of ??1CInteraction@@MEAA@XZ @ 0x1800ABE50
 * Callers:
 *     ??_GCInteraction@@MEAAPEAXI@Z @ 0x1800ABE10 (--_GCInteraction@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x180025538 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ??1CInteractionProcessor@@QEAA@XZ @ 0x1800AC74C (--1CInteractionProcessor@@QEAA@XZ.c)
 *     ?IsDefaultInteractionStateLocked@CInteraction@@AEAA_NXZ @ 0x1800AC808 (-IsDefaultInteractionStateLocked@CInteraction@@AEAA_NXZ.c)
 *     ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x1800AC894 (-UpdateInputSink@CInteraction@@QEAAJPEAX@Z.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0ppq @ 0x1801A288C (McTemplateU0ppq.c)
 *     ?Remove@?$CArray@PEAVCInteraction@@V?$CArrayEqualHelper@PEAVCInteraction@@@@@@QEAAHAEBQEAVCInteraction@@@Z @ 0x1801D61EC (-Remove@-$CArray@PEAVCInteraction@@V-$CArrayEqualHelper@PEAVCInteraction@@@@@@QEAAHAEBQEAVCInter.c)
 */

void __fastcall CInteraction::~CInteraction(CInteraction *this)
{
  CResource *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  CInteraction *v8; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &CInteraction::`vftable'{for `IInteractionResource'};
  v2 = (CInteraction *)((char *)this + 8);
  *((_QWORD *)this + 1) = &CInteraction::`vftable'{for `CResource'};
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
    McTemplateU0ppq(
      (_DWORD)this,
      (unsigned int)&INTERACTION_DESTROYED,
      (_DWORD)this,
      (_DWORD)this + 8,
      *((_DWORD *)this + 424));
  AcquireSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  memset_0((char *)qword_1803375D8 + (unsigned int)(Size * *((_DWORD *)this + 424)), 0, (unsigned int)Size);
  *((_DWORD *)this + 424) = 0;
  ReleaseSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  ReleaseInterface<CDisplay>((__int64 *)this + 13);
  CInteraction::UpdateInputSink(this, 0LL);
  if ( (*((_BYTE *)this + 185) & 1) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)&CCommonRegistryData::m_cForceDisableInteractionOutputPrediction);
  if ( CInteraction::IsDefaultInteractionStateLocked(this) )
  {
    v8 = this;
    CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::Remove(v3, &v8);
  }
  v4 = *((_QWORD *)this + 216);
  if ( v4 )
  {
    *((_QWORD *)this + 216) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  CInteractionProcessor::~CInteractionProcessor((CInteraction *)((char *)this + 344));
  v5 = *((_QWORD *)this + 34);
  if ( v5 )
  {
    *((_QWORD *)this + 34) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v5 + 8) + 16LL))(v5 + 8);
  }
  v6 = *((_QWORD *)this + 33);
  if ( v6 )
  {
    *((_QWORD *)this + 33) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 24);
  if ( v7 )
  {
    *((_QWORD *)this + 24) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
  CResource::~CResource(v2);
}
