/*
 * XREFs of ?ndisPcwNotifyMiniportRemoval@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011A6D8
 * Callers:
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C009A1C0 (ndisMDeleteMiniportBlockOnRemove.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FCD0C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FCF64 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 */

void __fastcall ndisPcwNotifyMiniportRemoval(struct _NDIS_MINIPORT_BLOCK *a1)
{
  wchar_t *Buffer; // rax
  wchar_t *v3; // rcx
  KLockHolder v4; // [rsp+20h] [rbp-28h] BYREF

  v4.m_State = Unlocked;
  v4.m_Lock = (KPushLockBase *)&ndisPcwMutex;
  v4.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v4);
  Buffer = a1->Reserved4.Buffer;
  if ( Buffer )
  {
    --*((_DWORD *)Buffer + 42);
    *((_QWORD *)a1->Reserved4.Buffer + 22) = 0LL;
    v3 = a1->Reserved4.Buffer;
    if ( !*((_DWORD *)v3 + 42) )
      ExFreePoolWithTag(v3, 0);
  }
  KLockHolder::~KLockHolder(&v4);
}
