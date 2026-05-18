/*
 * XREFs of sub_1800253B0 @ 0x1800253B0
 * Callers:
 *     sub_180029EA0 @ 0x180029EA0 (sub_180029EA0.c)
 *     sub_18002AA60 @ 0x18002AA60 (sub_18002AA60.c)
 *     sub_18002B0C0 @ 0x18002B0C0 (sub_18002B0C0.c)
 *     sub_18002C650 @ 0x18002C650 (sub_18002C650.c)
 *     sub_18002CA10 @ 0x18002CA10 (sub_18002CA10.c)
 *     sub_18002EC2C @ 0x18002EC2C (sub_18002EC2C.c)
 *     sub_18002F4AC @ 0x18002F4AC (sub_18002F4AC.c)
 *     sub_18002FB6C @ 0x18002FB6C (sub_18002FB6C.c)
 *     sub_18002FF48 @ 0x18002FF48 (sub_18002FF48.c)
 *     sub_1800303E0 @ 0x1800303E0 (sub_1800303E0.c)
 *     sub_1800311C4 @ 0x1800311C4 (sub_1800311C4.c)
 *     sub_180033620 @ 0x180033620 (sub_180033620.c)
 *     ?overflow@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAAHH@Z @ 0x180033A60 (-overflow@-$basic_filebuf@DU-$char_traits@D@std@@@std@@MEAAHH@Z.c)
 *     sub_180033E7C @ 0x180033E7C (sub_180033E7C.c)
 *     sub_180034FB0 @ 0x180034FB0 (sub_180034FB0.c)
 *     sub_180037700 @ 0x180037700 (sub_180037700.c)
 *     sub_180037F90 @ 0x180037F90 (sub_180037F90.c)
 *     sub_1800389A0 @ 0x1800389A0 (sub_1800389A0.c)
 *     sub_180038E40 @ 0x180038E40 (sub_180038E40.c)
 *     sub_180039FB0 @ 0x180039FB0 (sub_180039FB0.c)
 *     sub_18003A940 @ 0x18003A940 (sub_18003A940.c)
 *     sub_18003AE34 @ 0x18003AE34 (sub_18003AE34.c)
 *     sub_18003DD40 @ 0x18003DD40 (sub_18003DD40.c)
 *     sub_18003E2F0 @ 0x18003E2F0 (sub_18003E2F0.c)
 *     sub_180041D80 @ 0x180041D80 (sub_180041D80.c)
 *     sub_180042614 @ 0x180042614 (sub_180042614.c)
 *     sub_180043400 @ 0x180043400 (sub_180043400.c)
 *     sub_1800437F0 @ 0x1800437F0 (sub_1800437F0.c)
 *     sub_180043BB0 @ 0x180043BB0 (sub_180043BB0.c)
 *     sub_180043F70 @ 0x180043F70 (sub_180043F70.c)
 *     sub_180044440 @ 0x180044440 (sub_180044440.c)
 *     sub_180044750 @ 0x180044750 (sub_180044750.c)
 *     sub_180044A30 @ 0x180044A30 (sub_180044A30.c)
 *     sub_180044E88 @ 0x180044E88 (sub_180044E88.c)
 *     sub_180045004 @ 0x180045004 (sub_180045004.c)
 * Callees:
 *     sub_180023464 @ 0x180023464 (sub_180023464.c)
 *     sub_180023538 @ 0x180023538 (sub_180023538.c)
 *     sub_18011D988 @ 0x18011D988 (sub_18011D988.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1800253B0(__int64 a1, int a2)
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
                sub_18011D988(
                  &unk_180258058,
                  3LL,
                  "ValidateDeviceAPICAll: Device removed because of invalid call. Likely error in our code.");
                break;
              case -2005270523:
                *(_DWORD *)(a1 + 4248) = 2;
                sub_18011D988(
                  &unk_180258058,
                  3LL,
                  "ValidateDeviceAPICAll: Device removed. Possibly because new drivers were installed?");
                break;
              case -2005270522:
                *(_DWORD *)(a1 + 4248) = 1;
                sub_18011D988(&unk_180258058, 3LL, "ValidateDeviceAPICAll: Device removed because it hung.");
                break;
              case -2005270521:
                *(_DWORD *)(a1 + 4248) = 3;
                sub_18011D988(&unk_180258058, 3LL, "ValidateDeviceAPICAll: Device removed because it was reset.");
                break;
              case -2005270496:
                *(_DWORD *)(a1 + 4248) = 4;
                sub_18011D988(
                  &unk_180258058,
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
                  sub_18011D988(
                    &unk_180258058,
                    3LL,
                    "ValidateDeviceAPICAll: Device removed but reason was S_OK. Better device now available?");
                }
                break;
            }
          }
          else
          {
            *(_DWORD *)(a1 + 4248) = 2;
            sub_18011D988(
              &unk_180258058,
              3LL,
              "ValidateDeviceAPICAll: Device removed and is now null so cannot be queried. Serious error.");
          }
          break;
        case -2005270521:
          *(_DWORD *)(a1 + 4248) = 3;
          sub_18011D988(&unk_180258058, 3LL, "ValidateDeviceAPICAll: Device was reset.");
          break;
        case -2147024882:
          sub_18011D988(&unk_180258058, 3LL, "ValidateDeviceAPICAll: Device out of memory. Calling OOM callbacks.");
          sub_180023538(a1);
          break;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 4248) = 0;
    }
    if ( *(_DWORD *)(a1 + 4248) )
    {
      sub_18011D988(&unk_180258058, 3LL, "ValidateDeviceAPICAll: Calling Device-lost callback to notify clients.");
      sub_180023464(a1);
    }
  }
}
