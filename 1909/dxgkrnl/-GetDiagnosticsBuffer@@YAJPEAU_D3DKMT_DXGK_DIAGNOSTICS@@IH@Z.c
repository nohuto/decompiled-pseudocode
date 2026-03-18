/*
 * XREFs of ?GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z @ 0x1C0240A10
 * Callers:
 *     DxgkEscape @ 0x1C0106440 (DxgkEscape.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x1C0041338 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00D50EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall GetDiagnosticsBuffer(struct _D3DKMT_DXGK_DIAGNOSTICS *a1, __int64 a2, int a3)
{
  unsigned int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v11; // r8
  struct DXGGLOBAL *Global; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  DXGFASTMUTEX **v15; // rcx
  __int64 v16; // rax
  _QWORD v18[8]; // [rsp+20h] [rbp-50h] BYREF

  v5 = -1073741811;
  if ( (unsigned int)a2 >= 4 )
  {
    v6 = *(unsigned int *)a1;
    v7 = v6 + 4;
    if ( (unsigned int)a2 == v6 + 4 )
    {
      if ( a3 && (_DWORD)v6 )
      {
        memset(v18, 0, sizeof(v18));
        v18[7] = MEMORY[0xFFFFF78000000014];
        ExSystemTimeToLocalTime((PLARGE_INTEGER)&v18[7], (PLARGE_INTEGER)&v18[6]);
        memset(&v18[1], 0, 36);
        v18[0] = 0x400000000ALL;
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9, v8);
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v18, CurrentProcessSessionId, v11);
      }
      Global = DXGGLOBAL::GetGlobal(v7, a2);
      if ( Global )
      {
        if ( a3 )
          v15 = (DXGFASTMUTEX **)*((_QWORD *)Global + 72);
        else
          v15 = (DXGFASTMUTEX **)*((_QWORD *)Global + 73);
        if ( !v15 )
        {
          v16 = WdLogNewEntry5_WdError(0LL, v13, v14);
          *(_QWORD *)(v16 + 32) = 0LL;
          *(_QWORD *)(v16 + 24) = a1;
          WdLogEvent5_WdError(v16);
          return 3221225860LL;
        }
        return (unsigned int)DXGDIAGNOSTICS::ReadDiagnostics(v15, (unsigned __int8 *)a1 + 4, (unsigned int *)a1, -1);
      }
    }
  }
  return v5;
}
