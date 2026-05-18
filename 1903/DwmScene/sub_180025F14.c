/*
 * XREFs of sub_180025F14 @ 0x180025F14
 * Callers:
 *     sub_18001D978 @ 0x18001D978 (sub_18001D978.c)
 *     sub_18001DA6C @ 0x18001DA6C (sub_18001DA6C.c)
 *     sub_18001DB60 @ 0x18001DB60 (sub_18001DB60.c)
 *     sub_18001DC54 @ 0x18001DC54 (sub_18001DC54.c)
 *     sub_18001DD48 @ 0x18001DD48 (sub_18001DD48.c)
 *     sub_18001DE3C @ 0x18001DE3C (sub_18001DE3C.c)
 *     sub_18001DF30 @ 0x18001DF30 (sub_18001DF30.c)
 *     sub_18001E024 @ 0x18001E024 (sub_18001E024.c)
 *     sub_18001E118 @ 0x18001E118 (sub_18001E118.c)
 *     sub_18001E20C @ 0x18001E20C (sub_18001E20C.c)
 *     sub_18001E300 @ 0x18001E300 (sub_18001E300.c)
 *     sub_18001E3F4 @ 0x18001E3F4 (sub_18001E3F4.c)
 *     sub_18001E4E8 @ 0x18001E4E8 (sub_18001E4E8.c)
 *     sub_18001E5DC @ 0x18001E5DC (sub_18001E5DC.c)
 *     sub_18001E6D0 @ 0x18001E6D0 (sub_18001E6D0.c)
 *     sub_18001E7C4 @ 0x18001E7C4 (sub_18001E7C4.c)
 *     sub_18001E8B8 @ 0x18001E8B8 (sub_18001E8B8.c)
 *     sub_180039FB0 @ 0x180039FB0 (sub_180039FB0.c)
 *     sub_1800AC274 @ 0x1800AC274 (sub_1800AC274.c)
 *     sub_1800B51AC @ 0x1800B51AC (sub_1800B51AC.c)
 *     sub_1800B52A0 @ 0x1800B52A0 (sub_1800B52A0.c)
 *     sub_1800B5394 @ 0x1800B5394 (sub_1800B5394.c)
 *     sub_1800B5488 @ 0x1800B5488 (sub_1800B5488.c)
 *     sub_1800B557C @ 0x1800B557C (sub_1800B557C.c)
 *     sub_1800B5670 @ 0x1800B5670 (sub_1800B5670.c)
 *     sub_1800B5764 @ 0x1800B5764 (sub_1800B5764.c)
 *     sub_1800B5858 @ 0x1800B5858 (sub_1800B5858.c)
 *     sub_1800C9428 @ 0x1800C9428 (sub_1800C9428.c)
 *     sub_1800FE8E0 @ 0x1800FE8E0 (sub_1800FE8E0.c)
 *     sub_1801130B8 @ 0x1801130B8 (sub_1801130B8.c)
 * Callees:
 *     sub_180025EA8 @ 0x180025EA8 (sub_180025EA8.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180025F14(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  _BYTE *v6; // rdx
  _BYTE v7[56]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE *v8; // [rsp+68h] [rbp-20h]

  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 == a1 || (v5 = *(_QWORD *)(a2 + 56), v5 == a2) )
  {
    v8 = 0LL;
    sub_180025EA8((__int64)v7, a1);
    sub_180025EA8(a1, a2);
    sub_180025EA8(a2, (__int64)v7);
    if ( v8 )
    {
      v6 = v7;
      LOBYTE(v6) = v8 != v7;
      (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v8 + 32LL))(v8, v6);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 56) = v5;
    *(_QWORD *)(a2 + 56) = v4;
  }
}
