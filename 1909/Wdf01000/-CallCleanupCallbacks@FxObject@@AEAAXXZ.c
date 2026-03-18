/*
 * XREFs of ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x1C005C408
 * Callers:
 *     ?Dispose@FxRequestBase@@MEAAEXZ @ 0x1C0003130 (-Dispose@FxRequestBase@@MEAAEXZ.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0007FB0 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C00086A0 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     ?Dispose@FxCompanionTarget@@EEAAEXZ @ 0x1C0044870 (-Dispose@FxCompanionTarget@@EEAAEXZ.c)
 *     ?Dispose@FxMpDevice@@UEAAEXZ @ 0x1C004E260 (-Dispose@FxMpDevice@@UEAAEXZ.c)
 *     ?Dispose@FxDevice@@UEAAEXZ @ 0x1C0053740 (-Dispose@FxDevice@@UEAAEXZ.c)
 *     ?Dispose@FxIoTarget@@MEAAEXZ @ 0x1C00672F0 (-Dispose@FxIoTarget@@MEAAEXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FxObject::CallCleanupCallbacks(FxObject *this)
{
  unsigned __int16 m_ObjectFlags; // ax
  unsigned __int16 m_ObjectSize; // cx
  char *v4; // rbx
  void (__fastcall *v5)(unsigned __int64); // rax

  m_ObjectFlags = this->m_ObjectFlags;
  if ( (m_ObjectFlags & 8) != 0 )
  {
    m_ObjectSize = this->m_ObjectSize;
    if ( m_ObjectSize )
    {
      v4 = (char *)this + m_ObjectSize;
      if ( v4 )
      {
        do
        {
          v5 = (void (__fastcall *)(unsigned __int64))*((_QWORD *)v4 + 2);
          if ( v5 )
          {
            v5((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            *((_QWORD *)v4 + 2) = 0LL;
          }
          v4 = (char *)*((_QWORD *)v4 + 1);
        }
        while ( v4 );
        m_ObjectFlags = this->m_ObjectFlags;
      }
    }
    this->m_ObjectFlags = m_ObjectFlags & 0xFBFF;
  }
}
