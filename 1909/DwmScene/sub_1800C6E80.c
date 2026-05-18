/*
 * XREFs of sub_1800C6E80 @ 0x1800C6E80
 * Callers:
 *     sub_1800C3190 @ 0x1800C3190 (sub_1800C3190.c)
 * Callees:
 *     sub_180077710 @ 0x180077710 (sub_180077710.c)
 *     sub_180077A8C @ 0x180077A8C (sub_180077A8C.c)
 *     sub_1800BC95C @ 0x1800BC95C (sub_1800BC95C.c)
 *     sub_1800E2EFC @ 0x1800E2EFC (sub_1800E2EFC.c)
 *     sub_1800E2FD0 @ 0x1800E2FD0 (sub_1800E2FD0.c)
 *     sub_1800FE1F4 @ 0x1800FE1F4 (sub_1800FE1F4.c)
 *     sub_1800FE4E4 @ 0x1800FE4E4 (sub_1800FE4E4.c)
 *     sub_180123D7C @ 0x180123D7C (sub_180123D7C.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_1800C6E80(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rbx
  int v8; // edi
  int v9; // eax
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rdx
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  __int64 v16; // [rsp+30h] [rbp-50h] BYREF
  volatile signed __int32 *v17; // [rsp+38h] [rbp-48h]
  __int64 v18; // [rsp+40h] [rbp-40h] BYREF
  volatile signed __int32 *v19; // [rsp+48h] [rbp-38h]
  __int128 v20; // [rsp+50h] [rbp-30h] BYREF
  __int64 v21; // [rsp+60h] [rbp-20h]
  __int64 v22; // [rsp+68h] [rbp-18h] BYREF
  volatile signed __int32 *v23; // [rsp+70h] [rbp-10h]

  v21 = -2LL;
  v6 = sub_180077A8C(a1, *(_DWORD *)(*a2 + 112LL));
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, &unk_180259898, 0LL)
    || !(unsigned __int8)sub_1800E2FD0(a3) )
  {
    return 0;
  }
  v8 = sub_1800E2EFC(a3);
  if ( v8 == 4 )
    sub_180123D7C(v6, &unk_18025AE98);
  if ( v8 == 5 )
    sub_180123D7C(v6, &unk_18025AF38);
  v9 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v6 + 72LL))(v6, &unk_18025A0D8, 2LL);
  if ( v8 == 6 )
    (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v6 + 152LL))(
      v6,
      &unk_18025A0D8,
      (unsigned int)((v9 + 1) % 11),
      1LL);
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_18025BE58);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v6 + 168LL))(v6, &unk_18025BE58, v10, 1LL);
  if ( v8 == 9 )
    sub_180123D7C(v6, &unk_180259FD8);
  if ( v8 == 11 )
    sub_180123D7C(v6, &unk_18025A0B8);
  if ( v8 == 13 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v6 + 72LL))(v6, &unk_18025A0F8, 0LL);
    (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v6 + 152LL))(
      v6,
      &unk_18025A0F8,
      (unsigned int)((v11 + 1) % -22),
      1LL);
  }
  v22 = 0LL;
  v23 = 0LL;
  v20 = 0LL;
  v12 = a2[1];
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v12 = a2[1];
  }
  *(_QWORD *)&v20 = *a2;
  *((_QWORD *)&v20 + 1) = v12;
  sub_180077710(a1, &v22, 0LL, &v20);
  if ( v8 != 14 )
    goto LABEL_23;
  v16 = 0LL;
  v17 = 0LL;
  sub_1800BC95C(&v16, &v22);
  sub_1800FE1F4(v16);
  sub_1800FE4E4(v16);
  if ( v17 )
  {
    if ( !_InterlockedDecrement(v17 + 2) )
    {
      v13 = v17;
      (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
      if ( !_InterlockedDecrement(v13 + 3) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
LABEL_23:
        if ( v8 == 15 )
        {
          v18 = 0LL;
          v19 = 0LL;
          sub_1800BC95C(&v18, &v22);
          sub_1800FE1F4(v18);
          sub_1800FE4E4(v18);
          if ( v19 )
          {
            if ( !_InterlockedDecrement(v19 + 2) )
            {
              v14 = v19;
              (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
              if ( !_InterlockedDecrement(v14 + 3) )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
            }
          }
        }
      }
    }
  }
  v15 = v23;
  if ( v23 && !_InterlockedDecrement(v23 + 2) )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
    if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
  }
  return 1;
}
