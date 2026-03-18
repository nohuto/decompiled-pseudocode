/*
 * XREFs of ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C0023780
 * Callers:
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C0001120 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C0020D60 (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 *     ?SetEntryObject@GdiHandleManager@@QEAAXIPEAVOBJECT@@@Z @ 0x1C0020ED4 (-SetEntryObject@GdiHandleManager@@QEAAXIPEAVOBJECT@@@Z.c)
 *     INC_SHARE_REF_CNT @ 0x1C00215E0 (INC_SHARE_REF_CNT.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0021F00 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     HmgShareLock @ 0x1C0022B50 (HmgShareLock.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C00235A0 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0023700 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(
        GdiHandleEntryDirectory *this,
        unsigned int a2,
        struct GdiHandleEntryTable **a3,
        unsigned int *a4)
{
  unsigned int v4; // r10d
  unsigned int v5; // r11d
  __int64 v6; // rbx
  bool result; // al

  v4 = a2;
  v5 = *((_DWORD *)this + 514);
  if ( a2 >= v5 + ((*((unsigned __int16 *)this + 1) + 0xFFFF) << 16) )
    return 0;
  v6 = ((a2 - v5) >> 16) + 1;
  if ( a2 < v5 )
    v6 = 0LL;
  *a3 = (struct GdiHandleEntryTable *)*((_QWORD *)this + v6 + 1);
  if ( (_DWORD)v6 )
    v4 = a2 + ((1 - (_DWORD)v6) << 16) - v5;
  result = 1;
  *a4 = v4;
  return result;
}
