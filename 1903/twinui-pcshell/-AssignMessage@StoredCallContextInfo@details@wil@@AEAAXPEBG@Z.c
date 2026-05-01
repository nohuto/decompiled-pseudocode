/*
 * XREFs of ?AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z @ 0x180150AB0
 * Callers:
 *     _lambda_a574ebe487f7062c766c6a425ef2d3ee_::operator() @ 0x18003086C (_lambda_a574ebe487f7062c766c6a425ef2d3ee_--operator().c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180044550 (-ContinueOnCurrentThread@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x18008D98C (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ?SetMessage@StoredCallContextInfo@details@wil@@QEAAXPEBDPEAD@Z @ 0x180314430 (-SetMessage@StoredCallContextInfo@details@wil@@QEAAXPEBDPEAD@Z.c)
 * Callees:
 *     memcpy_s_1 @ 0x1801524E4 (memcpy_s_1.c)
 */

void __fastcall wil::details::StoredCallContextInfo::AssignMessage(
        wil::details::StoredCallContextInfo *this,
        const unsigned __int16 *a2)
{
  __int64 v2; // rax
  __int64 v5; // rbx
  HANDLE ProcessHeap; // rax
  void *v7; // rax

  v2 = -1LL;
  do
    ++v2;
  while ( a2[v2] );
  if ( v2 )
  {
    v5 = 2 * v2 + 2;
    ProcessHeap = GetProcessHeap();
    v7 = HeapAlloc(ProcessHeap, 0, v5);
    *((_QWORD *)this + 2) = v7;
    if ( v7 )
    {
      *((_BYTE *)this + 24) = 1;
      memcpy_s_1(v7, v5, a2, v5);
    }
  }
}
