/*
 * XREFs of sub_1800332A0 @ 0x1800332A0
 * Callers:
 *     <none>
 * Callees:
 *     LdrAddRefDll @ 0x18002F760 (LdrAddRefDll.c)
 *     sub_180033474 @ 0x180033474 (sub_180033474.c)
 *     sub_18003382C @ 0x18003382C (sub_18003382C.c)
 *     sub_180066BBC @ 0x180066BBC (sub_180066BBC.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_18010F260 @ 0x18010F260 (sub_18010F260.c)
 *     sub_18010F2FC @ 0x18010F2FC (sub_18010F2FC.c)
 */

int __fastcall sub_1800332A0(_DWORD *Instance, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v7; // rbx
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r10
  __int64 v12; // rdx
  _DWORD *ThreadPoolData; // rcx
  int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // r9
  _QWORD *v17; // r14
  struct _PEB *v18; // rax
  _DWORD *p_ServiceSessionId; // rcx

  v3 = *(_QWORD *)(a2 + 208);
  if ( v3 )
  {
    LODWORD(v18) = LdrAddRefDll(0, *(PVOID *)(a2 + 208));
    if ( (int)v18 < 0 )
      return (int)v18;
    Instance[36] |= 0x100u;
    *((_QWORD *)Instance + 21) = v3;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 72));
  sub_18003382C(a2);
  sub_180066BBC(a2 + 128, 1LL);
  sub_180033474((PTP_CALLBACK_INSTANCE)Instance);
  v7 = 2147353478LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && SharedData->ServiceSessionId )
    v9 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  else
    v9 = 2147353478LL;
  if ( *(_BYTE *)v9 )
    sub_18010F260(*(_QWORD *)(a2 + 216), a2, *(_QWORD *)(a2 + 152), *(_QWORD *)(a2 + 160), *(_QWORD *)(a2 + 176));
  v10 = *(_QWORD *)(a2 + 176);
  v11 = *(_QWORD *)(a2 + 160);
  v12 = *(_QWORD *)(a2 + 152);
  ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v14 = ThreadPoolData[3];
    ++*((_QWORD *)ThreadPoolData + 2);
    v15 = ((_BYTE)v14 - 1) & 1;
    ThreadPoolData[3] = v15;
    v16 = 8LL * v15;
    v17 = &ThreadPoolData[v16 + 8];
    *(_QWORD *)&ThreadPoolData[v16 + 10] = v11;
    *v17 = v12;
    *(_QWORD *)&ThreadPoolData[v16 + 12] = v10;
    *(_QWORD *)&ThreadPoolData[v16 + 14] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    v12 = *(_QWORD *)(a2 + 152);
  }
  else
  {
    v17 = 0LL;
  }
  *((_QWORD *)Instance + 11) = v12;
  *((_QWORD *)Instance + 12) = *(_QWORD *)(a2 + 160);
  if ( (*(_BYTE *)(a2 + 288) & 1) != 0 )
  {
    *((_QWORD *)Instance + 17) = a2;
    (*(void (__fastcall **)(_DWORD *, _QWORD, __int64, __int64))(a2 + 152))(Instance, *(_QWORD *)(a2 + 160), a2, a3);
  }
  else
  {
    (*(void (__fastcall **)(_DWORD *, _QWORD, __int64))(a2 + 152))(Instance, *(_QWORD *)(a2 + 160), a2);
  }
  v18 = NtCurrentPeb();
  p_ServiceSessionId = &v18->SharedData->ServiceSessionId;
  if ( p_ServiceSessionId && *p_ServiceSessionId )
  {
    v18 = NtCurrentPeb();
    v7 = (__int64)&v18->SharedData->UserModeGlobalLogger[3];
  }
  if ( *(_BYTE *)v7 )
    LODWORD(v18) = sub_18010F2FC(
                     *(_QWORD *)(a2 + 216),
                     a2,
                     *(_QWORD *)(a2 + 152),
                     *(_QWORD *)(a2 + 160),
                     *(_QWORD *)(a2 + 176));
  if ( v17 )
  {
    v18 = (struct _PEB *)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]);
    if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v17[3] )
    {
      v18 = (struct _PEB *)((char *)v18 - v17[3]);
      v17[3] = v18;
    }
  }
  return (int)v18;
}
