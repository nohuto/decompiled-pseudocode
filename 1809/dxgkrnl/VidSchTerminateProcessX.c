/*
 * XREFs of VidSchTerminateProcessX @ 0x1C00E8FA8
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E89C4 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

struct DXGGLOBAL *__fastcall VidSchTerminateProcessX(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rbp
  __int64 v3; // rdi
  struct DXGGLOBAL *result; // rax
  __int64 v5; // rsi

  v1 = 0;
  v2 = a1;
  v3 = 120LL;
  do
  {
    result = *(struct DXGGLOBAL **)((char *)DXGGLOBAL::GetGlobal(a1) + v3);
    if ( result )
    {
      result = DXGGLOBAL::GetGlobal(a1);
      v5 = *(_QWORD *)((char *)result + v3);
      a1 = *(_QWORD *)(v2 + 72);
      if ( a1 )
      {
        result = (struct DXGGLOBAL *)(unsigned int)(*(_DWORD *)v5 - 1);
        a1 = *(_QWORD *)(a1 + 8LL * (_QWORD)result + 16);
      }
      if ( a1 )
      {
        (*(void (**)(void))(*(_QWORD *)(v5 + 8) + 88LL))();
        result = *(struct DXGGLOBAL **)(v2 + 72);
        a1 = (unsigned int)(*(_DWORD *)v5 - 1);
        *((_QWORD *)result + a1 + 2) = 0LL;
      }
    }
    ++v1;
    v3 += 8LL;
  }
  while ( v1 < 2 );
  return result;
}
