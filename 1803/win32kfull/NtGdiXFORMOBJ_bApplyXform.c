/*
 * XREFs of NtGdiXFORMOBJ_bApplyXform @ 0x1C0285A70
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B13A0 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1C011F92C (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C012FD00 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     ?bSafeReadBits@@YAHPEAX0K@Z @ 0x1C012FD4C (-bSafeReadBits@@YAHPEAX0K@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     XFORMOBJ_bApplyXform @ 0x1C028D7F0 (XFORMOBJ_bApplyXform.c)
 */

__int64 __fastcall NtGdiXFORMOBJ_bApplyXform(__int64 a1, __int64 a2, ULONG a3, char *a4, char *a5)
{
  unsigned int v5; // r14d
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v12; // rbx
  XFORMOBJ *v13; // r12
  unsigned int v14; // r15d
  char *p_pvIn; // rbp
  char *pvOut; // rdi
  char *v17; // rax
  ULONG iMode; // [rsp+30h] [rbp-98h]
  char pvIn; // [rsp+40h] [rbp-88h] BYREF
  char v20; // [rsp+60h] [rbp-68h] BYREF

  v5 = 0;
  iMode = a2;
  if ( a3 > 0x4E2000 )
    return 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v12 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
    v13 = (XFORMOBJ *)UMPDOBJ::GetDDIOBJ<_XFORMOBJ>((__int64)ThreadCurrentObj, a1);
    if ( !v13 || !a4 || !a5 || !a3 )
    {
LABEL_21:
      if ( v12 )
        --*((_DWORD *)v12 + 105);
      return v5;
    }
    v14 = 8 * a3;
    if ( a3 > 4 )
    {
      p_pvIn = (char *)PALLOCMEM2(v14, 1886221639LL, 0);
      v17 = (char *)PALLOCMEM2(v14, 1886221639LL, 0);
      pvOut = v17;
      if ( !p_pvIn || !v17 )
      {
LABEL_16:
        if ( a3 > 4 )
        {
          if ( p_pvIn )
            Win32FreePool(p_pvIn);
          if ( pvOut )
            Win32FreePool(pvOut);
        }
        goto LABEL_21;
      }
    }
    else
    {
      p_pvIn = &pvIn;
      pvOut = &v20;
    }
    if ( (unsigned int)bSafeReadBits(p_pvIn, a4, v14)
      && XFORMOBJ_bApplyXform(v13, iMode, a3, p_pvIn, pvOut)
      && (unsigned int)bSafeCopyBits(a5, pvOut, v14) )
    {
      v5 = 1;
    }
    goto LABEL_16;
  }
  return v5;
}
