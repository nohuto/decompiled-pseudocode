/*
 * XREFs of NtGdiXFORMOBJ_bApplyXform @ 0x1C0299430
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1C008E934 (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C008F998 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C01509D0 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     ?bSafeReadBits@@YAHPEAX0K@Z @ 0x1C0150A1C (-bSafeReadBits@@YAHPEAX0K@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016211C (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C0295A14 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 *     XFORMOBJ_bApplyXform @ 0x1C02A0E10 (XFORMOBJ_bApplyXform.c)
 */

__int64 __fastcall NtGdiXFORMOBJ_bApplyXform(__int64 a1, __int64 a2, ULONG a3, char *a4, char *a5)
{
  unsigned int v5; // r14d
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rbx
  XFORMOBJ *v12; // r12
  unsigned int v13; // r15d
  char *p_pvIn; // rsi
  char *pvOut; // rdi
  char *v16; // rax
  ULONG iMode; // [rsp+30h] [rbp-98h]
  char pvIn; // [rsp+40h] [rbp-88h] BYREF
  char v19; // [rsp+60h] [rbp-68h] BYREF

  v5 = 0;
  iMode = a2;
  if ( a3 > 0x4E2000 )
    return 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  if ( ThreadCurrentObj )
  {
    if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_1709650232_59778887_FeatureDescriptorDetails) )
    {
      if ( !UMPDOBJ::bIncrementEngCallRecursionCount(ThreadCurrentObj) )
      {
        ThreadCurrentObj = 0LL;
        goto LABEL_25;
      }
    }
    else
    {
      ++*((_DWORD *)ThreadCurrentObj + 105);
    }
    v12 = (XFORMOBJ *)UMPDOBJ::GetDDIOBJ<_XFORMOBJ>((__int64)ThreadCurrentObj, a1);
    if ( v12 )
    {
      if ( a4 && a5 && a3 )
      {
        v13 = 8 * a3;
        if ( a3 > 4 )
        {
          p_pvIn = (char *)PALLOCMEM2(v13, 1886221639LL, 0);
          v16 = (char *)PALLOCMEM2(v13, 1886221639LL, 0);
          pvOut = v16;
          if ( !p_pvIn || !v16 )
          {
LABEL_20:
            if ( a3 > 4 )
            {
              if ( p_pvIn )
                Win32FreePool(p_pvIn);
              if ( pvOut )
                Win32FreePool(pvOut);
            }
            goto LABEL_25;
          }
        }
        else
        {
          p_pvIn = &pvIn;
          pvOut = &v19;
        }
        if ( (unsigned int)bSafeReadBits(p_pvIn, a4, v13)
          && XFORMOBJ_bApplyXform(v12, iMode, a3, p_pvIn, pvOut)
          && (unsigned int)bSafeCopyBits(a5, pvOut, v13) )
        {
          v5 = 1;
        }
        goto LABEL_20;
      }
    }
  }
LABEL_25:
  if ( ThreadCurrentObj )
    UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return v5;
}
