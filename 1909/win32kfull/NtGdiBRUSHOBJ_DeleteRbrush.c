/*
 * XREFs of NtGdiBRUSHOBJ_DeleteRbrush @ 0x1C02AA890
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C00A0FAC (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00A1218 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtGdiBRUSHOBJ_DeleteRbrush(__int64 a1, __int64 a2, __int64 a3)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  __int64 v7; // rbx
  unsigned int v8; // esi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rdx

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v7 = (__int64)ThreadCurrentObj;
  v8 = 1;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
    if ( a1 )
    {
      v9 = UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)ThreadCurrentObj, a1);
      v10 = v9;
      if ( v9 )
      {
        v11 = *(_QWORD *)(v9 + 8);
        if ( v11 )
        {
          if ( v11 < (unsigned __int64)MmSystemRangeStart )
          {
            EngFreeUserMem((PVOID)(v11 - 16));
            *(_QWORD *)(v10 + 8) = 0LL;
          }
        }
      }
    }
    if ( a2 )
    {
      v12 = UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v7, a2);
      v13 = v12;
      if ( v12 )
      {
        v14 = *(_QWORD *)(v12 + 8);
        if ( v14 )
        {
          if ( v14 < (unsigned __int64)MmSystemRangeStart )
          {
            EngFreeUserMem((PVOID)(v14 - 16));
            *(_QWORD *)(v13 + 8) = 0LL;
          }
        }
      }
    }
  }
  else
  {
    v8 = 0;
  }
  if ( v7 )
    --*(_DWORD *)(v7 + 420);
  return v8;
}
