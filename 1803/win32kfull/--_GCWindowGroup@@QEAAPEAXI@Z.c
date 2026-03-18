/*
 * XREFs of ??_GCWindowGroup@@QEAAPEAXI@Z @ 0x1C01FC4E8
 * Callers:
 *     _lambda_95d672bec31edc9c80b859fac5ab880a_::operator() @ 0x1C01FC3DC (_lambda_95d672bec31edc9c80b859fac5ab880a_--operator().c)
 *     ?Cleanup@CWindowGroupManager@@QEAAXW4CleanupType@1@@Z @ 0x1C01FC818 (-Cleanup@CWindowGroupManager@@QEAAXW4CleanupType@1@@Z.c)
 * Callees:
 *     <none>
 */

CWindowGroup *__fastcall CWindowGroup::`scalar deleting destructor'(CWindowGroup *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 4);
  if ( v2 )
    Win32FreePool(v2);
  Win32FreePool(this);
  return this;
}
