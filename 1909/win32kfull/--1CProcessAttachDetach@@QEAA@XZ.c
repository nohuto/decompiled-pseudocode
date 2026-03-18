/*
 * XREFs of ??1CProcessAttachDetach@@QEAA@XZ @ 0x1C00ABB38
 * Callers:
 *     xxxSetWindowLong @ 0x1C00A8474 (xxxSetWindowLong.c)
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x1C00AB5F8 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CProcessAttachDetach::~CProcessAttachDetach(CProcessAttachDetach *this)
{
  if ( *(_BYTE *)this )
    KeDetachProcess();
}
