/*
 * XREFs of ??1CProcessAttachDetach@@QEAA@XZ @ 0x1C0066C00
 * Callers:
 *     xxxSetWindowLongPtr @ 0x1C00666A0 (xxxSetWindowLongPtr.c)
 *     xxxSetWindowLong @ 0x1C006782C (xxxSetWindowLong.c)
 * Callees:
 *     <none>
 */

void __fastcall CProcessAttachDetach::~CProcessAttachDetach(CProcessAttachDetach *this)
{
  if ( *(_BYTE *)this )
    KeDetachProcess();
}
