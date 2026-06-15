/*
 * XREFs of ??1?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@QEAA@XZ @ 0x180027788
 * Callers:
 *     _TSSession::Create_::_1_::dtor$1 @ 0x180037193 (_TSSession--Create_--_1_--dtor$1.c)
 * Callees:
 *     ??1TSSession@@QEAA@XZ @ 0x180022A5C (--1TSSession@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180034AC4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<TSSession>::~unique_ptr<TSSession>(TSSession **a1)
{
  TSSession *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    TSSession::~TSSession(*a1);
    operator delete(v1, (const struct std::nothrow_t *)0x160);
  }
}
