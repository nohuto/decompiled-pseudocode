/*
 * XREFs of ?SupportedByInteraction@CHitTestContext@@AEBA_NW4InputType@@PEBVCInteraction@@1_N@Z @ 0x1800153B0
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_N@Z @ 0x18002C198 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CHitTestContext::SupportedByInteraction(__int64 a1, int a2, _BYTE *a3, __int64 a4, char a5)
{
  char v7; // bl
  int v8; // eax

  if ( a2 == 5 )
  {
    v7 = 0;
    if ( ((*(_DWORD *)(a1 + 100) & 0x803F) == 0 || (a3[184] & 2) == 0 || !a5 || a4)
      && ((*(unsigned int (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a3 + 80LL))(a3, 5LL)
       || (*(unsigned int (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)a3 + 88LL))(
            a3,
            5LL,
            *(unsigned int *)(a1 + 100))) )
    {
      v7 = 1;
    }
    LOBYTE(v8) = v7;
  }
  else if ( a2 != 4
         || !*(_DWORD *)(a1 + 104)
         || (v8 = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a3 + 88LL))(a3, 4LL)) != 0 )
  {
    LOBYTE(v8) = 1;
  }
  return v8;
}
