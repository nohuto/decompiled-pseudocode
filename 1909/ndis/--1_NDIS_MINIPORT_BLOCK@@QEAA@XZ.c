/*
 * XREFs of ??1_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x1C00960F8
 * Callers:
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C009A390 (ndisMDeleteMiniportBlockOnRemove.c)
 * Callees:
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00FCAEC (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ??1BindStack@Ndis@@QEAA@XZ @ 0x1C01081DC (--1BindStack@Ndis@@QEAA@XZ.c)
 *     ??1BindEngine@Ndis@@QEAA@XZ @ 0x1C012702C (--1BindEngine@Ndis@@QEAA@XZ.c)
 */

void __fastcall _NDIS_MINIPORT_BLOCK::~_NDIS_MINIPORT_BLOCK(_NDIS_MINIPORT_BLOCK *this)
{
  NDISWATCHDOG__ *m_ptr; // rcx
  NDISWATCHDOG__ *v3; // rcx
  NDISWATCHDOG__ *v4; // rcx
  Rtl::KString *value; // rcx
  Rtl::KString *v6; // rcx

  m_ptr = this->ReenumerateWatchdog.m_ptr;
  if ( m_ptr != (NDISWATCHDOG__ *)-1LL )
    ndisFreeWatchdog(m_ptr);
  v3 = this->HookedOidWatchdog.m_ptr;
  if ( v3 != (NDISWATCHDOG__ *)-1LL )
    ndisFreeWatchdog(v3);
  v4 = this->PendingOidWatchdog.m_ptr;
  if ( v4 != (NDISWATCHDOG__ *)-1LL )
    ndisFreeWatchdog(v4);
  Ndis::BindEngine::~BindEngine(&this->BindEngine);
  Ndis::BindStack::~BindStack(&this->Bindings);
  value = this->FilterClass.__ptr_.__value_;
  this->FilterClass.__ptr_.__value_ = 0LL;
  if ( value )
    ExFreePoolWithTag(value, 0x7274534Bu);
  v6 = this->ExportName.__ptr_.__value_;
  this->ExportName.__ptr_.__value_ = 0LL;
  if ( v6 )
    ExFreePoolWithTag(v6, 0x7274534Bu);
}
