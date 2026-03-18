/*
 * XREFs of ?DxgkCddIsSourceOwnedByDWM@@YAJQEAXIPEAE@Z @ 0x1C00C2FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000238C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000BFFC (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C000C174 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkCddIsSourceOwnedByDWM(struct DXGADAPTER *a1, unsigned int a2, bool *a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _BYTE v12[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a2;
  v5 = (__int64)a1;
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v12, a1, 1);
  if ( *(_DWORD *)(v5 + 176) != 1 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdError(v7, v6, v8);
    v9[3] = v5;
    v5 = -1073741130LL;
LABEL_5:
    v9[4] = v5;
    goto LABEL_8;
  }
  v10 = *(_QWORD *)(v5 + 2552);
  if ( !v10 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdError(0LL, v6, v8);
    v9[3] = v5;
    v5 = -1073741811LL;
    goto LABEL_5;
  }
  if ( *(_DWORD *)(v10 + 80) > (unsigned int)v3 )
  {
    LODWORD(v5) = 0;
    *a3 = (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)v10, v3) == 1;
    goto LABEL_10;
  }
  v9 = (_QWORD *)WdLogNewEntry5_WdError(v10, v6, v8);
  v9[3] = v5;
  LODWORD(v5) = -1073741811;
  v9[5] = -1073741811LL;
  v9[4] = v3;
LABEL_8:
  WdLogEvent5_WdError(v9);
LABEL_10:
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v12);
  return (unsigned int)v5;
}
