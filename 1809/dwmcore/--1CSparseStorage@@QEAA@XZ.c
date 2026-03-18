/*
 * XREFs of ??1CSparseStorage@@QEAA@XZ @ 0x18004EB7C
 * Callers:
 *     ??1CBaseExpression@@UEAA@XZ @ 0x18004EA00 (--1CBaseExpression@@UEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall CSparseStorage::~CSparseStorage(CSparseStorage *this)
{
  _BYTE *v1; // rax
  _BYTE *v3; // rcx

  v1 = *(_BYTE **)this;
  if ( *(_UNKNOWN **)this != &CSparseStorage::s_defaultEmptyAllocatedStorage )
  {
    v3 = *(_BYTE **)this;
    if ( *((_DWORD *)v1 + 1) )
    {
      if ( v1[8] )
      {
        RaiseFailFastException(0LL, 0LL, 0);
        v3 = *(_BYTE **)this;
      }
    }
    WPF::ProcessHeapImpl::Free(v3);
  }
}
