/*
 * XREFs of RtlpQueryDefaultUILanguage @ 0x180007B50
 * Callers:
 *     <none>
 * Callees:
 *     sub_180007C9C @ 0x180007C9C (sub_180007C9C.c)
 *     sub_180007D24 @ 0x180007D24 (sub_180007D24.c)
 *     RtlpCreateProcessRegistryInfo @ 0x1800141C0 (RtlpCreateProcessRegistryInfo.c)
 *     sub_180015318 @ 0x180015318 (sub_180015318.c)
 *     sub_180015770 @ 0x180015770 (sub_180015770.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x1800730B0 (RtlpGetSystemDefaultUILanguage.c)
 */

__int64 __fastcall RtlpQueryDefaultUILanguage(_WORD *a1, char a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // eax
  int SystemDefaultUILanguage; // esi
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF

  v13 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  if ( a1 )
  {
    *a1 = 0;
    v6 = RtlpCreateProcessRegistryInfo(&v13);
    v4 = v13;
    if ( v6 >= 0 )
    {
      LOBYTE(v7) = a2;
      if ( (int)sub_180015318(v7, v13) >= 0 )
      {
        if ( NtCurrentTeb()->UserPrefLanguages )
          v8 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
        else
          v8 = 0LL;
        v4 = v13;
        v12 = v8;
        if ( v8 )
        {
          if ( *(_WORD *)(v8 + 4) )
          {
            SystemDefaultUILanguage = sub_180007C9C(v13, *(_QWORD *)(v8 + 24), a1);
            if ( SystemDefaultUILanguage >= 0 )
              goto LABEL_13;
          }
          v12 = 0LL;
        }
        v9 = sub_180007D24(v4, 0, (unsigned int)&v12, 3 - (unsigned int)(a2 != 0), a2 == 0);
        v5 = v12;
        if ( v9 >= 0 )
        {
          if ( v12 && *(_WORD *)(v12 + 4) )
            SystemDefaultUILanguage = sub_180007C9C(v4, *(_QWORD *)(v12 + 24), a1);
          else
            SystemDefaultUILanguage = -1073741823;
LABEL_13:
          if ( SystemDefaultUILanguage >= 0 )
            goto LABEL_14;
        }
      }
    }
  }
  SystemDefaultUILanguage = RtlpGetSystemDefaultUILanguage(a1, v4);
  if ( SystemDefaultUILanguage < 0 )
    *a1 = 0;
LABEL_14:
  if ( v5 )
    sub_180015770(v5);
  return (unsigned int)SystemDefaultUILanguage;
}
