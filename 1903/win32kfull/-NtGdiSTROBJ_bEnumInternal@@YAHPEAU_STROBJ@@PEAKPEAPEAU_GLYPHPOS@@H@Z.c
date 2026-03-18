/*
 * XREFs of ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C02AA824
 * Callers:
 *     NtGdiSTROBJ_bEnum @ 0x1C02ADFE0 (NtGdiSTROBJ_bEnum.c)
 *     NtGdiSTROBJ_bEnumPositionsOnly @ 0x1C02AE000 (NtGdiSTROBJ_bEnumPositionsOnly.c)
 * Callees:
 *     STROBJ_bEnum @ 0x1C0057080 (STROBJ_bEnum.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0057988 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00777AC (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1C011433C (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     STROBJ_bEnumPositionsOnly @ 0x1C02B7900 (STROBJ_bEnumPositionsOnly.c)
 */

__int64 __fastcall NtGdiSTROBJ_bEnumInternal(struct _STROBJ *a1, unsigned int *a2, struct _GLYPHPOS **a3, __int64 a4)
{
  int v4; // edi
  struct _GLYPHPOS **v5; // r12
  unsigned int *v6; // r13
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v10; // rbx
  STROBJ *v11; // rax
  unsigned int v12; // eax
  __int64 v13; // r9
  unsigned int v14; // r14d
  __int64 v15; // rsi
  char *v16; // rax
  char *v17; // r15
  _QWORD *v18; // rax
  __int64 v19; // rcx
  ULONG pc; // [rsp+20h] [rbp-38h] BYREF
  PGLYPHPOS ppgpos; // [rsp+28h] [rbp-30h] BYREF
  char *v23; // [rsp+30h] [rbp-28h]
  struct UMPDOBJ *v24; // [rsp+38h] [rbp-20h]

  v4 = a4;
  v5 = a3;
  v6 = a2;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread(
                                             (__int64)KeGetCurrentThread(),
                                             (__int64)a2,
                                             (__int64)a3,
                                             a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v10 = ThreadCurrentObj;
  v24 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0xFFFFFFFFLL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  v11 = (STROBJ *)UMPDOBJ::GetDDIOBJ<_STROBJ>((__int64)ThreadCurrentObj, (__int64)a1);
  if ( !v11
    || (!v4 ? (v12 = STROBJ_bEnum(v11, &pc, &ppgpos)) : (v12 = STROBJ_bEnumPositionsOnly(v11, &pc, &ppgpos)),
        (v14 = v12, v12 == -1)
     || (v15 = pc, pc > 0x1A0AAA)
     || (v16 = UMPDOBJ::_AllocUserMem(v10, 24 * pc, 0LL, v13), v17 = v16, (v23 = v16) == 0LL)) )
  {
    --*((_DWORD *)v10 + 105);
    return 0xFFFFFFFFLL;
  }
  memmove(v16, ppgpos, 24 * v15);
  if ( (unsigned __int64)v5 >= MmUserProbeAddress )
    v5 = (struct _GLYPHPOS **)MmUserProbeAddress;
  *v5 = (struct _GLYPHPOS *)v23;
  if ( (unsigned __int64)v6 >= MmUserProbeAddress )
    v6 = (unsigned int *)MmUserProbeAddress;
  *v6 = v15;
  if ( (_DWORD)v15 )
  {
    v18 = v17 + 8;
    v19 = (unsigned int)v15;
    do
    {
      *v18 = 0LL;
      v18 += 3;
      --v19;
    }
    while ( v19 );
  }
  if ( v10 )
    --*((_DWORD *)v10 + 105);
  return v14;
}
