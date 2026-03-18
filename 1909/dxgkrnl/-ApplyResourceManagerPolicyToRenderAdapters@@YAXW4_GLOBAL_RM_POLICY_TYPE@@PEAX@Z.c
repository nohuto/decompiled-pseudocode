/*
 * XREFs of ?ApplyResourceManagerPolicyToRenderAdapters@@YAXW4_GLOBAL_RM_POLICY_TYPE@@PEAX@Z @ 0x1C025DA90
 * Callers:
 *     DxgkSetMemoryBudgetTarget @ 0x1C0260520 (DxgkSetMemoryBudgetTarget.c)
 *     DxgkSetYieldPercentage @ 0x1C0261100 (DxgkSetYieldPercentage.c)
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ApplyResourceManagerPolicyToRenderAdapters(__int64 a1, __int64 a2)
{
  int v3; // ebp
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  _QWORD **v9; // r14
  _QWORD *v10; // rsi
  _QWORD *v11; // rbx
  __int64 v12; // r9
  struct DXGGLOBAL *v13; // rax
  _BYTE v14[16]; // [rsp+20h] [rbp-38h] BYREF
  char v15[8]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v16; // [rsp+38h] [rbp-20h]
  char v17; // [rsp+40h] [rbp-18h]

  v3 = a1;
  Global = DXGGLOBAL::GetGlobal(a1, a2);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (struct DXGGLOBAL *)((char *)Global + 408), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  v9 = (_QWORD **)((char *)DXGGLOBAL::GetGlobal(v6, v5) + 448);
  v10 = *v9;
  while ( v10 != v9 && v10 )
  {
    v11 = v10;
    v10 = (_QWORD *)*v10;
    if ( v11[320] && (*((_DWORD *)v11 + 77) & 0x4000) == 0 )
    {
      v16 = v11;
      v17 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
      if ( *((_DWORD *)v11 + 44) == 1 )
      {
        v8 = (_QWORD *)v11[320];
        v12 = v8[69];
        if ( v3 )
        {
          if ( v3 == 1 )
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(v8[68] + 8LL) + 1152LL))(
              v8[69],
              *(unsigned int *)(a2 + 8),
              *(unsigned int *)(a2 + 12),
              v12);
        }
        else
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(v8[65] + 8LL) + 952LL))(
            v8[66],
            *(unsigned int *)(a2 + 8),
            *(unsigned int *)(a2 + 12),
            v12);
        }
      }
      if ( v17 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
    }
  }
  v13 = DXGGLOBAL::GetGlobal((__int64)v8, v7);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      *((_DWORD *)v13 + 75977) = *(_DWORD *)(a2 + 8);
      *((_DWORD *)v13 + 75978) = *(_DWORD *)(a2 + 12);
    }
  }
  else
  {
    *((_DWORD *)v13 + 75976) = *(_DWORD *)(a2 + 12);
    *((_DWORD *)v13 + 75979) ^= (*((_DWORD *)v13 + 75979) ^ *(_DWORD *)(a2 + 8)) & 1;
  }
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
}
