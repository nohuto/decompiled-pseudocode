/*
 * XREFs of NtGdiFONTOBJ_pxoGetXform @ 0x1C011E7E0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B13A0 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z @ 0x1C011FC90 (-GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z.c)
 */

struct _XFORMOBJ *__fastcall NtGdiFONTOBJ_pxoGetXform(struct _FONTOBJ *a1, __int64 a2)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v5; // rbx
  struct _XFORMOBJ *result; // rax

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v5 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
    result = UMPDOBJ::GetFONTOBJXform(ThreadCurrentObj, a1);
  }
  else
  {
    result = 0LL;
  }
  if ( v5 )
    --*((_DWORD *)v5 + 105);
  return result;
}
