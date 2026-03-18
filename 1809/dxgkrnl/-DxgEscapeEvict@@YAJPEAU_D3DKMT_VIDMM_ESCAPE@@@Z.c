/*
 * XREFs of ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C020C050
 * Callers:
 *     DxgkEscape @ 0x1C01124E0 (DxgkEscape.c)
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0017E94 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C012EA08 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C012FD90 (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     DxgkpIsDrtEnabled @ 0x1C0208860 (DxgkpIsDrtEnabled.c)
 *     ?DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z @ 0x1C020C3A8 (-DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z.c)
 */

int __fastcall DxgEscapeEvict(struct _D3DKMT_VIDMM_ESCAPE *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  HANDLE hProcess; // rax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rax
  struct DXGPROCESS *Process; // rax
  __int64 v14; // rax
  struct DXGPROCESS *Current; // rax
  _BYTE v16[8]; // [rsp+20h] [rbp-68h] BYREF
  HANDLE v17; // [rsp+28h] [rbp-60h]
  __int64 v18; // [rsp+30h] [rbp-58h]
  int v19; // [rsp+38h] [rbp-50h]
  __int16 v20; // [rsp+3Ch] [rbp-4Ch]
  char v21; // [rsp+3Eh] [rbp-4Ah]

  if ( a1->GetVads.GetVad.VadAddress )
  {
    if ( DxgkpIsDrtEnabled() )
    {
      hProcess = a1->Evict.hProcess;
      v18 = 0LL;
      v20 = 0;
      v17 = hProcess;
      v19 = 2048;
      v21 = 0;
      v6 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v16, 1);
      v10 = v6;
      if ( v6 >= 0 )
      {
        Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v16);
        LODWORD(v10) = DxgEscapeEvictWorker(a1, Process);
      }
      else
      {
        v11 = WdLogNewEntry5_WdWarning(v8, v7, v9);
        *(_QWORD *)(v11 + 24) = a1->Evict.hProcess;
        *(_QWORD *)(v11 + 32) = v10;
        WdLogEvent5_WdWarning(v11);
      }
      if ( (_BYTE)v20 )
        DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v16);
      return v10;
    }
    else
    {
      v14 = WdLogNewEntry5_WdWarning(v3, v2, v4);
      *(_QWORD *)(v14 + 24) = -1073741823LL;
      WdLogEvent5_WdWarning(v14);
      return -1073741823;
    }
  }
  else
  {
    Current = DXGPROCESS::GetCurrent();
    return DxgEscapeEvictWorker(a1, Current);
  }
}
