/*
 * XREFs of NtUserSBGetParms @ 0x1C00F7230
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSBGetParms(__int64 a1, int a2, _QWORD *a3, ULONG64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  int v13; // ebx
  __int128 v14; // xmm1
  int v15; // eax
  __int128 v17; // [rsp+30h] [rbp-58h]
  __int64 v18; // [rsp+40h] [rbp-48h]

  EnterSharedCrit(0LL, 1LL);
  v12 = ValidateHwnd(a1);
  v13 = 0;
  if ( v12 )
  {
    if ( a4 >= MmUserProbeAddress )
      *(_DWORD *)MmUserProbeAddress = 0;
    *(_OWORD *)a4 = *(_OWORD *)a4;
    *(_QWORD *)(a4 + 16) = *(_QWORD *)(a4 + 16);
    *(_DWORD *)(a4 + 24) = *(_DWORD *)(a4 + 24);
    if ( ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = *(_OWORD *)a4;
    v17 = *(_OWORD *)a4;
    v18 = *(_QWORD *)(a4 + 16);
    v9 = *(unsigned int *)(a4 + 24);
    v10 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 720LL);
    v8 = HIDWORD(*(_QWORD *)a4);
    if ( (*(_QWORD *)a4 & 0x100000000LL) != 0 )
    {
      *((_QWORD *)&v17 + 1) = *a3;
      v14 = v17;
    }
    v15 = *(_QWORD *)(a4 + 16);
    v11 = a3[1];
    if ( (v8 & 2) != 0 )
      v15 = a3[1];
    LODWORD(v18) = v15;
    if ( (v8 & 4) != 0 )
      HIDWORD(v18) = HIDWORD(*(_OWORD *)a3);
    if ( (v8 & 0x10) != 0 )
    {
      if ( v10 && *(_DWORD *)(v10 + 88) == a2 && *(_QWORD *)(v10 + 8) == v12 )
        v9 = *(unsigned int *)(v10 + 84);
      else
        v9 = HIDWORD(a3[1]);
    }
    LOBYTE(v13) = (v8 & 0x17) != 0;
    *(_OWORD *)a4 = v14;
    *(_QWORD *)(a4 + 16) = v18;
    *(_DWORD *)(a4 + 24) = v9;
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v13;
}
