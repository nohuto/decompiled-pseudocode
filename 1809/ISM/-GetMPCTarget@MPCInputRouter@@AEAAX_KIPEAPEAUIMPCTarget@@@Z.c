/*
 * XREFs of ?GetMPCTarget@MPCInputRouter@@AEAAX_KIPEAPEAUIMPCTarget@@@Z @ 0x1800072C8
 * Callers:
 *     ?HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z @ 0x180006880 (-HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z.c)
 * Callees:
 *     ??A?$unordered_map@_KPEAUIMPCTarget@@U?$hash@_K@std@@U?$equal_to@_K@3@V?$allocator@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@3@@std@@QEAAAEAPEAUIMPCTarget@@AEB_K@Z @ 0x1800085C0 (--A-$unordered_map@_KPEAUIMPCTarget@@U-$hash@_K@std@@U-$equal_to@_K@3@V-$allocator@U-$pair@$$CB_.c)
 *     ??0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z @ 0x18000B6D4 (--0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18000C488 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteType@@_K@Z @ 0x18001D8DC (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteTyp.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall MPCInputRouter::GetMPCTarget(MPCInputRouter *this, __int64 a2, unsigned int a3, struct IMPCTarget **a4)
{
  char v6; // si
  char *v7; // r14
  struct IMPCTarget *v8; // rbx
  void *v9; // rax
  void *v10; // rdi
  __int64 v11; // rbx
  struct InputSiteManager *InputSiteManager; // rax
  __int64 v13; // rcx
  __int64 v14; // [rsp+88h] [rbp+48h] BYREF
  __int64 v15; // [rsp+98h] [rbp+58h] BYREF

  v14 = a2;
  v6 = 0;
  v7 = (char *)this + 896;
  v8 = *(struct IMPCTarget **)std::unordered_map<unsigned __int64,IMPCTarget *>::operator[]((char *)this + 896, &v14);
  if ( v8 )
  {
    (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)v8 + 8LL))(v8);
LABEL_12:
    (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)v8 + 8LL))(v8);
    goto LABEL_13;
  }
  v9 = malloc(0x48uLL);
  v10 = v9;
  if ( v9 )
    memset_0(v9, 0, 0x48uLL);
  if ( v10 )
  {
    v11 = v14;
    InputSiteManager = ISMStatics::GetInputSiteManager();
    InputSiteManager::GetInputSiteFromId(InputSiteManager, &v15, 1LL, v11);
    v6 = 3;
    v8 = (struct IMPCTarget *)MPCTarget::MPCTarget(v10, v15, 2LL, a3, 0LL, -2LL, v10);
  }
  else
  {
    v8 = 0LL;
  }
  if ( (v6 & 1) != 0 )
  {
    v13 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  *(_QWORD *)std::unordered_map<unsigned __int64,IMPCTarget *>::operator[](v7, &v14) = v8;
  if ( v8 )
    goto LABEL_12;
LABEL_13:
  *a4 = v8;
  if ( v8 )
    (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)v8 + 16LL))(v8);
}
