/*
 * XREFs of ?ProcessDeviceArrival@Win32kInterop@@AEAAXKW4_KnownRIMDeviceKind@@@Z @ 0x18008253C
 * Callers:
 *     ?ProcessPnpNotification@Win32kInterop@@AEAAXAEBU_PnpNotification@@@Z @ 0x1800827F0 (-ProcessPnpNotification@Win32kInterop@@AEAAXAEBU_PnpNotification@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessDeviceArrival@Win32kInterop@InputETW@@SAXK@Z @ 0x180081AF4 (-ProcessDeviceArrival@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x1800823AC (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 *     ??$insert_or_assign@AEAPEAULegacyDeviceInfo@@@?$unordered_map@KPEAULegacyDeviceInfo@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAPEAULegacyDeviceInfo@@@Z @ 0x1800851F0 (--$insert_or_assign@AEAPEAULegacyDeviceInfo@@@-$unordered_map@KPEAULegacyDeviceInfo@@U-$hash@K@s.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Win32kInterop::ProcessDeviceArrival(__int64 a1, unsigned int a2, int a3)
{
  int v5; // edi
  int v6; // r8d
  int v7; // r8d
  unsigned int *v8; // rsi
  __int64 v9; // rcx
  int v10; // eax
  char v11[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int *v13; // [rsp+58h] [rbp+20h] BYREF

  v5 = 2;
  v6 = a3 - 1;
  if ( !v6 )
  {
LABEL_4:
    *(_BYTE *)(a1 + 1936) = 1;
    goto LABEL_5;
  }
  v7 = v6 - 1;
  if ( v7 )
  {
    if ( v7 != 2 )
      return;
    goto LABEL_4;
  }
  v5 = 4;
LABEL_5:
  if ( !Win32kInterop::IsDeviceAttached((Win32kInterop *)a1, a2, 0) )
  {
    InputETW::Win32kInterop::ProcessDeviceArrival(a2);
    v13 = (unsigned int *)operator new(0x3D8uLL);
    v8 = v13;
    memset_0(v13, 0, 0x3D8uLL);
    v8[2] = 984;
    *v8 = a2;
    v8[1] = v5;
    v9 = *(_QWORD *)(a1 + 56);
    v13 = v8;
    v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64))(*(_QWORD *)v9 + 40LL))(v9, v8, a1);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x177,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v10);
      JUMPOUT(0x180082625LL);
    }
    std::unordered_map<unsigned long,LegacyDeviceInfo *>::insert_or_assign<LegacyDeviceInfo * &>(a1 + 64, v11, v8, &v13);
  }
}
