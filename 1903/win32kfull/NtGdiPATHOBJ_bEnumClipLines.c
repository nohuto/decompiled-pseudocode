/*
 * XREFs of NtGdiPATHOBJ_bEnumClipLines @ 0x1C02ADAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0057988 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C0075884 (PALLOCMEM2.c)
 *     ?bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z @ 0x1C014CF28 (-bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02AA640 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 */

_BOOL8 __fastcall NtGdiPATHOBJ_bEnumClipLines(__int64 a1, __int64 a2, volatile void *a3, __int64 a4)
{
  unsigned __int64 v5; // r13
  BOOL v7; // r14d
  struct _CLIPLINE *v8; // rsi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v11; // rbx
  unsigned __int64 v12; // r15
  struct _CLIPLINE *v13; // rax
  __int64 v14; // rax

  v5 = (unsigned int)a2;
  v7 = 0;
  v8 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, (__int64)a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v11 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  if ( (unsigned int)(v5 - 33) > 0x270FFDF )
  {
    --*((_DWORD *)ThreadCurrentObj + 105);
    return 0LL;
  }
  v12 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)ThreadCurrentObj, a1);
  if ( v12 )
  {
    v13 = (struct _CLIPLINE *)PALLOCMEM2((unsigned int)v5, 1886221639LL, 0);
    v8 = v13;
    if ( v13 )
    {
      memset(v13, 0, v5);
      if ( (*((_DWORD *)v11 + 103) & 0x100) != 0 )
      {
        v14 = *(_QWORD *)(v12 + 72);
        if ( !v14 )
        {
          if ( gfUMPDDebug )
            DbgPrint(
              "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_bEnumClipLines:ppo->pco == NULL\n",
              4027);
          v7 = 1;
          goto LABEL_16;
        }
        if ( !*(_QWORD *)(v14 + 144) )
        {
          if ( gfUMPDDebug )
            DbgPrint(
              "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_bEnumClipLines:ppo->pco->pcle == NULL\n",
              4033);
          v7 = 1;
        }
      }
      if ( !v7 )
        v7 = XCLIPOBJ::bEnumPath(*(XCLIPOBJ **)(v12 + 72), (struct _PATHOBJ *)v12, v5, v8, 0);
    }
  }
LABEL_16:
  ProbeForWrite(a3, v5, 4u);
  if ( v8 )
    memmove((void *)a3, v8, v5);
  else
    memset((void *)a3, 0, v5);
  if ( v8 )
    Win32FreePool(v8);
  if ( v11 )
    --*((_DWORD *)v11 + 105);
  return v7;
}
