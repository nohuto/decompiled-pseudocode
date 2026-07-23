/*
 * XREFs of sub_18006F284 @ 0x18006F284
 * Callers:
 *     sub_180022F1C @ 0x180022F1C (sub_180022F1C.c)
 * Callees:
 *     RtlReleaseActivationContext @ 0x1800373A0 (RtlReleaseActivationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 */

__int64 __fastcall sub_18006F284(_QWORD *a1)
{
  int v2; // ebx
  struct _PEB *v3; // rax
  _WORD *v4; // rdx
  int v5; // eax
  __int64 v6; // rax
  _ACTIVATION_CONTEXT *v8; // rcx
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  if ( qword_180166000 )
  {
    v3 = NtCurrentPeb();
    if ( a1 != (_QWORD *)qword_180164FC8 || !v3->ActivationContextData )
    {
      v4 = (_WORD *)a1[10];
      if ( a1 == (_QWORD *)qword_180164FC8
        && *v4 == 92
        && v4[1] == 63
        && v4[2] == 63
        && v4[3] == 92
        && v4[4]
        && v4[5] == 58
        && v4[6] == 92 )
      {
        v4 += 4;
      }
      v5 = ((__int64 (__fastcall *)(_QWORD, _WORD *, __int64 *))qword_180166000)(a1[6], v4, &v9);
      v2 = v5;
      if ( (unsigned int)(v5 + 1073741687) <= 2
        || v5 == -1073741637
        || v5 == -1073741809
        || v5 == -1073741822
        || v5 == -1073741308 )
      {
        if ( (dword_18015FAB0 & 5) != 0 )
          sub_1800CE318(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            718,
            (unsigned int)"LdrpFindDllActivationContext",
            2,
            (__int64)"Probing for the manifest of DLL \"%wZ\" failed with status 0x%08lx\n",
            a1 + 9,
            v5);
        v2 = 0;
      }
      v6 = v9;
      if ( v9 )
      {
        v8 = (_ACTIVATION_CONTEXT *)a1[17];
        if ( v8 )
        {
          RtlReleaseActivationContext(v8);
          v6 = v9;
        }
        a1[17] = v6;
      }
      if ( v2 < 0 )
      {
        if ( (dword_18015FAB0 & 3) != 0 )
          sub_1800CE318(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            747,
            (unsigned int)"LdrpFindDllActivationContext",
            0,
            (__int64)"Querying the active activation context failed with status 0x%08lx\n",
            v2);
        if ( (dword_18015FAB0 & 0x10) != 0 )
          __debugbreak();
      }
    }
  }
  return (unsigned int)v2;
}
