/*
 * XREFs of PbmAllowMediaPlaybackForApp @ 0x1800232A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_18002633C @ 0x18002633C (sub_18002633C.c)
 *     sub_18002CC18 @ 0x18002CC18 (sub_18002CC18.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmAllowMediaPlaybackForApp(void *a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  signed int v6; // ebx
  int v7; // eax
  __int64 v8; // rdi
  __int64 v10; // [rsp+28h] [rbp-10h] BYREF
  unsigned int v11; // [rsp+58h] [rbp+20h]

  v10 = 0LL;
  v5 = sub_18002633C(a1);
  if ( v5 )
  {
    v6 = (unsigned __int16)v5 | 0x80070000;
    if ( v5 <= 0 )
      v6 = v5;
  }
  else
  {
    v7 = sub_18002CC18(v11, a2, a3, &v10);
    v8 = v10;
    v6 = v7;
    if ( v7 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      if ( v6 >= 0 )
        v8 = 0LL;
    }
    if ( v8 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 8LL))(v8, 1LL);
  }
  if ( v6 < 0 )
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0xAu, &stru_1800449B8, v6);
    }
    sub_180005724("PbmAllowMediaPlaybackForApp", 179, v6);
  }
  return (unsigned int)v6;
}
