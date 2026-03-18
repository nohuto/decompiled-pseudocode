/*
 * XREFs of NtGdiSTROBJ_bGetAdvanceWidths @ 0x1C02AE020
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0057988 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00777AC (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1C011433C (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     STROBJ_bGetAdvanceWidths @ 0x1C02B7930 (STROBJ_bGetAdvanceWidths.c)
 */

__int64 __fastcall NtGdiSTROBJ_bGetAdvanceWidths(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // r14
  ULONG v6; // r12d
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v10; // rbx
  STROBJ *v11; // rdi
  __int64 v12; // r9
  char *v13; // rax
  char *v14; // r15
  unsigned int AdvanceWidths; // edi
  ULONG64 v16; // rax

  v5 = (unsigned int)a3;
  v6 = a2;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v10 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  v11 = (STROBJ *)UMPDOBJ::GetDDIOBJ<_STROBJ>((__int64)ThreadCurrentObj, a1);
  if ( !v11
    || (unsigned int)v5 > 0x271000
    || (v13 = UMPDOBJ::_AllocUserMem(v10, (unsigned int)(16 * v5), 0LL, v12), (v14 = v13) == 0LL) )
  {
    --*((_DWORD *)v10 + 105);
    return 0LL;
  }
  AdvanceWidths = STROBJ_bGetAdvanceWidths(v11, v6, v5, (POINTQF *)v13);
  if ( AdvanceWidths )
  {
    v16 = 16 * v5 + a4;
    if ( v16 > MmUserProbeAddress || v16 <= a4 || (a4 & 7) != 0 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove((void *)a4, v14, 16 * v5);
  }
  if ( v10 )
    --*((_DWORD *)v10 + 105);
  return AdvanceWidths;
}
