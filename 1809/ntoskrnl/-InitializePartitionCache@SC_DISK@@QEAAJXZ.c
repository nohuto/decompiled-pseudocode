/*
 * XREFs of ?InitializePartitionCache@SC_DISK@@QEAAJXZ @ 0x14016886C
 * Callers:
 *     ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x140704F18 (-Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?ResetPartitionCache@SC_DISK@@QEAAJXZ @ 0x1401688B4 (-ResetPartitionCache@SC_DISK@@QEAAJXZ.c)
 *     ?Allocate@SC_ENV@@SAPEAX_K@Z @ 0x140704F48 (-Allocate@SC_ENV@@SAPEAX_K@Z.c)
 */

__int64 __fastcall SC_DISK::InitializePartitionCache(SC_DISK *this)
{
  void *v2; // rax

  v2 = SC_ENV::Allocate(1 << *((_DWORD *)this + 59));
  *((_QWORD *)this + 32) = v2;
  if ( v2 )
    return SC_DISK::ResetPartitionCache(this);
  else
    return 3221225626LL;
}
