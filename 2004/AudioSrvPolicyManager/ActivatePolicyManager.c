/*
 * XREFs of ActivatePolicyManager @ 0x1800059F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_18000609C @ 0x18000609C (sub_18000609C.c)
 *     sub_18000A050 @ 0x18000A050 (sub_18000A050.c)
 *     sub_180039DDC @ 0x180039DDC (sub_180039DDC.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ActivatePolicyManager(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  HRESULT Instance; // eax
  unsigned int v6; // ebx
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // edi
  __int64 v11; // rcx
  signed __int32 v12; // eax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  qword_18004FE48 = a2;
  Instance = CoCreateInstance(&rclsid, 0LL, 3u, &riid, &ppv);
  v6 = Instance;
  if ( Instance < 0 )
  {
    sub_180003AB0(
      retaddr,
      91,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      Instance);
    return v6;
  }
  qword_18004FE68 = 0LL;
  v8 = sub_180039DDC(56LL, &unk_18004FFC8);
  v9 = v8;
  if ( !v8 )
  {
    v10 = -2147024882;
LABEL_13:
    sub_180003AB0(
      retaddr,
      93,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      v10);
    return (unsigned int)v10;
  }
  v11 = qword_18004FE28;
  *(_DWORD *)(v8 + 28) = 1;
  *(_QWORD *)v8 = off_18003E2E8;
  *(_QWORD *)(v8 + 8) = off_18003E280;
  *(_QWORD *)(v8 + 16) = off_18003E208;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  *(_QWORD *)(v9 + 32) = 0LL;
  *(_DWORD *)(v9 + 48) = 0;
  *(_QWORD *)v9 = off_18003E928;
  *(_QWORD *)(v9 + 40) = 0LL;
  *(_QWORD *)(v9 + 8) = off_18003E8C0;
  *(_QWORD *)(v9 + 16) = off_18003E848;
  v10 = sub_18000609C(v9);
  if ( v10 >= 0 )
  {
    do
      v12 = *(_DWORD *)(v9 + 28);
    while ( v12 != 0x7FFFFFFF && v12 != _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 28), v12 + 1, v12) );
    qword_18004FE68 = v9;
    v10 = 0;
  }
  sub_18000A050(v9);
  if ( v10 < 0 )
    goto LABEL_13;
  *a5 = qword_18004FE68;
  return 0LL;
}
