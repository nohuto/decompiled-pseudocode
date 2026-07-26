/*
 * XREFs of ??1_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x1C0060110
 * Callers:
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C00F03E4 (ndisMDeleteMiniportBlockOnRemove.c)
 * Callees:
 *     ??1BindStack@Ndis@@QEAA@XZ @ 0x1C00BE074 (--1BindStack@Ndis@@QEAA@XZ.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00C2C18 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ??1BindEngine@Ndis@@QEAA@XZ @ 0x1C0106CDC (--1BindEngine@Ndis@@QEAA@XZ.c)
 */

void __fastcall _NDIS_MINIPORT_BLOCK::~_NDIS_MINIPORT_BLOCK(_NDIS_MINIPORT_BLOCK *this)
{
  NDISWATCHDOG__ *m_ptr; // rcx
  NDISWATCHDOG__ *v3; // rcx
  NDISWATCHDOG__ *v4; // rcx
  Rtl::KString *Myptr; // rcx
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
  Myptr = this->FilterClass._Myptr;
  if ( Myptr )
    ExFreePoolWithTag(Myptr, 0x7274534Bu);
  v6 = this->ExportName._Myptr;
  if ( v6 )
    ExFreePoolWithTag(v6, 0x7274534Bu);
}
