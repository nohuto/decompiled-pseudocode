/*
 * XREFs of ?AddGamepadInfo@GameInputDeviceInfoBuilder@@UEAAJPEBUGameInputGamepadInfo@@@Z @ 0x1800D3B60
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C8C8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800D3F90 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 */

__int64 __fastcall GameInputDeviceInfoBuilder::AddGamepadInfo(
        GameInputDeviceInfoBuilder *this,
        const struct GameInputGamepadInfo *a2)
{
  void *v2; // rax
  int v5; // edx

  v2 = (void *)*((_QWORD *)this + 45);
  if ( v2
    || (v2 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow), (*((_QWORD *)this + 45) = v2) != 0LL) )
  {
    memset_0(v2, 0, 0x38uLL);
    **((_DWORD **)this + 45) = *(_DWORD *)a2;
    *(_DWORD *)(*((_QWORD *)this + 45) + 4LL) = *((_DWORD *)a2 + 1);
    *(_DWORD *)(*((_QWORD *)this + 45) + 8LL) = *((_DWORD *)a2 + 2);
    *(_DWORD *)(*((_QWORD *)this + 45) + 12LL) = *((_DWORD *)a2 + 3);
    *(_DWORD *)(*((_QWORD *)this + 45) + 16LL) = *((_DWORD *)a2 + 4);
    *(_DWORD *)(*((_QWORD *)this + 45) + 20LL) = *((_DWORD *)a2 + 5);
    *(_DWORD *)(*((_QWORD *)this + 45) + 24LL) = *((_DWORD *)a2 + 6);
    *(_DWORD *)(*((_QWORD *)this + 45) + 28LL) = *((_DWORD *)a2 + 7);
    *(_DWORD *)(*((_QWORD *)this + 45) + 32LL) = *((_DWORD *)a2 + 8);
    *(_DWORD *)(*((_QWORD *)this + 45) + 36LL) = *((_DWORD *)a2 + 9);
    *(_DWORD *)(*((_QWORD *)this + 45) + 40LL) = *((_DWORD *)a2 + 10);
    *(_DWORD *)(*((_QWORD *)this + 45) + 44LL) = *((_DWORD *)a2 + 11);
    *(_DWORD *)(*((_QWORD *)this + 45) + 48LL) = *((_DWORD *)a2 + 12);
    *(_DWORD *)(*((_QWORD *)this + 45) + 52LL) = *((_DWORD *)a2 + 13);
    *((_DWORD *)this + 36) |= 0x40000u;
    return 0LL;
  }
  else
  {
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x8007000ELL, v5);
    return 2147942414LL;
  }
}
