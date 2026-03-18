/*
 * XREFs of NtGdiCLIPOBJ_cEnumStart @ 0x1C02AB0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0057988 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00F5BF8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ??$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z @ 0x1C028DCF0 (--$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiCLIPOBJ_cEnumStart(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v6; // ebp
  int v7; // r14d
  int v8; // r15d
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v11; // rbx
  unsigned int v12; // edi
  XCLIPOBJ *v13; // rax

  v6 = a4;
  v7 = a3;
  v8 = a2;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v11 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
  {
LABEL_7:
    v12 = -1;
    goto LABEL_8;
  }
  ++*((_DWORD *)ThreadCurrentObj + 105);
  v12 = -1;
  v13 = (XCLIPOBJ *)UMPDOBJ::GetDDIOBJ<_CLIPOBJ>((__int64)ThreadCurrentObj, a1);
  if ( !v13 )
    goto LABEL_8;
  if ( (*((_DWORD *)v11 + 103) & 0x100) != 0 && !*((_QWORD *)v13 + 7) )
  {
    if ( gfUMPDDebug )
      DbgPrint("windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiCLIPOBJ_cEnumStart:!peco->bValid()\n", 2574);
    goto LABEL_7;
  }
  v12 = XCLIPOBJ::cEnumStart(v13, v8, v7, v6, a5);
LABEL_8:
  if ( v11 )
    --*((_DWORD *)v11 + 105);
  return v12;
}
