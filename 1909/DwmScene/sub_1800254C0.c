/*
 * XREFs of sub_1800254C0 @ 0x1800254C0
 * Callers:
 *     sub_180029FB0 @ 0x180029FB0 (sub_180029FB0.c)
 *     sub_18002AB70 @ 0x18002AB70 (sub_18002AB70.c)
 *     sub_18002B1D0 @ 0x18002B1D0 (sub_18002B1D0.c)
 *     sub_18002C760 @ 0x18002C760 (sub_18002C760.c)
 *     sub_18002CB20 @ 0x18002CB20 (sub_18002CB20.c)
 *     sub_18002ED3C @ 0x18002ED3C (sub_18002ED3C.c)
 *     sub_18002F5BC @ 0x18002F5BC (sub_18002F5BC.c)
 *     sub_18002FC7C @ 0x18002FC7C (sub_18002FC7C.c)
 *     sub_180030058 @ 0x180030058 (sub_180030058.c)
 *     sub_1800304F0 @ 0x1800304F0 (sub_1800304F0.c)
 *     sub_1800312D4 @ 0x1800312D4 (sub_1800312D4.c)
 *     sub_180033730 @ 0x180033730 (sub_180033730.c)
 *     ?overflow@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAAHH@Z @ 0x180033B70 (-overflow@-$basic_filebuf@DU-$char_traits@D@std@@@std@@MEAAHH@Z.c)
 *     sub_180033F8C @ 0x180033F8C (sub_180033F8C.c)
 *     sub_1800350C0 @ 0x1800350C0 (sub_1800350C0.c)
 *     sub_180037810 @ 0x180037810 (sub_180037810.c)
 *     sub_1800380A0 @ 0x1800380A0 (sub_1800380A0.c)
 *     sub_180038AB0 @ 0x180038AB0 (sub_180038AB0.c)
 *     sub_180038F50 @ 0x180038F50 (sub_180038F50.c)
 *     sub_18003A0C0 @ 0x18003A0C0 (sub_18003A0C0.c)
 *     sub_18003AA50 @ 0x18003AA50 (sub_18003AA50.c)
 *     sub_18003AF44 @ 0x18003AF44 (sub_18003AF44.c)
 *     sub_18003DE50 @ 0x18003DE50 (sub_18003DE50.c)
 *     sub_18003E400 @ 0x18003E400 (sub_18003E400.c)
 *     sub_180041E90 @ 0x180041E90 (sub_180041E90.c)
 *     sub_180042724 @ 0x180042724 (sub_180042724.c)
 *     sub_180043510 @ 0x180043510 (sub_180043510.c)
 *     sub_180043900 @ 0x180043900 (sub_180043900.c)
 *     sub_180043CC0 @ 0x180043CC0 (sub_180043CC0.c)
 *     sub_180044080 @ 0x180044080 (sub_180044080.c)
 *     sub_180044550 @ 0x180044550 (sub_180044550.c)
 *     sub_180044860 @ 0x180044860 (sub_180044860.c)
 *     sub_180044B40 @ 0x180044B40 (sub_180044B40.c)
 *     sub_180044F98 @ 0x180044F98 (sub_180044F98.c)
 *     sub_180045114 @ 0x180045114 (sub_180045114.c)
 * Callees:
 *     sub_180023574 @ 0x180023574 (sub_180023574.c)
 *     sub_180023648 @ 0x180023648 (sub_180023648.c)
 *     sub_18011DA98 @ 0x18011DA98 (sub_18011DA98.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1800254C0(__int64 a1, int a2)
{
  __int64 v3; // rcx
  int v4; // eax

  if ( !*(_DWORD *)(a1 + 4248) )
  {
    *(_DWORD *)(a1 + 4252) = a2;
    if ( a2 )
    {
      switch ( a2 )
      {
        case -2005270523:
          v3 = *(_QWORD *)(a1 + 4256);
          if ( v3 )
          {
            v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 312LL))(v3);
            switch ( v4 )
            {
              case -2005270527:
                *(_DWORD *)(a1 + 4248) = 5;
                sub_18011DA98(
                  &unk_180259058,
                  3LL,
                  "ValidateDeviceAPICAll: Device removed because of invalid call. Likely error in our code.");
                break;
              case -2005270523:
                *(_DWORD *)(a1 + 4248) = 2;
                sub_18011DA98(
                  &unk_180259058,
                  3LL,
                  "ValidateDeviceAPICAll: Device removed. Possibly because new drivers were installed?");
                break;
              case -2005270522:
                *(_DWORD *)(a1 + 4248) = 1;
                sub_18011DA98(&unk_180259058, 3LL, "ValidateDeviceAPICAll: Device removed because it hung.");
                break;
              case -2005270521:
                *(_DWORD *)(a1 + 4248) = 3;
                sub_18011DA98(&unk_180259058, 3LL, "ValidateDeviceAPICAll: Device removed because it was reset.");
                break;
              case -2005270496:
                *(_DWORD *)(a1 + 4248) = 4;
                sub_18011DA98(
                  &unk_180259058,
                  3LL,
                  "ValidateDeviceAPICAll: Device removed because of driver internal error.");
                break;
              default:
                if ( v4 )
                {
                  *(_DWORD *)(a1 + 4248) = 2;
                }
                else
                {
                  *(_DWORD *)(a1 + 4248) = 0;
                  sub_18011DA98(
                    &unk_180259058,
                    3LL,
                    "ValidateDeviceAPICAll: Device removed but reason was S_OK. Better device now available?");
                }
                break;
            }
          }
          else
          {
            *(_DWORD *)(a1 + 4248) = 2;
            sub_18011DA98(
              &unk_180259058,
              3LL,
              "ValidateDeviceAPICAll: Device removed and is now null so cannot be queried. Serious error.");
          }
          break;
        case -2005270521:
          *(_DWORD *)(a1 + 4248) = 3;
          sub_18011DA98(&unk_180259058, 3LL, "ValidateDeviceAPICAll: Device was reset.");
          break;
        case -2147024882:
          sub_18011DA98(&unk_180259058, 3LL, "ValidateDeviceAPICAll: Device out of memory. Calling OOM callbacks.");
          sub_180023648(a1);
          break;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 4248) = 0;
    }
    if ( *(_DWORD *)(a1 + 4248) )
    {
      sub_18011DA98(&unk_180259058, 3LL, "ValidateDeviceAPICAll: Calling Device-lost callback to notify clients.");
      sub_180023574(a1);
    }
  }
}
