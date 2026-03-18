/*
 * XREFs of NtGdiXLATEOBJ_cGetPalette @ 0x1C02AE490
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0057988 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C00580C8 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C0075884 (PALLOCMEM2.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C0154290 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     XLATEOBJ_cGetPalette @ 0x1C02B7C90 (XLATEOBJ_cGetPalette.c)
 */

__int64 __fastcall NtGdiXLATEOBJ_cGetPalette(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  ULONG v6; // ebp
  ULONG v7; // r13d
  ULONG Palette; // edi
  ULONG *v9; // rsi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v12; // rbx
  XLATEOBJ *v13; // r15
  unsigned int v14; // r14d

  v6 = a3;
  v7 = a2;
  Palette = 0;
  v9 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, (__int64)a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v12 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return Palette;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  v13 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)ThreadCurrentObj, a1);
  if ( v13 )
  {
    if ( !a4 )
    {
      v14 = 4 * v6;
LABEL_7:
      if ( v9 )
      {
        Palette = XLATEOBJ_cGetPalette(v13, v7, v6, v9);
        if ( Palette )
          Palette &= -((unsigned int)bSafeCopyBits(a4, v9, v14) != 0);
        Win32FreePool(v9);
      }
      goto LABEL_11;
    }
    if ( v6 <= 0x9C4000 )
    {
      v14 = 4 * v6;
      v9 = (ULONG *)PALLOCMEM2(4 * v6, 1886221639LL, 0);
      goto LABEL_7;
    }
  }
LABEL_11:
  if ( v12 )
    --*((_DWORD *)v12 + 105);
  return Palette;
}
