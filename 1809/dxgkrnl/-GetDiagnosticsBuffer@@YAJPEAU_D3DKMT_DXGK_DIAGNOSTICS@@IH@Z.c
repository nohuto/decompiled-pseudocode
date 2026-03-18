/*
 * XREFs of ?GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z @ 0x1C020D3A8
 * Callers:
 *     DxgkEscape @ 0x1C01124E0 (DxgkEscape.c)
 * Callees:
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z @ 0x1C0001210 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0011B30 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00C7220 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall GetDiagnosticsBuffer(struct _D3DKMT_DXGK_DIAGNOSTICS *a1, unsigned int a2, int a3)
{
  unsigned int Diagnostics; // edi
  __int64 v6; // rcx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v8; // rbx
  DXGDIAGNOSTICS *v9; // rcx
  __int64 v10; // rax
  _BYTE v12[8]; // [rsp+20h] [rbp-29h] BYREF
  DXGPUSHLOCK *v13; // [rsp+28h] [rbp-21h]
  int v14; // [rsp+30h] [rbp-19h]
  _QWORD v15[8]; // [rsp+40h] [rbp-9h] BYREF

  Diagnostics = -1073741811;
  if ( a2 >= 4 )
  {
    v6 = *(unsigned int *)a1 + 4LL;
    if ( a2 == v6 )
    {
      if ( a3 )
      {
        memset(v15, 0, sizeof(v15));
        v15[7] = MEMORY[0xFFFFF78000000014];
        ExSystemTimeToLocalTime((PLARGE_INTEGER)&v15[7], (PLARGE_INTEGER)&v15[6]);
        memset(&v15[1], 0, 36);
        v15[0] = 0x400000000ALL;
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v15);
      }
      Global = DXGGLOBAL::GetGlobal(v6);
      v8 = Global;
      if ( Global )
      {
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12, (struct _KTHREAD **)Global + 69, 0);
        DXGPUSHLOCK::AcquireShared(v13);
        v14 = 1;
        if ( a3 )
          v9 = (DXGDIAGNOSTICS *)*((_QWORD *)v8 + 75);
        else
          v9 = (DXGDIAGNOSTICS *)*((_QWORD *)v8 + 76);
        if ( !v9 )
        {
          v10 = WdLogNewEntry5_WdError(0LL);
          *(_QWORD *)(v10 + 32) = 0LL;
          *(_QWORD *)(v10 + 24) = a1;
          WdLogEvent5_WdError(v10);
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
          return 3221225860LL;
        }
        Diagnostics = DXGDIAGNOSTICS::ReadDiagnostics(v9, (unsigned __int8 *)a1 + 4, (unsigned int *)a1);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
      }
    }
  }
  return Diagnostics;
}
