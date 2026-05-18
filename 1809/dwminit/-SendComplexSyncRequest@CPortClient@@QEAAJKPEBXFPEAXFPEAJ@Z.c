/*
 * XREFs of ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXFPEAJ@Z @ 0x180004940
 * Callers:
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z @ 0x1800042F4 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180006620 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPortClient::SendComplexSyncRequest(
        CPortClient *this,
        __int64 a2,
        const void *a3,
        __int64 a4,
        void *a5,
        __int16 a6,
        int *a7)
{
  __int16 v8; // [rsp+28h] [rbp-20h]

  v8 = 0;
  return (*((__int64 (__fastcall **)(CPortClient *, __int64, const void *, __int64, _QWORD, __int16, int *))this + 4))(
           this,
           a2,
           a3,
           4LL,
           0LL,
           v8,
           a7);
}
