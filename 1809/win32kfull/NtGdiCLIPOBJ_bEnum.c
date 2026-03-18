/*
 * XREFs of NtGdiCLIPOBJ_bEnum @ 0x1C0295D40
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C008B104 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C008F998 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C01509D0 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016211C (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     ??$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z @ 0x1C0277C80 (--$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C0295A14 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall NtGdiCLIPOBJ_bEnum(__int64 a1, __int64 a2, char *a3)
{
  int v4; // ebp
  unsigned int v5; // edi
  unsigned int v7; // r15d
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rbx
  unsigned __int64 v11; // rax
  XCLIPOBJ *v12; // r14
  char *v13; // rax
  char *v14; // rsi
  unsigned int v15; // [rsp+68h] [rbp+20h] BYREF

  v4 = -1;
  v5 = -1;
  v7 = a2;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  if ( !ThreadCurrentObj )
    goto LABEL_5;
  if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_1709650232_59778887_FeatureDescriptorDetails) )
  {
    if ( !UMPDOBJ::bIncrementEngCallRecursionCount(ThreadCurrentObj) )
    {
      ThreadCurrentObj = 0LL;
LABEL_5:
      v4 = 0;
LABEL_6:
      v5 = v4;
      goto LABEL_7;
    }
  }
  else
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
  }
  v11 = UMPDOBJ::GetDDIOBJ<_CLIPOBJ>((__int64)ThreadCurrentObj, a1);
  v12 = (XCLIPOBJ *)v11;
  if ( v11 )
  {
    if ( (*((_DWORD *)ThreadCurrentObj + 103) & 0x100) != 0 && !*(_QWORD *)(v11 + 56) )
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiCLIPOBJ_bEnum:!peco->bValid()\n", 2721);
      goto LABEL_6;
    }
    if ( v7 <= 0x2710000 )
    {
      v13 = (char *)PALLOCMEM2(v7, 1886221639LL, 0);
      v14 = v13;
      if ( v13 )
      {
        v15 = 0;
        v5 = XCLIPOBJ::bEnum(v12, v7, v13, &v15);
        if ( v5 != -1 && !(unsigned int)bSafeCopyBits(a3, v14, v15) )
          v5 = -1;
        Win32FreePool(v14);
      }
    }
  }
LABEL_7:
  if ( ThreadCurrentObj )
    UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return v5;
}
