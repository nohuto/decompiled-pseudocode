/*
 * XREFs of ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C015B2A0
 * Callers:
 *     <none>
 * Callees:
 *     SfnDWORD @ 0x1C0024FB0 (SfnDWORD.c)
 *     HMValidateHandleNoRip @ 0x1C00B4C50 (HMValidateHandleNoRip.c)
 *     ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x1C0137298 (-CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxWrapCallWindowProc(
        struct tagWND *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  unsigned int v6; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  unsigned int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // r10

  v6 = a2;
  if ( !(unsigned int)CheckProcessIdentity(a1, a2, a3, a4) )
    return 0LL;
  LOBYTE(v9) = 7;
  v12 = HMValidateHandleNoRip(a5, v9, v10, v11);
  v13 = v6 & 0x1FFFF;
  if ( v12 )
  {
    v14 = *(_QWORD *)(v12 + 40);
    v15 = *(_QWORD *)(v14 + 16);
    if ( v13 >= 0x400 )
      return SfnDWORD(a1, v6, a3, a4, v15, *(_QWORD *)(gpsi + 752LL));
    else
      return ((__int64 (__fastcall *)(struct tagWND *, _QWORD, unsigned __int64, unsigned __int64, __int64, _QWORD, bool, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v6]])(
               a1,
               v6,
               a3,
               a4,
               v15,
               *(_QWORD *)(gpsi + 752LL),
               (*(_WORD *)(v14 + 24) & 2) != 0,
               0LL);
  }
  else if ( v13 < 0x400 )
  {
    return ((__int64 (__fastcall *)(struct tagWND *, _QWORD, unsigned __int64, unsigned __int64, unsigned __int64, _QWORD, bool, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v6]])(
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
    return SfnDWORD(a1, v6, a3, a4, a5, *(_QWORD *)(gpsi + 560LL));
  }
}
