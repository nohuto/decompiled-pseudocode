/*
 * XREFs of NtGdiEngCreateClip @ 0x1C0282FA0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B13A0 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?CreateCLIPOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@XZ @ 0x1C0264218 (-CreateCLIPOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@XZ.c)
 */

struct _CLIPOBJ *__fastcall NtGdiEngCreateClip(__int64 a1, __int64 a2)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v4; // rbx
  struct _CLIPOBJ *result; // rax

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v4 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
    result = UMPDOBJ::CreateCLIPOBJ(ThreadCurrentObj);
  }
  else
  {
    result = 0LL;
  }
  if ( v4 )
    --*((_DWORD *)v4 + 105);
  return result;
}
