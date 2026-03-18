/*
 * XREFs of ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C00FC468
 * Callers:
 *     SfnINLBOXSTRING @ 0x1C00FC410 (SfnINLBOXSTRING.c)
 *     SfnINCBOXSTRING @ 0x1C0133C40 (SfnINCBOXSTRING.c)
 * Callees:
 *     SfnINSTRINGNULL @ 0x1C0023830 (SfnINSTRINGNULL.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     SfnDWORD @ 0x1C0043660 (SfnDWORD.c)
 *     SfnINSTRING @ 0x1C00FC540 (SfnINSTRING.c)
 */

__int64 __fastcall _SfnINBOXSTRING(
        int a1,
        struct tagWND *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 (*a7)(void),
        unsigned int a8)
{
  volatile signed __int32 *v10; // rbx
  unsigned __int64 v12; // rcx
  int v13; // eax
  int v14; // eax

  v10 = (volatile signed __int32 *)a2;
  if ( a2 )
    v12 = *(_QWORD *)a2;
  else
    v12 = 0LL;
  LOBYTE(a2) = 1;
  if ( !HMValidateHandleNoSecure(v12, (__int64)a2) )
    return 0LL;
  v13 = *(_DWORD *)(gptiCurrent + 1396LL);
  if ( v13 == 1 )
    return SfnDWORD(v10, a3, a4, a5, a6, (__int64)a7);
  if ( v13 != 2 )
    return 0LL;
  v14 = 399;
  if ( a1 != 678 )
    v14 = 332;
  if ( a3 == v14 )
    return SfnINSTRINGNULL(v10, a3, a4, a5, a6, (__int64)a7, a8);
  else
    return SfnINSTRING((_DWORD)v10, a3, a4, a5, a6, (__int64)a7, a8);
}
