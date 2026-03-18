/*
 * XREFs of ?ResolveHandle@DXGVAILOBJECT@@SAJPEAXKDPEAPEAV1@@Z @ 0x1C0291488
 * Callers:
 *     ?Create@DXGVAILOBJECT@@SAJPEAPEAV1@@Z @ 0x1C02903B4 (-Create@DXGVAILOBJECT@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z @ 0x1C0011250 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall DXGVAILOBJECT::ResolveHandle(void *a1, __int64 a2, __int64 a3, struct DXGVAILOBJECT **a4)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rax
  struct DXGVAILOBJECT *v12; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v12 = 0LL;
  v5 = DxgkCompositionObject::ResolveHandle(a1, 0x60000u, 1, 3, &v12);
  v9 = v5;
  if ( v5 < 0 )
  {
    v10 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v10 + 24) = v9;
    WdLogEvent5_WdWarning(v10);
  }
  else
  {
    *a4 = v12;
  }
  return (unsigned int)v9;
}
