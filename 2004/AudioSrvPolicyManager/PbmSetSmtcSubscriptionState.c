/*
 * XREFs of PbmSetSmtcSubscriptionState @ 0x180023590
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_18001B7E4 @ 0x18001B7E4 (sub_18001B7E4.c)
 *     sub_18002D14C @ 0x18002D14C (sub_18002D14C.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmSetSmtcSubscriptionState(void *a1, int a2, int a3)
{
  volatile signed __int32 *v3; // rbx
  unsigned int v7; // edi
  int v8; // edx
  int v9; // r9d
  int v10; // eax
  volatile signed __int32 *v11; // rax
  _QWORD v13[2]; // [rsp+20h] [rbp-40h] BYREF
  int v14; // [rsp+30h] [rbp-30h]
  int v15; // [rsp+34h] [rbp-2Ch]
  _QWORD *v16; // [rsp+58h] [rbp-8h]
  __int64 retaddr; // [rsp+78h] [rbp+18h]
  volatile signed __int32 *v18; // [rsp+98h] [rbp+38h] BYREF

  v3 = 0LL;
  v18 = 0LL;
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 5u )
  {
    sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0xBu, &stru_1800449B8, a2);
    v3 = v18;
  }
  if ( a2 < 2 )
  {
    if ( qword_18004FE78 )
    {
      if ( v3 && _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 32LL))(v3);
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 1LL);
      }
      v10 = sub_18001B7E4(qword_18004FE78, a1, &v18);
      v7 = v10;
      if ( v10 < 0 )
      {
        v8 = 274;
LABEL_17:
        v9 = v10;
        goto LABEL_18;
      }
      v11 = v18;
      if ( v18 )
        _InterlockedIncrement(v18 + 2);
      v13[1] = v11;
      v13[0] = off_18003F358;
      v14 = a2;
      v15 = a3;
      v16 = v13;
      v10 = sub_18002D14C(v13);
      v7 = v10;
      if ( v10 < 0 )
      {
        v8 = 279;
        goto LABEL_17;
      }
      v3 = v18;
    }
    v7 = 0;
    goto LABEL_21;
  }
  v7 = -2147024809;
  v8 = 270;
  v9 = -2147024809;
LABEL_18:
  sub_180003AB0(
    retaddr,
    v8,
    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
    v9);
  v3 = v18;
LABEL_21:
  if ( v3 && _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 32LL))(v3);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 1LL);
  }
  return v7;
}
