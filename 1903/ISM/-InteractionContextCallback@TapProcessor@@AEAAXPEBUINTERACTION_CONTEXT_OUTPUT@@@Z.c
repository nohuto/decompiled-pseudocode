/*
 * XREFs of ?InteractionContextCallback@TapProcessor@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x180108C18
 * Callers:
 *     ?s_InteractionOutputCallback@TapProcessor@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x180108FD0 (-s_InteractionOutputCallback@TapProcessor@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall TapProcessor::InteractionContextCallback(
        TapProcessor *this,
        const struct INTERACTION_CONTEXT_OUTPUT *a2)
{
  int v2; // eax
  int v3; // r8d
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  __int64 v8; // rcx
  _DWORD v9[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_DWORD *)a2 == 2 )
  {
    *((_DWORD *)this + 17) = 1;
    v2 = (int)*((float *)a2 + 3);
    v3 = (int)*((float *)a2 + 4);
    v4 = *((_DWORD *)a2 + 2);
    v9[1] = v2;
    v5 = v4 - 1;
    if ( v5 && (v6 = v5 - 1) != 0 )
    {
      v7 = v6 - 1;
      if ( v7 )
        v9[0] = v7 == 1;
      else
        v9[0] = 16;
    }
    else
    {
      v9[0] = 2;
    }
    if ( *((_BYTE *)this + 64) )
    {
      v8 = *((_QWORD *)this + 6);
      v9[2] = v3;
      (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v8 + 32LL))(v8, v9);
    }
  }
  else
  {
    *((_DWORD *)this + 17) = 2;
  }
}
