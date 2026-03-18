/*
 * XREFs of ??1CProcessAttachDetach@@QEAA@XZ @ 0x1C0025B7C
 * Callers:
 *     xxxSetWindowLong @ 0x1C0025120 (xxxSetWindowLong.c)
 *     xxxSetWindowLongPtr @ 0x1C0025674 (xxxSetWindowLongPtr.c)
 * Callees:
 *     <none>
 */

void __fastcall CProcessAttachDetach::~CProcessAttachDetach(CProcessAttachDetach *this)
{
  if ( *(_BYTE *)this )
    KeDetachProcess();
}
