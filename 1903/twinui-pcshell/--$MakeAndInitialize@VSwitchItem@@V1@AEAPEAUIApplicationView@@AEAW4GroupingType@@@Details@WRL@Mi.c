/*
 * XREFs of ??$MakeAndInitialize@VSwitchItem@@V1@AEAPEAUIApplicationView@@AEAW4GroupingType@@@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItem@@AEAPEAUIApplicationView@@AEAW4GroupingType@@@Z @ 0x18035FC50
 * Callers:
 *     ?SwitchItem_CreateInstance@@YAJPEAUIApplicationView@@W4GroupingType@@AEBU_GUID@@PEAPEAX@Z @ 0x180360354 (-SwitchItem_CreateInstance@@YAJPEAUIApplicationView@@W4GroupingType@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0SwitchItem@@QEAA@XZ @ 0x18035FD34 (--0SwitchItem@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItem@@@WRL@Microsoft@@IEAAKXZ @ 0x180360128 (-InternalRelease@-$ComPtr@VSwitchItem@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@SwitchItem@@QEAAJPEAUIApplicationView@@W4GroupingType@@@Z @ 0x180360260 (-RuntimeClassInitialize@SwitchItem@@QEAAJPEAUIApplicationView@@W4GroupingType@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SwitchItem,SwitchItem,IApplicationView * &,enum GroupingType &>(
        SwitchItem **a1,
        __int64 *a2,
        unsigned int *a3)
{
  SwitchItem *v6; // rax
  int v7; // edi
  SwitchItem *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  SwitchItem *v11; // rbx
  SwitchItem *v13; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = (SwitchItem *)operator new(0xC8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = SwitchItem::SwitchItem(v6);
    v9 = *a3;
    v10 = *a2;
    v11 = v8;
    v13 = v8;
    v7 = SwitchItem::RuntimeClassInitialize(v8, v10, v9);
    if ( v7 >= 0 )
    {
      if ( v11 )
        _InterlockedIncrement((volatile signed __int32 *)v11 + 23);
      *a1 = v11;
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<SwitchItem>::InternalRelease(&v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
