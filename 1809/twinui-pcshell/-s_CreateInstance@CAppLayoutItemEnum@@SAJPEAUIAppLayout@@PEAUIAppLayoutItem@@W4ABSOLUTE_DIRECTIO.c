/*
 * XREFs of ?s_CreateInstance@CAppLayoutItemEnum@@SAJPEAUIAppLayout@@PEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ENUM_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x1803BCCEC
 * Callers:
 *     ?GetItemEnum@CAppLayout@@UEAAJPEAPEAUIAppLayoutItemEnum@@@Z @ 0x1803BAC90 (-GetItemEnum@CAppLayout@@UEAAJPEAPEAUIAppLayoutItemEnum@@@Z.c)
 *     ?GetItemEnumEx@CAppLayout@@UEAAJPEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ENUM_FLAGS@@PEAPEAUIAppLayoutItemEnum@@@Z @ 0x1803BACC0 (-GetItemEnumEx@CAppLayout@@UEAAJPEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ENUM_FLAG.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VCAppLayoutItemEnum@@AEAPEAUIAppLayout@@AEAPEAUIAppLayoutItem@@AEAW4ABSOLUTE_DIRECTION@@AEAW4APP_LAYOUT_ENUM_FLAGS@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCAppLayoutItemEnum@@@12@AEAPEAUIAppLayout@@AEAPEAUIAppLayoutItem@@AEAW4ABSOLUTE_DIRECTION@@AEAW4APP_LAYOUT_ENUM_FLAGS@@@Z @ 0x1803B9DEC (--$Make@VCAppLayoutItemEnum@@AEAPEAUIAppLayout@@AEAPEAUIAppLayoutItem@@AEAW4ABSOLUTE_DIRECTION@@.c)
 */

__int64 __fastcall CAppLayoutItemEnum::s_CreateInstance(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        _QWORD *a6)
{
  _QWORD *v6; // rsi
  __int64 v7; // rbx
  unsigned int v8; // edi
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v12; // [rsp+60h] [rbp+18h] BYREF
  int v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = a4;
  v12 = a3;
  v11 = a2;
  v10 = a1;
  v6 = a6;
  *a6 = 0LL;
  Microsoft::WRL::Details::Make<CAppLayoutItemEnum,IAppLayout * &,IAppLayoutItem * &,enum ABSOLUTE_DIRECTION &,enum APP_LAYOUT_ENUM_FLAGS &>(
    (__int64 *)&a6,
    &v10,
    &v11,
    &v12,
    &v13);
  v7 = (__int64)a6;
  v8 = a6 == 0LL ? 0x8007000E : 0;
  if ( a6 )
    v8 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*a6)(a6, &GUID_7f470db3_d746_469a_ba93_c7979e5faad9, v6);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
