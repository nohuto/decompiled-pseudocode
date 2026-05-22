/*
 * XREFs of ?s_InteractionOutputCallback@TapProcessor@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x1800D2C40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall TapProcessor::s_InteractionOutputCallback(_DWORD *a1, const struct INTERACTION_CONTEXT_OUTPUT *a2)
{
  int v3; // ecx
  int v4; // r9d
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // [rsp+20h] [rbp-10h] BYREF
  int v10; // [rsp+28h] [rbp-8h]

  if ( *(_DWORD *)a2 == 2 )
  {
    a1[21] = 1;
    v3 = *((_DWORD *)a2 + 2);
    v9 = 0LL;
    v10 = 0;
    v4 = (int)*((float *)a2 + 4);
    HIDWORD(v9) = (int)*((float *)a2 + 3);
    v5 = v3 - 1;
    if ( v5 && (v6 = v5 - 1) != 0 )
    {
      v7 = v6 - 1;
      if ( v7 )
        LODWORD(v9) = v7 == 1;
      else
        LODWORD(v9) = 16;
    }
    else
    {
      LODWORD(v9) = 2;
    }
    if ( *((_BYTE *)a1 + 80) )
    {
      v8 = *((_QWORD *)a1 + 8);
      v10 = v4;
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 32LL))(v8, &v9);
    }
  }
  else
  {
    a1[21] = 2;
  }
}
