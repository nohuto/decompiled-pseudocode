/*
 * XREFs of NtGdiBRUSHOBJ_DeleteRbrush @ 0x1C02AAD40
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C005771C (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0057988 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtGdiBRUSHOBJ_DeleteRbrush(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  __int64 v8; // rbx
  unsigned int v9; // esi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rdx

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v8 = (__int64)ThreadCurrentObj;
  v9 = 1;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
    if ( a1 )
    {
      v10 = UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)ThreadCurrentObj, a1);
      v11 = v10;
      if ( v10 )
      {
        v12 = *(_QWORD *)(v10 + 8);
        if ( v12 )
        {
          if ( v12 < (unsigned __int64)MmSystemRangeStart )
          {
            EngFreeUserMem((PVOID)(v12 - 16));
            *(_QWORD *)(v11 + 8) = 0LL;
          }
        }
      }
    }
    if ( a2 )
    {
      v13 = UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v8, a2);
      v14 = v13;
      if ( v13 )
      {
        v15 = *(_QWORD *)(v13 + 8);
        if ( v15 )
        {
          if ( v15 < (unsigned __int64)MmSystemRangeStart )
          {
            EngFreeUserMem((PVOID)(v15 - 16));
            *(_QWORD *)(v14 + 8) = 0LL;
          }
        }
      }
    }
  }
  else
  {
    v9 = 0;
  }
  if ( v8 )
    --*(_DWORD *)(v8 + 420);
  return v9;
}
