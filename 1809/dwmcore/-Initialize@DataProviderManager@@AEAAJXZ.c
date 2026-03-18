/*
 * XREFs of ?Initialize@DataProviderManager@@AEAAJXZ @ 0x180061820
 * Callers:
 *     ?Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x18006178C (-Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ??0BamoDataProviderRegistrarPrincipal@@QEAA@PEAVBamoConnection@dataprovider_AutoBamos@@@Z @ 0x180061944 (--0BamoDataProviderRegistrarPrincipal@@QEAA@PEAVBamoConnection@dataprovider_AutoBamos@@@Z.c)
 *     ??$CreateServer@VDataProviderRegistrarConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDataProviderRegistrarConnection@@@Z @ 0x1800619F0 (--$CreateServer@VDataProviderRegistrarConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMe.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801448CC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall DataProviderManager::Initialize(DataProviderManager *this)
{
  const char *v2; // r9
  int v3; // eax
  int v4; // r9d
  unsigned int LastError; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct dataprovider_AutoBamos::BamoConnection **v8; // rsi
  BamoDataProviderRegistrarPrincipal *v9; // rax
  BamoDataProviderRegistrarPrincipal *v10; // rbx
  __int64 v11; // rcx
  __int64 v13; // rdx
  int v14; // [rsp+20h] [rbp-28h]
  __int64 v15; // [rsp+30h] [rbp-18h] BYREF
  int v16; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HLOCAL hMem; // [rsp+58h] [rbp+10h] BYREF

  hMem = 0LL;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;0x01;;;WD)(A;;0x01;;;AC)(A;;0x01;;;S-1-15-3-1024-1502825166-1963708345-2616377461-2562897074-4192028372-"
           "3968301570-1997628692-1435953622)",
          1u,
          &hMem,
          0LL) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x6C,
                  (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
                  v2);
    goto LABEL_8;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, HLOCAL, char *))(**((_QWORD **)this + 2) + 56LL))(
         *((_QWORD *)this + 2),
         hMem,
         (char *)this + 24);
  LastError = v3;
  if ( v3 < 0 )
  {
    v13 = 110LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      (const char *)(unsigned int)v3,
      v14);
    goto LABEL_8;
  }
  v15 = 0LL;
  v6 = *((_QWORD *)this + 3);
  v7 = *((_QWORD *)this + 2);
  v16 = 1;
  v8 = (struct dataprovider_AutoBamos::BamoConnection **)((char *)this + 32);
  v3 = Microsoft::Bamo::BaseBamoConnection::CreateServer<DataProviderRegistrarConnection>(
         v7,
         v6,
         (unsigned int)&v15,
         v4,
         (__int64)this + 32);
  LastError = v3;
  if ( v3 < 0 )
  {
    v13 = 122LL;
    goto LABEL_14;
  }
  *((_QWORD *)*v8 + 19) = this;
  v9 = (BamoDataProviderRegistrarPrincipal *)WPF::ProcessHeapImpl::AllocClear(0x40uLL);
  v10 = v9;
  if ( !v9 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  BamoDataProviderRegistrarPrincipal::BamoDataProviderRegistrarPrincipal(v9, *v8);
  *(_QWORD *)v10 = &DataProviderRegistrarPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)v10 + 1) = &BamoDataProviderRegistrarPrincipal::`vftable'{for `IDataProviderRegistrarPrincipal'};
  v11 = *((_QWORD *)this + 5);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  *((_QWORD *)this + 5) = v10;
  *((_QWORD *)v10 + 7) = this;
  LastError = 0;
LABEL_8:
  if ( hMem )
    LocalFree(hMem);
  return LastError;
}
