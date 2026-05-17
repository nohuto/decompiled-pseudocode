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

struct _PEB *__fastcall sub_1800332A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v7; // rbx
  _DWORD *HotpatchInformation; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r10
  __int64 v12; // rdx
  _DWORD *ThreadPoolData; // rcx
  int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // r9
  _QWORD *v17; // r14
  struct _PEB *result; // rax
  _DWORD *v19; // rcx

  v3 = *(_QWORD *)(a2 + 208);
  if ( v3 )
  {
    result = (struct _PEB *)LdrAddRefDll(0, *(_QWORD *)(a2 + 208));
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)(a1 + 144) |= 0x100u;
    *(_QWORD *)(a1 + 168) = v3;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 72));
  sub_18003382C(a2);
  sub_180066BBC(a2 + 128, 1LL);
  sub_180033474(a1, a2 + 72);
  v7 = 2147353478LL;
  HotpatchInformation = NtCurrentPeb()->HotpatchInformation;
  if ( HotpatchInformation && *HotpatchInformation )
    v9 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
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
  *(_QWORD *)(a1 + 88) = v12;
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 160);
  if ( (*(_BYTE *)(a2 + 288) & 1) != 0 )
  {
    *(_QWORD *)(a1 + 136) = a2;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(a2 + 152))(a1, *(_QWORD *)(a2 + 160), a2, a3);
  }
  else
  {
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(a2 + 152))(a1, *(_QWORD *)(a2 + 160), a2);
  }
  result = NtCurrentPeb();
  v19 = result->HotpatchInformation;
  if ( v19 && *v19 )
  {
    result = NtCurrentPeb();
    v7 = (__int64)result->HotpatchInformation + 556;
  }
  if ( *(_BYTE *)v7 )
    result = (struct _PEB *)sub_18010F2FC(
                              *(_QWORD *)(a2 + 216),
                              a2,
                              *(_QWORD *)(a2 + 152),
                              *(_QWORD *)(a2 + 160),
                              *(_QWORD *)(a2 + 176));
  if ( v17 )
  {
    result = (struct _PEB *)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]);
    if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v17[3] )
    {
      result = (struct _PEB *)((char *)result - v17[3]);
      v17[3] = result;
    }
  }
  return result;
}
