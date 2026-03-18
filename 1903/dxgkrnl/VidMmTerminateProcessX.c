/*
 * XREFs of VidMmTerminateProcessX @ 0x1C00F31AC
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F3250 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

struct DXGGLOBAL *__fastcall VidMmTerminateProcessX(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rbp
  __int64 v4; // rdi
  struct DXGGLOBAL *result; // rax
  __int64 v6; // rsi

  v2 = 0;
  v3 = a1;
  v4 = 104LL;
  do
  {
    result = *(struct DXGGLOBAL **)((char *)DXGGLOBAL::GetGlobal(a1, a2) + v4);
    if ( result )
    {
      result = DXGGLOBAL::GetGlobal(a1, a2);
      v6 = *(_QWORD *)((char *)result + v4);
      a1 = *(_QWORD *)(v3 + 72);
      if ( a1 )
      {
        result = (struct DXGGLOBAL *)(unsigned int)(*(_DWORD *)v6 - 1);
        a1 = *(_QWORD *)(a1 + 8LL * (_QWORD)result);
      }
      if ( a1 )
      {
        (*(void (**)(void))(*(_QWORD *)(v6 + 8) + 360LL))();
        result = *(struct DXGGLOBAL **)(v3 + 72);
        a1 = (unsigned int)(*(_DWORD *)v6 - 1);
        *((_QWORD *)result + a1) = 0LL;
      }
    }
    ++v2;
    v4 += 8LL;
  }
  while ( v2 < 2 );
  return result;
}
