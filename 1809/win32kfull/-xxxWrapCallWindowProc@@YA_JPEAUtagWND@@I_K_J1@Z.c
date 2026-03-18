/*
 * XREFs of ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0155ED0
 * Callers:
 *     <none>
 * Callees:
 *     SfnDWORD @ 0x1C002D8C0 (SfnDWORD.c)
 *     HMValidateHandleNoRip @ 0x1C00B6440 (HMValidateHandleNoRip.c)
 *     ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x1C012CDA8 (-CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxWrapCallWindowProc(
        struct tagWND *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  unsigned int v6; // ebx
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // r10

  v6 = a2;
  if ( !(unsigned int)CheckProcessIdentity(a1, a2, a3, a4) )
    return 0LL;
  LOBYTE(v9) = 7;
  v10 = HMValidateHandleNoRip(a5, v9);
  v11 = v6 & 0x1FFFF;
  if ( v10 )
  {
    v12 = *(_QWORD *)(v10 + 40);
    v13 = *(_QWORD *)(v12 + 16);
    if ( v11 >= 0x400 )
      return SfnDWORD((volatile signed __int32 *)a1, v6, a3, a4, v13, *(_QWORD *)(gpsi + 752LL));
    else
      return ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, unsigned __int64, __int64, _QWORD, bool, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v6]])(
               a1,
               v6,
               a3,
               a4,
               v13,
               *(_QWORD *)(gpsi + 752LL),
               (*(_WORD *)(v12 + 24) & 2) != 0,
               0LL);
  }
  else if ( v11 < 0x400 )
  {
    return ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, unsigned __int64, unsigned __int64, _QWORD, bool, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v6]])(
             a1,
             v6,
             a3,
             a4,
             a5,
             *(_QWORD *)(gpsi + 560LL),
             a5 == *(_QWORD *)(gpsi + 480LL),
             0LL);
  }
  else
  {
    return SfnDWORD((volatile signed __int32 *)a1, v6, a3, a4, a5, *(_QWORD *)(gpsi + 560LL));
  }
}
